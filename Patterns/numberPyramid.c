/* 
OUTPUT

Enter the height : 7
       1
      121
     12312
    1234123
   123451234
  12345612345
 1234567123456


*/



#include<stdio.h>

int main()
{
	int h;
	printf("\nEnter the height : ");
	scanf("%d",&h);
	
	for(int i=h ; i>=1 ; i--)
	{
		for(int j=1 ; j<=i ; j++)
		{
			printf(" ");
		}
		for(int k=1 ; k<=h-i+1 ; k++)
		{
			printf("%d",k);
		}
		
			
		for(int l=1 ; l<=h-i ; l++)
		{
			printf("%d",l);
		}
		

		printf("\n");
	}
	return 0 ;
}

// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSSYMBOLICEXPRESSION_H
#define NSSYMBOLICEXPRESSION_H



#import "NSExpression.h"
#import "NSString.h"

@interface NSSymbolicExpression : NSExpression {
    NSString *_token;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)constantValue;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)expressionValueWithObject:(id)arg0 context:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(id)predicateFormat;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSVARIABLEEXPRESSION_H
#define NSVARIABLEEXPRESSION_H



#import "NSExpression.h"
#import "NSString.h"

@interface NSVariableExpression : NSExpression {
    NSString *_variable;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_expressionWithSubstitutionVariables:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)expressionValueWithObject:(id)arg0 context:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObject:(id)arg0 ;
-(id)predicateFormat;
-(id)variable;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSFUNCTIONEXPRESSION_H
#define NSFUNCTIONEXPRESSION_H

@class NSArray;


#import "NSExpression.h"

@interface NSFunctionExpression : NSExpression {
    NSExpression *_operand;
    SEL _selector;
    NSArray *_arguments;
}




+(BOOL)supportsSecureCoding;
-(BOOL)_allowsEvaluation;
-(BOOL)_shouldUseParensWithDescription;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(SEL)selector;
-(id)_expressionWithSubstitutionVariables:(id)arg0 ;
-(id)arguments;
-(id)binaryOperatorForSelector;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)expressionValueWithObject:(id)arg0 context:(id)arg1 ;
-(id)function;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExpressionType:(NSUInteger)arg0 operand:(id)arg1 selector:(SEL)arg2 argumentArray:(id)arg3 ;
-(id)initWithSelector:(SEL)arg0 argumentArray:(id)arg1 ;
-(id)initWithTarget:(id)arg0 selectorName:(id)arg1 arguments:(id)arg2 ;
-(id)operand;
-(id)predicateFormat;
-(void)acceptVisitor:(id)arg0 flags:(NSUInteger)arg1 ;
-(void)allowEvaluation;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
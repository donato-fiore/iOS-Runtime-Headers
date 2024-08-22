// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSSETEXPRESSION_H
#define NSSETEXPRESSION_H



#import "NSExpression.h"

@interface NSSetExpression : NSExpression {
    NSExpression *_left;
    NSExpression *_right;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_expressionWithSubstitutionVariables:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)expressionValueWithObject:(id)arg0 context:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSUInteger)arg0 leftExpression:(id)arg1 rightExpression:(id)arg2 ;
-(id)leftExpression;
-(id)predicateFormat;
-(id)rightExpression;
-(void)acceptVisitor:(id)arg0 flags:(NSUInteger)arg1 ;
-(void)allowEvaluation;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
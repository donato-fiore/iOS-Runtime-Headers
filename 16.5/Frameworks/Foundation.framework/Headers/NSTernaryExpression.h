// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSTERNARYEXPRESSION_H
#define NSTERNARYEXPRESSION_H



#import "NSExpression.h"
#import "NSPredicate.h"

@interface NSTernaryExpression : NSExpression {
    NSPredicate *_predicate;
    NSExpression *_trueExpression;
    NSExpression *_falseExpression;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)expressionType;
-(id)_expressionWithSubstitutionVariables:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)expressionValueWithObject:(id)arg0 context:(id)arg1 ;
-(id)falseExpression;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPredicate:(id)arg0 trueExpression:(id)arg1 falseExpression:(id)arg2 ;
-(id)predicate;
-(id)predicateFormat;
-(id)trueExpression;
-(void)acceptVisitor:(id)arg0 flags:(NSUInteger)arg1 ;
-(void)allowEvaluation;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
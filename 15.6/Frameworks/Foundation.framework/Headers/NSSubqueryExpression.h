// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSSUBQUERYEXPRESSION_H
#define NSSUBQUERYEXPRESSION_H



#import "NSExpression.h"
#import "NSPredicate.h"

@interface NSSubqueryExpression : NSExpression {
    NSExpression *_collection;
    NSExpression *_variableExpression;
    NSPredicate *_subpredicate;
}




+(BOOL)supportsSecureCoding;
-(BOOL)_shouldUseParensWithDescription;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_expressionWithSubstitutionVariables:(id)arg0 ;
-(id)collection;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)expressionValueWithObject:(id)arg0 context:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExpression:(id)arg0 usingIteratorExpression:(id)arg1 predicate:(id)arg2 ;
-(id)initWithExpression:(id)arg0 usingIteratorVariable:(id)arg1 predicate:(id)arg2 ;
-(id)predicate;
-(id)predicateFormat;
-(id)variable;
-(id)variableExpression;
-(void)acceptVisitor:(id)arg0 flags:(NSUInteger)arg1 ;
-(void)allowEvaluation;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
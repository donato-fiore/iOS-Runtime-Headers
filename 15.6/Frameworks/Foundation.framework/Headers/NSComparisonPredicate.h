// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSCOMPARISONPREDICATE_H
#define NSCOMPARISONPREDICATE_H



#import "NSPredicate.h"
#import "NSPredicateOperator.h"
#import "NSExpression.h"

@interface NSComparisonPredicate : NSPredicate {
    NSPredicateOperator *_predicateOperator;
    NSExpression *_lhs;
    NSExpression *_rhs;
}


@property (readonly) NSUInteger comparisonPredicateModifier;
@property (readonly) SEL customSelector;
@property (readonly, retain) NSExpression *leftExpression;
@property (readonly) NSUInteger options;
@property (readonly) NSUInteger predicateOperatorType;
@property (readonly, retain) NSExpression *rightExpression;


+(BOOL)supportsSecureCoding;
+(id)predicateWithLeftExpression:(id)arg0 rightExpression:(id)arg1 customSelector:(SEL)arg2 ;
+(id)predicateWithLeftExpression:(id)arg0 rightExpression:(id)arg1 modifier:(NSUInteger)arg2 type:(NSUInteger)arg3 options:(NSUInteger)arg4 ;
+(id)predicateWithPredicateOperator:(id)arg0 leftExpression:(id)arg1 rightExpression:(id)arg2 ;
+(id)predicateWithPredicateOperator:(id)arg0 leftKeyPath:(id)arg1 rightKeyPath:(id)arg2 ;
+(id)predicateWithPredicateOperator:(id)arg0 leftKeyPath:(id)arg1 rightValue:(id)arg2 ;
-(BOOL)evaluateWithObject:(id)arg0 substitutionVariables:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)generateMetadataDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLeftExpression:(id)arg0 rightExpression:(id)arg1 customSelector:(SEL)arg2 ;
-(id)initWithLeftExpression:(id)arg0 rightExpression:(id)arg1 modifier:(NSUInteger)arg2 type:(NSUInteger)arg3 options:(NSUInteger)arg4 ;
-(id)initWithPredicateOperator:(id)arg0 leftExpression:(id)arg1 rightExpression:(id)arg2 ;
-(id)initWithPredicateOperator:(id)arg0 leftKeyPath:(id)arg1 rightKeyPath:(id)arg2 ;
-(id)initWithPredicateOperator:(id)arg0 leftKeyPath:(id)arg1 rightValue:(id)arg2 ;
-(id)keyPathExpressionForString:(id)arg0 ;
-(id)predicateFormat;
-(id)predicateOperator;
-(id)predicateWithSubstitutionVariables:(id)arg0 ;
-(void)_acceptExpressions:(id)arg0 flags:(NSUInteger)arg1 ;
-(void)_acceptOperator:(id)arg0 flags:(NSUInteger)arg1 ;
-(void)acceptVisitor:(id)arg0 flags:(NSUInteger)arg1 ;
-(void)allowEvaluation;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setPredicateOperator:(id)arg0 ;


@end


#endif
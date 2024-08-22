// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSCOMPOUNDPREDICATEOPERATOR_H
#define NSCOMPOUNDPREDICATEOPERATOR_H



#import "NSPredicateOperator.h"

@interface NSCompoundPredicateOperator : NSPredicateOperator



+(id)andPredicateOperator;
+(id)notPredicateOperator;
+(id)orPredicateOperator;
+(void)initialize;
-(BOOL)evaluatePredicates:(id)arg0 withObject:(id)arg1 ;
-(BOOL)evaluatePredicates:(id)arg0 withObject:(id)arg1 substitutionVariables:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)predicateFormat;
-(id)symbol;


@end


#endif
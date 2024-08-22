// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXACTIONCRITERIAPREDICATECHECKER_H
#define ATXACTIONCRITERIAPREDICATECHECKER_H

@class NSSet;
@protocol NSPredicateVisitor;

#import <Foundation/Foundation.h>


@interface ATXActionCriteriaPredicateChecker : NSObject <NSPredicateVisitor>

 {
    NSSet *_propertyNames;
    BOOL _ok;
}




-(BOOL)isValid:(id)arg0 ;
-(id)initWithObject:(id)arg0 ;
-(void)visitPredicate:(id)arg0 ;
-(void)visitPredicateExpression:(id)arg0 ;
-(void)visitPredicateOperator:(id)arg0 ;


@end


#endif
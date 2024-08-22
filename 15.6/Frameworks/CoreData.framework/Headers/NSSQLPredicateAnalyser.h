// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSSQLPREDICATEANALYSER_H
#define NSSQLPREDICATEANALYSER_H

@class NSMutableArray;
@protocol NSPredicateVisitor;

#import <Foundation/Foundation.h>


@interface NSSQLPredicateAnalyser : NSObject <NSPredicateVisitor>

 {
    BOOL _compoundPredicate;
    NSMutableArray *_keys;
    NSMutableArray *_allModifierPredicates;
    NSMutableArray *_setExpressions;
    NSMutableArray *_subqueries;
}




-(id)init;
-(void)dealloc;
-(void)visitPredicate:(id)arg0 ;
-(void)visitPredicateExpression:(id)arg0 ;
-(void)visitPredicateOperator:(id)arg0 ;


@end


#endif
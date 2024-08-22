// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _OSLOGSIMPLEPREDICATE_H
#define _OSLOGSIMPLEPREDICATE_H

@class NSSet, NSMutableArray, NSPredicate;
@protocol NSPredicateVisitor;

#import <Foundation/Foundation.h>


@interface _OSLogSimplePredicate : NSObject <NSPredicateVisitor>

 {
    NSSet *_keys;
    NSSet *_operators;
    NSMutableArray *_stack;
}


@property (readonly, nonatomic) NSPredicate *predicate; // ivar: _predicate


-(BOOL)isSupportedExpression:(id)arg0 ;
-(id)initWithPredicate:(id)arg0 supportedKeys:(id)arg1 supportedOperators:(id)arg2 ;
-(void)processComparisonPredicate:(id)arg0 ;
-(void)processCompoundPredicate:(id)arg0 ;
-(void)visitPredicate:(id)arg0 ;
-(void)visitPredicateExpression:(id)arg0 ;
-(void)visitPredicateOperator:(id)arg0 ;


@end


#endif
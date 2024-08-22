// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNPREDICATEFILTEROPERATOR_H
#define SNPREDICATEFILTEROPERATOR_H

@class NSPredicate;
@protocol SNOperator;

#import <Foundation/Foundation.h>


@interface SNPredicateFilterOperator : NSObject <SNOperator>

 {
    NSInteger _leakRemaining;
    NSPredicate *_predicate;
    NSInteger _leakCount;
}




-(id)init;
-(void)processInput:(id)arg0 portID:(id)arg1 downstreamHandler:(id)arg2 ;
-(void)processTerminationWithOptionalError:(id)arg0 portID:(id)arg1 downstreamHandler:(id)arg2 ;


@end


#endif
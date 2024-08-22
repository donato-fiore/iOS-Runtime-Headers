// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHAGGREGATEPROCESSASSERTION_H
#define BLSHAGGREGATEPROCESSASSERTION_H

@class NSMapTable, RBSAssertion, NSString, RBSProcessIdentity;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>

#import "BLSHAggregatedProcessAssertion.h"
#import "BLSHDurationCalculator.h"

@interface BLSHAggregateProcessAssertion : NSObject <BSInvalidatable>

 {
    NSMapTable *_lock_aggregated;
    RBSAssertion *_lock_rbsAssertion;
    BLSHAggregatedProcessAssertion *_lock_acquiredAssertion;
    BLSHDurationCalculator *_lock_durationCalculator;
    BOOL _lock_invalidated;
    os_unfair_lock_s _lock;
    NSUInteger _stateHandler;
    CGFloat _initTimestamp;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) RBSProcessIdentity *processIdentity; // ivar: _processIdentity
@property (readonly) Class superclass;


+(id)classLock_aggregateForProcessIdentity:(id)arg0 shouldCreate:(BOOL)arg1 ;
+(void)acquireAggregatedAssertion:(id)arg0 completion:(id)arg1 ;
+(void)invalidateAggregatedAssertion:(id)arg0 ;
-(BOOL)invalidateAggregatedAssertion:(id)arg0 ;
-(BOOL)isCurrentRBSAssertion:(id)arg0 ;
-(id)initWithProcessIdentity:(id)arg0 ;
-(struct os_state_data_s *)stateDataWithHints:(struct os_state_hints_s *)arg0 ;
-(void)acquireAggregatedAssertion:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif
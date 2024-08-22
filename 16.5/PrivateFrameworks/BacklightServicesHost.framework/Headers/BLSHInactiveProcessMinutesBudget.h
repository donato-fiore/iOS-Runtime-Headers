// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHINACTIVEPROCESSMINUTESBUDGET_H
#define BLSHINACTIVEPROCESSMINUTESBUDGET_H

@class NSString, NSMutableArray, NSArray;
@protocol BLSHInactiveProcessBudgeting, BLSHOSInterfaceProviding, BSTimerScheduleQuerying><BSInvalidatable;

#import <Foundation/Foundation.h>


@interface BLSHInactiveProcessMinutesBudget : NSObject <BLSHInactiveProcessBudgeting>

 {
    NSString *_identifier;
    id<BLSHOSInterfaceProviding> *_osInterfaceProvider;
    NSMutableArray *_lock_buckets;
    id<BSTimerScheduleQuerying><BSInvalidatable> *_lock_invalidationTimer;
    NSUInteger _lock_lastInvalidationTimestamp;
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSUInteger bucketCount;
@property (readonly, copy, nonatomic) NSArray *buckets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger secondsBucketCount;
@property (readonly) Class superclass;


-(BOOL)hasSecondsBudgetAtDate:(id)arg0 ;
-(BOOL)stillTrackingAfterPurgingStaleDataForNowDate:(id)arg0 ;
-(NSInteger)allowedFidelityAtDate:(id)arg0 expectedFidelity:(NSInteger)arg1 ;
-(id)initWithIdentifier:(id)arg0 osInterfaceProvider:(id)arg1 ;
-(id)validateAndChargeFutureSpecifier:(id)arg0 nextSpecifier:(id)arg1 expectedFidelity:(NSInteger)arg2 ;
-(void)chargeRenderedSpecifier:(id)arg0 expectedFidelity:(NSInteger)arg1 ;
-(void)dealloc;
-(void)invalidateAtRequestDate:(id)arg0 expectedFidelity:(NSInteger)arg1 invalidationBlock:(id)arg2 ;
-(void)performInvalidation;
-(void)resetFutureSpecifiers;


@end


#endif
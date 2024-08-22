// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSHINACTIVEPROCESSSECONDSBUDGET_H
#define BLSHINACTIVEPROCESSSECONDSBUDGET_H

@class NSString, BLSAlwaysOnDateSpecifier, NSDate;
@protocol BLSHInactiveProcessBudgeting, BLSHOSInterfaceProviding, BSTimerScheduleQuerying><BSInvalidatable;

#import <Foundation/Foundation.h>


@interface BLSHInactiveProcessSecondsBudget : NSObject <BLSHInactiveProcessBudgeting>

 {
    id<BLSHOSInterfaceProviding> *_osInterfaceProvider;
    NSString *_identifier;
    BLSAlwaysOnDateSpecifier *_lock_previousSecondsFutureSpecifier;
    BLSAlwaysOnDateSpecifier *_lock_exemptedSecondsFutureSpecifier;
    BLSAlwaysOnDateSpecifier *_lock_previousSecondsRenderedSpecifier;
    NSDate *_lock_lastInvalidation;
    id<BSTimerScheduleQuerying><BSInvalidatable> *_lock_invalidationTimer;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


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
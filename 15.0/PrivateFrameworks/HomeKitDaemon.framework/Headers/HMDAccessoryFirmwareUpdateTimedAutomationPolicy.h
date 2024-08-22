// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDACCESSORYFIRMWAREUPDATETIMEDAUTOMATIONPOLICY_H
#define HMDACCESSORYFIRMWAREUPDATETIMEDAUTOMATIONPOLICY_H

@class NSString, HMFTimer;
@protocol HMFTimerDelegate;


#import "HMDAccessoryFirmwareUpdatePolicy.h"

@interface HMDAccessoryFirmwareUpdateTimedAutomationPolicy : HMDAccessoryFirmwareUpdatePolicy <HMFTimerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMFTimer *reevaluateTimer; // ivar: _reevaluateTimer
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)evaluate;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)status;
-(id)_getMaxUpdateApplyEndTime;
-(id)_getTriggerFireDateBeforeEndTime:(id)arg0 ;
-(void)_startReevaluateTimer:(CGFloat)arg0 ;
-(void)_stopReevaluateTimer;
-(void)configure;
-(void)timerDidFire:(id)arg0 ;


@end


#endif
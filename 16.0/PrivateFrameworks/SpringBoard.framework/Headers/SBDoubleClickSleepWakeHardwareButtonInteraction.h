// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBDOUBLECLICKSLEEPWAKEHARDWAREBUTTONINTERACTION_H
#define SBDOUBLECLICKSLEEPWAKEHARDWAREBUTTONINTERACTION_H

@protocol BSInvalidatable;


#import "SBSleepWakeHardwareButtonInteraction.h"
#import "SBProximitySensorManager.h"

@interface SBDoubleClickSleepWakeHardwareButtonInteraction : SBSleepWakeHardwareButtonInteraction

@property (retain, nonatomic) NSObject<BSInvalidatable> *proxLockAssertion; // ivar: _proxLockAssertion
@property (retain, nonatomic) SBProximitySensorManager *proximitySensorManager; // ivar: _proximitySensorManager


-(BOOL)consumeInitialPressDown;
-(BOOL)consumeInitialPressUp;
-(BOOL)consumeSecondPressDown;
-(id)initWithProximitySensorManager:(id)arg0 ;
-(void)_cancelPreviousResumeProxRequests;
-(void)_performSleep;
-(void)_performWake;
-(void)_resumeProxAfterMultiplePressIntervalForReason:(id)arg0 ;
-(void)_resumeProxForReason:(id)arg0 ;
-(void)_suspendProx;
-(void)observeFinalPressUp;
-(void)observeSinglePressDidFail;


@end


#endif
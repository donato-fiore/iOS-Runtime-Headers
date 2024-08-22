// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSPSLEEPLOCKSCREENSTATEMACHINE_H
#define HDSPSLEEPLOCKSCREENSTATEMACHINE_H

@class HKSPPersistentStateMachine, NSDate, NSString, HKSPSleepScheduleModel;
@protocol HDSPSleepLockScreenStateMachineDelegate, HDSPSleepLockScreenStateMachineInfoProvider, HDSPSleepLockScreenStateMachineEventHandler, NAScheduler;


#import "HDSPSleepLockScreenBedtimeInProgressState.h"
#import "HDSPSleepLockScreenBedtimeState.h"
#import "HDSPSleepLockScreenGreetingState.h"
#import "HDSPSleepLockScreenOffState.h"
#import "HDSPSleepLockScreenWindDownState.h"

@interface HDSPSleepLockScreenStateMachine : HKSPPersistentStateMachine <HDSPSleepLockScreenStateMachineDelegate, HDSPSleepLockScreenStateMachineInfoProvider, HDSPSleepLockScreenStateMachineEventHandler>



@property (readonly, nonatomic) HDSPSleepLockScreenBedtimeInProgressState *bedtimeInProgressState; // ivar: _bedtimeInProgressState
@property (readonly, nonatomic) HDSPSleepLockScreenBedtimeState *bedtimeState; // ivar: _bedtimeState
@property (readonly, nonatomic) NSObject<NAScheduler> *callbackScheduler;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<HDSPSleepLockScreenStateMachineDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HDSPSleepLockScreenGreetingState *greetingState; // ivar: _greetingState
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL inUserRequestedSleepMode;
@property (readonly, weak, nonatomic) NSObject<HDSPSleepLockScreenStateMachineInfoProvider> *infoProvider;
@property (readonly, nonatomic) BOOL isLockScreenActive;
@property (readonly, nonatomic) HDSPSleepLockScreenOffState *offState; // ivar: _offState
@property (readonly, nonatomic) NSInteger sleepMode;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly) Class superclass;
@property (readonly, nonatomic) HDSPSleepLockScreenWindDownState *windDownState; // ivar: _windDownState


-(NSUInteger)loggingCategory;
-(id)allStates;
-(id)initWithIdentifier:(id)arg0 persistence:(id)arg1 delegate:(id)arg2 infoProvider:(id)arg3 currentDateProvider:(id)arg4 ;
-(void)dismissAlertForGoodMorning;
-(void)environmentDidBecomeReady;
-(void)presentAlertForGoodMorning;
-(void)sleepLockScreenStateDidChange:(NSInteger)arg0 previousState:(NSInteger)arg1 ;
-(void)sleepModeDidChange:(NSInteger)arg0 reason:(NSUInteger)arg1 ;


@end


#endif
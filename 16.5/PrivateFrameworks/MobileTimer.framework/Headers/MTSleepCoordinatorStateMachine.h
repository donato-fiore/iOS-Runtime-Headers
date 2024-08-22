// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSLEEPCOORDINATORSTATEMACHINE_H
#define MTSLEEPCOORDINATORSTATEMACHINE_H

@class NSString;
@protocol MTSleepCoordinatorStateMachineEventHandler;


#import "MTStateMachine.h"
#import "MTSleepCoordinatorStateMachineAsleepState.h"
#import "MTSleepCoordinatorStateMachineAwakeState.h"
#import "MTSleepCoordinatorStateMachineDisabledState.h"

@interface MTSleepCoordinatorStateMachine : MTStateMachine <MTSleepCoordinatorStateMachineEventHandler>



@property (retain, nonatomic) MTSleepCoordinatorStateMachineAsleepState *asleepState; // ivar: _asleepState
@property (retain, nonatomic) MTSleepCoordinatorStateMachineAwakeState *awakeState; // ivar: _awakeState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) MTSleepCoordinatorStateMachineDisabledState *disabledState; // ivar: _disabledState
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isUserAsleep;
@property (readonly) Class superclass;


-(NSUInteger)sleepTimeOutMinutes;
-(id)currentDate;
-(id)initWithDelegate:(id)arg0 infoProvider:(id)arg1 ;
-(id)sleepAlarm;
-(id)stateMachineLog;
-(void)stateMachine:(id)arg0 dismissWakeUpAlarm:(id)arg1 dismissAction:(NSUInteger)arg2 ;
-(void)stateMachine:(id)arg0 shouldScheduleAlarmTimeoutForSecondsFromNow:(CGFloat)arg1 ;
-(void)stateMachineUserWentToBed:(id)arg0 ;
-(void)stateMachineUserWokeUp:(id)arg0 ;
-(void)updateState;
-(void)userBedTimeReached:(id)arg0 ;
-(void)userWakeTimeReached:(id)arg0 ;
-(void)userWakeUpAlarmFired;
-(void)userWentToBed;
-(void)userWokeUp;
-(void)wakeUpAlarmTimedOut;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTSLEEPMODESTATEMACHINE_H
#define MTSLEEPMODESTATEMACHINE_H

@class NSString;
@protocol MTSleepModeStateMachineEventHandler;


#import "MTStateMachine.h"
#import "MTSleepModeStateMachineInitialState.h"
#import "MTSleepModeStateMachineOffState.h"
#import "MTSleepModeStateMachineWaitingState.h"

@interface MTSleepModeStateMachine : MTStateMachine <MTSleepModeStateMachineEventHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MTSleepModeStateMachineInitialState *initialState; // ivar: _initialState
@property (readonly, nonatomic) MTSleepModeStateMachineOffState *offState; // ivar: _offState
@property (readonly) Class superclass;
@property (readonly, nonatomic) MTSleepModeStateMachineWaitingState *waitingState; // ivar: _waitingState


-(BOOL)isSleepModeEnabled:(*BOOL)arg0 ;
-(BOOL)isUserAsleep;
-(BOOL)stateMachine:(id)arg0 disengageSleepModeUserRequested:(BOOL)arg1 ;
-(BOOL)stateMachine:(id)arg0 engageSleepModeUntilDate:(id)arg1 userEngaged:(BOOL)arg2 ;
-(id)currentDate;
-(id)initWithDelegate:(id)arg0 infoProvider:(id)arg1 ;
-(id)keepOffUntilDate;
-(id)onStateWithSleepModeEndDate:(id)arg0 ;
-(id)sleepAlarm;
-(id)stateMachineLog;
-(id)userRequestedOffStateWithKeepOffUntilDate:(id)arg0 ;
-(void)sleepModeEnabled:(BOOL)arg0 userRequested:(BOOL)arg1 date:(id)arg2 ;
-(void)stateMachine:(id)arg0 keepSleepModeOffUntilDate:(id)arg1 ;
-(void)stateMachine:(id)arg0 scheduleUpdateForSecondsFromNow:(CGFloat)arg1 ;
-(void)stateMachineClearKeepSleepModeOff:(id)arg0 ;
-(void)updateState:(BOOL)arg0 ;
-(void)userWokeUp;


@end


#endif
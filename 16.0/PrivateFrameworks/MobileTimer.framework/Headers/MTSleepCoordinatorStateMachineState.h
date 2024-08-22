// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTSLEEPCOORDINATORSTATEMACHINESTATE_H
#define MTSLEEPCOORDINATORSTATEMACHINESTATE_H

@class NSString;
@protocol MTSleepCoordinatorStateMachineEventHandler;


#import "MTStateMachineState.h"

@interface MTSleepCoordinatorStateMachineState : MTStateMachineState <MTSleepCoordinatorStateMachineEventHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)determineNextStateForSleepAlarm:(id)arg0 ;
-(void)updateState;
-(void)updateStateForSleepAlarm:(id)arg0 ;
-(void)userBedTimeReached:(id)arg0 ;
-(void)userWakeTimeReached:(id)arg0 ;
-(void)userWakeUpAlarmFired;
-(void)userWentToBed;
-(void)userWokeUp;
-(void)wakeUpAlarmTimedOut;


@end


#endif
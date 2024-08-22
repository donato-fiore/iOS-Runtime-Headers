// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTSLEEPMODESTATEMACHINESTATE_H
#define MTSLEEPMODESTATEMACHINESTATE_H

@class NSString;
@protocol MTSleepModeStateMachineEventHandler;


#import "MTStateMachineState.h"

@interface MTSleepModeStateMachineState : MTStateMachineState <MTSleepModeStateMachineEventHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)determineNextState:(BOOL)arg0 ;
-(id)nextSleepModeEndDate;
-(id)nextSleepModeEndDateAfterDate:(id)arg0 ;
-(id)nextSleepModeStartDate;
-(id)nextSleepModeStartDateAfterDate:(id)arg0 ;
-(void)sleepModeEnabled:(BOOL)arg0 userRequested:(BOOL)arg1 date:(id)arg2 ;
-(void)updateModeKeepOffUntilDateIfNecessary;
-(void)updateState:(BOOL)arg0 ;
-(void)userWokeUp;


@end


#endif
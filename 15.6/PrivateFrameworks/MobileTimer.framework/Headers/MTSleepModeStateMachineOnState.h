// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTSLEEPMODESTATEMACHINEONSTATE_H
#define MTSLEEPMODESTATEMACHINEONSTATE_H

@class NSDate;


#import "MTSleepModeStateMachineState.h"

@interface MTSleepModeStateMachineOnState : MTSleepModeStateMachineState

@property (readonly, nonatomic) NSDate *sleepModeEndDate; // ivar: _sleepModeEndDate


-(BOOL)isEqualToState:(id)arg0 ;
-(id)initWithSleepModeEndDate:(id)arg0 stateMachine:(id)arg1 ;
-(void)didEnterWithPreviousState:(id)arg0 ;


@end


#endif
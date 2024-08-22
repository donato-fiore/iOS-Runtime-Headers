// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTSLEEPMODESTATEMACHINEUSERREQUESTEDOFFSTATE_H
#define MTSLEEPMODESTATEMACHINEUSERREQUESTEDOFFSTATE_H

@class NSDate;


#import "MTSleepModeStateMachineOffState.h"

@interface MTSleepModeStateMachineUserRequestedOffState : MTSleepModeStateMachineOffState

@property (retain, nonatomic) NSDate *keepOffUntilDate; // ivar: _keepOffUntilDate


-(BOOL)isEqualToState:(id)arg0 ;
-(id)initWithKeepOffUntilDate:(id)arg0 stateMachine:(id)arg1 ;
-(void)didEnterWithPreviousState:(id)arg0 ;
-(void)updateState:(BOOL)arg0 ;


@end


#endif
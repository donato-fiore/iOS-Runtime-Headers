// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSPSLEEPLOCKSCREENGREETINGSTATE_H
#define HDSPSLEEPLOCKSCREENGREETINGSTATE_H



#import "HDSPSleepLockScreenStateMachineState.h"

@interface HDSPSleepLockScreenGreetingState : HDSPSleepLockScreenStateMachineState



-(NSInteger)sleepLockScreenState;
-(id)stateName;
-(void)dismissAlertForGoodMorning;
-(void)updateState;
-(void)willEnterWithPreviousState:(id)arg0 context:(id)arg1 ;


@end


#endif
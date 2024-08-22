// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSPSLEEPLOCKSCREENGREETINGSTATE_H
#define HDSPSLEEPLOCKSCREENGREETINGSTATE_H



#import "HDSPSleepLockScreenStateMachineState.h"

@interface HDSPSleepLockScreenGreetingState : HDSPSleepLockScreenStateMachineState



-(NSInteger)sleepLockScreenState;
-(id)nextStateWithContext:(*id)arg0 ;
-(id)stateName;
-(void)dismissAlertForGoodMorning;


@end


#endif
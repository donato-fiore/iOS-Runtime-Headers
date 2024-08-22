// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSPWAKEDETECTIONNOTIFIEDSTATE_H
#define HDSPWAKEDETECTIONNOTIFIEDSTATE_H



#import "HDSPWakeDetectionStateMachineState.h"

@interface HDSPWakeDetectionNotifiedState : HDSPWakeDetectionStateMachineState



-(id)expirationDate;
-(id)nextStateWithContext:(*id)arg0 ;
-(id)stateName;
-(void)didEnterWithPreviousState:(id)arg0 context:(id)arg1 ;
-(void)stateDidExpireWithContext:(id)arg0 ;


@end


#endif
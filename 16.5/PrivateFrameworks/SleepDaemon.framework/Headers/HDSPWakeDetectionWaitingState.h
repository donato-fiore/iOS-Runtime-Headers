// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSPWAKEDETECTIONWAITINGSTATE_H
#define HDSPWAKEDETECTIONWAITINGSTATE_H



#import "HDSPWakeDetectionStateMachineState.h"

@interface HDSPWakeDetectionWaitingState : HDSPWakeDetectionStateMachineState



-(BOOL)schedulesExpiration;
-(id)expirationDate;
-(id)stateName;


@end


#endif
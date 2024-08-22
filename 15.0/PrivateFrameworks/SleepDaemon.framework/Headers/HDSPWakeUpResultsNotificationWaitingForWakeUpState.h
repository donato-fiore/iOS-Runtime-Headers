// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSPWAKEUPRESULTSNOTIFICATIONWAITINGFORWAKEUPSTATE_H
#define HDSPWAKEUPRESULTSNOTIFICATIONWAITINGFORWAKEUPSTATE_H



#import "HDSPWakeUpResultsNotificationStateMachineState.h"

@interface HDSPWakeUpResultsNotificationWaitingForWakeUpState : HDSPWakeUpResultsNotificationStateMachineState



-(id)stateName;
-(void)_transitionToDelayingForTrackingState;
-(void)wakeUpDidOccur;


@end


#endif
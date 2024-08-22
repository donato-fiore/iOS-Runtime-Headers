// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSPWAKEUPRESULTSNOTIFICATIONDELAYINGFORTRACKINGSTATE_H
#define HDSPWAKEUPRESULTSNOTIFICATIONDELAYINGFORTRACKINGSTATE_H



#import "HDSPWakeUpResultsNotificationStateMachineState.h"

@interface HDSPWakeUpResultsNotificationDelayingForTrackingState : HDSPWakeUpResultsNotificationStateMachineState



-(id)stateName;
-(void)didEnterWithPreviousState:(id)arg0 context:(id)arg1 ;
-(void)didExitWithNextState:(id)arg0 context:(id)arg1 ;
-(void)trackingDelayEventDue;
-(void)willEnterWithPreviousState:(id)arg0 context:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSPWAKEUPRESULTSNOTIFICATIONWAITINGFORRETRYSTATE_H
#define HDSPWAKEUPRESULTSNOTIFICATIONWAITINGFORRETRYSTATE_H



#import "HDSPWakeUpResultsNotificationStateMachineState.h"

@interface HDSPWakeUpResultsNotificationWaitingForRetryState : HDSPWakeUpResultsNotificationStateMachineState



-(id)stateName;
-(void)didEnterWithPreviousState:(id)arg0 context:(id)arg1 ;
-(void)didExitWithNextState:(id)arg0 context:(id)arg1 ;
-(void)retryAttemptEventDue;
-(void)willEnterWithPreviousState:(id)arg0 context:(id)arg1 ;


@end


#endif
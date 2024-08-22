// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSPWAKEUPRESULTSNOTIFICATIONQUERYINGSTATE_H
#define HDSPWAKEUPRESULTSNOTIFICATIONQUERYINGSTATE_H



#import "HDSPWakeUpResultsNotificationStateMachineState.h"

@interface HDSPWakeUpResultsNotificationQueryingState : HDSPWakeUpResultsNotificationStateMachineState {
    BOOL _shouldRetryImmediatelyOnFailure;
}




-(id)initWithCoder:(id)arg0 ;
-(id)stateName;
-(void)_executeQuery;
-(void)_retryQueryIfNeededOrTransitionToNeedsProtectedDataState;
-(void)_transitionToNotifiedState;
-(void)_transitionToRetryState;
-(void)_transitionToWaitingForWakeUpState;
-(void)didEnterWithPreviousState:(id)arg0 context:(id)arg1 ;
-(void)didExitWithNextState:(id)arg0 context:(id)arg1 ;
-(void)protectedHealthDataDidBecomeAvailable;
-(void)queryDidComplete;
-(void)queryDidFailWithError:(id)arg0 ;
-(void)willEnterWithPreviousState:(id)arg0 context:(id)arg1 ;


@end


#endif
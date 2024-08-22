// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSPWAKEUPRESULTSNOTIFICATIONNEEDSPROTECTEDDATASTATE_H
#define HDSPWAKEUPRESULTSNOTIFICATIONNEEDSPROTECTEDDATASTATE_H



#import "HDSPWakeUpResultsNotificationStateMachineState.h"

@interface HDSPWakeUpResultsNotificationNeedsProtectedDataState : HDSPWakeUpResultsNotificationStateMachineState



-(id)stateName;
-(void)_transitionToQueryingState;
-(void)didEnterWithPreviousState:(id)arg0 context:(id)arg1 ;
-(void)didExitWithNextState:(id)arg0 context:(id)arg1 ;
-(void)protectedHealthDataDidBecomeAvailable;
-(void)willEnterWithPreviousState:(id)arg0 context:(id)arg1 ;


@end


#endif
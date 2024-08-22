// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSPWAKEUPRESULTSNOTIFICATIONNEEDSPROTECTEDDATASTATE_H
#define HDSPWAKEUPRESULTSNOTIFICATIONNEEDSPROTECTEDDATASTATE_H



#import "HDSPWakeUpResultsNotificationStateMachineState.h"

@interface HDSPWakeUpResultsNotificationNeedsProtectedDataState : HDSPWakeUpResultsNotificationStateMachineState



-(id)expirationDate;
-(id)stateName;
-(void)_transitionToQueryingState;
-(void)didEnterWithPreviousState:(id)arg0 context:(id)arg1 ;
-(void)didExitWithNextState:(id)arg0 context:(id)arg1 ;
-(void)protectedHealthDataDidBecomeAvailable;


@end


#endif
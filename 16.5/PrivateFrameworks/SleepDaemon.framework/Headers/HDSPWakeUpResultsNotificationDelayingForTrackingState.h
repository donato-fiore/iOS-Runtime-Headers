// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSPWAKEUPRESULTSNOTIFICATIONDELAYINGFORTRACKINGSTATE_H
#define HDSPWAKEUPRESULTSNOTIFICATIONDELAYINGFORTRACKINGSTATE_H



#import "HDSPWakeUpResultsNotificationStateMachineState.h"

@interface HDSPWakeUpResultsNotificationDelayingForTrackingState : HDSPWakeUpResultsNotificationStateMachineState



-(BOOL)schedulesExpiration;
-(id)expirationDate;
-(id)stateName;
-(void)stateDidExpireWithContext:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSPCHARGINGREMINDERMONITORINGSTATE_H
#define HDSPCHARGINGREMINDERMONITORINGSTATE_H



#import "HDSPChargingReminderStateMachineState.h"

@interface HDSPChargingReminderMonitoringState : HDSPChargingReminderStateMachineState



-(id)stateName;
-(void)batteryLevelChanged:(float)arg0 ;
-(void)didEnterWithPreviousState:(id)arg0 context:(id)arg1 ;
-(void)didExitWithNextState:(id)arg0 context:(id)arg1 ;
-(void)willEnterWithPreviousState:(id)arg0 context:(id)arg1 ;


@end


#endif
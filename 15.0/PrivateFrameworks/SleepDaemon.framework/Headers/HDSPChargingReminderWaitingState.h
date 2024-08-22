// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSPCHARGINGREMINDERWAITINGSTATE_H
#define HDSPCHARGINGREMINDERWAITINGSTATE_H



#import "HDSPChargingReminderStateMachineState.h"

@interface HDSPChargingReminderWaitingState : HDSPChargingReminderStateMachineState



-(id)stateName;
-(void)batteryMonitoringEventDue;
-(void)didEnterWithPreviousState:(id)arg0 context:(id)arg1 ;
-(void)didExitWithNextState:(id)arg0 context:(id)arg1 ;
-(void)willEnterWithPreviousState:(id)arg0 context:(id)arg1 ;


@end


#endif
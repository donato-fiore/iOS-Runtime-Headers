// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSPCHARGINGREMINDERSTATEMACHINESTATE_H
#define HDSPCHARGINGREMINDERSTATEMACHINESTATE_H

@class HKSPPersistentStateMachineState, NSString;
@protocol HDSPChargingReminderStateMachineEventHandler;


#import "HDSPChargingReminderStateMachine.h"

@interface HDSPChargingReminderStateMachineState : HKSPPersistentStateMachineState <HDSPChargingReminderStateMachineEventHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) HDSPChargingReminderStateMachine *stateMachine;
@property (readonly) Class superclass;


-(BOOL)_inMonitoringWindow;
-(BOOL)isChargingReminderDisabled;
-(id)nextStateWithContext:(*id)arg0 ;
-(void)batteryLevelChanged:(float)arg0 ;


@end


#endif
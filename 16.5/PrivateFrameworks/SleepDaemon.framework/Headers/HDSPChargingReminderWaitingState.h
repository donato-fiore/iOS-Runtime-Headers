// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSPCHARGINGREMINDERWAITINGSTATE_H
#define HDSPCHARGINGREMINDERWAITINGSTATE_H



#import "HDSPChargingReminderStateMachineState.h"

@interface HDSPChargingReminderWaitingState : HDSPChargingReminderStateMachineState



-(BOOL)schedulesExpiration;
-(id)expirationDate;
-(id)stateName;
-(void)stateDidExpireWithContext:(id)arg0 ;


@end


#endif
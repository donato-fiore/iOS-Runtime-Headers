// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDMCUNCONFIRMEDDEVIATIONNOTIFICATIONSCHEDULEDSTATE_H
#define HDMCUNCONFIRMEDDEVIATIONNOTIFICATIONSCHEDULEDSTATE_H



#import "HDMCUnconfirmedDeviationNotificationStateMachineState.h"

@interface HDMCUnconfirmedDeviationNotificationScheduledState : HDMCUnconfirmedDeviationNotificationStateMachineState



+(id)notificationStateFromDictionaryRepresentation:(id)arg0 ;
-(NSInteger)stateType;
-(id)computeFiredStateWithCurrentDayIndex:(NSInteger)arg0 ;
-(id)computeNewStateFromMaxEnd:(NSInteger)arg0 dismissalDayIndex:(id)arg1 scheduledFireDayIndex:(NSInteger)arg2 ;
-(id)initWithFireDayIndex:(id)arg0 ;
-(id)scheduledNotificationFireDayIndex;


@end


#endif
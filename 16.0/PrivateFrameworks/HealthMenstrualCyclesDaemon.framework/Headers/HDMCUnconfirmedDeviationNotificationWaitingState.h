// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDMCUNCONFIRMEDDEVIATIONNOTIFICATIONWAITINGSTATE_H
#define HDMCUNCONFIRMEDDEVIATIONNOTIFICATIONWAITINGSTATE_H



#import "HDMCUnconfirmedDeviationNotificationStateMachineState.h"

@interface HDMCUnconfirmedDeviationNotificationWaitingState : HDMCUnconfirmedDeviationNotificationStateMachineState



+(id)notificationStateFromDictionaryRepresentation:(id)arg0 ;
-(NSInteger)stateType;
-(id)computeNewStateFromMaxEnd:(NSInteger)arg0 dismissalDayIndex:(id)arg1 scheduledFireDayIndex:(NSInteger)arg2 ;
-(id)scheduledNotificationFireDayIndex;


@end


#endif
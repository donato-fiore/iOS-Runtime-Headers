// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDMCOVULATIONCONFIRMATIONNOTIFICATIONWAITINGSTATE_H
#define HDMCOVULATIONCONFIRMATIONNOTIFICATIONWAITINGSTATE_H

@class NSNumber;


#import "HDMCOvulationConfirmationNotificationStateMachineState.h"

@interface HDMCOvulationConfirmationNotificationWaitingState : HDMCOvulationConfirmationNotificationStateMachineState

@property (readonly, copy, nonatomic) NSNumber *notificationPreviouslyFiredDayIndex; // ivar: _notificationPreviouslyFiredDayIndex


+(id)notificationStateFromDictionaryRepresentation:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)stateType;
-(id)computeNewStateFromCorrelatingPeriodStartDayIndex:(NSInteger)arg0 fertileWindowEndDayIndex:(NSInteger)arg1 fireDayIndex:(NSInteger)arg2 daysShiftedForFertileWindow:(NSInteger)arg3 daysWithWristTemp45DaysBeforeOvulationConfirmed:(NSInteger)arg4 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)firedDayIndex;
-(id)initWithFiredDayIndex:(id)arg0 ;


@end


#endif
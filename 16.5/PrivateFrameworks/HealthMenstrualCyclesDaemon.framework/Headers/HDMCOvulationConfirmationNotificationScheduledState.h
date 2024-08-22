// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDMCOVULATIONCONFIRMATIONNOTIFICATIONSCHEDULEDSTATE_H
#define HDMCOVULATIONCONFIRMATIONNOTIFICATIONSCHEDULEDSTATE_H



#import "HDMCOvulationConfirmationNotificationStateMachineState.h"

@interface HDMCOvulationConfirmationNotificationScheduledState : HDMCOvulationConfirmationNotificationStateMachineState

@property (readonly, nonatomic) NSInteger correlatingPeriodStartDayIndex; // ivar: _correlatingPeriodStartDayIndex
@property (readonly, nonatomic) NSInteger daysShiftedForFertileWindow; // ivar: _daysShiftedForFertileWindow
@property (readonly, nonatomic) NSInteger daysWithWristTemp45DaysBeforeOvulationConfirmed; // ivar: _daysWithWristTemp45DaysBeforeOvulationConfirmed
@property (readonly, nonatomic) NSInteger fertileWindowEndDayIndex; // ivar: _fertileWindowEndDayIndex
@property (readonly, nonatomic) NSInteger fireDayIndex; // ivar: _fireDayIndex


+(id)notificationStateFromDictionaryRepresentation:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)stateType;
-(id)computeFiredStateWithCurrentDayIndex:(NSInteger)arg0 ;
-(id)computeNewStateFromCorrelatingPeriodStartDayIndex:(NSInteger)arg0 fertileWindowEndDayIndex:(NSInteger)arg1 fireDayIndex:(NSInteger)arg2 daysShiftedForFertileWindow:(NSInteger)arg3 daysWithWristTemp45DaysBeforeOvulationConfirmed:(NSInteger)arg4 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithFertileWindowEndDayIndex:(NSInteger)arg0 fireDayIndex:(NSInteger)arg1 correlatingPeriodStartDayIndex:(NSInteger)arg2 daysWithWristTemp45DaysBeforeOvulationConfirmed:(NSInteger)arg3 daysShiftedForFertileWindow:(NSInteger)arg4 ;
-(id)scheduledNotificationDaysShiftedForFertileWindow;
-(id)scheduledNotificationDaysWithWristTemp45DaysBeforeOvulationConfirmed;
-(id)scheduledNotificationFertileWindowEndDayIndex;
-(id)scheduledNotificationFireDayIndex;


@end


#endif
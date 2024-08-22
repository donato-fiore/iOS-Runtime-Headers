// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDMCOVULATIONCONFIRMATIONNOTIFICATIONSTATEMACHINESTATE_H
#define HDMCOVULATIONCONFIRMATIONNOTIFICATIONSTATEMACHINESTATE_H


#import <Foundation/Foundation.h>


@interface HDMCOvulationConfirmationNotificationStateMachineState : NSObject



+(id)stateFromDictionaryRepresentation:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)stateType;
-(id)computeFiredStateWithCurrentDayIndex:(NSInteger)arg0 ;
-(id)computeNewStateFromAnalysis:(id)arg0 currentDate:(id)arg1 fertileWindowNotificationTimeOfDay:(id)arg2 fertilityNotificationsEnabled:(BOOL)arg3 daysWithWristTemp45DaysBeforeOvulationConfirmed:(NSInteger)arg4 ;
-(id)computeNewStateFromCorrelatingPeriodStartDayIndex:(NSInteger)arg0 fertileWindowEndDayIndex:(NSInteger)arg1 fireDayIndex:(NSInteger)arg2 daysShiftedForFertileWindow:(NSInteger)arg3 daysWithWristTemp45DaysBeforeOvulationConfirmed:(NSInteger)arg4 ;
-(id)computeNewStateFromFertilityNotificationsEnabled:(BOOL)arg0 isOvulationConfirmed:(BOOL)arg1 correlatingPeriodStartDayIndex:(NSInteger)arg2 fertileWindowEndDayIndex:(NSInteger)arg3 fireDayIndex:(NSInteger)arg4 daysShiftedForFertileWindow:(NSInteger)arg5 daysWithWristTemp45DaysBeforeOvulationConfirmed:(NSInteger)arg6 ;
-(id)dictionaryRepresentation;
-(id)firedDayIndex;
-(id)hk_redactedDescription;
-(id)scheduledNotificationDaysShiftedForFertileWindow;
-(id)scheduledNotificationDaysWithWristTemp45DaysBeforeOvulationConfirmed;
-(id)scheduledNotificationFertileWindowEndDayIndex;
-(id)scheduledNotificationFireDayIndex;


@end


#endif
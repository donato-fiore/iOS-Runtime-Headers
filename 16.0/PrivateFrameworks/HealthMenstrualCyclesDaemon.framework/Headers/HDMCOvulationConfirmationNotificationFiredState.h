// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDMCOVULATIONCONFIRMATIONNOTIFICATIONFIREDSTATE_H
#define HDMCOVULATIONCONFIRMATIONNOTIFICATIONFIREDSTATE_H



#import "HDMCOvulationConfirmationNotificationStateMachineState.h"

@interface HDMCOvulationConfirmationNotificationFiredState : HDMCOvulationConfirmationNotificationStateMachineState

@property (readonly, nonatomic) NSInteger daysShiftedForFertileWindow; // ivar: _daysShiftedForFertileWindow
@property (readonly, nonatomic) NSInteger daysWithWristTemp45DaysBeforeOvulationConfirmed; // ivar: _daysWithWristTemp45DaysBeforeOvulationConfirmed
@property (readonly, nonatomic) NSInteger fertileWindowEndDayIndex; // ivar: _fertileWindowEndDayIndex
@property (readonly, nonatomic) NSInteger fireDayIndex; // ivar: _fireDayIndex


+(id)notificationStateFromDictionaryRepresentation:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)stateType;
-(id)computeNewStateFromCorrelatingPeriodStartDayIndex:(NSInteger)arg0 fertileWindowEndDayIndex:(NSInteger)arg1 fireDayIndex:(NSInteger)arg2 daysShiftedForFertileWindow:(NSInteger)arg3 daysWithWristTemp45DaysBeforeOvulationConfirmed:(NSInteger)arg4 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)firedDayIndex;
-(id)initWithFireDayIndex:(NSInteger)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALRECURRENCERULEDESCRIPTIONGENERATOR_H
#define CALRECURRENCERULEDESCRIPTIONGENERATOR_H


#import <Foundation/Foundation.h>


@interface CalRecurrenceRuleDescriptionGenerator : NSObject



+(NSInteger)daysTypeForDayArray:(id)arg0 ;
+(id)_andDaysOfWeekString:(id)arg0 ;
+(id)_customDayCombinationDescription:(id)arg0 ;
+(id)_dayOfMonthAsString:(NSInteger)arg0 ;
+(id)_daysOfWeek;
+(id)_numberedWeekDayString:(id)arg0 ;
+(id)_orDaysOfWeekString:(id)arg0 ;
+(id)_weekDayPositionAsString:(NSInteger)arg0 ;
+(id)humanReadableDescriptionWithStartDate:(id)arg0 ofRecurrenceRuleICSString:(id)arg1 isConcise:(BOOL)arg2 ;
+(id)localizedOfMonthStringForMonth:(id)arg0 ;


@end


#endif
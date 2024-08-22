// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMRECURRENCERULEFORMATTER_H
#define REMRECURRENCERULEFORMATTER_H


#import <Foundation/Foundation.h>


@interface REMRecurrenceRuleFormatter : NSObject



+(NSInteger)daysTypeForDayArray:(id)arg0 ;
+(NSInteger)repeatTypeForFrequency:(NSInteger)arg0 interval:(NSInteger)arg1 daysOfTheWeek:(id)arg2 daysOfTheMonth:(id)arg3 monthsOfTheYear:(id)arg4 weeksOfTheYear:(id)arg5 daysOfTheYear:(id)arg6 setPositions:(id)arg7 end:(id)arg8 recurrenceDate:(id)arg9 recurrenceTimeZone:(id)arg10 getRepeatEnd:(*id)arg11 ;
+(NSInteger)repeatTypeForRecurrenceRules:(id)arg0 recurrenceDate:(id)arg1 recurrenceTimeZone:(id)arg2 getRepeatEnd:(*id)arg3 ;
+(id)_andDaysOfWeekString:(id)arg0 ;
+(id)_byDayOfWeekOrdinalStrings;
+(id)_customByDayItemFormatLocalizedString;
+(id)_customDayCombinationDescription:(id)arg0 ;
+(id)_dayOfMonthAsString:(NSInteger)arg0 ;
+(id)_daysOfWeek;
+(id)_localizedOfMonthStringForMonth:(id)arg0 ;
+(id)_numberedWeekDayString:(id)arg0 ;
+(id)_orDaysOfWeekString:(id)arg0 ;
+(id)_readableMonths;
+(id)_readableWeekDays;
+(id)_stringForByDayOfWeek:(id)arg0 setPositions:(id)arg1 ;
+(id)_stringForDayOfWeek:(NSInteger)arg0 ;
+(id)_stringForMonthNumber:(NSInteger)arg0 ;
+(id)_weekDayPositionAsString:(NSInteger)arg0 ;
+(id)localizedDescriptionForRepeatType:(NSInteger)arg0 ;
+(id)naturalLanguageDescriptionForFrequency:(NSInteger)arg0 interval:(NSInteger)arg1 daysOfTheWeek:(id)arg2 daysOfTheMonth:(id)arg3 monthsOfTheYear:(id)arg4 weeksOfTheYear:(id)arg5 daysOfTheYear:(id)arg6 setPositions:(id)arg7 end:(id)arg8 withStartDate:(id)arg9 ;
+(id)naturalLanguageDescriptionForRecurrenceRule:(id)arg0 withStartDate:(id)arg1 ;
+(id)shortNaturalLanguageDescriptionForFrequency:(NSInteger)arg0 interval:(NSInteger)arg1 daysOfTheWeek:(id)arg2 daysOfTheMonth:(id)arg3 monthsOfTheYear:(id)arg4 setPositions:(id)arg5 date:(id)arg6 timeZone:(id)arg7 lowercase:(BOOL)arg8 ;
+(id)shortNaturalLanguageDescriptionForRecurrenceRule:(id)arg0 date:(id)arg1 timeZone:(id)arg2 lowercase:(BOOL)arg3 ;


@end


#endif
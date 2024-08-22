// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSCALENDAR_H
#define CLSCALENDAR_H


#import <Foundation/Foundation.h>


@interface CLSCalendar : NSObject



+(BOOL)currentLocaleSupportsSeasons;
+(BOOL)isCountryCodePartOfNorthernHemisphere:(id)arg0 ;
+(BOOL)isCountryCodePartOfSouthernHemisphere:(id)arg0 ;
+(BOOL)isDateValid:(id)arg0 ;
+(BOOL)isFirstMonthOfSeasonForLocalDate:(id)arg0 ;
+(BOOL)isFirstTenDaysOfSeasonForLocalDate:(id)arg0 ;
+(BOOL)isFirstTwoWeeksOfMonthForLocalDate:(id)arg0 ;
+(BOOL)isLastMonthOfSeasonForLocalDate:(id)arg0 ;
+(BOOL)isLastTwoWeeksOfMonthForLocalDate:(id)arg0 ;
+(BOOL)isLastWeekOfMonthForLocalDate:(id)arg0 ;
+(BOOL)isMiddleMonthOfSeasonForLocalDate:(id)arg0 ;
+(BOOL)isSecondHalfOfSeasonForLocalDate:(id)arg0 ;
+(BOOL)supportsSeasonsWithLocale:(id)arg0 ;
+(NSInteger)compareDate:(id)arg0 toDate:(id)arg1 toUnitGranularity:(NSUInteger)arg2 ;
+(NSInteger)dayFromDate:(id)arg0 ;
+(NSInteger)dayOfWeekFromDate:(id)arg0 ;
+(NSInteger)hourFromDate:(id)arg0 ;
+(NSInteger)monthFromDate:(id)arg0 ;
+(NSInteger)numberOfDaysBetweenDate:(id)arg0 andDate:(id)arg1 ;
+(NSInteger)weekOfMonthFromDate:(id)arg0 ;
+(NSInteger)weekOfYearFromDate:(id)arg0 ;
+(NSInteger)yearForWeekOfYearFromDate:(id)arg0 ;
+(NSInteger)yearFromDate:(id)arg0 ;
+(id)components:(NSUInteger)arg0 fromDate:(id)arg1 ;
+(id)components:(NSUInteger)arg0 fromDateComponents:(id)arg1 toDateComponents:(id)arg2 options:(NSUInteger)arg3 ;
+(id)componentsFromDate:(id)arg0 inTimeZone:(id)arg1 ;
+(id)currentLocalDate;
+(id)dateByAddingDays:(NSInteger)arg0 toDate:(id)arg1 ;
+(id)dateByAddingHours:(NSInteger)arg0 toDate:(id)arg1 ;
+(id)dateByAddingMonths:(NSInteger)arg0 toDate:(id)arg1 ;
+(id)dateByAddingWeeksOfYear:(NSInteger)arg0 toDate:(id)arg1 ;
+(id)dateByAddingYears:(NSInteger)arg0 toDate:(id)arg1 ;
+(id)dateBySettingYear:(NSInteger)arg0 ofDate:(id)arg1 ;
+(id)dateComponentsWithLocalDate:(id)arg0 ;
+(id)dateComponentsWithUTCDate:(id)arg0 localDate:(id)arg1 ;
+(id)dateFromComponents:(NSUInteger)arg0 ofDate:(id)arg1 ;
+(id)dateFromComponents:(id)arg0 inTimeZone:(id)arg1 ;
+(id)endOfDayForDate:(id)arg0 ;
+(id)endOfMonthForDate:(id)arg0 ;
+(id)endOfWeekForDate:(id)arg0 ;
+(id)localDateFormatterWithFormat:(id)arg0 ;
+(id)localDateFromUniversalDate:(id)arg0 ;
+(id)localDateFromUniversalDate:(id)arg0 atLocation:(id)arg1 ;
+(id)localDateFromUniversalDate:(id)arg0 inTimeZone:(id)arg1 ;
+(id)localDateIntervalOfFirstTenDaysOfSeasonForLocalDate:(id)arg0 ;
+(id)localStartDateForNextSeasonAfterLocalDate:(id)arg0 ;
+(id)localStartSeasonDateForLocalDate:(id)arg0 ;
+(id)northernMeteorologicalSeasonNameForDateComponents:(id)arg0 ;
+(id)s_seasonCountryCodesDictionary;
+(id)seasonNameForDateComponents:(id)arg0 locale:(id)arg1 ;
+(id)seasonNameForLocalDate:(id)arg0 locale:(id)arg1 ;
+(id)southernMeteorologicalSeasonNameForDateComponents:(id)arg0 ;
+(id)startOfDayForDate:(id)arg0 ;
+(id)startOfMonthForDate:(id)arg0 ;
+(id)startOfWeekForDate:(id)arg0 ;
+(id)timeZoneFromLocation:(id)arg0 ;
+(id)universalDateFromLocalDate:(id)arg0 ;
+(id)universalDateFromLocalDate:(id)arg0 atLocation:(id)arg1 ;
+(id)universalDateFromLocalDate:(id)arg0 inTimeZone:(id)arg1 ;
+(id)validDateForDate:(id)arg0 ;
+(struct _NSRange )rangeOfUnit:(NSUInteger)arg0 inUnit:(NSUInteger)arg1 forDate:(id)arg2 ;
+(void)initialize;


@end


#endif
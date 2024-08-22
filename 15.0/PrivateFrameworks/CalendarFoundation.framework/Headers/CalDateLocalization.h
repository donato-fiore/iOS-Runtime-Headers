// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALDATELOCALIZATION_H
#define CALDATELOCALIZATION_H


#import <Foundation/Foundation.h>


@interface CalDateLocalization : NSObject



+(BOOL)dateIsWeekend:(id)arg0 ;
+(BOOL)hasAMPM;
+(BOOL)shouldUseHourMinutesWithoutAMPMForHours;
+(BOOL)uses24HourTime;
+(BOOL)weekdayIsWeekend:(NSInteger)arg0 ;
+(id)ICUFormatForKey:(id)arg0 ;
+(id)ICUFormats;
+(id)_hourSymbolInFormat:(id)arg0 ;
+(id)calendarDayFormatter;
+(id)dateFormatterForKey:(id)arg0 formatString:(id)arg1 ;
+(id)dateFormatters;
+(id)formatKeyForHourString;
+(id)intervalStringFromDate:(id)arg0 toDate:(id)arg1 withFormat:(id)arg2 options:(int)arg3 ;
+(id)sharedDateFormatter;
+(id)sizeOrderedAllDateFormatsWithoutYear;
+(id)sizeOrderedDateFormats;
+(id)sizeOrderedDateFormatsWithYear;
+(id)sizeOrderedDateFormatsWithoutYear;
+(id)weekendDays;
+(struct __CFDateFormatter *)dateFormatterForKey:(id)arg0 ;
+(void)generateAdditionalPrecodedFormatters:(id)arg0 ;
+(void)generateDerivedTimeFormats:(id)arg0 ;
+(void)generateLocalizedDateTimeFormats;
+(void)generatePreferedOrders;
+(void)generateStandardFormatters:(id)arg0 ;
+(void)initializeFormatters;
+(void)rebuildFormatters;
+(void)rebuildWeekendDays;
+(void)setupFormat:(id)arg0 forKey:(id)arg1 locale:(id)arg2 ;
+(void)setupFormatTemplate:(id)arg0 forKey:(id)arg1 locale:(id)arg2 ;
+(void)setupFormatter:(struct __CFDateFormatter *)arg0 forKey:(id)arg1 ;


@end


#endif
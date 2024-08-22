// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLDATERANGEFORMATTER_H
#define PLDATERANGEFORMATTER_H

@class NSLocale, NSTimeZone, NSDateFormatter;

#import <Foundation/Foundation.h>


@interface PLDateRangeFormatter : NSObject {
    os_unfair_lock_s _lock;
    NSInteger _preset;
    NSLocale *_locale;
    BOOL _useLocalDates;
    NSTimeZone *_timeZone;
    BOOL _includeDayNumbers;
    BOOL _includeDayNumbersWhenMonthsDiffer;
    BOOL _useRelativeDayFormatting;
    BOOL _useShortMonths;
    BOOL _useShortDaysInRanges;
    BOOL _useTime;
    BOOL _yearOnly;
    BOOL _monthOnly;
    BOOL _timeOnly;
    BOOL _omitYear;
    BOOL _monthWithDelimiterAndYear;
    NSDateFormatter *_sameDayDateFormatter;
    NSDateFormatter *_sameDayNoYearDateFormatter;
    NSDateFormatter *_dayOfTheWeekDateFormatter;
    NSDateFormatter *_yearDateFormatter;
    NSDateFormatter *_monthDateFormatter;
    NSDateFormatter *_monthYearDateFormatter;
    NSDateFormatter *_relativeDateFormatter;
    *UDateIntervalFormat _monthDayIntervalFormat;
    *UDateIntervalFormat _monthDayNoYearIntervalFormat;
    *UDateIntervalFormat _differentMonthDayIntervalFormat;
    *UDateIntervalFormat _differentMonthDayNoYearIntervalFormat;
    *UDateIntervalFormat _dayOfTheWeekIntervalFormat;
    *UDateIntervalFormat _timeIntervalFormat;
    *UDateIntervalFormat _monthIntervalFormat;
    *UDateIntervalFormat _monthYearIntervalFormat;
    *UDateIntervalFormat _yearIntervalFormat;
}


@property (retain, nonatomic) NSLocale *locale;
@property (nonatomic) NSInteger preset;
@property (nonatomic) BOOL useLocalDates;


+(id)autoupdatingFormatterWithPreset:(NSInteger)arg0 ;
-(id)_dayDifferentMonthsTemplate;
-(id)_dayOfTheWeekDateFormatter;
-(id)_dayTemplate;
-(id)_monthDateFormatter;
-(id)_monthYearDateFormatter;
-(id)_relativeDateFormatter;
-(id)_sameDayDateFormatter;
-(id)_sameDayNoYearDateFormatter;
-(id)_sameMonthTemplate;
-(id)_stringFromDate:(id)arg0 toDate:(id)arg1 currentDate:(id)arg2 ;
-(id)_yearDateFormatter;
-(id)init;
-(id)initWithPreset:(NSInteger)arg0 ;
-(id)localTimeZone;
-(id)stringFromDate:(id)arg0 ;
-(id)stringFromDate:(id)arg0 toDate:(id)arg1 ;
-(id)stringFromDate:(id)arg0 toDate:(id)arg1 currentDate:(id)arg2 ;
-(struct UDateIntervalFormat *)_dayOfTheWeekIntervalFormat;
-(struct UDateIntervalFormat *)_differentMonthDayIntervalFormat;
-(struct UDateIntervalFormat *)_differentMonthDayNoYearIntervalFormat;
-(struct UDateIntervalFormat *)_monthDayIntervalFormat;
-(struct UDateIntervalFormat *)_monthDayNoYearIntervalFormat;
-(struct UDateIntervalFormat *)_monthIntervalFormat;
-(struct UDateIntervalFormat *)_monthYearIntervalFormat;
-(struct UDateIntervalFormat *)_timeIntervalFormat;
-(struct UDateIntervalFormat *)_yearIntervalFormat;
-(void)_currentLocaleDidChange:(id)arg0 ;
-(void)_handlePresetDidChange;
-(void)_handleUseLocalDatesDidChange;
-(void)_resetFormatters;
-(void)_significantTimeChange:(id)arg0 ;
-(void)_systemTimeZoneDidChange:(id)arg0 ;
-(void)dealloc;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BSDATEFORMATTERCACHE_H
#define BSDATEFORMATTERCACHE_H

@class NSLocale, NSDateFormatter, NSNumberFormatter, NSDateComponentsFormatter;

#import <Foundation/Foundation.h>


@interface BSDateFormatterCache : NSObject {
    NSLocale *_locale;
    NSDateFormatter *_dayOfWeekFormatter;
    NSDateFormatter *_dayOfWeekWithTimeFormatter;
    NSDateFormatter *_dayMonthYearFormatter;
    NSDateFormatter *_shortDayMonthTimeFormatter;
    NSDateFormatter *_abbrevDayOfWeekWithMonthDayFormatter;
    NSDateFormatter *_abbrevDayMonthFormatter;
    NSDateFormatter *_abbrevDayMonthTimeFormatter;
    NSDateFormatter *_timeFormatter;
    NSDateFormatter *_relativeDateTimeFormatter;
    NSDateFormatter *_relativeDateFormatter;
    NSDateFormatter *_dayOfWeekMonthDayFormatter;
    NSDateFormatter *_multiLineDayOfWeekMonthDayFormatter;
    NSDateFormatter *_timeNoAMPMFormatter;
    NSDateFormatter *_longYMDHMSZFormatter;
    NSDateFormatter *_longYMDHMSZPosixLocaleFormatter;
    NSDateFormatter *_longYMDHMSNoSpaceFormatter;
    NSNumberFormatter *_decimalFormatter;
    NSDateComponentsFormatter *_durationFormatter;
    NSNumberFormatter *_timerNumberFormatter;
    NSDateComponentsFormatter *_abbreviatedTimerFormatter;
    NSDateComponentsFormatter *_alarmSnoozeFormatter;
}




+(id)formatterForDateAsTimeNoAMPMWithLocale:(id)arg0 ;
+(id)sharedInstance;
-(BOOL)supportsMultiLineDayOfWeekMonthDayStyle;
-(id)formatAbbreviatedTimerDuration:(CGFloat)arg0 ;
-(id)formatAlarmSnoozeDuration:(CGFloat)arg0 ;
-(id)formatDateAsAbbreviatedDayMonthStyle:(id)arg0 ;
-(id)formatDateAsAbbreviatedDayMonthWithTimeStyle:(id)arg0 ;
-(id)formatDateAsAbbreviatedDayOfWeekMonthDayStyle:(id)arg0 ;
-(id)formatDateAsAbbreviatedDayOfWeekWithTime:(id)arg0 ;
-(id)formatDateAsDayMonthYearStyle:(id)arg0 ;
-(id)formatDateAsDayOfWeek:(id)arg0 ;
-(id)formatDateAsDayOfWeekMonthDayStyle:(id)arg0 ;
-(id)formatDateAsLongYMDHMSNoSpacesWithDate:(id)arg0 ;
-(id)formatDateAsLongYMDHMSZPosixLocaleWithDate:(id)arg0 ;
-(id)formatDateAsLongYMDHMSZWithDate:(id)arg0 ;
-(id)formatDateAsMultiLineDayOfWeekMonthDayStyle:(id)arg0 ;
-(id)formatDateAsRelativeDateAndTimeStyle:(id)arg0 ;
-(id)formatDateAsRelativeDateStyle:(id)arg0 ;
-(id)formatDateAsShortDayMonthWithTimeStyle:(id)arg0 ;
-(id)formatDateAsTimeNoAMPM:(id)arg0 ;
-(id)formatDateAsTimeStyle:(id)arg0 ;
-(id)formatDuration:(CGFloat)arg0 ;
-(id)formatNumberAsDecimal:(id)arg0 ;
-(id)formatTimerDuration:(CGFloat)arg0 ;
-(id)init;
-(void)_resetFormatters;
-(void)_resetFormatters:(id)arg0 ;
-(void)dealloc;
-(void)resetFormattersIfNecessary;


@end


#endif
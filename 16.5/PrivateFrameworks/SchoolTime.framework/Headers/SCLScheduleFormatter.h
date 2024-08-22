// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCLSCHEDULEFORMATTER_H
#define SCLSCHEDULEFORMATTER_H

@class NSFormatter, NSCalendar, NSListFormatter, NSLocale, NSDateFormatter, NSDateIntervalFormatter;


#import "SCLTimeIntervalsFormatter.h"

@interface SCLScheduleFormatter : NSFormatter

@property (copy, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (readonly, nonatomic) NSListFormatter *listFormatter; // ivar: _listFormatter
@property (retain, nonatomic) NSLocale *locale; // ivar: _locale
@property (readonly, nonatomic) NSDateFormatter *standaloneWeekdayFormatter; // ivar: _standaloneWeekdayFormatter
@property (readonly, nonatomic) SCLTimeIntervalsFormatter *timeIntervalsFormatter; // ivar: _timeIntervalsFormatter
@property (readonly, nonatomic) NSDateIntervalFormatter *weekdayIntervalFormatter; // ivar: _weekdayIntervalFormatter


-(id)_formattedCustomDailyScheduleForLocale:(id)arg0 ;
-(id)formatterItemsForSchedule:(id)arg0 ;
-(id)init;
-(id)stringForWeekdaysInItem:(id)arg0 ;
-(id)stringFromSchedule:(id)arg0 ;
-(void)_regenerateFormatters;


@end


#endif
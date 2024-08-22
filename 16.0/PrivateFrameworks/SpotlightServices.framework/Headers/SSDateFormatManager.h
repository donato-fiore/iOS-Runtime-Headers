// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSDATEFORMATMANAGER_H
#define SSDATEFORMATMANAGER_H

@class NSDateIntervalFormatter, CNDateComponentsFormatter, NSCalendar, NSDateComponentsFormatter, NSDateFormatter, NSDateComponents, NSLocale;

#import <Foundation/Foundation.h>


@interface SSDateFormatManager : NSObject

@property (retain) NSDateIntervalFormatter *allDayDateFormatter; // ivar: _allDayDateFormatter
@property (retain) CNDateComponentsFormatter *birthdayDateComponentsFormatter; // ivar: _birthdayDateComponentsFormatter
@property (retain) NSCalendar *calendar; // ivar: _calendar
@property (retain) NSDateComponentsFormatter *dateComponentsFormatter; // ivar: _dateComponentsFormatter
@property (retain) NSDateFormatter *dateFormatter; // ivar: _dateFormatter
@property (retain) NSDateIntervalFormatter *dateIntervalFormatter; // ivar: _dateIntervalFormatter
@property (retain) NSDateFormatter *dayOfWeekFormatter; // ivar: _dayOfWeekFormatter
@property (retain) NSDateIntervalFormatter *mediumDayOfWeekDateIntervalFormatter; // ivar: _mediumDayOfWeekDateIntervalFormatter
@property (retain) NSDateIntervalFormatter *mediumDayOfWeekDateTimeIntervalFormatter; // ivar: _mediumDayOfWeekDateTimeIntervalFormatter
@property (retain) NSDateComponents *oneDayComponents; // ivar: _oneDayComponents
@property (retain) NSLocale *overrideLocale; // ivar: _overrideLocale
@property (retain) NSDateIntervalFormatter *shortDateIntervalFormatter; // ivar: _shortDateIntervalFormatter
@property (retain) NSDateFormatter *shortDateTimeFormatter; // ivar: _shortDateTimeFormatter
@property (retain) NSDateIntervalFormatter *shortDateTimeIntervalFormatter; // ivar: _shortDateTimeIntervalFormatter
@property (retain) NSDateFormatter *shortRelativeDateFormatter; // ivar: _shortRelativeDateFormatter
@property (retain) NSDateFormatter *shortTimeFormatter; // ivar: _shortTimeFormatter


+(BOOL)date:(id)arg0 isBetweenDate:(id)arg1 andDate:(id)arg2 ;
+(BOOL)hasRelativeFormatForDate:(id)arg0 ;
+(BOOL)isDate:(id)arg0 withinTimeInterval:(CGFloat)arg1 includePast:(BOOL)arg2 ;
+(BOOL)isDateWithinMonthsTime:(id)arg0 ;
+(BOOL)isDateWithinWeeksTime:(id)arg0 ;
+(id)dateCompletedStringFormat;
+(id)dateCreatedStringFormat;
+(id)dateDueStringFormat;
+(id)dateLastCalledStringFormat;
+(id)dateLastOpenedStringFormat;
+(id)dateLastPlayedStringFormat;
+(id)dateModifiedStringFormat;
+(id)dyanmicStringFromDate:(id)arg0 ;
+(id)dynamicCompactStringFromDate:(id)arg0 ;
+(id)dynamicDateTimeStringsFromDate:(id)arg0 ;
+(id)icalConformingStringFromDate:(id)arg0 ;
+(id)nextUpcomingDateForDateComponents:(id)arg0 fromDate:(id)arg1 ;
+(id)shortDateTimeStringFromDate:(id)arg0 ;
+(id)stringFromBirthdayComponents:(id)arg0 ;
+(id)stringFromTimeInterval:(CGFloat)arg0 ;
+(id)stringsFromDate:(id)arg0 toDate:(id)arg1 isAllDay:(BOOL)arg2 ;
+(id)tomorrow;
+(void)initialize;
+(void)overrideLocale:(id)arg0 ;
-(id)init;
-(void)setupFormatters;
-(void)setupFormattersWithTemplate;


@end


#endif
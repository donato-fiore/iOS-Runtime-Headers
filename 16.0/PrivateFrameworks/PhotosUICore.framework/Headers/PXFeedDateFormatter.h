// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXFEEDDATEFORMATTER_H
#define PXFEEDDATEFORMATTER_H

@class NSLocale, NSCalendar, NSDate, NSString, NSDateFormatter;

#import <Foundation/Foundation.h>


@interface PXFeedDateFormatter : NSObject {
    BOOL _prepared;
    NSLocale *_locale;
    BOOL _ignoreWhitelist;
    NSCalendar *_calendar;
    NSDate *_today;
    NSDate *_yesterday;
    NSString *_todayString;
    NSString *_yesterdayString;
    NSDateFormatter *_dateFormatterForCurrentYear;
    NSDateFormatter *_dateFormatterForNoncurrentYears;
}




+(id)defaultFeedSectionDateFormatter;
-(BOOL)_canSubstitueDateStringsWithLocale:(id)arg0 ;
-(BOOL)isDateInFuture:(id)arg0 ;
-(BOOL)isDateInToday:(id)arg0 ;
-(id)_completeRelativeStringForDate:(id)arg0 dateFormatter:(id)arg1 ;
-(id)init;
-(id)initWithLocale:(id)arg0 ignoreWhitelist:(BOOL)arg1 ;
-(id)stringFromDate:(id)arg0 ;
-(void)_calendarDayChanged:(id)arg0 ;
-(void)_currentLocaleChanged:(id)arg0 ;
-(void)_invalidate;
-(void)_prepare;
-(void)dealloc;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSRELATIVEDATETIMEFORMATTER_H
#define NSRELATIVEDATETIMEFORMATTER_H

@class NSCalendar, NSLocale;


#import "NSFormatter.h"

@interface NSRelativeDateTimeFormatter : NSFormatter {
    *__CFRelativeDateTimeFormatter _formatter;
}


@property (copy) NSCalendar *calendar; // ivar: _calendar
@property NSInteger dateTimeStyle; // ivar: _dateTimeStyle
@property NSInteger formattingContext; // ivar: _formattingContext
@property (copy) NSLocale *locale; // ivar: _locale
@property NSInteger unitsStyle; // ivar: _unitsStyle


-(id)_stringForCalendarUnit:(NSUInteger)arg0 value:(NSInteger)arg1 ;
-(id)_stringFromDateComponents:(id)arg0 ;
-(id)localizedStringForDate:(id)arg0 relativeToDate:(id)arg1 ;
-(id)localizedStringFromDateComponents:(id)arg0 ;
-(id)localizedStringFromTimeInterval:(CGFloat)arg0 ;
-(id)stringForObjectValue:(id)arg0 ;
-(void)_clearFormatter;
-(void)dealloc;


@end


#endif
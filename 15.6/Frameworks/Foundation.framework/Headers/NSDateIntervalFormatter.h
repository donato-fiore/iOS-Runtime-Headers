// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSDATEINTERVALFORMATTER_H
#define NSDATEINTERVALFORMATTER_H

@class NSLocale, NSCalendar, NSTimeZone;
@protocol OS_dispatch_semaphore;


#import "NSFormatter.h"
#import "NSString.h"

@interface NSDateIntervalFormatter : NSFormatter {
    NSLocale *_locale;
    NSCalendar *_calendar;
    NSTimeZone *_timeZone;
    NSString *_dateTemplate;
    NSString *_dateTemplateFromStyles;
    *void _formatter;
    NSUInteger _dateStyle;
    NSUInteger _timeStyle;
    BOOL _modified;
    BOOL _useTemplate;
    NSObject<OS_dispatch_semaphore> *_lock;
    *void _reserved;
}


@property (copy) NSCalendar *calendar;
@property NSUInteger dateStyle;
@property (copy) NSString *dateTemplate;
@property (copy) NSLocale *locale;
@property NSUInteger timeStyle;
@property (copy) NSTimeZone *timeZone;


-(BOOL)getObjectValue:(*id)arg0 forString:(id)arg1 errorDescription:(*id)arg2 ;
-(BOOL)isPartialStringValid:(*id)arg0 proposedSelectedRange:(struct _NSRange *)arg1 originalString:(id)arg2 originalSelectedRange:(struct _NSRange )arg3 errorDescription:(*id)arg4 ;
-(BOOL)isPartialStringValid:(id)arg0 newEditingString:(*id)arg1 errorDescription:(*id)arg2 ;
-(NSUInteger)boundaryStyle;
-(id)_stringFromDate:(id)arg0 toDate:(id)arg1 ;
-(id)attributedStringForObjectValue:(id)arg0 withDefaultAttributes:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)editingStringForObjectValue:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)stringForObjectValue:(id)arg0 ;
-(id)stringFromDate:(id)arg0 toDate:(id)arg1 ;
-(id)stringFromDateInterval:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setBoundaryStyle:(NSUInteger)arg0 ;


@end


#endif
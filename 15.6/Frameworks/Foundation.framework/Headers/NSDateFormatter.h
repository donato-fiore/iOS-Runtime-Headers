// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSDATEFORMATTER_H
#define NSDATEFORMATTER_H

@class NSMutableDictionary, NSCalendar, NSDate, NSArray, NSLocale, NSTimeZone;
@protocol NSObservable, NSObserver;


#import "NSFormatter.h"
#import "NSString.h"

@interface NSDateFormatter : NSFormatter <NSObservable, NSObserver>

 {
    NSMutableDictionary *_attributes;
    *__CFDateFormatter _formatter;
    NSUInteger _counter;
    NSInteger _cacheGeneration;
    os_unfair_lock_s _lock;
}


@property (copy) NSString *AMSymbol;
@property (copy) NSString *PMSymbol;
@property (copy) NSCalendar *calendar;
@property (copy) NSString *dateFormat;
@property NSUInteger dateStyle;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSDate *defaultDate;
@property (readonly, copy) NSString *description;
@property BOOL doesRelativeDateFormatting;
@property (copy) NSArray *eraSymbols;
@property NSUInteger formatterBehavior;
@property NSInteger formattingContext;
@property BOOL generatesCalendarDates;
@property (copy) NSDate *gregorianStartDate;
@property (readonly) NSUInteger hash;
@property (getter=isLenient) BOOL lenient;
@property (copy) NSLocale *locale;
@property (copy) NSArray *longEraSymbols;
@property (copy) NSArray *monthSymbols;
@property (copy) NSArray *quarterSymbols;
@property (copy) NSArray *shortMonthSymbols;
@property (copy) NSArray *shortQuarterSymbols;
@property (copy) NSArray *shortStandaloneMonthSymbols;
@property (copy) NSArray *shortStandaloneQuarterSymbols;
@property (copy) NSArray *shortStandaloneWeekdaySymbols;
@property (copy) NSArray *shortWeekdaySymbols;
@property (copy) NSArray *standaloneMonthSymbols;
@property (copy) NSArray *standaloneQuarterSymbols;
@property (copy) NSArray *standaloneWeekdaySymbols;
@property (readonly) Class superclass;
@property NSUInteger timeStyle;
@property (copy) NSTimeZone *timeZone;
@property (copy) NSDate *twoDigitStartDate;
@property (copy) NSArray *veryShortMonthSymbols;
@property (copy) NSArray *veryShortStandaloneMonthSymbols;
@property (copy) NSArray *veryShortStandaloneWeekdaySymbols;
@property (copy) NSArray *veryShortWeekdaySymbols;
@property (copy) NSArray *weekdaySymbols;


+(NSUInteger)defaultFormatterBehavior;
+(id)_componentsFromFormatString:(id)arg0 ;
+(id)_formatStringFromComponents:(id)arg0 ;
+(id)dateFormatFromTemplate:(id)arg0 options:(NSUInteger)arg1 locale:(id)arg2 ;
+(id)localizedStringFromDate:(id)arg0 dateStyle:(NSUInteger)arg1 timeStyle:(NSUInteger)arg2 ;
+(void)initialize;
+(void)setDefaultFormatterBehavior:(NSUInteger)arg0 ;
-(BOOL)_mayDecorateAttributedStringForObjectValue:(id)arg0 ;
-(BOOL)_tracksCacheGenerationCount;
-(BOOL)_usesCharacterDirection;
-(BOOL)getObjectValue:(*id)arg0 forString:(id)arg1 errorDescription:(*id)arg2 ;
-(BOOL)getObjectValue:(*id)arg0 forString:(id)arg1 range:(struct _NSRange *)arg2 error:(*id)arg3 ;
-(NSInteger)_cacheGenerationCount;
-(id)_attributedStringWithFieldsFromDate:(id)arg0 ;
-(id)_getLocaleAlreadyLocked:(BOOL)arg0 ;
-(id)_nextChangeDateAfterDate:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dateFromString:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)stringForObjectValue:(id)arg0 ;
-(id)stringFromDate:(id)arg0 ;
-(void)_clearFormatter;
-(void)_invalidateCache;
-(void)_regenerateFormatter;
-(void)_regenerateFormatterIfAbsent;
-(void)_reset;
-(void)_setIsLenient:(BOOL)arg0 ;
-(void)_setUsesCharacterDirection:(BOOL)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)receiveObservedValue:(id)arg0 ;
-(void)setLocalizedDateFormatFromTemplate:(id)arg0 ;


@end


#endif
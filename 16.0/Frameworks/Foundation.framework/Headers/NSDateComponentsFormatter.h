// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSDATECOMPONENTSFORMATTER_H
#define NSDATECOMPONENTSFORMATTER_H

@class NSCalendar, NSDate;
@protocol NSObservable, NSObserver;


#import "NSFormatter.h"
#import "NSString.h"
#import "NSNumberFormatter.h"

@interface NSDateComponentsFormatter : NSFormatter <NSObservable, NSObserver>

 {
    *void _fmt;
    NSString *_fmtLocaleIdent;
    NSCalendar *_calendar;
    NSDate *_referenceDate;
    NSNumberFormatter *_unitFormatter;
    NSUInteger _allowedUnits;
    NSInteger _formattingContext;
    NSInteger _unitsStyle;
    NSUInteger _zeroFormattingBehavior;
    NSInteger _maximumUnitCount;
    os_unfair_lock_s _lock;
    BOOL _allowsFractionalUnits;
    BOOL _collapsesLargestUnit;
    BOOL _includesApproximationPhrase;
    BOOL _includesTimeRemainingPhrase;
}


@property NSUInteger allowedUnits;
@property BOOL allowsFractionalUnits;
@property (copy) NSCalendar *calendar;
@property BOOL collapsesLargestUnit;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property NSInteger formattingContext;
@property (readonly) NSUInteger hash;
@property BOOL includesApproximationPhrase;
@property BOOL includesTimeRemainingPhrase;
@property NSInteger maximumUnitCount;
@property (copy) NSDate *referenceDate;
@property (readonly) Class superclass;
@property NSInteger unitsStyle;
@property NSUInteger zeroFormattingBehavior;


+(id)localizedStringFromDateComponents:(id)arg0 unitsStyle:(NSInteger)arg1 ;
-(BOOL)_mayDecorateAttributedStringForObjectValue:(id)arg0 ;
-(BOOL)_updateFormatterCacheIfNeeded_locked:(id)arg0 unitsStyle:(NSInteger)arg1 ;
-(BOOL)getObjectValue:(*id)arg0 forString:(id)arg1 errorDescription:(*id)arg2 ;
-(id)_calendarFromDateComponents:(id)arg0 ;
-(id)_canonicalizedDateComponents:(id)arg0 withCalendar:(id)arg1 usedUnits:(*NSUInteger)arg2 withReferenceDate:(id)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)stringForObjectValue:(id)arg0 ;
-(id)stringForObjectValue:(id)arg0 withReferenceDate:(id)arg1 ;
-(id)stringFromDate:(id)arg0 toDate:(id)arg1 ;
-(id)stringFromDateComponents:(id)arg0 ;
-(id)stringFromTimeInterval:(CGFloat)arg0 ;
-(void)_NSDateComponentsFormatter_commonInit;
-(void)_ensureUnitFormatterWithLocale:(id)arg0 ;
-(void)_ensureUnitFormatterWithLocale_alreadyLocked:(id)arg0 ;
-(void)_flushFormatterCache_locked;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)finalize;
-(void)receiveObservedValue:(id)arg0 ;


@end


#endif
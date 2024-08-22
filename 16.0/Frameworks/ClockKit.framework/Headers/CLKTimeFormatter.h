// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLKTIMEFORMATTER_H
#define CLKTIMEFORMATTER_H

@class NSDate, NSString, NSHashTable, NSMutableSet, NSTimeZone;
@protocol CLKTimeFormatterDelegate;

#import <Foundation/Foundation.h>

#import "_CLKTimeFormatterSubstringRange.h"
#import "CLKClockTimerToken.h"
#import "CLKClockTimer.h"

@interface CLKTimeFormatter : NSObject {
    NSDate *_date;
    NSString *_timeText;
    NSString *_designatorText;
    NSString *_timeAndDesignatorText;
    NSString *_timeAndDesignatorTextWithoutMinutesIfZero;
    NSString *_timeSubstringToSeparatorText;
    NSString *_timeSubstringFromSeparatorText;
    _CLKTimeFormatterSubstringRange *_designatorRangeInTimeAndDesignatorText;
    _CLKTimeFormatterSubstringRange *_designatorRangeInTimeAndDesignatorTextWithoutMinutesIfZero;
    _CLKTimeFormatterSubstringRange *_timeRange;
    _CLKTimeFormatterSubstringRange *_separatorRangeInTimeText;
    _CLKTimeFormatterSubstringRange *_separatorRangeInTimeAndDesignatorText;
    _CLKTimeFormatterSubstringRange *_blinkerRangeInTimeText;
    _CLKTimeFormatterSubstringRange *_lastBlinkerRangeInTimeText;
    _CLKTimeFormatterSubstringRange *_blinkerRangeInTimeAndDesignatorText;
    _CLKTimeFormatterSubstringRange *_blinkerRangeInTimeSubstringToSeparatorText;
    _CLKTimeFormatterSubstringRange *_blinkerRangeInTimeSubstringFromSeparatorText;
    _CLKTimeFormatterSubstringRange *_rangeInTimeSubstringFromSecondsSeparatorText;
    NSHashTable *_observers;
    NSMutableSet *_reasonsToPause;
    CLKClockTimerToken *_secondsUpdateToken;
    CLKClockTimerToken *_minutesUpdateToken;
    BOOL _useNarrowDesignatorTextForGerman;
    CLKClockTimer *_timer;
}


@property (nonatomic, getter=_useNarrowDesignatorTextForGerman, setter=_setUseNarrowDesignatorTextForGerman:) BOOL _useNarrowDesignatorTextForGerman;
@property (readonly, nonatomic) _NSRange blinkerRangeInTimeAndDesignatorText;
@property (readonly, nonatomic) _NSRange blinkerRangeInTimeSubstringFromSeparatorText;
@property (readonly, nonatomic) _NSRange blinkerRangeInTimeSubstringToSeparatorText;
@property (readonly, nonatomic) _NSRange blinkerRangeInTimeText;
@property (weak, nonatomic) NSObject<CLKTimeFormatterDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) _NSRange designatorRangeInTimeAndDesignatorText;
@property (readonly, nonatomic) _NSRange designatorRangeInTimeAndDesignatorTextWithoutMinutesIfZero;
@property (readonly, nonatomic) NSString *designatorText;
@property (readonly, nonatomic) BOOL forcesLatinNumbers; // ivar: _forcesLatinNumbers
@property (nonatomic) BOOL includeSeparatorInTimeSubstringFromSeparatorText; // ivar: _includeSeparatorInTimeSubstringFromSeparatorText
@property (readonly, nonatomic) _NSRange lastBlinkerRangeInTimeText;
@property (retain, nonatomic) NSDate *overrideDate; // ivar: _overrideDate
@property (readonly, nonatomic) _NSRange rangeInTimeSubstringFromSecondsSeparatorText;
@property (readonly, nonatomic) BOOL reportingLiveTime;
@property (readonly, nonatomic) _NSRange separatorRangeInTimeAndDesignatorText;
@property (readonly, nonatomic) _NSRange separatorRangeInTimeText;
@property (nonatomic) BOOL showSeconds; // ivar: _showSeconds
@property (nonatomic) BOOL suppressesDesignatorWhitespace; // ivar: _suppressesDesignatorWhitespace
@property (readonly, nonatomic) NSString *timeAndDesignatorText;
@property (readonly, nonatomic) BOOL timeAndDesignatorTextHasDesignator;
@property (readonly, nonatomic) BOOL timeAndDesignatorTextStartsWithDesignator;
@property (readonly, nonatomic) NSString *timeAndDesignatorTextWithoutMinutesIfZero;
@property (nonatomic) CGFloat timeOffset; // ivar: _timeOffset
@property (readonly, nonatomic) NSString *timeSubstringFromSeparatorText;
@property (readonly, nonatomic) NSString *timeSubstringToSeparatorText;
@property (readonly, nonatomic) NSString *timeText;
@property (retain, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone


-(id)_designatorRangeInText:(id)arg0 ;
-(id)_timeAndDesignatorFormatter;
-(id)init;
-(id)initWithForcesLatinNumbers:(BOOL)arg0 ;
-(id)initWithForcesLatinNumbers:(BOOL)arg0 clockTimer:(id)arg1 ;
-(void)_handleSignificantTimeChange;
-(void)_invalidateDate:(id)arg0 ;
-(void)_invalidateText;
-(void)_notifyReportingLiveTimeDidChange;
-(void)_notifyTextDidChange;
-(void)_startOrStopUpdatesIfNecessary;
-(void)_stopMinuteUpdates:(BOOL)arg0 ;
-(void)_stopSecondsUpdates:(BOOL)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;
-(void)setPaused:(BOOL)arg0 forReason:(id)arg1 ;


@end


#endif
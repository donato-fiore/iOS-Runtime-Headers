// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RELATIVEDATEPROVIDER_H
#define RELATIVEDATEPROVIDER_H

@class NSDateComponents, NSDate, NSDateComponentsFormatter;


#import "BaseDateProvider.h"

@interface RelativeDateProvider : BaseDateProvider {
    CGFloat _elapsedTime;
    NSDateComponents *_sessionComponents;
    NSInteger _sessionTimePeriod;
    NSUInteger _sessionVisibleUnits;
    BOOL _sessionInProgress;
    NSDate *_mostRecentSessionDate;
}


@property (nonatomic) NSUInteger calendarUnits; // ivar: _calendarUnits
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (nonatomic) BOOL disableOffsetPrefix; // ivar: _disableOffsetPrefix
@property (retain, nonatomic) NSDateComponentsFormatter *formatter; // ivar: _formatter
@property (nonatomic) BOOL pauseTimerAtZero; // ivar: _pauseTimerAtZero
@property (retain, nonatomic) NSDate *relativeDate; // ivar: _relativeDate
@property (nonatomic) NSInteger relativeDateStyle; // ivar: _relativeDateStyle
@property (nonatomic) BOOL showLeadingMinutes; // ivar: _showLeadingMinutes
@property (nonatomic) BOOL twoDigitMinuteZeroPadding; // ivar: _twoDigitMinuteZeroPadding
@property (nonatomic) BOOL wantsSubseconds; // ivar: _wantsSubseconds


+(BOOL)_configureFormatter:(id)arg0 fallbackIndex:(NSUInteger)arg1 style:(NSInteger)arg2 ;
-(BOOL)_timerIsPausedAtZero;
-(NSInteger)_timePeriodForElapsedTime:(CGFloat)arg0 ;
-(id)_componentsForDate:(id)arg0 visibleUnits:(*NSUInteger)arg1 ;
-(id)_sessionTextForIndex:(NSInteger)arg0 ;
-(id)_signPrefixString;
-(id)formattedString;
-(id)initWithDate:(id)arg0 relativeToDate:(id)arg1 units:(NSUInteger)arg2 style:(NSInteger)arg3 calendar:(id)arg4 locale:(id)arg5 ;
-(id)initWithDate:(id)arg0 units:(NSUInteger)arg1 style:(NSInteger)arg2 calendar:(id)arg3 locale:(id)arg4 ;
-(void)_configureFormatterForTimerStyle;
-(void)_endSession;
-(void)_startSessionWithDate:(id)arg0 ;


@end


#endif
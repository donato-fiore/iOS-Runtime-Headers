// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RELATIVEDATEPROVIDER_H
#define RELATIVEDATEPROVIDER_H

@class NSDateComponents, NSDate, NSDateComponentsFormatter, NSDateInterval;


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
@property (nonatomic) BOOL countdown; // ivar: _countdown
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (nonatomic) BOOL disableOffsetPrefix; // ivar: _disableOffsetPrefix
@property (retain, nonatomic) NSDateComponentsFormatter *formatter; // ivar: _formatter
@property (retain, nonatomic) NSDateInterval *interval; // ivar: _interval
@property (nonatomic) NSUInteger lowFidelityTimerStyle; // ivar: _lowFidelityTimerStyle
@property (nonatomic) CGFloat pause; // ivar: _pause
@property (nonatomic) BOOL pauseTimerAtZero; // ivar: _pauseTimerAtZero
@property (nonatomic) NSInteger relativeDateStyle; // ivar: _relativeDateStyle
@property (nonatomic) BOOL showLeadingMinutes; // ivar: _showLeadingMinutes
@property (nonatomic) BOOL twoDigitMinuteZeroPadding; // ivar: _twoDigitMinuteZeroPadding
@property (nonatomic) BOOL wantsSubseconds; // ivar: _wantsSubseconds


+(BOOL)_configureFormatter:(id)arg0 fallbackIndex:(NSUInteger)arg1 style:(NSInteger)arg2 context:(id)arg3 ;
+(CGFloat)noPause;
-(BOOL)_timerIsPausedAtZero;
-(CGFloat)elapsedTimeForGameClock:(id)arg0 ;
-(NSInteger)_timePeriodForElapsedTime:(CGFloat)arg0 ;
-(id)_componentsForDate:(id)arg0 visibleUnits:(*NSUInteger)arg1 ;
-(id)_sessionTextForIndex:(NSInteger)arg0 context:(id)arg1 ;
-(id)_signPrefixString;
-(id)componentsForGameClock:(id)arg0 units:(NSUInteger)arg1 ;
-(id)initWithDate:(id)arg0 style:(NSInteger)arg1 units:(NSUInteger)arg2 calendar:(id)arg3 locale:(id)arg4 timeZone:(id)arg5 ;
-(id)initWithInterval:(id)arg0 countdown:(BOOL)arg1 pause:(CGFloat)arg2 units:(NSUInteger)arg3 calendar:(id)arg4 locale:(id)arg5 timeZone:(id)arg6 ;
-(id)timerEndDate;
-(void)_configureFormatterForTimerStyle;
-(void)_endSession;
-(void)_startSessionWithDate:(id)arg0 ;


@end


#endif
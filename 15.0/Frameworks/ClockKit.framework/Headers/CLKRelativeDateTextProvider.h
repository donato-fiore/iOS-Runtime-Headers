// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLKRELATIVEDATETEXTPROVIDER_H
#define CLKRELATIVEDATETEXTPROVIDER_H

@class NSDateComponentsFormatter, NSRelativeDateTimeFormatter, NSDateComponents, NSString, NSDate;


#import "CLKTextProvider.h"

@interface CLKRelativeDateTextProvider : CLKTextProvider {
    NSDateComponentsFormatter *_formatter;
    NSRelativeDateTimeFormatter *_relativeDateTimeFormatter;
    NSDateComponents *_sessionComponents;
    NSUInteger _sessionVisibleUnits;
    NSString *_sessionCacheKey;
    NSInteger _sessionTimePeriod;
    CGFloat _elapsedTime;
    BOOL _sessionInProgress;
}


@property (nonatomic) NSUInteger calendarUnits; // ivar: _calendarUnits
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (nonatomic) BOOL disableOffsetPrefix; // ivar: _disableOffsetPrefix
@property (nonatomic) BOOL disableSmallCapUnits; // ivar: _disableSmallCapUnits
@property (retain, nonatomic) NSDate *overrideDate;
@property (nonatomic) BOOL pauseTimerAtZero; // ivar: _pauseTimerAtZero
@property (nonatomic) NSInteger relativeDateStyle; // ivar: _relativeDateStyle
@property (retain, nonatomic) NSDate *relativeToDate; // ivar: _relativeToDate
@property (nonatomic) BOOL showLeadingMinutes; // ivar: _showLeadingMinutes
@property (nonatomic) BOOL shrinkUnitsInCJK; // ivar: _shrinkUnitsInCJK
@property (nonatomic) NSInteger tritiumDateStyle; // ivar: _tritiumDateStyle
@property (nonatomic) BOOL twoDigitMinuteZeroPadding; // ivar: _twoDigitMinuteZeroPadding
@property (nonatomic) BOOL wantsSubseconds; // ivar: _wantsSubseconds


+(BOOL)_configureComponentsFormatter:(id)arg0 fallbackIndex:(NSUInteger)arg1 style:(NSInteger)arg2 ;
+(BOOL)_configureRelativeFormatter:(id)arg0 fallbackIndex:(NSUInteger)arg1 style:(NSInteger)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)textProviderWithDate:(id)arg0 relativeToDate:(id)arg1 style:(NSInteger)arg2 units:(NSUInteger)arg3 ;
+(id)textProviderWithDate:(id)arg0 style:(NSInteger)arg1 units:(NSUInteger)arg2 ;
-(BOOL)_timerIsPausedAtZero;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_timePeriodForElapsedTime:(CGFloat)arg0 ;
-(NSUInteger)hash;
-(id)JSONObjectRepresentation;
-(id)_componentsForDate:(id)arg0 visibleUnits:(*NSUInteger)arg1 ;
-(id)_initWithJSONObjectRepresentation:(id)arg0 ;
-(id)_sessionAttributedTextForIndex:(NSUInteger)arg0 withStyle:(id)arg1 ;
-(id)_sessionCacheKey;
-(id)_signPrefixString;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDate:(id)arg0 relativeToDate:(id)arg1 style:(NSInteger)arg2 units:(NSUInteger)arg3 ;
-(id)initWithDate:(id)arg0 style:(NSInteger)arg1 units:(NSUInteger)arg2 ;
-(void)_configureFormatterForTimerStyle;
-(void)_endSession;
-(void)_startSessionWithDate:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)finalize;


@end


#endif
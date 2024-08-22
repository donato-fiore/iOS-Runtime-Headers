// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDATEPICKERCALENDARTIMEFORMAT_H
#define _UIDATEPICKERCALENDARTIMEFORMAT_H

@class NSString, NSNumberFormatter, NSLocale, NSTimeZone, NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _UIDatePickerCalendarTimeFormat : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *AMSymbol; // ivar: _AMSymbol
@property (readonly, nonatomic) NSString *PMSymbol; // ivar: _PMSymbol
@property (readonly, nonatomic) NSInteger clock; // ivar: _clock
@property (readonly, nonatomic) NSInteger clockLayout; // ivar: _clockLayout
@property (readonly, nonatomic) BOOL displaysTimeZone; // ivar: _displaysTimeZone
@property (readonly, nonatomic) NSString *extendedHoursFormat; // ivar: _extendedHoursFormat
@property (readonly, nonatomic) BOOL forceDoubleDigitHours; // ivar: _forceDoubleDigitHours
@property (readonly, nonatomic) BOOL hasLeadingLiteral; // ivar: _hasLeadingLiteral
@property (readonly, nonatomic) BOOL hasTrailingLiteral; // ivar: _hasTrailingLiteral
@property (readonly, nonatomic) NSString *hourFormat; // ivar: _hourFormat
@property (readonly, nonatomic) NSNumberFormatter *hourFormatter; // ivar: _hourFormatter
@property (readonly, nonatomic) NSLocale *locale; // ivar: _locale
@property (readonly, nonatomic) NSNumberFormatter *minuteFormatter; // ivar: _minuteFormatter
@property (readonly, nonatomic) NSNumberFormatter *strictHourFormatter; // ivar: _strictHourFormatter
@property (readonly, nonatomic) NSString *timeFormat; // ivar: _timeFormat
@property (readonly, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone
@property (nonatomic) NSDate *timeZoneReferenceDate; // ivar: _timeZoneReferenceDate
@property (readonly, nonatomic) BOOL wantsDoubleDigitHours; // ivar: _wantsDoubleDigitHours


+(id)formatWithCalendar:(id)arg0 locale:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCalendar:(id)arg0 locale:(id)arg1 forceDoubleDigitHours:(BOOL)arg2 displaysTimeZone:(BOOL)arg3 ;
-(id)localizedTimeStringWithHours:(NSUInteger)arg0 minutes:(NSUInteger)arg1 isPM:(BOOL)arg2 ;
-(id)localizedTimeStringWithHours:(NSUInteger)arg0 minutes:(NSUInteger)arg1 isPM:(BOOL)arg2 ranges:(struct ? *)arg3 ;
-(id)withDisplaysTimeZone:(BOOL)arg0 ;
-(id)withForceDoubleDigitHours:(BOOL)arg0 ;
-(id)withTimeZone:(id)arg0 ;


@end


#endif
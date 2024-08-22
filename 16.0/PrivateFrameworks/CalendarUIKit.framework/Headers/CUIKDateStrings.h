// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUIKDATESTRINGS_H
#define CUIKDATESTRINGS_H


#import <Foundation/Foundation.h>


@interface CUIKDateStrings : NSObject



+(BOOL)supportsOverlayCalendarWithIdentifier:(id)arg0 ;
+(NSUInteger)_overlayCalendarTypeForCalendarIdentifier:(id)arg0 ;
+(id)_cachedDateFormatterForDomain:(id)arg0 calendar:(id)arg1 formatterKey:(id)arg2 creationBlock:(id)arg3 ;
+(id)_languageIDfromLocalID:(id)arg0 ;
+(id)_newDateFormatterForDateStyle:(NSUInteger)arg0 timeStyle:(NSUInteger)arg1 calendar:(id)arg2 ;
+(id)_newDateFormatterForFormat:(id)arg0 calendar:(id)arg1 ;
+(id)_newDateFormatterForTemplate:(id)arg0 calendar:(id)arg1 ;
+(id)_overlayDayNumberStringForDate:(id)arg0 day:(NSInteger)arg1 inCalendar:(id)arg2 ;
+(id)_significantLocaleComponents:(id)arg0 ;
+(id)_zodiacSymbolForDate:(id)arg0 inCalendar:(id)arg1 ;
+(id)cachedDateFormatterForDateStyle:(NSUInteger)arg0 timeStyle:(NSUInteger)arg1 calendar:(id)arg2 ;
+(id)cachedDateFormatterForFormat:(id)arg0 calendar:(id)arg1 ;
+(id)cachedDateFormatterForTemplate:(id)arg0 calendar:(id)arg1 ;
+(id)longStringForDate:(id)arg0 inCalendar:(id)arg1 ;
+(id)mediumStringForDate:(id)arg0 inCalendar:(id)arg1 ;
+(id)monthDayStringForDate:(id)arg0 inCalendar:(id)arg1 ;
+(id)monthStringForDate:(id)arg0 inCalendar:(id)arg1 ;
+(id)overlayCalendarPickerDisplayNameForCalendarWithIdentifier:(id)arg0 ;
+(id)overlayFirstDayOfLunarMonthLocalizedStringInCalendar:(id)arg0 ;
+(id)overlayLocalizedStringForKey:(id)arg0 calendar:(id)arg1 ;
+(id)overlayMediumStringForDate:(id)arg0 inCalendar:(id)arg1 ;
+(id)overlayShortStringForDate:(id)arg0 inCalendar:(id)arg1 ;
+(id)overlayYearStringForDate:(id)arg0 inCalendar:(id)arg1 ;
+(id)yearMonthDayStringForDate:(id)arg0 inCalendar:(id)arg1 ;
+(id)yearMonthStringForDate:(id)arg0 inCalendar:(id)arg1 ;
+(id)yearStringForDate:(id)arg0 inCalendar:(id)arg1 ;


@end


#endif
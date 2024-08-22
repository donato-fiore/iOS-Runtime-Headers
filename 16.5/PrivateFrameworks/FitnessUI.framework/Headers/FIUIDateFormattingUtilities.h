// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIUIDATEFORMATTINGUTILITIES_H
#define FIUIDATEFORMATTINGUTILITIES_H


#import <Foundation/Foundation.h>


@interface FIUIDateFormattingUtilities : NSObject



+(BOOL)_dateStringFits:(id)arg0 font:(id)arg1 maxWidth:(CGFloat)arg2 ;
+(id)_dateFormatter;
+(id)_localizedTodayFormatterWithTemplate:(id)arg0 ;
+(id)stringWithDayNameAndShortMonthFromDate:(id)arg0 ;
+(id)stringWithEitherTodayOrLongStyleDateFromDate:(id)arg0 ;
+(id)stringWithLongestStyleDate:(id)arg0 font:(id)arg1 maxWidth:(CGFloat)arg2 ;
+(id)stringWithShortStyleDate:(id)arg0 ;
+(id)timeFormatter;
+(id)timeRangeStringFromDateInterval:(id)arg0 ;
+(id)timeStringWithSpaceRemoved:(id)arg0 date:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSUDATEFORMATTER_H
#define TSUDATEFORMATTER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TSUDateFormatter : NSObject {
    NSString *mDateOnlyFormatString;
    NSString *mTimeOnlyFormatString;
    *__CFDateFormatter mFullDateFormatter;
}




+(NSUInteger)p_DateTimeSplitLocationInFormatString:(id)arg0 ;
+(id)dateFormatStringSpecialSymbols;
+(id)datePortionOfDateTimeFormatString:(id)arg0 ;
+(id)defaultDateTimeFormat;
+(id)shortMonthNamesForNonCachedCurrentLocale;
+(id)supportedDateFormats;
+(id)supportedTimeFormats;
+(id)timePortionOfDateTimeFormatString:(id)arg0 ;
-(id)appropriateOutputFormatStringForInputFormatString:(id)arg0 ;
-(id)fullDateString:(id)arg0 ;
-(id)init;
-(id)stringFromDate:(id)arg0 format:(id)arg1 ;
-(void)dealloc;


@end


#endif
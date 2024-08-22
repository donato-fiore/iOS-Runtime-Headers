// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OITSUDATEFORMATTER_H
#define OITSUDATEFORMATTER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface OITSUDateFormatter : NSObject {
    NSString *_dateOnlyFormatString;
    NSString *_timeOnlyFormatString;
    *__CFDateFormatter _fullDateFormatter;
}




+(NSUInteger)p_DateTimeSplitLocationInFormatString:(id)arg0 ;
+(id)dateFormatStringSpecialSymbols;
+(id)datePortionOfDateTimeFormatString:(id)arg0 ;
+(id)defaultDateTimeFormatForLocale:(id)arg0 ;
+(id)p_supportedDateFormatMatchingFormat:(id)arg0 locale:(id)arg1 ;
+(id)p_supportedTimeFormatMatchingFormat:(id)arg0 locale:(id)arg1 ;
+(id)supportedDateFormatsForLocale:(id)arg0 ;
+(id)supportedTimeFormatsForLocale:(id)arg0 ;
+(id)timePortionOfDateTimeFormatString:(id)arg0 ;
-(id)init;
-(id)initWithLocale:(id)arg0 ;
-(void)dealloc;


@end


#endif
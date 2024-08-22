// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CCVEGAEXPRESSIONFUNCTIONS_H
#define CCVEGAEXPRESSIONFUNCTIONS_H

@class NSMutableDictionary, NSLocale, NSCalendar, NSDictionary;

#import <Foundation/Foundation.h>


@interface CCVegaExpressionFunctions : NSObject {
    NSMutableDictionary *_cache;
    NSLocale *_locale;
    NSCalendar *_calendar;
    NSDictionary *_fontOptions;
}


@property (retain) NSCalendar *calendar;
@property (retain) NSDictionary *fontOptions;
@property (retain) NSLocale *locale;


+(id)functionNames;
-(NSUInteger)calendarUnitFromString:(id)arg0 ;
-(NSUInteger)dateFormatterStyleFromString:(id)arg0 ;
-(id)dateComponentsFormatterFromOptions:(id)arg0 ;
-(id)dateFormatterFromOptions:(id)arg0 ;
-(id)fontFromJSFontDesc:(id)arg0 options:(id)arg1 ;
-(id)init;
-(id)keyForKind:(id)arg0 options:(id)arg1 ;
-(id)makeReturnValue:(id)arg0 ;
-(id)nativeDateComponentsFormat:(SEL)arg0 ;
-(id)nativeDateFormat:(SEL)arg0 ;
-(id)nativeFontMetrics:(SEL)arg0 ;
-(id)nativeNumberFormat:(SEL)arg0 ;
-(id)nativeTextMetrics:(SEL)arg0 ;
-(id)numberFormatterFromOptions:(id)arg0 ;
-(void)registerFunctionsToClient:(id)arg0 ;


@end


#endif
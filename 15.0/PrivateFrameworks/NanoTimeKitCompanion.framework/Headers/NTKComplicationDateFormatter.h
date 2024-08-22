// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKCOMPLICATIONDATEFORMATTER_H
#define NTKCOMPLICATIONDATEFORMATTER_H


#import <Foundation/Foundation.h>


@interface NTKComplicationDateFormatter : NSObject



+(id)_localizedDayDateFormatter;
+(id)dateFormatterForStyle:(NSUInteger)arg0 ;
+(id)stringForDate:(id)arg0 withStyle:(NSUInteger)arg1 ;
+(void)_handleLocaleChange:(id)arg0 ;
+(void)_handleSignificantTimeChange:(id)arg0 ;
+(void)initialize;


@end


#endif
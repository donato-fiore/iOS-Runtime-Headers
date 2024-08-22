// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEATHERVISIBILITYFORMATTER_H
#define WEATHERVISIBILITYFORMATTER_H

@class NSLengthFormatter, NSLocale;



@interface WeatherVisibilityFormatter : NSLengthFormatter

@property (retain, nonatomic) NSLocale *locale; // ivar: _locale


+(id)convenienceFormatter;
-(id)init;
-(id)stringFromDistance:(CGFloat)arg0 isDataMetric:(BOOL)arg1 ;
-(id)stringFromKilometers:(CGFloat)arg0 ;
-(id)stringFromMiles:(CGFloat)arg0 ;


@end


#endif
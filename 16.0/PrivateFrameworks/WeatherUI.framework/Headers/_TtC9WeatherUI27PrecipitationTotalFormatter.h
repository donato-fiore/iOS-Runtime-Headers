// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9WEATHERUI27PRECIPITATIONTOTALFORMATTER_H
#define _TTC9WEATHERUI27PRECIPITATIONTOTALFORMATTER_H

@class NSMeasurementFormatter, NSLocale;



@interface _TtC9WeatherUI27PrecipitationTotalFormatter : NSMeasurementFormatter {
    ? trimLeadingZeros;
}


@property (nonatomic, copy) NSLocale *locale;


-(id)init;
-(id)initWithCoder:(id)arg0 ;


@end


#endif
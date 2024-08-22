// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWCFIVEHOURFORECASTTEMPERATUREVIEW_H
#define NWCFIVEHOURFORECASTTEMPERATUREVIEW_H



#import "NWCFiveHourForecastConditionGlyphView.h"
#import "NWMTemperatureFormatter.h"

@interface NWCFiveHourForecastTemperatureView : NWCFiveHourForecastConditionGlyphView

@property (retain, nonatomic) NWMTemperatureFormatter *formatter; // ivar: _formatter


-(Class)hourlyForecastViewClass;
-(id)dataFormatter;


@end


#endif
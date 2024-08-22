// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCFIVEHOURFORECASTTEMPERATUREVIEW_H
#define NWCFIVEHOURFORECASTTEMPERATUREVIEW_H



#import "NWCFiveHourForecastConditionGlyphView.h"
#import "NWMTemperatureFormatter.h"

@interface NWCFiveHourForecastTemperatureView : NWCFiveHourForecastConditionGlyphView

@property (retain, nonatomic) NWMTemperatureFormatter *formatter; // ivar: _formatter


-(id)_setupViewBuilderForDevice:(id)arg0 ;
-(id)dataFormatter;


@end


#endif
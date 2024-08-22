// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWCFIVEHOURFORECASTPRECIPITATIONVIEW_H
#define NWCFIVEHOURFORECASTPRECIPITATIONVIEW_H



#import "NWCFiveHourForecastConditionGlyphView.h"
#import "NWMPrecipitationFormatter.h"

@interface NWCFiveHourForecastPrecipitationView : NWCFiveHourForecastConditionGlyphView

@property (retain, nonatomic) NWMPrecipitationFormatter *formatter; // ivar: _formatter


-(id)_setupViewBuilderForDevice:(id)arg0 ;
-(id)dataFormatter;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFWEATHEREVENTSCONFIG_H
#define WFWEATHEREVENTSCONFIG_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "WFWeatherEventConfig.h"

@interface WFWeatherEventsConfig : NSObject <NSCopying>



@property (retain, nonatomic) WFWeatherEventConfig *changeInConditions; // ivar: _changeInConditions
@property (retain, nonatomic) WFWeatherEventConfig *nextHourPrecipitation; // ivar: _nextHourPrecipitation
@property (retain, nonatomic) WFWeatherEventConfig *severeWeather; // ivar: _severeWeather


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif
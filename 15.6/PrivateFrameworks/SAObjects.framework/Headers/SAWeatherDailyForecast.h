// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAWEATHERDAILYFORECAST_H
#define SAWEATHERDAILYFORECAST_H

@class NSNumber;


#import "SAWeatherForecast.h"

@interface SAWeatherDailyForecast : SAWeatherForecast

@property (copy, nonatomic) NSNumber *highTemperature;
@property (copy, nonatomic) NSNumber *lowTemperature;


+(id)dailyForecast;
+(id)dailyForecastWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif
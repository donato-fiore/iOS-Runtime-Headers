// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAWEATHERHOURLYFORECAST_H
#define SAWEATHERHOURLYFORECAST_H

@class NSNumber;


#import "SAWeatherForecast.h"

@interface SAWeatherHourlyForecast : SAWeatherForecast

@property (copy, nonatomic) NSNumber *temperature;


+(id)hourlyForecast;
+(id)hourlyForecastWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif
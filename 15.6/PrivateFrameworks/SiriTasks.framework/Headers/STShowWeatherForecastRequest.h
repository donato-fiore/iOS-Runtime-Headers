// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STSHOWWEATHERFORECASTREQUEST_H
#define STSHOWWEATHERFORECASTREQUEST_H

@class AFSiriRequest, NSArray, STCity;


#import "STWeatherCurrentConditions.h"
#import "STWeatherUnits.h"

@interface STShowWeatherForecastRequest : AFSiriRequest {
    STWeatherCurrentConditions *_currentConditions;
    NSArray *_hourlyForecasts;
    STCity *_city;
    STWeatherUnits *_units;
    NSInteger _forecastType;
}




+(BOOL)supportsSecureCoding;
-(NSInteger)forecastType;
-(id)_initWithCurrentConditions:(id)arg0 hourlyForecasts:(id)arg1 city:(id)arg2 units:(id)arg3 forecastType:(NSInteger)arg4 ;
-(id)city;
-(id)createResponse;
-(id)currentConditions;
-(id)hourlyForecasts;
-(id)initWithCoder:(id)arg0 ;
-(id)units;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSHOWHOURLYWEATHERFORECASTREQUEST_H
#define STSHOWHOURLYWEATHERFORECASTREQUEST_H

@class AFSiriRequest, NSArray, STCity;


#import "STWeatherAttributes.h"

@interface STShowHourlyWeatherForecastRequest : AFSiriRequest {
    STWeatherAttributes *_currentAttributes;
    NSArray *_hourlyAttributes;
    STCity *_city;
    NSInteger _startHour;
    NSInteger _forecastType;
}




+(BOOL)supportsSecureCoding;
-(NSInteger)forecastType;
-(NSInteger)startHour;
-(id)_initWithCurrentAttributes:(id)arg0 hourlyAttributes:(id)arg1 city:(id)arg2 startHour:(NSInteger)arg3 forecastType:(NSInteger)arg4 ;
-(id)city;
-(id)createResponse;
-(id)currentAttributes;
-(id)hourlyAttributes;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
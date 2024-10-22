// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFAGGREGATECOMMONRESPONSE_H
#define WFAGGREGATECOMMONRESPONSE_H

@class NSArray, NSData;
@protocol NSCopying, NSSecureCoding;


#import "WFResponse.h"
#import "WFAirQualityConditions.h"
#import "WFWeatherConditions.h"
#import "WFNextHourPrecipitation.h"

@interface WFAggregateCommonResponse : WFResponse <NSCopying, NSSecureCoding>



@property (retain, nonatomic) WFAirQualityConditions *airQualityObservations; // ivar: _airQualityObservations
@property (retain, nonatomic) NSArray *changeForecasts; // ivar: _changeForecasts
@property (retain, nonatomic) WFWeatherConditions *currentObservations; // ivar: _currentObservations
@property (retain, nonatomic) NSArray *dailyForecastedConditions; // ivar: _dailyForecastedConditions
@property (retain, nonatomic) NSArray *dailyPollenForecastedConditions; // ivar: _dailyPollenForecastedConditions
@property (retain, nonatomic) NSArray *hourlyForecastedConditions; // ivar: _hourlyForecastedConditions
@property (retain, nonatomic) NSArray *lastTwentyFourHoursOfObservations; // ivar: _lastTwentyFourHoursOfObservations
@property (retain, nonatomic) WFNextHourPrecipitation *nextHourPrecipitation; // ivar: _nextHourPrecipitation
@property (retain, nonatomic) NSData *rawAPIData; // ivar: _rawAPIData
@property (nonatomic) BOOL responseWasFromCache; // ivar: _responseWasFromCache
@property (retain, nonatomic) NSArray *severeWeatherEvents; // ivar: _severeWeatherEvents


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
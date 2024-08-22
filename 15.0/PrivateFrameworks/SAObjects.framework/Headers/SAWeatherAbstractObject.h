// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAWEATHERABSTRACTOBJECT_H
#define SAWEATHERABSTRACTOBJECT_H

@class NSArray, NSString;


#import "SADomainObject.h"
#import "SAWeatherAirQualityObject.h"
#import "SAWeatherCurrentConditions.h"
#import "SAWeatherUnits.h"
#import "SAWeatherLocation.h"

@interface SAWeatherAbstractObject : SADomainObject

@property (retain, nonatomic) SAWeatherAirQualityObject *airQuality;
@property (retain, nonatomic) SAWeatherCurrentConditions *currentConditions;
@property (copy, nonatomic) NSArray *dailyForecasts;
@property (copy, nonatomic) NSString *extendedForecastUrl;
@property (copy, nonatomic) NSArray *hourlyForecasts;
@property (retain, nonatomic) SAWeatherUnits *units;
@property (retain, nonatomic) SAWeatherLocation *weatherLocation;
@property (copy, nonatomic) NSString *weatherRequest;


+(id)abstractObject;
+(id)abstractObjectWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif
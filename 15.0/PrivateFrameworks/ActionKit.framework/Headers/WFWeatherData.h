// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFWEATHERDATA_H
#define WFWEATHERDATA_H

@class NSDate, NSMeasurement, NSNumber, NSString, CLLocation, NSArray;
@protocol WFNaming, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface WFWeatherData : NSObject <WFNaming, NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSUInteger condition; // ivar: _condition
@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) NSMeasurement *dewpoint; // ivar: _dewpoint
@property (readonly, nonatomic) NSMeasurement *feelsLikeTemperature; // ivar: _feelsLikeTemperature
@property (readonly, nonatomic) NSMeasurement *highTemperature; // ivar: _highTemperature
@property (readonly, copy, nonatomic) NSNumber *humidity; // ivar: _humidity
@property (readonly, copy, nonatomic) NSString *localizedAirQualityCategory; // ivar: _localizedAirQualityCategory
@property (readonly, copy, nonatomic) NSNumber *localizedAirQualityIndex; // ivar: _localizedAirQualityIndex
@property (readonly, nonatomic) NSString *localizedConditionString;
@property (readonly, copy, nonatomic) CLLocation *location; // ivar: _location
@property (readonly, nonatomic) NSMeasurement *lowTemperature; // ivar: _lowTemperature
@property (readonly, copy, nonatomic) NSArray *pollutants; // ivar: _pollutants
@property (readonly, nonatomic) NSMeasurement *precipitationAmount; // ivar: _precipitationAmount
@property (readonly, copy, nonatomic) NSNumber *precipitationChance; // ivar: _precipitationChance
@property (readonly, nonatomic) NSMeasurement *pressure; // ivar: _pressure
@property (readonly, copy, nonatomic) NSDate *sunriseTime; // ivar: _sunriseTime
@property (readonly, copy, nonatomic) NSDate *sunsetTime; // ivar: _sunsetTime
@property (readonly, nonatomic) NSMeasurement *temperature; // ivar: _temperature
@property (readonly, copy, nonatomic) NSNumber *uvIndex; // ivar: _uvIndex
@property (readonly, nonatomic) NSMeasurement *visibility; // ivar: _visibility
@property (readonly, copy, nonatomic) NSString *wfName;
@property (readonly, copy, nonatomic) NSNumber *windDirection; // ivar: _windDirection
@property (readonly, nonatomic) NSMeasurement *windSpeed; // ivar: _windSpeed


+(BOOL)supportsSecureCoding;
+(BOOL)usesMetricSystem;
-(NSUInteger)weatherConditionForConditionCode:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithWeatherConditions:(id)arg0 ;
-(id)measurementForTemperature:(id)arg0 ;
-(void)addAirQualityConditions:(id)arg0 ;
-(void)addMissingDataFromWeatherData:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
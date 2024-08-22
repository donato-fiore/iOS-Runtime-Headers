// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFWEATHERDATA_H
#define WFWEATHERDATA_H

@class NSDate, NSMeasurement, NSNumber, NSString, CLLocation, NSArray;
@protocol WFNaming, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface WFWeatherData : NSObject <WFNaming, NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) NSMeasurement *dewpoint; // ivar: _dewpoint
@property (readonly, nonatomic) NSMeasurement *feelsLikeTemperature; // ivar: _feelsLikeTemperature
@property (readonly, nonatomic) NSMeasurement *highTemperature; // ivar: _highTemperature
@property (readonly, copy, nonatomic) NSNumber *humidity; // ivar: _humidity
@property (readonly, copy, nonatomic) NSString *localizedAirQualityCategory; // ivar: _localizedAirQualityCategory
@property (readonly, copy, nonatomic) NSNumber *localizedAirQualityIndex; // ivar: _localizedAirQualityIndex
@property (readonly, nonatomic) NSString *localizedConditionString; // ivar: _localizedConditionString
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
+(id)userTemperatureUnitString:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDate:(id)arg0 location:(id)arg1 userTemperatureUnitString:(id)arg2 temperature:(id)arg3 highTemperature:(id)arg4 lowTemperature:(id)arg5 feelsLikeTemperature:(id)arg6 localizedConditionString:(id)arg7 visibility:(id)arg8 dewpoint:(id)arg9 humidity:(id)arg10 pressure:(id)arg11 precipitationAmount:(id)arg12 precipitationChance:(id)arg13 windSpeed:(id)arg14 windDirection:(id)arg15 uvIndex:(id)arg16 sunriseTime:(id)arg17 sunsetTime:(id)arg18 localizedAirQualityIndex:(id)arg19 localizedAirQualityCategory:(id)arg20 pollutants:(id)arg21 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
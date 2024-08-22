// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDate:(id)arg0 location:(id)arg1 temperature:(id)arg2 highTemperature:(id)arg3 lowTemperature:(id)arg4 feelsLikeTemperature:(id)arg5 localizedConditionString:(id)arg6 visibility:(id)arg7 dewpoint:(id)arg8 humidity:(id)arg9 pressure:(id)arg10 precipitationAmount:(id)arg11 precipitationChance:(id)arg12 windSpeed:(id)arg13 windDirection:(id)arg14 uvIndex:(id)arg15 sunriseTime:(id)arg16 sunsetTime:(id)arg17 localizedAirQualityIndex:(id)arg18 localizedAirQualityCategory:(id)arg19 pollutants:(id)arg20 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
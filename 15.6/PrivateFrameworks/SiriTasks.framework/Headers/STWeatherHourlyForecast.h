// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STWEATHERHOURLYFORECAST_H
#define STWEATHERHOURLYFORECAST_H

@class STSiriModelObject, NSNumber;



@interface STWeatherHourlyForecast : STSiriModelObject {
    NSInteger _timeIndex;
    NSInteger _conditionCode;
    NSNumber *_temperature;
    NSNumber *_chanceOfPrecipitation;
}




+(BOOL)supportsSecureCoding;
-(NSInteger)conditionCode;
-(NSInteger)timeIndex;
-(id)_initWithConditionCodeIndex:(NSInteger)arg0 timeIndex:(NSInteger)arg1 temperature:(id)arg2 chanceOfPrecipitation:(id)arg3 ;
-(id)chanceOfPrecipitation;
-(id)initWithCoder:(id)arg0 ;
-(id)temperature;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
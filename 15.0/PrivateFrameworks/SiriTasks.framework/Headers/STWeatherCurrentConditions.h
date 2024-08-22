// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STWEATHERCURRENTCONDITIONS_H
#define STWEATHERCURRENTCONDITIONS_H

@class STSiriModelObject, NSNumber;



@interface STWeatherCurrentConditions : STSiriModelObject {
    NSInteger _conditionCode;
    NSNumber *_temperature;
    NSNumber *_highTemperature;
    NSNumber *_lowTemperature;
}




+(BOOL)supportsSecureCoding;
-(NSInteger)conditionCode;
-(id)_initWithConditionCode:(NSInteger)arg0 temperature:(id)arg1 highTemperature:(id)arg2 lowTemperature:(id)arg3 ;
-(id)highTemperature;
-(id)initWithCoder:(id)arg0 ;
-(id)lowTemperature;
-(id)temperature;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
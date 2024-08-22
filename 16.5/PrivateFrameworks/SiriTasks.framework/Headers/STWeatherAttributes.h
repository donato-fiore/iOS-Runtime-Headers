// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STWEATHERATTRIBUTES_H
#define STWEATHERATTRIBUTES_H

@class STSiriModelObject, NSNumber;


#import "STTemperature.h"

@interface STWeatherAttributes : STSiriModelObject {
    NSInteger _condition;
    STTemperature *_temperature;
    STTemperature *_highTemperature;
    STTemperature *_lowTemperature;
    NSNumber *_chanceOfPrecipitation;
}




+(BOOL)supportsSecureCoding;
-(NSInteger)condition;
-(id)_initWithCondition:(NSInteger)arg0 temperature:(id)arg1 highTemperature:(id)arg2 lowTemperature:(id)arg3 chanceOfPrecipitation:(id)arg4 ;
-(id)chanceOfPrecipitation;
-(id)highTemperature;
-(id)initWithCoder:(id)arg0 ;
-(id)lowTemperature;
-(id)temperature;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
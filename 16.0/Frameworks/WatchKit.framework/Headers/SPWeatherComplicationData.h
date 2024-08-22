// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPWEATHERCOMPLICATIONDATA_H
#define SPWEATHERCOMPLICATIONDATA_H

@class NSString;
@protocol NSSecureCoding;


#import "SPComplicationData.h"

@interface SPWeatherComplicationData : SPComplicationData <NSSecureCoding>



@property (nonatomic) NSInteger currentConditionsEnum; // ivar: _currentConditionsEnum
@property (retain, nonatomic) NSString *currentConditionsText; // ivar: _currentConditionsText
@property (retain, nonatomic) NSString *highLowText; // ivar: _highLowText
@property (retain, nonatomic) NSString *locationText; // ivar: _locationText
@property (retain, nonatomic) NSString *temperatureText; // ivar: _temperatureText


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
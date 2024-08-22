// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFFORECASTRESPONSE_H
#define WFFORECASTRESPONSE_H

@class NSData;
@protocol NSSecureCoding;


#import "WFResponse.h"
#import "WFWeatherConditions.h"

@interface WFForecastResponse : WFResponse <NSSecureCoding>



@property (retain, nonatomic) WFWeatherConditions *forecast; // ivar: _forecast
@property (nonatomic) NSUInteger forecastType; // ivar: _forecastType
@property (retain, nonatomic) NSData *rawAPIData; // ivar: _rawAPIData
@property (nonatomic) BOOL responseWasFromCache; // ivar: _responseWasFromCache


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
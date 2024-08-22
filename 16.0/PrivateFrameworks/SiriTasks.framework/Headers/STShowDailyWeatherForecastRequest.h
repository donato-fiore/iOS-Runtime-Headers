// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSHOWDAILYWEATHERFORECASTREQUEST_H
#define STSHOWDAILYWEATHERFORECASTREQUEST_H

@class AFSiriRequest, NSArray, STCity;


#import "STWeatherAttributes.h"

@interface STShowDailyWeatherForecastRequest : AFSiriRequest {
    STWeatherAttributes *_currentAttributes;
    NSArray *_dailyAttributes;
    STCity *_city;
    NSInteger _startWeekday;
}




+(BOOL)supportsSecureCoding;
-(NSInteger)startWeekday;
-(id)_initWithCurrentAttributes:(id)arg0 dailyAttributes:(id)arg1 city:(id)arg2 startWeekday:(NSInteger)arg3 ;
-(id)city;
-(id)createResponse;
-(id)currentAttributes;
-(id)dailyAttributes;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAWEATHERFORECAST_H
#define SAWEATHERFORECAST_H

@class NSNumber, NSString;
@protocol SAAceSerializable;


#import "AceObject.h"
#import "SAWeatherCondition.h"

@interface SAWeatherForecast : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSNumber *chanceOfPrecipitation;
@property (retain, nonatomic) SAWeatherCondition *condition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *isUserRequested;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSNumber *timeIndex;


+(id)forecast;
+(id)forecastWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif
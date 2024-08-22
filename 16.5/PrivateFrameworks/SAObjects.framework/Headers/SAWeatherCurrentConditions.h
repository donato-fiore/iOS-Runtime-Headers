// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAWEATHERCURRENTCONDITIONS_H
#define SAWEATHERCURRENTCONDITIONS_H

@class NSNumber, NSString;
@protocol SAAceSerializable;


#import "AceObject.h"
#import "SAWeatherBarometricPressure.h"
#import "SAWeatherCondition.h"
#import "SAWeatherWindSpeed.h"

@interface SAWeatherCurrentConditions : AceObject <SAAceSerializable>



@property (retain, nonatomic) SAWeatherBarometricPressure *barometricPressure;
@property (retain, nonatomic) SAWeatherCondition *condition;
@property (copy, nonatomic) NSNumber *dayOfWeek;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *dewPoint;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *heatIndex;
@property (copy, nonatomic) NSString *moonPhase;
@property (copy, nonatomic) NSString *percentHumidity;
@property (copy, nonatomic) NSNumber *percentOfMoonFaceVisible;
@property (copy, nonatomic) NSString *sunrise;
@property (copy, nonatomic) NSString *sunset;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *temperature;
@property (copy, nonatomic) NSString *timeOfObservation;
@property (copy, nonatomic) NSString *timeZone;
@property (copy, nonatomic) NSString *totalDailyPrecipitation;
@property (copy, nonatomic) NSNumber *uvIndex;
@property (copy, nonatomic) NSString *visibility;
@property (copy, nonatomic) NSString *windChill;
@property (retain, nonatomic) SAWeatherWindSpeed *windSpeed;


+(id)currentConditions;
+(id)currentConditionsWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif
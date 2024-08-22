// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFWEATHERDATACONTENTITEM_H
#define WFWEATHERDATACONTENTITEM_H

@class WFContentItem, NSString;
@protocol WFContentItemClass;



@interface WFWeatherDataContentItem : WFContentItem <WFContentItemClass>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)contentCategories;
+(id)countDescription;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)propertyBuilders;
+(id)typeDescription;
-(id)date;
-(id)dewpoint;
-(id)feelsLikeTemperature;
-(id)generateObjectRepresentationForClass:(Class)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)highTemperature;
-(id)humidity;
-(id)localizedAirQualityCategory;
-(id)localizedAirQualityIndex;
-(id)localizedConditionString;
-(id)location;
-(id)lowTemperature;
-(id)pollutants;
-(id)precipitationAmount;
-(id)precipitationChance;
-(id)pressure;
-(id)sunriseTime;
-(id)sunsetTime;
-(id)temperature;
-(id)uvIndex;
-(id)visibility;
-(id)weatherData;
-(id)windDirection;
-(id)windSpeed;


@end


#endif
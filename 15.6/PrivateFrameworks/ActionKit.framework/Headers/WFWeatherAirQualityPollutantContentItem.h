// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFWEATHERAIRQUALITYPOLLUTANTCONTENTITEM_H
#define WFWEATHERAIRQUALITYPOLLUTANTCONTENTITEM_H

@class WFContentItem;



@interface WFWeatherAirQualityPollutantContentItem : WFContentItem



+(id)contentCategories;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)propertyBuilders;
+(id)typeDescription;
-(id)concentration;
-(id)formattedConcentration;
-(id)generateObjectRepresentationForClass:(Class)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)localizedDescription;
-(id)localizedName;
-(id)pollutant;


@end


#endif
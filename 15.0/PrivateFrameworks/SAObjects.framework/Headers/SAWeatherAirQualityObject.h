// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAWEATHERAIRQUALITYOBJECT_H
#define SAWEATHERAIRQUALITYOBJECT_H

@class NSString, NSArray;


#import "SADomainObject.h"
#import "SAWeatherLocation.h"

@interface SAWeatherAirQualityObject : SADomainObject

@property (nonatomic) NSInteger airQualityIndex;
@property (retain, nonatomic) SAWeatherLocation *airQualityLocation;
@property (copy, nonatomic) NSString *airQualityRatingCategory;
@property (copy, nonatomic) NSString *localizedCategoryName;
@property (copy, nonatomic) NSArray *pollutants;


+(id)airQualityObject;
+(id)airQualityObjectWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif
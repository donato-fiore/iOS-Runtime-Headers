// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAWEATHERAIRQUALITYSNIPPET_H
#define SAWEATHERAIRQUALITYSNIPPET_H

@class NSArray;


#import "SAUISnippet.h"
#import "SAUIAppPunchOut.h"
#import "SAUIImageResource.h"

@interface SAWeatherAirQualitySnippet : SAUISnippet

@property (copy, nonatomic) NSArray *aceAirQualities;
@property (retain, nonatomic) SAUIAppPunchOut *appPunchOut;
@property (retain, nonatomic) SAUIImageResource *attributionImage;


+(id)airQualitySnippet;
+(id)airQualitySnippetWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif
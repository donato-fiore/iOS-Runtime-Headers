// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFINTERNALAPPSETTINGS_H
#define WFINTERNALAPPSETTINGS_H

@class NSString, NSURL, NSSet, NSDictionary;
@protocol WFSettings;

#import <Foundation/Foundation.h>

#import "WFWeatherEventsConfig.h"

@interface WFInternalAppSettings : NSObject <WFSettings>



@property (readonly, nonatomic) NSString *apiVersion;
@property (readonly, nonatomic) NSString *apiVersionFallback;
@property (readonly, nonatomic) NSURL *appAnalyticsEndpointUrl;
@property (readonly, nonatomic) NSSet *aqiEnabledCountryCodes;
@property (readonly, nonatomic) CGFloat cachedGeocodeLocationExpirationTimeInterval;
@property (readonly, nonatomic) float dataSamplingRate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL disableForecastRequestCancelation;
@property (readonly, nonatomic) BOOL disableLimitReverseGeocoding;
@property (readonly, nonatomic) BOOL disablePriorityForecastRequestQueue;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL loadSavedCitiesFromKVSOnly;
@property (readonly, nonatomic) float locationGeocodingSamplingRate;
@property (readonly, nonatomic) NSUInteger locationNumDecimalsOfPrecision;
@property (readonly, nonatomic) CGFloat locationUpdateMinDistance;
@property (readonly, nonatomic) CGFloat locationUpdateMinTimeInterval;
@property (readonly, nonatomic) NSUInteger networkFailedAttemptsLimit;
@property (readonly, nonatomic) NSUInteger networkSwitchExpirationTimeInSeconds;
@property (readonly, nonatomic) CGFloat privateUserIdentifierResetTimeInterval;
@property (readonly) Class superclass;
@property (readonly, nonatomic) float telemetrySamplingRate;
@property (readonly, nonatomic) CGFloat userIdentifierResetTimeInterval;
@property (readonly, nonatomic) WFWeatherEventsConfig *weatherEventsConfig;
@property (readonly, nonatomic) NSDictionary *widgetRefreshPolicy;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif
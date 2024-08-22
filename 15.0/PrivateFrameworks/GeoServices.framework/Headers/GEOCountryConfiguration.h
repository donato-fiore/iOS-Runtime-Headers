// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOCOUNTRYCONFIGURATION_H
#define GEOCOUNTRYCONFIGURATION_H

@class geo_isolater, NSMutableArray, NSMutableDictionary, NSString;
@protocol GEOResourceManifestTileGroupObserver, _GEOCountryConfigurationServerProxyDelegate, _GEOCountryConfigurationServerProxy;

#import <Foundation/Foundation.h>

#import "_GEOCountryConfigurationInfo.h"

@interface GEOCountryConfiguration : NSObject <GEOResourceManifestTileGroupObserver, _GEOCountryConfigurationServerProxyDelegate>

 {
    geo_isolater *_isolater;
    _GEOCountryConfigurationInfo *_countryCodeInfo;
    NSMutableArray *_updateCompletionHandlers;
    NSMutableDictionary *_supportedFeatures;
    geo_isolater *_currentCountrySupportsNavigationIsolater;
    BOOL _currentCountrySupportsNavigation;
    BOOL _determinedCurrentCountrySupportsNavigation;
    CGFloat _urlAuthenticationTimeToLive;
    BOOL _hasURLAuthenticationTimeToLive;
    id<_GEOCountryConfigurationServerProxy> *_serverProxy;
}


@property (readonly, copy, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) BOOL currentCountrySupportsCarIntegration;
@property (readonly, nonatomic) BOOL currentCountrySupportsCommute;
@property (readonly, nonatomic) BOOL currentCountrySupportsDirections;
@property (readonly, nonatomic) BOOL currentCountrySupportsElectricVehicleRouting;
@property (readonly, nonatomic) BOOL currentCountrySupportsNavigation;
@property (readonly, nonatomic) BOOL currentCountrySupportsRouteGenius;
@property (readonly, nonatomic) BOOL currentCountrySupportsTraffic;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL shouldRequestLaneGuidance;
@property (readonly, nonatomic) BOOL shouldUseGuidanceEventManager;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat urlAuthenticationTimeToLive;
@property (readonly, nonatomic) BOOL zilchPointsSupported;


+(id)sharedConfiguration;
+(void)disableServerConnection;
+(void)setUseLocalProxy:(BOOL)arg0 ;
-(BOOL)countryCode:(id)arg0 supportsFeature:(NSInteger)arg1 ;
-(BOOL)currentCountrySupportsFeature:(NSInteger)arg0 ;
-(id)countryCodeWithSource:(*unsigned int)arg0 updatedAtTime:(*id)arg1 ;
-(id)defaultForKey:(id)arg0 defaultValue:(id)arg1 ;
-(id)defaultForKey:(id)arg0 defaultValue:(id)arg1 decoder:(id)arg2 ;
-(id)defaultForKey:(id)arg0 defaultValue:(id)arg1 sourcePtr:(*NSInteger)arg2 ;
-(id)defaultForKey:(id)arg0 defaultValue:(id)arg1 sourcePtr:(*NSInteger)arg2 decoder:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg0 ;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg0 ;
-(void)serverProxy:(id)arg0 countryCodeDidChange:(id)arg1 ;
-(void)serverProxyProvidersDidChange:(id)arg0 ;
-(void)updateCountryConfiguration:(id)arg0 ;
// -(void)updateCountryConfiguration:(id)arg0 callbackQueue:(unk)arg1  ;
-(void)updateProvidersForCurrentCountry;


@end


#endif
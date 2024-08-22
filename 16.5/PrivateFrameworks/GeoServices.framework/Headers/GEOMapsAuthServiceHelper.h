// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOMAPSAUTHSERVICEHELPER_H
#define GEOMAPSAUTHSERVICEHELPER_H

@class NSString, geo_isolater;
@protocol GEOConfigChangeListenerDelegate, GEOResourceManifestTileGroupObserver;

#import <Foundation/Foundation.h>


@interface GEOMapsAuthServiceHelper : NSObject <GEOConfigChangeListenerDelegate, GEOResourceManifestTileGroupObserver>

 {
    atomic_flag _isRenewing;
    NSString *_currentToken;
    geo_isolater *_currentEnvironmentStateIsolater;
    NSUInteger _currentEnvironmentState;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedAuthHelper;
-(BOOL)isCurrentEnvironmentSecure;
-(id)dictionaryForAuthTokenState;
-(id)init;
-(void)addMapsAuthDidFinishObserver:(id)arg0 ;
-(void)addMapsAuthDidFinishObserver:(id)arg0 forRequestType:(id)arg1 ;
-(void)addProxyAuthHeaderOrReAuth:(id)arg0 authProxyURL:(id)arg1 ;
-(void)autoUpdateClientFeatureFlags;
-(void)checkNetworkError:(id)arg0 sendingGeoDErrorIfApplicable:(NSInteger)arg1 ;
-(void)doEnvironmentSwitchCheck:(id)arg0 authProxyURL:(id)arg1 suppressNotification:(BOOL)arg2 ;
-(void)handleSecureProxyChallenge:(id)arg0 ;
-(void)invalidateTokens;
-(void)removeMapsAuthDidFinishObserver:(id)arg0 ;
-(void)removeMapsAuthDidFinishObserver:(id)arg0 forRequestType:(id)arg1 ;
-(void)renewMapsAuthProxyToken:(NSUInteger)arg0 fromToken:(id)arg1 authProxyURL:(id)arg2 suppressNotification:(BOOL)arg3 ;
-(void)requestFeatureFlagsWithURL:(id)arg0 suppressNotification:(BOOL)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg0 ;
-(void)sendProxyAuthNotification:(NSInteger)arg0 ;
-(void)setConnectionProxyDictionary:(id)arg0 url:(id)arg1 proxyURL:(id)arg2 ;
-(void)valueChangedForGEOConfigKey:(struct ? )arg0 ;


@end


#endif
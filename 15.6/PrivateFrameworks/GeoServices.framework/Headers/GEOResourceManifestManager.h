// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEORESOURCEMANIFESTMANAGER_H
#define GEORESOURCEMANIFESTMANAGER_H

@class NSDictionary, NSSet, NSMutableArray, geo_isolater, NSString;
@protocol GEOPListStateCapturing, GEOResourceManifestServerProxyDelegate, OS_dispatch_source, GEOResourceManifestServerProxy;

#import <Foundation/Foundation.h>

#import "GEOObserverHashTable.h"
#import "GEOActiveTileGroup.h"
#import "GEOLocalizationRegionsInfo.h"
#import "GEOResourceManifestConfiguration.h"

@interface GEOResourceManifestManager : NSObject <GEOPListStateCapturing, GEOResourceManifestServerProxyDelegate>

 {
    GEOObserverHashTable *_serverProxyObservers;
    GEOActiveTileGroup *_activeTileGroup;
    os_unfair_lock_s _activeTileGroupLock;
    NSDictionary *_resourceNamesToPaths;
    NSSet *_allResourceNames;
    NSSet *_allRegionalResourceNames;
    BOOL _needsToLoadTileGroupFromDisk;
    NSMutableArray *_tileGroupObservers;
    os_unfair_recursive_lock_s _tileGroupObserversLock;
    os_unfair_lock_s _closedCountLock;
    NSInteger _closedCount;
    BOOL _constantlyChangeTileGroup;
    CGFloat _constantlyChangeTileGroupInterval;
    GEOLocalizationRegionsInfo *_localizationRegionsInfo;
    NSMutableArray *_networkActivityHandlers;
    geo_isolater *_networkActivityHandlersIsolation;
    BOOL _isUpdatingManifest;
    BOOL _isLoadingResources;
    os_unfair_lock_s _resourceNamesToPathsLock;
    GEOResourceManifestConfiguration *_configuration;
    NSObject<OS_dispatch_source> *_cachedResourceInfoPurgeTimer;
    NSUInteger _stateCaptureHandle;
}


@property (readonly, nonatomic) GEOActiveTileGroup *activeTileGroup;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasActiveTileGroup;
@property (readonly, nonatomic) BOOL hasLoadedActiveTileGroup;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<GEOResourceManifestServerProxy> *serverProxy; // ivar: _serverProxy
@property (readonly) Class superclass;


+(id)modernManager;
+(id)modernManagerForConfiguration:(id)arg0 ;
+(id)modernManagerForTileGroupIdentifier:(unsigned int)arg0 ;
+(id)modernManagerNoCreate;
+(id)sharedManager;
+(void)configureInProcessSingletonWithConfiguration:(id)arg0 ;
+(void)disableServerConnection;
+(void)useLocalProxy;
+(void)useRemoteProxy;
-(BOOL)hasResourceManifest;
-(BOOL)isAvailableForTileKey:(struct _GEOTileKey *)arg0 ;
-(BOOL)isDisputedBordersAllowlistedForTileKey:(struct _GEOTileKey *)arg0 country:(id)arg1 region:(id)arg2 ;
-(BOOL)isMuninEnabled;
-(BOOL)supportsTileStyle:(int)arg0 size:(int)arg1 scale:(int)arg2 ;
-(BOOL)useProxyAuthForTileKey:(struct _GEOTileKey *)arg0 ;
-(CGFloat)timeToLiveForTileKey:(struct _GEOTileKey *)arg0 ;
-(NSUInteger)_fromgeod_maximumZoomLevelForStyle:(int)arg0 scale:(int)arg1 outSize:(*int)arg2 ;
-(id)allRegionalResourceNames;
-(id)allResourceNames;
-(id)allResourcePaths;
-(id)authToken;
-(id)bestLocalizedStringForDisplayStringAtIndex:(NSUInteger)arg0 ;
-(id)captureStatePlistWithHints:(struct os_state_hints_s *)arg0 ;
-(id)detailedDescription;
-(id)disputedBordersQueryItemsForTileKey:(struct _GEOTileKey *)arg0 country:(id)arg1 region:(id)arg2 ;
-(id)init;
-(id)languageForTileKey:(struct _GEOTileKey *)arg0 ;
-(id)languageForTileKey:(struct _GEOTileKey *)arg0 overrideLocale:(id)arg1 ;
-(id)localizationURLStringIfNecessaryForActiveTileSet:(id)arg0 tileKey:(struct _GEOTileKey *)arg1 overrideLocale:(id)arg2 ;
-(id)muninBucketURLForId:(unsigned short)arg0 lod:(unsigned char)arg1 ;
-(id)pathForResourceWithName:(id)arg0 ;
-(id)updateProgress;
-(int)mapMatchingTileSetStyle;
-(int)requestStyleForTileKey:(struct _GEOTileKey *)arg0 ;
-(unsigned int)mapMatchingZoomLevel;
-(unsigned int)versionForTileKey:(struct _GEOTileKey *)arg0 ;
-(void)_localeChanged:(id)arg0 ;
-(void)activateResourceScale:(int)arg0 ;
-(void)activateResourceScenario:(int)arg0 ;
-(void)addNetworkActivityHandler:(id)arg0 ;
-(void)addServerProxyObserver:(id)arg0 ;
-(void)addTileGroupObserver:(id)arg0 queue:(id)arg1 ;
-(void)closeServerConnection;
-(void)closeServerConnection:(BOOL)arg0 ;
-(void)deactivateResourceScale:(int)arg0 ;
-(void)deactivateResourceScenario:(int)arg0 ;
-(void)dealloc;
-(void)devResourcesFolderDidChange;
-(void)getResourceManifestWithHandler:(id)arg0 ;
-(void)openServerConnection;
-(void)removeDevResources;
-(void)removeServerProxyObserver:(id)arg0 ;
-(void)removeTileGroupObserver:(id)arg0 ;
-(void)serverProxy:(id)arg0 didChangeActiveTileGroup:(id)arg1 finishedCallback:(id)arg2 ;
-(void)serverProxy:(id)arg0 didLoadActiveTileGroup:(id)arg1 ;
-(void)serverProxyDidStopLoadingResources:(id)arg0 ;
-(void)serverProxyDidStopUpdatingResourceManifest:(id)arg0 ;
-(void)serverProxyNeedsWiFiResourceActivity:(id)arg0 ;
-(void)serverProxyWillStartLoadingResources:(id)arg0 ;
-(void)serverProxyWillStartUpdatingResourceManifest:(id)arg0 ;
-(void)setConstantlyChangeTileGroup:(BOOL)arg0 ;
-(void)setConstantlyChangeTileGroupInterval:(CGFloat)arg0 ;
-(void)setManifestToken:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateManifest:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)updateManifest:(id)arg0 ;
-(void)updateManifestIfNecessary:(id)arg0 ;


@end


#endif
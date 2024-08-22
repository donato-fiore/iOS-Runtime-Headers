// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEORESOURCEMANIFESTSERVERLOCALPROXY_H
#define GEORESOURCEMANIFESTSERVERLOCALPROXY_H

@class NSOperationQueue, NSString, NSError, NSMutableArray, NSArray, NSProgress, geo_isolater;
@protocol GEOResourceFiltersManagerDelegate, GEODataStateCapturing, GEOKeyBagProtectedDataDidBecomeAvailableObserver, GEOConfigChangeListenerDelegate, GEOTileGroupActivationSessionDelegate, GEOResourceManifestServerProxy, OS_dispatch_queue, OS_dispatch_source, GEOResourceManifestServerProxyDelegate;

#import <Foundation/Foundation.h>

#import "GEOResourceManifestDownloadTask.h"
#import "GEOResourceManifestConfiguration.h"
#import "GEOResourceManifestDownload.h"
#import "GEOActiveTileGroup.h"
#import "GEOResourceFiltersManager.h"
#import "GEOTileGroupActivationSession.h"

@interface GEOResourceManifestServerLocalProxy : NSObject <GEOResourceFiltersManagerDelegate, GEODataStateCapturing, GEOKeyBagProtectedDataDidBecomeAvailableObserver, GEOConfigChangeListenerDelegate, GEOTileGroupActivationSessionDelegate, GEOResourceManifestServerProxy>

 {
    GEOResourceManifestDownloadTask *_manifestDownloadTask;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSOperationQueue *_workOperationQueue;
    GEOResourceManifestConfiguration *_configuration;
    BOOL _wantsManifestUpdateOnReachabilityChange;
    NSObject<OS_dispatch_source> *_manifestUpdateTimer;
    BOOL _wantsTileGroupUpdateOnReachabilityChange;
    NSObject<OS_dispatch_source> *_tileGroupUpdateTimer;
    GEOResourceManifestDownload *_resourceManifest;
    GEOActiveTileGroup *_activeTileGroup;
    BOOL _started;
    NSUInteger _manifestRetryCount;
    CGFloat _lastManifestRetryTimestamp;
    NSUInteger _tileGroupRetryCount;
    CGFloat _lastTileGroupRetryTimestamp;
    NSString *_authToken;
    os_unfair_lock_s _authTokenLock;
    NSError *_lastResourceManifestLoadError;
    NSMutableArray *_manifestUpdateCompletionHandlers;
    NSMutableArray *_opportunisticManifestUpdateCompletionHandlers;
    NSInteger _currentManifestUpdateType;
    GEOResourceFiltersManager *_filtersManager;
    NSArray *_tileGroupMigrators;
    NSUInteger _stateCaptureHandle;
    NSProgress *_updateProgress;
    NSProgress *_currentUpdateProgress;
    GEOTileGroupActivationSession *_tileGroupActivationSession;
    BOOL _tileGroupActivationSessionHasFinishedFirstTileGroupChange;
    BOOL _tileGroupActivationShouldFlushTileCache;
    geo_isolater *_activeTileGroupIsolater;
}


@property (retain, nonatomic) GEOActiveTileGroup *activeTileGroup;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<GEOResourceManifestServerProxyDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_updateManifestIfNecessary:(id)arg0 ;
-(BOOL)_writeActiveTileGroupToDisk:(id)arg0 error:(*id)arg1 ;
-(BOOL)_writeManifestToDisk:(id)arg0 error:(*id)arg1 ;
-(BOOL)_writeManifestToDiskWithUpdatedMetadataForURL:(id)arg0 eTag:(id)arg1 error:(*id)arg2 ;
-(NSUInteger)maximumZoomLevelForStyle:(int)arg0 scale:(int)arg1 outSize:(*int)arg2 ;
-(id)_idealTileGroupToUse;
-(id)_manifestURL;
-(id)authToken;
-(id)captureStateDataWithHints:(struct os_state_hints_s *)arg0 ;
-(id)configuration;
-(id)initWithDelegate:(id)arg0 configuration:(id)arg1 ;
-(id)migrationTaskOptions;
-(id)serverOperationQueue;
-(id)serverQueue;
-(id)updateProgress;
-(void)_activeTileGroupOverridesChanged:(id)arg0 ;
-(void)_addManifestUpdateCompletionHandler:(id)arg0 ;
-(void)_addOpportunisticManifestUpdateCompletionHandler:(id)arg0 ;
-(void)_cancelManifestUpdate;
-(void)_cancelMigrationTasks;
-(void)_changeActiveTileGroupIfNeededForManifestURL:(id)arg0 oldURL:(id)arg1 ;
-(void)_considerChangingActiveTileGroup;
-(void)_countryProvidersDidChange:(id)arg0 ;
-(void)_createMigrators;
-(void)_forceChangeActiveTileGroup:(id)arg0 flushTileCache:(BOOL)arg1 ;
-(void)_handleManifestUpdateError:(id)arg0 ;
-(void)_loadFromDisk;
-(void)_manifestURLDidChange:(id)arg0 ;
-(void)_networkDefaultsDidChange:(id)arg0 ;
-(void)_notifyImmediateManifestUpdateCompletionHandlers:(id)arg0 ;
-(void)_notifyManifestUpdateCompletionHandlers:(id)arg0 ;
-(void)_notifyOpportunisticManifestUpdateCompletionHandlers:(id)arg0 ;
-(void)_reachabilityChanged:(id)arg0 ;
-(void)_resetCurrentUpdateState;
-(void)_scheduleTileGroupUpdateTimerWithTimeInterval:(CGFloat)arg0 ;
-(void)_scheduleUpdateTimerWithTimeInterval:(CGFloat)arg0 ;
-(void)_setCurrentUpdateType:(NSInteger)arg0 completionBlock:(id)arg1 ;
-(void)_startServer;
-(void)_terminationRequested:(id)arg0 ;
-(void)_tileGroupTimerFired;
-(void)_updateManifest:(id)arg0 ;
-(void)_updateTimerFired;
-(void)activateResourceScale:(int)arg0 ;
-(void)activateResourceScenario:(int)arg0 ;
-(void)activationSession:(id)arg0 didChangeActiveTileGroup:(id)arg1 completionHandler:(id)arg2 ;
-(void)activationSession:(id)arg0 didCompleteWithErrors:(id)arg1 ;
-(void)cancelCurrentManifestUpdate;
-(void)closeConnection;
-(void)deactivateResourceScale:(int)arg0 ;
-(void)deactivateResourceScenario:(int)arg0 ;
-(void)dealloc;
-(void)filtersManagerDidChangeActiveFilters:(id)arg0 ;
-(void)forceUpdate:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)getResourceManifestWithHandler:(id)arg0 ;
-(void)openConnection;
-(void)performOpportunisticResourceLoading;
-(void)protectedDataDidBecomeAvailable:(id)arg0 ;
-(void)setManifestToken:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateIfNecessary:(id)arg0 ;
-(void)valueChangedForGEOConfigKey:(struct ? )arg0 ;


@end


#endif
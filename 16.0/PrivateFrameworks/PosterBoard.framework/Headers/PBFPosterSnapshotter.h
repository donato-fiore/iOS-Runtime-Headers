// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBFPOSTERSNAPSHOTTER_H
#define PBFPOSTERSNAPSHOTTER_H

@class FBScene, NSString, NSHashTable, NSMutableDictionary, NSMapTable, NSMutableArray, RBSAssertion, PRPosterConfiguredProperties, NSArray, NSError, PRSServerPosterPath, NSDictionary;
@protocol FBSceneDelegate, BSInvalidatable, OS_dispatch_queue, PRPosterExtensionDescribing, PBFExtensionProviding, PBFRuntimeAssertionProviding;

#import <Foundation/Foundation.h>

#import "PBFPosterSnapshotRequest.h"

@interface PBFPosterSnapshotter : NSObject <FBSceneDelegate, BSInvalidatable>

 {
    FBScene *_scene;
    NSString *_identifier;
    BOOL _lock_started;
    BOOL _lock_finished;
    BOOL _lock_cleanedUp;
    BOOL _lock_sceneReady;
    BOOL _lock_isProcessingReceivedSnapshots;
    BOOL _lock_didLoadAllFromDisk;
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    CGFloat _lock_startTime;
    CGFloat _lock_snapshotsRequestedTime;
    CGFloat _lock_endTime;
    NSHashTable *_lock_observers;
    NSMutableDictionary *_lock_snapshotsByDefinition;
    NSMapTable *_lock_snapshotImagesByDefinition;
    NSMutableArray *_outstandingDefinitionsNeedingSnapshots;
    NSString *_previewIdentifier;
    BOOL _shouldWaitForComplicationRendering;
    BOOL _complicationRenderingCompleted;
    BOOL _isCapturingSnapshots;
    RBSAssertion *_extensionPrewarmRuntimeAssertion;
}


@property (readonly, nonatomic) PRPosterConfiguredProperties *configuredProperties; // ivar: _configuredProperties
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *definitions; // ivar: _definitions
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat elapsedTime;
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSObject<PRPosterExtensionDescribing> *extension; // ivar: _extension
@property (readonly, nonatomic) NSObject<PBFExtensionProviding> *extensionProvider; // ivar: _extensionProvider
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isFinished;
@property (readonly, nonatomic) BOOL needsToBootupExtension;
@property (nonatomic) BOOL readFromPosterPathCacheIfAvailable; // ivar: _readFromPosterPathCacheIfAvailable
@property (readonly, nonatomic) PBFPosterSnapshotRequest *request; // ivar: _request
@property (readonly, nonatomic) NSObject<PBFRuntimeAssertionProviding> *runtimeAssertionProvider; // ivar: _runtimeAssertionProvider
@property (readonly, nonatomic) PRSServerPosterPath *serverPosterPath; // ivar: _serverPosterPath
@property (readonly, nonatomic) NSDictionary *snapshotImagesByDefinition;
@property (readonly, nonatomic) NSDictionary *snapshotsByDefinition;
@property (readonly) Class superclass;


+(id)createSnapshotUsingIOSurface:(id)arg0 snapshotScale:(CGFloat)arg1 imageEncoder:(id)arg2 error:(*id)arg3 ;
+(id)new;
-(BOOL)_definitionAllowsTransparency:(id)arg0 ;
-(BOOL)_hasStarted;
-(BOOL)_isProcessingReceivedSnapshots;
-(BOOL)_isSceneReady;
-(BOOL)_lock_didAccumulateAllSnapshots;
-(BOOL)_lock_isSnapshotPopulatedForDefinition:(id)arg0 ;
-(BOOL)_lock_populateGalleryHeroSnapshotIfNeeded;
-(BOOL)_lock_populateSnapshotsFromAssetCatalogIfPossible;
-(BOOL)_lock_populateSnapshotsFromDiskIfPossible;
-(BOOL)_lock_storeImage:(id)arg0 definition:(id)arg1 error:(*id)arg2 ;
-(BOOL)_needsGalleryHeroSnapshot;
-(BOOL)_wasCleanedUp;
-(BOOL)checkIfSnapshotterIsPreparedToExecute:(*id)arg0 ;
-(BOOL)shouldReleaseMediaResourcesOnInvalidate;
-(BOOL)start;
-(NSInteger)_renderingContentForDefinition:(id)arg0 ;
-(NSInteger)_snapshotOptionsForDefinition:(id)arg0 ;
-(id)_encoderForDefinition:(id)arg0 ;
-(id)_fetchExtensionWithError:(*id)arg0 ;
-(id)extensionWithError:(*id)arg0 ;
-(id)init;
-(id)initWithExtensionProvider:(id)arg0 contents:(id)arg1 configuredProperties:(id)arg2 definitions:(id)arg3 intention:(NSUInteger)arg4 previewIdentifier:(id)arg5 runtimeAssertionProvider:(id)arg6 ;
-(id)initWithRequest:(id)arg0 extensionProvider:(id)arg1 runtimeAssertionProvider:(id)arg2 ;
-(void)_backgroundQueue_createSnapshotsUsingFetchedImagesWithError:(id)arg0 ;
-(void)_cancelWithErrorCode:(NSInteger)arg0 reason:(id)arg1 ;
-(void)_captureSnapshotWithScene:(id)arg0 ;
-(void)_cleanup;
-(void)_enumerateObservers:(id)arg0 ;
-(void)_finishWithError:(id)arg0 ;
-(void)_lock_enumerateObservers:(id)arg0 ;
-(void)_main_start;
-(void)_processOutstandingSnapshotDefinitionsWithScene:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)cancelWithReason:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)removeObserver:(id)arg0 ;
-(void)scene:(id)arg0 didReceiveActions:(id)arg1 ;
-(void)scene:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 oldClientSettings:(id)arg2 transitionContext:(id)arg3 ;
-(void)sceneContentStateDidChange:(id)arg0 ;
-(void)sceneWillDeactivate:(id)arg0 withError:(id)arg1 ;


@end


#endif
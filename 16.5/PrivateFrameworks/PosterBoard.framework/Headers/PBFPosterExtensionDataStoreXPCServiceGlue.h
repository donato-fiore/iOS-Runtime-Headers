// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBFPOSTEREXTENSIONDATASTOREXPCSERVICEGLUE_H
#define PBFPOSTEREXTENSIONDATASTOREXPCSERVICEGLUE_H

@class CSProminentLayoutController, NSString, PRSServer;
@protocol PRSServerDelegate, PBFPosterExtensionDataStoreObserver, PBFWallpaperPublisherDelegate, PBFBehaviorAssertionProviding;

#import <Foundation/Foundation.h>

#import "PBFRuntimeAssertionManager.h"
#import "PBFPosterExtensionDataStore.h"
#import "PBFWallpaperPublisher.h"

@interface PBFPosterExtensionDataStoreXPCServiceGlue : NSObject <PRSServerDelegate, PBFPosterExtensionDataStoreObserver, PBFWallpaperPublisherDelegate, PBFBehaviorAssertionProviding>

 {
    PBFRuntimeAssertionManager *_lock_runtimeAssertionManager;
    PBFPosterExtensionDataStore *_lock_dataStore;
    CSProminentLayoutController *_layoutController;
    PBFWallpaperPublisher *_wallpaperPublisher;
    os_unfair_lock_s _lock;
    os_unfair_lock_s _publisherUpdateLock;
}


@property (readonly, nonatomic) PBFPosterExtensionDataStore *dataStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PBFRuntimeAssertionManager *runtimeAssertionManager;
@property (readonly, nonatomic) PRSServer *server; // ivar: _server
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_clearMigrationFlagsWithError:(*id)arg0 ;
-(BOOL)_hasComplicationsForPosterConfiguration:(id)arg0 ;
-(BOOL)_hasValidConfigurationForPoster:(id)arg0 ;
-(BOOL)_lock_performNecessaryMigrationsForDataStoreAtURL:(id)arg0 shouldForce:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)_lock_reapSnapshots;
-(BOOL)_migration_checkIfLanguageChangeOccurred;
-(id)_baseDataStoreURL;
-(id)_dataStoreWithError:(*id)arg0 ;
-(id)acquireEditingSessionAssertionForProvider:(id)arg0 withReason:(id)arg1 ;
-(id)acquireSnapshotterDisabledAssertionForProvider:(id)arg0 withReason:(id)arg1 ;
-(id)acquireSnapshotterInUseAssertionWithReason:(id)arg0 ;
-(id)activeEditingSessionAssertionExtensionIdentifiers;
-(id)buildDataStoreForURL:(id)arg0 runtimeAssertionProvider:(id)arg1 observer:(id)arg2 wasMigrationJustPerformed:(BOOL)arg3 error:(*id)arg4 ;
-(id)initWithOptions:(NSUInteger)arg0 ;
-(struct CGRect )_cutoutBoundsForObstructionBounds:(struct CGRect )arg0 orientation:(NSInteger)arg1 ;
-(struct CGRect )_normalizedBounds:(struct CGRect )arg0 forScreenBounds:(struct CGRect )arg1 ;
-(struct CGRect )_normalizedBounds:(struct CGRect )arg0 orientation:(NSInteger)arg1 ;
-(struct CGRect )_prominentObstructionForConfiguration:(id)arg0 orientation:(NSInteger)arg1 ;
-(struct CGRect )_prominentObstructionForOrientation:(NSInteger)arg0 showingComplications:(BOOL)arg1 ;
-(struct CGRect )_screenBoundsForOrientation:(NSInteger)arg0 ;
-(void)_deleteDataStoreWithCompletion:(id)arg0 ;
-(void)_deleteTransientData:(BOOL)arg0 ;
-(void)_localeDidChange:(id)arg0 ;
-(void)_lock_reapDescriptors;
-(void)_lock_reapEntirePosterBoardDataStore;
-(void)_lock_reapExtensionProviderInfo;
-(void)_lock_reapGallery;
-(void)_lock_reapTransientData:(BOOL)arg0 ;
-(void)_lock_teardownDataStoreWithError:(*id)arg0 ;
-(void)_migration_updateStashedLocaleIdentifier;
-(void)_performPublisherChangeForDataStore:(id)arg0 block:(id)arg1 ;
-(void)_teardownDataStoreWithCompletion:(id)arg0 ;
-(void)addBehaviorAssertionObserver:(id)arg0 ;
-(void)posterExtensionDataStore:(id)arg0 didInitializeWithSwitcherConfiguration:(id)arg1 withChanges:(BOOL)arg2 ;
-(void)posterExtensionDataStore:(id)arg0 didUpdateActiveConfiguration:(id)arg1 associatedConfiguration:(id)arg2 ;
-(void)posterExtensionDataStore:(id)arg0 didUpdateConfiguration:(id)arg1 ;
-(void)posterExtensionDataStore:(id)arg0 didUpdateSelectedConfiguration:(id)arg1 associatedConfiguration:(id)arg2 ;
-(void)posterExtensionDataStore:(id)arg0 didUpdateSnapshotForPath:(id)arg1 forDefinition:(id)arg2 ;
-(void)posterExtensionDataStore:(id)arg0 posterConfiguration:(id)arg1 didUpdateAssociatedHomeScreenPosterConfigurationTo:(id)arg2 ;
-(void)removeBehaviorAssertionObserver:(id)arg0 ;
-(void)server:(id)arg0 associateConfigurationMatchingUUID:(id)arg1 focusModeActivityUUID:(id)arg2 completion:(id)arg3 ;
-(void)server:(id)arg0 clearMigrationFlags:(id)arg1 ;
-(void)server:(id)arg0 createPosterConfigurationForProviderIdentifier:(id)arg1 posterDescriptorIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)server:(id)arg0 deleteDataStoreWithCompletion:(id)arg1 ;
-(void)server:(id)arg0 deletePosterConfigurationsMatchingUUID:(id)arg1 completion:(id)arg2 ;
-(void)server:(id)arg0 deletePosterDescriptorsForExtension:(id)arg1 completion:(id)arg2 ;
-(void)server:(id)arg0 deleteSnapshots:(BOOL)arg1 completion:(id)arg2 ;
-(void)server:(id)arg0 deleteTransientDataWithCompletion:(id)arg1 ;
-(void)server:(id)arg0 exportPosterConfigurationMatchingUUID:(id)arg1 completion:(id)arg2 ;
-(void)server:(id)arg0 fetchActivePosterConfiguration:(id)arg1 ;
-(void)server:(id)arg0 fetchAssociatedHomeScreenPosterConfigurationUUID:(id)arg1 completion:(id)arg2 ;
-(void)server:(id)arg0 fetchContentCutoutBoundsForPosterConfiguration:(id)arg1 orientation:(NSInteger)arg2 completion:(id)arg3 ;
-(void)server:(id)arg0 fetchContentObstructionBoundsForPosterConfiguration:(id)arg1 orientation:(NSInteger)arg2 completion:(id)arg3 ;
-(void)server:(id)arg0 fetchExtensionIdentifiersWithCompletion:(id)arg1 ;
-(void)server:(id)arg0 fetchFocusUUIDForConfiguration:(id)arg1 completion:(id)arg2 ;
-(void)server:(id)arg0 fetchGallery:(id)arg1 ;
-(void)server:(id)arg0 fetchLimitedOcclusionBoundsForPosterConfiguration:(id)arg1 orientation:(NSInteger)arg2 completion:(id)arg3 ;
-(void)server:(id)arg0 fetchMaximalContentCutoutBoundsForOrientation:(NSInteger)arg1 completion:(id)arg2 ;
-(void)server:(id)arg0 fetchObscurableBoundsForPosterConfiguration:(id)arg1 orientation:(NSInteger)arg2 completion:(id)arg3 ;
-(void)server:(id)arg0 fetchPosterConfigurations:(id)arg1 ;
-(void)server:(id)arg0 fetchPosterDescriptorsForExtension:(id)arg1 completion:(id)arg2 ;
-(void)server:(id)arg0 fetchPosterSnapshotsWithRequest:(id)arg1 completion:(id)arg2 ;
-(void)server:(id)arg0 fetchRuntimeAssertionState:(id)arg1 ;
-(void)server:(id)arg0 fetchSelectedConfiguration:(id)arg1 ;
-(void)server:(id)arg0 fetchStaticPosterDescriptorsForExtension:(id)arg1 completion:(id)arg2 ;
-(void)server:(id)arg0 gatherDataFreshnessState:(id)arg1 ;
-(void)server:(id)arg0 importPosterConfigurationFromArchiveData:(id)arg1 completion:(id)arg2 ;
-(void)server:(id)arg0 ingestSnapshotCollection:(id)arg1 forPosterConfigurationUUID:(id)arg2 completion:(id)arg3 ;
-(void)server:(id)arg0 notifyFocusModeDidChange:(id)arg1 completion:(id)arg2 ;
-(void)server:(id)arg0 notifyPosterBoardOfApplicationUpdatesWithCompletion:(id)arg1 ;
-(void)server:(id)arg0 overnightUpdateWithCompletion:(id)arg1 ;
-(void)server:(id)arg0 prewarmWithCompletion:(id)arg1 ;
-(void)server:(id)arg0 pushPosterGalleryUpdate:(id)arg1 completion:(id)arg2 ;
-(void)server:(id)arg0 pushToProactiveWithCompletion:(id)arg1 ;
-(void)server:(id)arg0 refreshPosterConfigurationMatchingUUID:(id)arg1 sessionInfo:(id)arg2 completion:(id)arg3 ;
-(void)server:(id)arg0 refreshPosterDescriptorsForExtension:(id)arg1 sessionInfo:(id)arg2 completion:(id)arg3 ;
-(void)server:(id)arg0 refreshSnapshotForGalleryItemsMatchingDescriptorIdentifier:(id)arg1 extensionIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)server:(id)arg0 refreshSnapshotForPosterConfigurationMatchUUID:(id)arg1 completion:(id)arg2 ;
-(void)server:(id)arg0 removeAllFocusConfigurationsMatchingFocusUUID:(id)arg1 completion:(id)arg2 ;
-(void)server:(id)arg0 retrieveGallery:(id)arg1 ;
-(void)server:(id)arg0 runMigration:(BOOL)arg1 completion:(id)arg2 ;
-(void)server:(id)arg0 updatePosterConfigurationMatchingUUID:(id)arg1 updates:(id)arg2 completion:(id)arg3 ;
-(void)server:(id)arg0 updateToSelectedConfigurationMatchingUUID:(id)arg1 from:(id)arg2 completion:(id)arg3 ;


@end


#endif
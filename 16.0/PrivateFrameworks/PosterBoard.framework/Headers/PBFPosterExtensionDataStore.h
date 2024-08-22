// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBFPOSTEREXTENSIONDATASTORE_H
#define PBFPOSTEREXTENSIONDATASTORE_H

@class NSURL, NSHashTable, NSDictionary, ATXFaceGalleryConfiguration, NSDate, NSMutableDictionary, PRPosterConfiguration, PRSwitcherConfiguration, NSArray, NSMutableSet, NSOperationQueue, NSNumber, NSString;
@protocol PBFPosterExtensionProviderDelegate, PRPosterContentSnapshotProviding, PBFPosterExtensionDataStoreAssertionManagerObserver, PBFBehaviorAssertionObserver, PBFExtensionProviding, BSInvalidatable, PBFBehaviorAssertionProviding, PBFRuntimeAssertionProviding, PBFPosterExtensionProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PBFPosterSnapshotManager.h"
#import "PBFComplicationSnapshotService.h"
#import "PBFPosterExtensionDataStoreAssertionManager.h"
#import "PBFGalleryConfiguration.h"

@interface PBFPosterExtensionDataStore : NSObject <PBFPosterExtensionProviderDelegate, PRPosterContentSnapshotProviding, PBFPosterExtensionDataStoreAssertionManagerObserver, PBFBehaviorAssertionObserver, PBFExtensionProviding, BSInvalidatable, PBFBehaviorAssertionProviding>

 {
    NSURL *_baseURL;
    NSURL *_extensionEnvironmentURL;
    id<PBFRuntimeAssertionProviding> *_runtimeAssertionProvider;
    id<PBFPosterExtensionProvider> *_dataStoreSource;
    PBFPosterSnapshotManager *_snapshotManager;
    PBFComplicationSnapshotService *_complicationSnapshotService;
    PBFPosterExtensionDataStoreAssertionManager *_assertionManager;
    NSHashTable *_observers;
    NSDictionary *_extensionProvidingLock_extensionsByIdentifier;
    ATXFaceGalleryConfiguration *_stateLock_lastUsefulGalleryConfiguration;
    NSDate *_stateLock_lastUsefulGalleryConfigurationPersistDate;
    PBFGalleryConfiguration *_stateLock_configuration;
    ATXFaceGalleryConfiguration *_stateLock_suggestedLayout;
    NSMutableDictionary *_stateLock_extensionStoreCoordinatorForExtensionBundleIdentifier;
    NSMutableDictionary *_stateLock_extensionHandlerForExtensionBundleIdentifier;
    NSMutableDictionary *_stateLock_descriptorsForExtensionBundleIdentifier;
    NSMutableDictionary *_stateLock_staticDescriptorsForExtensionBundleIdentifier;
    PRPosterConfiguration *_stateLock_selectedConfiguration;
    PRSwitcherConfiguration *_stateLock_switcherConfiguration;
    NSArray *_stateLock_configurationUUIDsSorted;
    NSMutableSet *_stateLock_activePathAssertions;
    os_unfair_lock_s _extensionProvidingLock;
    os_unfair_lock_s _prewarmLock;
    os_unfair_lock_s _stateLock;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject<OS_dispatch_queue> *_galleryRefreshQueue;
    NSObject<OS_dispatch_queue> *_galleryPushQueue;
    NSOperationQueue *_refreshDescriptorsQueue;
    NSOperationQueue *_refreshConfigurationQueue;
    BOOL _stateLock_updatingExtensions;
    BOOL _stateLock_initialExtensionsLoaded;
    NSNumber *_stateLock_hasBeenUnlockedSinceBoot;
    NSNumber *_stateLock_wasMigrationJustPerformed;
}


@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) BOOL canPersistNewPosterConfiguration;
@property (readonly, nonatomic) PBFGalleryConfiguration *currentGalleryConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSURL *extensionStoreCoordinatorContainerURL; // ivar: _extensionStoreCoordinatorContainerURL
@property (readonly, nonatomic) NSURL *extensionStoreCoordinatorPurgatoryURL; // ivar: _extensionStoreCoordinatorPurgatoryURL
@property (readonly, nonatomic) NSURL *galleryCacheURL; // ivar: _galleryCacheURL
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *knownExtensions;
@property (readonly, copy, nonatomic) NSArray *posterConfigurations;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) PRSwitcherConfiguration *switcherConfiguration;


+(NSInteger)dataStoreVersion;
+(NSInteger)maximumPosterConfigurationCount;
+(id)_determineActivePosterConfigurationForPosterConfigurationsSortedByUse:(id)arg0 activityMode:(id)arg1 selectedPosterConfiguration:(id)arg2 transitionContext:(id)arg3 ;
+(id)dataStoreAtURL:(id)arg0 runtimeAssertionProvider:(id)arg1 observer:(id)arg2 wasMigrationJustPerformed:(BOOL)arg3 error:(*id)arg4 ;
+(id)dataStoreExtensionContainerURLForBaseURL:(id)arg0 ;
+(id)dataStoreExtensionContainerURLForBaseURL:(id)arg0 version:(NSUInteger)arg1 ;
+(id)dataStoreExtensionPurgatoryURLForBaseURL:(id)arg0 version:(NSUInteger)arg1 ;
+(id)dataStoreURLForBaseURL:(id)arg0 version:(NSUInteger)arg1 ;
+(id)galleryCacheURLForBaseURL:(id)arg0 ;
+(id)galleryCacheURLForBaseURL:(id)arg0 version:(NSUInteger)arg1 ;
+(id)switcherConfigurationOrderingURLForBaseURL:(id)arg0 version:(NSUInteger)arg1 ;
+(id)switcherSelectedConfigurationURLForBaseURL:(id)arg0 version:(NSUInteger)arg1 ;
+(void)setupDataStoreForBaseURL:(id)arg0 version:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)_ingestReloadedDescriptorsForExtensionBundleIdentifier:(id)arg0 preReloadDescriptors:(id)arg1 postReloadDescriptors:(id)arg2 error:(*id)arg3 ;
-(BOOL)_stateLock_cleanupAfterDeletedExtension:(id)arg0 error:(*id)arg1 ;
-(BOOL)_stateLock_deletePosterConfigurationsMatchingUUID:(id)arg0 error:(*id)arg1 ;
-(BOOL)_stateLock_hasBeenUnlockedSinceBoot;
-(BOOL)_stateLock_persistGalleryConfiguration:(id)arg0 lastUpdateDate:(*id)arg1 error:(*id)arg2 ;
-(BOOL)_stateLock_setupEnvironmentForExtension:(id)arg0 wasUpdated:(*BOOL)arg1 error:(*id)arg2 ;
-(BOOL)_stateLock_updateDescriptorsFromStaticDescriptorsForExtensionBundleIdentifier:(id)arg0 reason:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)_stateLock_updateEnvironmentForExtension:(id)arg0 error:(*id)arg1 ;
-(BOOL)deletePosterConfigurationsMatchingUUID:(id)arg0 error:(*id)arg1 ;
-(BOOL)deletePosterDescriptorsForExtensionBundleIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)_stateLock_activeConfiguration;
-(id)_stateLock_buildSwitcherConfigurationWithContext:(id)arg0 outMutated:(*BOOL)arg1 ;
-(id)_stateLock_createPosterConfigurationForProviderIdentifier:(id)arg0 posterDescriptorIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)_stateLock_deletePosterDescriptorsForExtensionBundleIdentifier:(id)arg0 ;
-(id)_stateLock_descriptorStoreCoordinatorForIdentifier:(id)arg0 extensionStoreCoordinator:(id)arg1 createIfNil:(BOOL)arg2 error:(*id)arg3 ;
-(id)_stateLock_enqueueReloadDescriptorsOperationForExtensionBundleIdentifier:(id)arg0 reason:(id)arg1 powerLogReason:(NSInteger)arg2 postEnqueueGalleryUpdateOptions:(NSUInteger)arg3 sessionInfo:(id)arg4 completion:(id)arg5 ;
-(id)_stateLock_extensionBundleIdentifierForConfigurationUUID:(id)arg0 ;
-(id)_stateLock_extensionForExtensionBundleIdentifier:(id)arg0 ;
-(id)_stateLock_extensionStoreCoordinatorForExtensionBundleIdentifier:(id)arg0 ;
-(id)_stateLock_fetchPosterConfigurations;
-(id)_stateLock_fetchPosterConfigurationsSortedByUse:(BOOL)arg0 ;
-(id)_stateLock_homeScreenPosterConfigurationForPosterConfigurations;
-(id)_stateLock_ingestPosterConfiguration:(id)arg0 fromIdentity:(id)arg1 parentIdentity:(id)arg2 amalgamatedConfiguredProperties:(id)arg3 options:(NSUInteger)arg4 powerLogReason:(NSInteger)arg5 error:(*id)arg6 ;
-(id)_stateLock_knownPosterDescriptorsForExtensionBundleIdentifier:(id)arg0 ;
-(id)_stateLock_knownStaticPosterDescriptorsForExtensionBundleIdentifier:(id)arg0 ;
-(id)_stateLock_lastUseDatesForPosterConfigurations;
-(id)_stateLock_posterConfigurationOrdering;
-(id)_stateLock_posterConfigurationPathForUUID:(id)arg0 ;
-(id)_stateLock_selectedConfiguration;
-(id)_stateLock_updateDataStoreForSwitcherConfiguration:(id)arg0 options:(NSUInteger)arg1 reason:(id)arg2 error:(*id)arg3 ;
-(id)acquireEditingSessionAssertionForProvider:(id)arg0 withReason:(id)arg1 ;
-(id)acquireSnapshotterDisabledAssertionForProvider:(id)arg0 withReason:(id)arg1 ;
-(id)acquireSnapshotterInUseAssertionWithReason:(id)arg0 ;
-(id)activeEditingSessionAssertionExtensionIdentifiers;
-(id)dataFreshnessForComponents:(id)arg0 ;
-(id)dataFreshnessForComponents:(id)arg0 refreshStrategy:(NSInteger)arg1 ;
-(id)exportPosterConfigurationMatchingUUID:(id)arg0 error:(*id)arg1 ;
-(id)ingestIncomingPosterConfiguration:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)initWithURL:(id)arg0 runtimeAssertionProvider:(id)arg1 observer:(id)arg2 wasMigrationJustPerformed:(BOOL)arg3 error:(*id)arg4 ;
-(id)posterDescriptorsForExtensionBundleIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)posterDescriptorsForOperation:(id)arg0 ;
-(id)posterStaticDescriptorsForExtensionBundleIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)providerForExtensionIdentifier:(id)arg0 ;
-(id)providerForPath:(id)arg0 ;
-(id)staticPosterDescriptorsForExtensionBundleIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)updateDataStoreForIncomingFocusModeChange:(id)arg0 error:(*id)arg1 ;
-(id)updateDataStoreForSwitcherConfiguration:(id)arg0 options:(NSUInteger)arg1 reason:(id)arg2 error:(*id)arg3 ;
-(id)updateDataStoreForSwitcherConfiguration:(id)arg0 reason:(id)arg1 error:(*id)arg2 ;
-(void)_finishUpdateExtensionUpdateWithOptions:(NSUInteger)arg0 updateExtensionSession:(id)arg1 pushToProactiveError:(id)arg2 runtimeAssertion:(id)arg3 ;
-(void)_ingestRefreshPosterConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)_notifyObserversDidAddConfiguration:(id)arg0 ;
-(void)_notifyObserversDidDeleteConfiguration:(id)arg0 ;
-(void)_notifyObserversDidInitializeWithSwitcherConfiguration:(id)arg0 withChanges:(BOOL)arg1 ;
-(void)_notifyObserversDidUpdateActiveConfiguration:(id)arg0 associatedConfiguration:(id)arg1 ;
-(void)_notifyObserversDidUpdateConfiguration:(id)arg0 ;
-(void)_notifyObserversDidUpdateConfiguration:(id)arg0 homeScreenAssociatedConfiguration:(id)arg1 ;
-(void)_notifyObserversDidUpdateConfigurations;
-(void)_notifyObserversDidUpdateExtensions;
-(void)_notifyObserversDidUpdateGalleryConfiguration:(id)arg0 ;
-(void)_notifyObserversDidUpdatePosterDescriptorsForExtensionBundleIdentifier:(id)arg0 ;
-(void)_notifyObserversDidUpdateSelectedConfiguration:(id)arg0 associatedConfiguration:(id)arg1 ;
-(void)_notifyObserversDidUpdateSnapshotForConfiguration:(id)arg0 ;
-(void)_pushFaceGalleryConfigurationUpdate:(id)arg0 options:(NSUInteger)arg1 fetchError:(id)arg2 completion:(id)arg3 ;
-(void)_setupDataStoreSource;
-(void)_setupExtensionEnvironment;
-(void)_setupGalleryEnvironment;
-(void)_stateLock_cullDataForInvalidExtensions;
-(void)_stateLock_enqueueGalleryConfigurationUpdateWithOptions:(NSUInteger)arg0 powerLogReason:(NSInteger)arg1 completion:(id)arg2 ;
-(void)_stateLock_enqueueRefreshPosterConfigurationMatchingUUID:(id)arg0 sessionInfo:(id)arg1 powerLogReason:(NSInteger)arg2 completion:(id)arg3 ;
-(void)_stateLock_enumerateConfigurationStoreCoordinators:(id)arg0 ;
-(void)_stateLock_enumerateExtensionStoreCoordinators:(id)arg0 ;
-(void)_stateLock_fetchPosterSnapshotsWithClientRequest:(id)arg0 completion:(id)arg1 ;
-(void)_stateLock_findStoreCoordinatorsForUUID:(id)arg0 extensionStoreCoordinator:(*id)arg1 configurationStoreCoordinator:(*id)arg2 ;
-(void)_stateLock_loadPersistedGalleryConfigurationWithLastUpdateDate:(*id)arg0 error:(*id)arg1 ;
-(void)_stateLock_persistSelectedConfigurationIdentifier:(id)arg0 ;
-(void)_stateLock_pushPosterConfigurationOrdering:(id)arg0 ;
-(void)_stateLock_pushPosterConfigurationsToProactiveWithCompletion:(id)arg0 ;
-(void)_stateLock_pushPosterDescriptorsToProactiveForReason:(id)arg0 completion:(id)arg1 ;
-(void)_stateLock_setupSwitcherConfigurationForFirstTime;
-(void)_stateLock_transitionToNewSwitcherConfigurationAfterAddedExtensions:(id)arg0 deletedExtensions:(id)arg1 error:(*id)arg2 ;
-(void)_stateLock_transitionToNewSwitcherConfigurationIfNeeded:(id)arg0 reason:(id)arg1 error:(*id)arg2 ;
-(void)_stateLock_updateExtensions:(id)arg0 refreshDescriptors:(NSInteger)arg1 powerLogReason:(NSInteger)arg2 galleryUpdateOptions:(NSUInteger)arg3 queuedUpOperations:(*id)arg4 ;
-(void)_stateLock_updateFocusModeForActivePosterChange;
-(void)_stateLock_updateGalleryWithSuggestedLayout:(id)arg0 descriptorsByExtensionBundleIdentifier:(id)arg1 staticDescriptorsByExtensionBundleIdentifier:(id)arg2 extensionsByIdentifier:(id)arg3 ;
-(void)_stateLock_updateSnapshotsForSwitcherConfigurationWithIntention:(NSUInteger)arg0 powerLogReason:(NSInteger)arg1 completion:(id)arg2 ;
-(void)_transitionToNewSwitcherConfigurationIfNeeded:(id)arg0 reason:(id)arg1 error:(*id)arg2 ;
-(void)addBehaviorAssertionObserver:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)assertionManager:(id)arg0 pathIsNowMarkedAsNOTInUse:(id)arg1 ;
-(void)assertionManager:(id)arg0 pathIsNowMarkedInUse:(id)arg1 ;
-(void)checkForGalleryUpdates;
-(void)createPosterConfigurationForProviderIdentifier:(id)arg0 posterDescriptorIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)enqueueGalleryConfigurationUpdateWithOptions:(NSUInteger)arg0 powerLogReason:(NSInteger)arg1 completion:(id)arg2 ;
-(void)executeUpdate:(id)arg0 refreshStrategy:(NSInteger)arg1 galleryUpdateOptions:(NSUInteger)arg2 powerLogReason:(NSInteger)arg3 completion:(id)arg4 ;
-(void)fetchGalleryConfigurationWithOptions:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)fetchGallerySnapshotForConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)fetchHomeScreenAssociatedPosterConfigurationForConfigurationUUID:(id)arg0 completion:(id)arg1 ;
-(void)fetchPosterSnapshotsForRequest:(id)arg0 completion:(id)arg1 ;
-(void)fetchPosterSnapshotsWithClientRequest:(id)arg0 completion:(id)arg1 ;
-(void)fetchPosterSuggestionsForFocusModeWithUUID:(id)arg0 completion:(id)arg1 ;
-(void)fetchSnapshotForConfiguration:(id)arg0 compatibleWithTraitCollection:(id)arg1 completion:(id)arg2 ;
-(void)importPosterConfigurationFromArchiveData:(id)arg0 completion:(id)arg1 ;
-(void)ingestSnapshotCollection:(id)arg0 forPosterConfigurationUUID:(id)arg1 error:(*id)arg2 ;
-(void)invalidate;
-(void)overnightUpdateWithCompletion:(id)arg0 ;
-(void)posterExtensionProvider:(id)arg0 foundExtensions:(id)arg1 ;
-(void)prewarmWithCompletion:(id)arg0 ;
-(void)pushPosterDescriptorsToProactiveForReason:(id)arg0 completion:(id)arg1 ;
-(void)pushToProactiveWithCompletion:(id)arg0 ;
-(void)refreshPosterConfigurationMatchingUUID:(id)arg0 sessionInfo:(id)arg1 completion:(id)arg2 ;
-(void)refreshSnapshotForGalleryItemsMatchingDescriptorIdentifier:(id)arg0 extensionIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)refreshSnapshotForPosterConfigurationMatchUUID:(id)arg0 completion:(id)arg1 ;
-(void)reloadPosterDescriptorsForExtensionBundleIdentifier:(id)arg0 sessionInfo:(id)arg1 completion:(id)arg2 ;
-(void)removeBehaviorAssertionObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)updateFocusModeForActivePosterChange;
-(void)updateGallery:(id)arg0 completion:(id)arg1 ;
-(void)updateSnapshotsForGallery:(id)arg0 intention:(NSUInteger)arg1 powerLogReason:(NSInteger)arg2 completion:(id)arg3 ;


@end


#endif
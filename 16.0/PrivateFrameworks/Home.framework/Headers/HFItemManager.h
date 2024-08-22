// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFITEMMANAGER_H
#define HFITEMMANAGER_H

@class NAFuture, NSSet, NSMapTable, NSString, NSMutableSet, HMHome, NSArray, NSMutableDictionary;
@protocol HFStateDumpBuildable, HFHomeManagerObserver, HFHomeObserver, HFAccessoryObserver, HFResidentDeviceObserver, HFCameraObserver, HFMediaSessionObserver, HFMediaObjectObserver, HFAudioControlObserver, HFNetworkConfigurationObserver, HFNetworkRouterObserver, HFSoftwareUpdateControllerObserver, HFSoftwareUpdateObserver, HFSymptomsHandlerObserver, HFUserObserver, HFTelevisionObserver, HFHomeKitSettingsObserver, HFPersonManagerObserver, HFSiriEndpointProfileObserver, HFSymptomFixSessionObserver, HFMediaDestinationControllerObserver, HFLightObserver, HFPinCodeManagerObserver, HFWalletKeyDeviceStateObserver, HFHomeKitAccessorySettingsDataSourceDelegate, HFAccessorySoftwareUpdateControllerV2Observer, HFTemperatureUnitObserver, HFItemUpdating, HFHomeKitAccessorySettingsDataSourceDelegate, HFItemManagerDelegate, HFDiffableDataSource, OS_dispatch_queue, NAScheduler, OS_dispatch_group, HFCharacteristicReadPolicy;

#import <Foundation/Foundation.h>

#import "HFItemManagerBatchedDelegateAdapter.h"
#import "HFItem.h"

@interface HFItemManager : NSObject <HFStateDumpBuildable, HFHomeManagerObserver, HFHomeObserver, HFAccessoryObserver, HFResidentDeviceObserver, HFCameraObserver, HFMediaSessionObserver, HFMediaObjectObserver, HFAudioControlObserver, HFNetworkConfigurationObserver, HFNetworkRouterObserver, HFSoftwareUpdateControllerObserver, HFSoftwareUpdateObserver, HFSymptomsHandlerObserver, HFUserObserver, HFTelevisionObserver, HFHomeKitSettingsObserver, HFPersonManagerObserver, HFSiriEndpointProfileObserver, HFSymptomFixSessionObserver, HFMediaDestinationControllerObserver, HFLightObserver, HFPinCodeManagerObserver, HFWalletKeyDeviceStateObserver, HFHomeKitAccessorySettingsDataSourceDelegate, HFAccessorySoftwareUpdateControllerV2Observer, HFTemperatureUnitObserver, HFItemUpdating, HFHomeKitAccessorySettingsDataSourceDelegate>



@property (retain, nonatomic) NAFuture *UIDiffableDataInitializationFuture; // ivar: _UIDiffableDataInitializationFuture
@property (copy, nonatomic) id *_displayFilter; // ivar: __displayFilter
@property (readonly, nonatomic) NSSet *allDisplayedItems;
@property (readonly, nonatomic) NSSet *allItems;
@property (retain, nonatomic) HFItemManagerBatchedDelegateAdapter *batchedDelegateAdapterAllowingReads; // ivar: _batchedDelegateAdapterAllowingReads
@property (retain, nonatomic) HFItemManagerBatchedDelegateAdapter *batchedDelegateAdapterDisallowingReads; // ivar: _batchedDelegateAdapterDisallowingReads
@property (retain, nonatomic) NSMapTable *childItemsByParentItem; // ivar: _childItemsByParentItem
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HFItemManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<HFDiffableDataSource> *diffableDataSource; // ivar: _diffableDataSource
@property (nonatomic) BOOL diffableDataSourceDisabled; // ivar: _diffableDataSourceDisabled
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *diffableDataSourceQueue; // ivar: _diffableDataSourceQueue
@property (readonly, nonatomic) NSObject<NAScheduler> *diffableDataSourceScheduler; // ivar: _diffableDataSourceScheduler
@property (readonly, nonatomic) NSMutableSet *disableUpdateReasons; // ivar: _disableUpdateReasons
@property (readonly, nonatomic) NAFuture *firstFastUpdateFuture; // ivar: _firstFastUpdateFuture
@property (readonly, nonatomic) NAFuture *firstFullUpdateFuture; // ivar: _firstFullUpdateFuture
@property (nonatomic) BOOL hasRequestedFirstUpdate; // ivar: _hasRequestedFirstUpdate
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL isApplyingSnapshot; // ivar: _isApplyingSnapshot
@property (retain, nonatomic) NSArray *itemModules; // ivar: _itemModules
@property (retain, nonatomic) NSArray *itemProviders; // ivar: _itemProviders
@property (retain, nonatomic) HMHome *lastUpdatedHome; // ivar: _lastUpdatedHome
@property (retain, nonatomic) NAFuture *latestSnapshotGenerationFuture; // ivar: _latestSnapshotGenerationFuture
@property (retain, nonatomic) NSObject<OS_dispatch_group> *mainThreadLoadGroup; // ivar: _mainThreadLoadGroup
@property (retain, nonatomic) NSSet *moduleItemProviderSet; // ivar: _moduleItemProviderSet
@property (nonatomic) NSUInteger overallLoadingState; // ivar: _overallLoadingState
@property (retain, nonatomic) NSObject<HFCharacteristicReadPolicy> *readPolicy; // ivar: _readPolicy
@property (retain, nonatomic) NSArray *sections; // ivar: _sections
@property (retain, nonatomic) HFItem *sourceItem; // ivar: _sourceItem
@property (retain, nonatomic) NSSet *subclassItemProviderSet; // ivar: _subclassItemProviderSet
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableDictionary *suppressedCharacteristicUpdatesByReason; // ivar: _suppressedCharacteristicUpdatesByReason
@property (nonatomic) BOOL useCustomDiffableDataSource; // ivar: _useCustomDiffableDataSource


+(BOOL)_canReloadDuringUnitTests;
-(BOOL)_isUsingOnlyItemModules;
-(BOOL)_requiresNotificationsForCharacteristic:(id)arg0 ;
-(BOOL)_shouldBuildItemProvidersAndModulesForNilHome;
-(BOOL)_shouldDisableOptionalDataDuringFastInitialUpdate;
-(BOOL)_shouldHideServiceItem:(id)arg0 containedInServiceGroupItem:(id)arg1 ;
-(BOOL)_shouldPerformFastInitialUpdates;
-(BOOL)_shouldPerformUpdateOnMainThread;
-(BOOL)itemIsBeingDisplayed:(id)arg0 ;
-(BOOL)shouldPerformInitialLoadOnMainThread;
-(NSUInteger)_loadingStateForItem:(id)arg0 ;
-(NSUInteger)_numberOfSections;
-(NSUInteger)_sectionForItem:(id)arg0 ;
-(NSUInteger)_sectionForItem:(id)arg0 assertOnNotFound:(BOOL)arg1 ;
-(NSUInteger)numberOfSections;
-(NSUInteger)sectionIndexForDisplayedSectionIdentifier:(id)arg0 ;
-(id)_allSuppressedCharacteristics;
-(id)_buildItemModulesForHome:(id)arg0 ;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)_cameraForCameraControl:(id)arg0 ;
-(id)_cameraForCameraStream:(id)arg0 ;
-(id)_cameraForUserSettings:(id)arg0 ;
-(id)_comparatorForSectionIdentifier:(SEL)arg0 ;
-(id)_debug_itemDescriptions;
-(id)_debug_itemManagerDescription;
-(id)_debug_itemProviderDescriptions;
-(id)_dependentHomeKitObjectsOfClass:(Class)arg0 inHomeKitObjects:(id)arg1 ;
-(id)_directItemDependenciesForHomeKitObjects:(id)arg0 class:(Class)arg1 ;
-(id)_footerTitleForSectionWithIdentifier:(id)arg0 ;
-(id)_generateParentChildMappingForSections:(id)arg0 ;
-(id)_identifierForSection:(NSUInteger)arg0 ;
-(id)_indexPathForItem:(id)arg0 inDisplayedItemsArray:(id)arg1 ;
-(id)_internalItems;
-(id)_invalidationReasonsForAddedOrRemovedAccessory:(id)arg0 ;
-(id)_invalidationReasonsForAddedOrRemovedMediaSystem:(id)arg0 ;
-(id)_itemForSorting;
-(id)_itemsOfClass:(Class)arg0 inItems:(id)arg1 allowTransformedItems:(BOOL)arg2 ;
-(id)_itemsToHideInSet:(id)arg0 ;
-(id)_itemsToUpdateForAccessorySettingChange:(id)arg0 ;
-(id)_itemsToUpdateForAccessorySettingChanges:(id)arg0 ;
-(id)_itemsToUpdateForAllowAccessWhileLockedSettingChange;
-(id)_itemsToUpdateForApplicationResignActive;
-(id)_itemsToUpdateForHomeKitKeyPaths:(id)arg0 forHomeKitObjectIdentifiers:(id)arg1 ;
-(id)_itemsToUpdateForHomeKitSettingsChange:(id)arg0 ;
-(id)_itemsToUpdateForIncomingInvitation:(id)arg0 ;
-(id)_itemsToUpdateForLightProfiles:(id)arg0 ;
-(id)_itemsToUpdateForMediaObjectChange:(id)arg0 ;
-(id)_itemsToUpdateForMediaProfileContainer:(id)arg0 ;
-(id)_itemsToUpdateForMediaSessionChange:(id)arg0 ;
-(id)_itemsToUpdateForMediaSystemChange:(id)arg0 ;
-(id)_itemsToUpdateForModifiedAccessCodes:(id)arg0 ;
-(id)_itemsToUpdateForModifiedAccessories:(id)arg0 ;
-(id)_itemsToUpdateForModifiedActionSets:(id)arg0 ;
-(id)_itemsToUpdateForModifiedActions:(id)arg0 ;
-(id)_itemsToUpdateForModifiedCameras:(id)arg0 ;
-(id)_itemsToUpdateForModifiedCharacteristics:(id)arg0 ;
-(id)_itemsToUpdateForModifiedCharacteristics:(id)arg0 includeSuppressedCharacteristics:(BOOL)arg1 ;
-(id)_itemsToUpdateForModifiedEvents:(id)arg0 ;
-(id)_itemsToUpdateForModifiedHomePersonManagerSettings:(id)arg0 ;
-(id)_itemsToUpdateForModifiedMetadataForHomes:(id)arg0 ;
-(id)_itemsToUpdateForModifiedMetadataForMediaDestinationController:(id)arg0 ;
-(id)_itemsToUpdateForModifiedNetworkConfigurationProfiles:(id)arg0 ;
-(id)_itemsToUpdateForModifiedNetworkProtectionGroups:(id)arg0 ;
-(id)_itemsToUpdateForModifiedNetworkRouterProfiles:(id)arg0 ;
-(id)_itemsToUpdateForModifiedPersonManagers:(id)arg0 ;
-(id)_itemsToUpdateForModifiedPersons:(id)arg0 ;
-(id)_itemsToUpdateForModifiedResidentDevices:(id)arg0 ;
-(id)_itemsToUpdateForModifiedRooms:(id)arg0 ;
-(id)_itemsToUpdateForModifiedServiceGroups:(id)arg0 ;
-(id)_itemsToUpdateForModifiedServiceTypes:(id)arg0 ;
-(id)_itemsToUpdateForModifiedServices:(id)arg0 ;
-(id)_itemsToUpdateForModifiedSharingDevices:(id)arg0 ;
-(id)_itemsToUpdateForModifiedSignificantEvents:(id)arg0 ;
-(id)_itemsToUpdateForModifiedSoftwareUpdateControllers:(id)arg0 ;
-(id)_itemsToUpdateForModifiedSoftwareUpdates:(id)arg0 ;
-(id)_itemsToUpdateForModifiedTriggers:(id)arg0 ;
-(id)_itemsToUpdateForModifiedUUIDs:(id)arg0 ;
-(id)_itemsToUpdateForModifiedUsers:(id)arg0 ;
-(id)_itemsToUpdateForModifiedWalletKeyDeviceState:(id)arg0 ;
-(id)_itemsToUpdateForModifiedZones:(id)arg0 ;
-(id)_itemsToUpdateForOutgoingInvitation:(id)arg0 ;
-(id)_itemsToUpdateForRemoteAccessChange;
-(id)_itemsToUpdateForSiriEndpointProfileObjectChange:(id)arg0 ;
-(id)_itemsToUpdateForSoftwareUpdateProgressV2Change;
-(id)_itemsToUpdateForSoftwareUpdateV2Change;
-(id)_itemsToUpdateForTelevisionProfiles:(id)arg0 ;
-(id)_itemsToUpdateWhenApplicationDidBecomeActive;
// -(id)_itemsWithDependenciesPassingTest:(id)arg0 forItems:(unk)arg1  ;
-(id)_legacy_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)_performUpdateForChildItemsOfItem:(id)arg0 withContext:(id)arg1 isInternal:(BOOL)arg2 ;
-(id)_performUpdateForItem:(id)arg0 withContext:(id)arg1 isInternal:(BOOL)arg2 isChild:(BOOL)arg3 ;
-(id)_processBatchUpdateForFutureWrappers:(id)arg0 removedItems:(id)arg1 logger:(id)arg2 ;
-(id)_reloadAllItemProvidersFromSenderSelector:(SEL)arg0 ;
-(id)_reloadAndUpdateItemsForProviders:(id)arg0 updateItems:(id)arg1 senderSelector:(SEL)arg2 ;
-(id)_reloadItemProviders:(id)arg0 updateItems:(id)arg1 shouldUpdateExistingItems:(BOOL)arg2 senderSelector:(SEL)arg3 readPolicy:(id)arg4 ;
-(id)_reloadItemProviders:(id)arg0 updateItems:(id)arg1 shouldUpdateExistingItems:(BOOL)arg2 senderSelector:(SEL)arg3 readPolicy:(id)arg4 fastInitialUpdatePromise:(id)arg5 ;
-(id)_sectionIdentifierForItem:(id)arg0 ;
-(id)_serviceGroupItemForServiceGroup:(id)arg0 inItems:(id)arg1 ;
-(id)_serviceItemsToHideInSet:(id)arg0 allServiceGroupItems:(id)arg1 ;
-(id)_sortedItems:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(id)_titleForSectionWithIdentifier:(id)arg0 ;
-(id)_transformedUpdateOutcomeForItem:(id)arg0 proposedOutcome:(id)arg1 ;
-(id)_updateRepresentationWithUIDiffableDataSourceForExternalItemsWithUpdatedOrAddedItems:(id)arg0 removedItems:(id)arg1 logger:(id)arg2 ;
-(id)_updateResultsForItems:(id)arg0 context:(id)arg1 ;
-(id)_updateResultsForItems:(id)arg0 removedItems:(id)arg1 context:(id)arg2 allowDelaying:(BOOL)arg3 ;
-(id)applySnapshotForUpdatedExternalItems:(id)arg0 removedItems:(id)arg1 logger:(id)arg2 ;
-(id)attributedFooterTitleForSection:(NSUInteger)arg0 ;
-(id)attributedTitleForSection:(NSUInteger)arg0 ;
-(id)childItemsForItem:(id)arg0 ;
-(id)childItemsForItem:(id)arg0 ofClass:(Class)arg1 ;
-(id)childItemsForItem:(id)arg0 ofClass:(Class)arg1 conformingToProtocol:(id)arg2 ;
-(id)currentSectionIdentifiersSnapshot;
-(id)diffableDataItemManagerDelegate;
-(id)displayedItemAtIndexPath:(id)arg0 ;
-(id)displayedItemsInSection:(NSUInteger)arg0 ;
-(id)displayedItemsInSectionWithIdentifier:(id)arg0 ;
-(id)displayedSectionIdentifierForSectionIndex:(NSUInteger)arg0 ;
-(id)firstFullItemUpdateFuture;
-(id)footerTitleForSection:(NSUInteger)arg0 ;
-(id)generateSnapshotInfo;
-(id)hf_stateDumpBuilderWithContext:(id)arg0 ;
-(id)indexPathForItem:(id)arg0 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;
-(id)itemSectionForSectionIndex:(NSUInteger)arg0 ;
-(id)matchingItemForHomeKitObject:(id)arg0 ;
-(id)moveItemFromIndexPath:(id)arg0 toIndexPath:(id)arg1 ;
-(id)performItemUpdateRequest:(id)arg0 ;
-(id)reloadAndUpdateAllItemsFromSenderSelector:(SEL)arg0 ;
-(id)reloadAndUpdateItemsForProviders:(id)arg0 senderSelector:(SEL)arg1 ;
-(id)titleForSection:(NSUInteger)arg0 ;
-(id)updateResultsForItems:(id)arg0 senderSelector:(SEL)arg1 ;
-(void)_applyReloadSnapshot:(id)arg0 withAnimation:(BOOL)arg1 ;
-(void)_batchItemUpdateFutureWrappers:(id)arg0 removedItems:(id)arg1 batchingIntervals:(id)arg2 logger:(id)arg3 ;
-(void)_debug_registerForStateDump;
-(void)_didFinishUpdateTransactionWithAffectedItems:(id)arg0 ;
-(void)_notifyDelegateOfChangesFromDiff:(id)arg0 logger:(id)arg1 ;
-(void)_notifyDelegateOfItemOperations:(id)arg0 logger:(id)arg1 ;
-(void)_notifyDelegateOfSectionOperations:(id)arg0 logger:(id)arg1 ;
-(void)_prefetchResourcesIfNeededForItems:(id)arg0 ;
-(void)_registerForExternalUpdates;
-(void)_removeDelegateNotifications;
// -(void)_setDisplayFilter:(id)arg0 recalculateVisibility:(unk)arg1  ;
-(void)_setupDelegateNotifications;
-(void)_unregisterForExternalUpdates;
-(void)_updateExternalUpdatesEnabled:(BOOL)arg0 reloadItems:(BOOL)arg1 ;
-(void)_updateLoadingStateAndNotifyDelegateForItems:(id)arg0 canFinishTransaction:(BOOL)arg1 ;
-(void)_updateOverallLoadingStateAndNotifyDelegate;
-(void)_updateRepresentationForExternalItemsWithUpdatedOrAddedItems:(id)arg0 removedItems:(id)arg1 logger:(id)arg2 ;
-(void)_updateRepresentationForInternalItemsWithUpdatedItems:(id)arg0 ;
-(void)_updateRepresentationWithCustomDiffableDataSourceForExternalItemsWithUpdatedOrAddedItems:(id)arg0 removedItems:(id)arg1 logger:(id)arg2 ;
-(void)_willUpdateSections;
-(void)accessory:(id)arg0 didAddControlTarget:(id)arg1 ;
-(void)accessory:(id)arg0 didAddProfile:(id)arg1 ;
-(void)accessory:(id)arg0 didAddSymptomsHandler:(id)arg1 ;
-(void)accessory:(id)arg0 didRemoveControlTarget:(id)arg1 ;
-(void)accessory:(id)arg0 didRemoveProfile:(id)arg1 ;
-(void)accessory:(id)arg0 didUpdateApplicationDataForService:(id)arg1 ;
-(void)accessory:(id)arg0 didUpdateAssociatedServiceTypeForService:(id)arg1 ;
-(void)accessory:(id)arg0 didUpdateBundleID:(id)arg1 ;
-(void)accessory:(id)arg0 didUpdateConfigurationStateForService:(id)arg1 ;
-(void)accessory:(id)arg0 didUpdateConfiguredNameForService:(id)arg1 ;
-(void)accessory:(id)arg0 didUpdateDefaultNameForService:(id)arg1 ;
-(void)accessory:(id)arg0 didUpdateFirmwareUpdateAvailable:(BOOL)arg1 ;
-(void)accessory:(id)arg0 didUpdateFirmwareVersion:(id)arg1 ;
-(void)accessory:(id)arg0 didUpdateHasAuthorizationDataForCharacteristic:(id)arg1 ;
-(void)accessory:(id)arg0 didUpdateLastKnownOperatingStateResponseForService:(id)arg1 ;
-(void)accessory:(id)arg0 didUpdateLastKnownSleepDiscoveryModeForService:(id)arg1 ;
-(void)accessory:(id)arg0 didUpdateLoggedInAccount:(id)arg1 ;
-(void)accessory:(id)arg0 didUpdateNameForService:(id)arg1 ;
-(void)accessory:(id)arg0 didUpdateServiceSubtypeForService:(id)arg1 ;
-(void)accessory:(id)arg0 didUpdateSoftwareVersion:(id)arg1 ;
-(void)accessory:(id)arg0 didUpdateStoreID:(id)arg1 ;
-(void)accessory:(id)arg0 didUpdateSupportsWalletKey:(BOOL)arg1 ;
-(void)accessory:(id)arg0 didUpdateUserNotifiedOfSoftwareUpdate:(BOOL)arg1 ;
-(void)accessory:(id)arg0 service:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 ;
-(void)accessoryDidRemoveSymptomsHandler:(id)arg0 ;
-(void)accessoryDidUpdateAdditionalSetupRequired:(id)arg0 ;
-(void)accessoryDidUpdateApplicationData:(id)arg0 ;
-(void)accessoryDidUpdateAudioDestination:(id)arg0 ;
-(void)accessoryDidUpdateAudioDestinationController:(id)arg0 ;
-(void)accessoryDidUpdateControllable:(id)arg0 ;
-(void)accessoryDidUpdateDiagnosticsTransferSupport:(id)arg0 ;
-(void)accessoryDidUpdateName:(id)arg0 ;
-(void)accessoryDidUpdatePendingConfigurationIdentifier:(id)arg0 ;
-(void)accessoryDidUpdatePreferredMediaUser:(id)arg0 ;
-(void)accessoryDidUpdateReachability:(id)arg0 ;
-(void)accessoryDidUpdateReachableTransports:(id)arg0 ;
-(void)accessoryDidUpdateServices:(id)arg0 ;
-(void)accessoryDidUpdateTargetControlSupport:(id)arg0 ;
-(void)applyWithBlock:(id)arg0 ;
-(void)audioControl:(id)arg0 didUpdateMuted:(BOOL)arg1 ;
-(void)audioControl:(id)arg0 didUpdateVolume:(float)arg1 ;
-(void)beginSuppressingUpdatesForCharacteristics:(id)arg0 withReason:(id)arg1 ;
-(void)cameraSnapshotControl:(id)arg0 didTakeSnapshot:(id)arg1 error:(id)arg2 ;
-(void)cameraSnapshotControlDidUpdateMostRecentSnapshot:(id)arg0 ;
-(void)cameraStream:(id)arg0 didUpdateAudioStreamSettingWithError:(id)arg1 ;
-(void)cameraStreamControl:(id)arg0 didStopStreamWithError:(id)arg1 ;
-(void)cameraStreamControlDidStartStream:(id)arg0 ;
-(void)cameraStreamControlDidUpdateManagerState:(id)arg0 ;
-(void)cameraStreamControlDidUpdateStreamState:(id)arg0 ;
-(void)cameraUserSettingsDidUpdate:(id)arg0 ;
-(void)clipManager:(id)arg0 didRemoveSignificantEventsWithUUIDs:(id)arg1 ;
-(void)clipManager:(id)arg0 didUpdateSignificantEvents:(id)arg1 ;
-(void)dealloc;
-(void)didReceiveSettingsUpdatesForAccessoryWithIdentifier:(id)arg0 settings:(id)arg1 ;
-(void)didUpdateDemoModeStateForAccessory:(id)arg0 ;
-(void)disableExternalUpdatesWithReason:(id)arg0 ;
-(void)endDisableExternalUpdatesWithReason:(id)arg0 ;
-(void)endSuppressingUpdatesForCharacteristicsWithReason:(id)arg0 updateAffectedItems:(BOOL)arg1 ;
-(void)executionEnvironmentDidBecomeActive:(id)arg0 ;
-(void)executionEnvironmentDidEnterBackground:(id)arg0 ;
-(void)executionEnvironmentWillEnterForeground:(id)arg0 ;
-(void)executionEnvironmentWillResignActive:(id)arg0 ;
-(void)fixSessionDidChangeForAccessory:(id)arg0 ;
-(void)home:(id)arg0 didAddAccessory:(id)arg1 ;
-(void)home:(id)arg0 didAddAccessoryNetworkProtectionGroup:(id)arg1 ;
-(void)home:(id)arg0 didAddActionSet:(id)arg1 ;
-(void)home:(id)arg0 didAddMediaSystem:(id)arg1 ;
-(void)home:(id)arg0 didAddResidentDevice:(id)arg1 ;
-(void)home:(id)arg0 didAddRoom:(id)arg1 ;
-(void)home:(id)arg0 didAddRoom:(id)arg1 toZone:(id)arg2 ;
-(void)home:(id)arg0 didAddService:(id)arg1 toServiceGroup:(id)arg2 ;
-(void)home:(id)arg0 didAddServiceGroup:(id)arg1 ;
-(void)home:(id)arg0 didAddTrigger:(id)arg1 ;
-(void)home:(id)arg0 didAddUser:(id)arg1 ;
-(void)home:(id)arg0 didAddZone:(id)arg1 ;
-(void)home:(id)arg0 didEncounterError:(id)arg1 forAccessory:(id)arg2 ;
-(void)home:(id)arg0 didExecuteActionSets:(id)arg1 failedActionSets:(id)arg2 ;
-(void)home:(id)arg0 didReadValuesForCharacteristics:(id)arg1 failedCharacteristics:(id)arg2 ;
-(void)home:(id)arg0 didRemoveAccessory:(id)arg1 ;
-(void)home:(id)arg0 didRemoveAccessoryNetworkProtectionGroup:(id)arg1 ;
-(void)home:(id)arg0 didRemoveActionSet:(id)arg1 ;
-(void)home:(id)arg0 didRemoveMediaSystem:(id)arg1 ;
-(void)home:(id)arg0 didRemoveResidentDevice:(id)arg1 ;
-(void)home:(id)arg0 didRemoveRoom:(id)arg1 ;
-(void)home:(id)arg0 didRemoveRoom:(id)arg1 fromZone:(id)arg2 ;
-(void)home:(id)arg0 didRemoveService:(id)arg1 fromServiceGroup:(id)arg2 ;
-(void)home:(id)arg0 didRemoveServiceGroup:(id)arg1 ;
-(void)home:(id)arg0 didRemoveTrigger:(id)arg1 ;
-(void)home:(id)arg0 didRemoveUser:(id)arg1 ;
-(void)home:(id)arg0 didRemoveZone:(id)arg1 ;
-(void)home:(id)arg0 didUnblockAccessory:(id)arg1 ;
-(void)home:(id)arg0 didUpdateAccesoryInvitationsForUser:(id)arg1 ;
-(void)home:(id)arg0 didUpdateAccessControlForUser:(id)arg1 ;
-(void)home:(id)arg0 didUpdateAccessoryNetworkProtectionGroup:(id)arg1 ;
-(void)home:(id)arg0 didUpdateActionsForActionSet:(id)arg1 ;
-(void)home:(id)arg0 didUpdateApplicationDataForActionSet:(id)arg1 ;
-(void)home:(id)arg0 didUpdateApplicationDataForRoom:(id)arg1 ;
-(void)home:(id)arg0 didUpdateApplicationDataForServiceGroup:(id)arg1 ;
-(void)home:(id)arg0 didUpdateAreBulletinNotificationsSupported:(BOOL)arg1 ;
-(void)home:(id)arg0 didUpdateMediaSystem:(id)arg1 ;
-(void)home:(id)arg0 didUpdateNameForActionSet:(id)arg1 ;
-(void)home:(id)arg0 didUpdateNameForRoom:(id)arg1 ;
-(void)home:(id)arg0 didUpdateNameForServiceGroup:(id)arg1 ;
-(void)home:(id)arg0 didUpdateNameForTrigger:(id)arg1 ;
-(void)home:(id)arg0 didUpdateNameForZone:(id)arg1 ;
-(void)home:(id)arg0 didUpdatePersonManagerSettings:(id)arg1 ;
-(void)home:(id)arg0 didUpdateReprovisionStateForAccessory:(id)arg1 ;
-(void)home:(id)arg0 didUpdateRoom:(id)arg1 forAccessory:(id)arg2 ;
-(void)home:(id)arg0 didUpdateStateForOutgoingInvitations:(id)arg1 ;
-(void)home:(id)arg0 didUpdateTrigger:(id)arg1 ;
-(void)home:(id)arg0 didWriteValuesForCharacteristics:(id)arg1 failedCharacteristics:(id)arg2 ;
-(void)home:(id)arg0 remoteAccessStateDidChange:(NSUInteger)arg1 ;
-(void)home:(id)arg0 willExecuteActionSets:(id)arg1 ;
-(void)home:(id)arg0 willReadValuesForCharacteristics:(id)arg1 ;
-(void)home:(id)arg0 willWriteValuesForCharacteristics:(id)arg1 ;
-(void)homeDidAddWalletKey:(id)arg0 ;
-(void)homeDidRemoveWalletKey:(id)arg0 ;
-(void)homeDidUpdateApplicationData:(id)arg0 ;
-(void)homeDidUpdateName:(id)arg0 ;
-(void)homeDidUpdateNetworkRouterSupport:(id)arg0 ;
-(void)homeDidUpdateProtectionMode:(id)arg0 ;
-(void)homeDidUpdateSoundCheck:(id)arg0 ;
-(void)homeDidUpdateToROAR:(id)arg0 ;
-(void)homeKitDispatcher:(id)arg0 manager:(id)arg1 didChangeHome:(id)arg2 ;
-(void)homeManager:(id)arg0 didAddHome:(id)arg1 ;
-(void)homeManager:(id)arg0 didRemoveHome:(id)arg1 ;
-(void)homeManager:(id)arg0 didUpdateAccessAllowedWhenLocked:(BOOL)arg1 ;
-(void)homeManager:(id)arg0 didUpdateHH2State:(BOOL)arg1 ;
-(void)homeManager:(id)arg0 didUpdateStateForIncomingInvitations:(id)arg1 ;
-(void)homeManager:(id)arg0 residentProvisioningStatusChanged:(NSUInteger)arg1 ;
-(void)homeManagerDidEndBatchNotifications:(id)arg0 ;
-(void)homeManagerDidFinishInitialDatabaseLoad:(id)arg0 ;
-(void)homeManagerDidFinishUnknownChange:(id)arg0 ;
-(void)homeManagerDidUpdateCurrentHome:(id)arg0 ;
-(void)homeManagerDidUpdateDataSyncState:(id)arg0 ;
-(void)homeManagerDidUpdatePrimaryHome:(id)arg0 ;
-(void)homeManagerWillStartBatchNotifications:(id)arg0 ;
-(void)lightProfile:(id)arg0 didUpdateSettings:(id)arg1 ;
-(void)mediaDestinationController:(id)arg0 didUpdateDestination:(id)arg1 ;
-(void)mediaDestinationControllerDidUpdateAvailableDestinations:(id)arg0 ;
-(void)mediaObject:(id)arg0 didUpdateMediaSession:(id)arg1 ;
-(void)mediaObject:(id)arg0 didUpdateSettings:(id)arg1 ;
-(void)mediaSession:(id)arg0 didUpdatePlaybackState:(NSInteger)arg1 ;
-(void)mediaSession:(id)arg0 failedToUpdatePlaybackStateWithError:(id)arg1 ;
-(void)mediaSession:(id)arg0 willUpdatePlaybackState:(NSInteger)arg1 ;
-(void)mediaSessionDidUpdate:(id)arg0 ;
-(void)mediaSystem:(id)arg0 didUpdateComponents:(id)arg1 ;
-(void)mediaSystem:(id)arg0 didUpdateConfiguredName:(id)arg1 ;
-(void)mediaSystem:(id)arg0 didUpdateName:(id)arg1 ;
-(void)personManager:(id)arg0 didRemoveFaceCropsWithUUIDs:(id)arg1 ;
-(void)personManager:(id)arg0 didRemovePersonsWithUUIDs:(id)arg1 ;
-(void)personManager:(id)arg0 didUpdatePersonFaceCrops:(id)arg1 ;
-(void)personManager:(id)arg0 didUpdatePersons:(id)arg1 ;
-(void)pinCodeManagerDidUpdate:(id)arg0 pinCodes:(id)arg1 ;
-(void)profileDidUpdateAccessViolation:(id)arg0 ;
-(void)profileDidUpdateAllowedHosts:(id)arg0 ;
-(void)profileDidUpdateMediaSourceDisplayOrder:(id)arg0 ;
-(void)profileDidUpdateNetworkProtectionMode:(id)arg0 ;
-(void)profileDidUpdateNetworkStatus:(id)arg0 ;
-(void)profileDidUpdateSatellites:(id)arg0 ;
-(void)profileDidUpdateWiFiCredentialType:(id)arg0 ;
-(void)profileDidUpdateWiFiReconfigurationSupport:(id)arg0 ;
-(void)recalculateVisibilityAndSortAllItems;
-(void)reconfigureUIRepresentationForItems:(id)arg0 withAnimation:(BOOL)arg1 ;
-(void)reloadUIRepresentationForItems:(id)arg0 withAnimation:(BOOL)arg1 ;
-(void)reloadUIRepresentationForSections:(id)arg0 withAnimation:(BOOL)arg1 ;
-(void)reloadUIRepresentationWithAnimation:(BOOL)arg0 ;
-(void)residentDevice:(id)arg0 didUpdateCapabilities:(NSUInteger)arg1 ;
-(void)residentDevice:(id)arg0 didUpdateEnabled:(BOOL)arg1 ;
-(void)residentDevice:(id)arg0 didUpdateName:(id)arg1 ;
-(void)residentDevice:(id)arg0 didUpdateStatus:(NSUInteger)arg1 ;
-(void)setUpCustomDiffableDataSource;
-(void)settings:(id)arg0 didUpdateForIdentifier:(id)arg1 keyPath:(id)arg2 ;
-(void)settings:(id)arg0 didWriteValueForSettings:(id)arg1 failedSettings:(id)arg2 homeKitObjectIdentifiers:(id)arg3 ;
-(void)settings:(id)arg0 willWriteValueForSettings:(id)arg1 ;
-(void)settingsDidUpdate:(id)arg0 ;
-(void)settingsInvalidatedForNotificationCenter:(id)arg0 ;
-(void)siriEndpointProfile:(id)arg0 didUpdateAssistants:(id)arg1 ;
-(void)siriEndpointProfile:(id)arg0 didUpdateCurrentAssistant:(id)arg1 ;
-(void)siriEndpointProfile:(id)arg0 didUpdateManuallyDisabled:(BOOL)arg1 ;
-(void)siriEndpointProfile:(id)arg0 didUpdateMultifunctionButton:(NSInteger)arg1 ;
-(void)siriEndpointProfile:(id)arg0 didUpdateNeedsOnboarding:(BOOL)arg1 ;
-(void)siriEndpointProfile:(id)arg0 didUpdateSessionHubIdentifier:(id)arg1 ;
-(void)siriEndpointProfile:(id)arg0 didUpdateSessionState:(NSInteger)arg1 ;
-(void)siriEndpointProfile:(id)arg0 didUpdateSiriEngineVersion:(id)arg1 ;
-(void)siriEndpointProfile:(id)arg0 didUpdateSupportsOnboarding:(BOOL)arg1 ;
-(void)softwareUpdate:(id)arg0 didUpdateDocumentation:(id)arg1 ;
-(void)softwareUpdate:(id)arg0 didUpdateDocumentationAvailable:(BOOL)arg1 ;
-(void)softwareUpdate:(id)arg0 didUpdateNeedsAttentionReasons:(NSUInteger)arg1 ;
-(void)softwareUpdate:(id)arg0 didUpdateState:(NSInteger)arg1 ;
-(void)softwareUpdateController:(id)arg0 accessory:(id)arg1 didFailUpdate:(id)arg2 withError:(id)arg3 timestamp:(id)arg4 ;
-(void)softwareUpdateController:(id)arg0 accessory:(id)arg1 didReceiveUpdate:(id)arg2 ;
-(void)softwareUpdateController:(id)arg0 accessory:(id)arg1 didUpdateProgress:(id)arg2 ;
-(void)softwareUpdateController:(id)arg0 didUpdateAvailableUpdate:(id)arg1 ;
-(void)sortDisplayedItemsInSection:(NSInteger)arg0 ;
-(void)symptomsHandler:(id)arg0 didUpdateSymptoms:(id)arg1 ;
-(void)temperatureUnitObserver:(id)arg0 didChangeTemperatureUnit:(BOOL)arg1 ;
-(void)updateSettingValue:(id)arg0 forKeyPath:(id)arg1 accessoryIdentifier:(id)arg2 ;
-(void)user:(id)arg0 didUpdateAssistantAccessControl:(id)arg1 forHome:(id)arg2 ;
-(void)user:(id)arg0 didUpdateMediaContentProfileAccessControl:(id)arg1 forHome:(id)arg2 ;
-(void)user:(id)arg0 didUpdatePersonManagerSettings:(id)arg1 ;
-(void)walletKeyDeviceStateUpdated:(id)arg0 inHome:(id)arg1 ;


@end


#endif
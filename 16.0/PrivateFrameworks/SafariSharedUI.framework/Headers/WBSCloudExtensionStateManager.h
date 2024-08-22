// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSCLOUDEXTENSIONSTATEMANAGER_H
#define WBSCLOUDEXTENSIONSTATEMANAGER_H

@class NSMutableArray, NSDictionary, NSArray, WBSPeriodicActivityScheduler;

#import <Foundation/Foundation.h>


@interface WBSCloudExtensionStateManager : NSObject {
    BOOL _hasSuccessfullyUpdatedCloudExtensionStatesAtLeastOnce;
    NSMutableArray *_stateProviders;
    NSDictionary *_cloudExtensionStates;
    NSArray *_cloudDevices;
    BOOL _isCloudExtensionStateAccurateOnThisDevice;
    WBSPeriodicActivityScheduler *_inactiveDevicePruningScheduler;
    WBSPeriodicActivityScheduler *_periodicDeviceSavingScheduler;
}


@property (nonatomic, getter=isExtensionSyncEnabled) BOOL extensionSyncEnabled; // ivar: _extensionSyncEnabled
@property (nonatomic) NSInteger manateeState; // ivar: _manateeState


+(BOOL)_determineEnabledStateFromCloudExtensionState:(id)arg0 ;
+(BOOL)test_determineEnabledStateFromCloudExtensionState:(id)arg0 ;
+(id)_cloudExtensionStatesDictionaryForDeviceWithUUIDString:(id)arg0 fromCloudExtensionStates:(id)arg1 ;
+(id)_determineNewTabPageFromCloudDeviceState:(id)arg0 ;
+(id)_removeDeviceWithUUIDString:(id)arg0 fromCloudDevices:(id)arg1 ;
+(id)_removeStatesForDeviceWithUUIDString:(id)arg0 fromCloudExtensionStates:(id)arg1 ;
+(id)_singleExtensionStates:(id)arg0 withStateRemovedForDeviceWithUUIDString:(id)arg1 ;
+(id)_uuidStringsOfInactiveCloudDevices:(id)arg0 currentDeviceUUIDString:(id)arg1 ;
+(id)sharedManager;
+(id)test_cloudExtensionStatesDictionaryForDeviceWithUUIDString:(id)arg0 fromCloudExtensionStates:(id)arg1 ;
+(id)test_determineNewTabPageFromCloudDeviceState:(id)arg0 ;
+(id)test_removeDeviceWithUUIDString:(id)arg0 fromCloudDevices:(id)arg1 ;
+(id)test_removeStatesForDeviceWithUUIDString:(id)arg0 fromCloudExtensionStates:(id)arg1 ;
+(id)test_uuidStringsOfInactiveCloudDevices:(id)arg0 currentDeviceUUIDString:(id)arg1 ;
-(BOOL)_cloudDeviceMatchesLocalDeviceForCurrentDevice;
-(BOOL)_cloudExtensionStatesMatchLocalExtensionStatesForCurrentDevice;
-(BOOL)_cloudStateMatchesLocalStateForCurrentDevice;
-(BOOL)_hasInstalledApplicationWithIdentifier:(id)arg0 ;
-(BOOL)isExtensionEnabledInCloudWithComposedIdentifier:(id)arg0 ;
-(id)_allComposedIdentifiersAssociatedWithComposedIdentifier:(id)arg0 ;
-(id)_cloudExtensionStateAssociatedWithComposedIdentifier:(id)arg0 ;
-(id)_cloudExtensionStateForComposedIdentifiers:(id)arg0 ;
-(id)_composedIdentifierForBundleIdentifier:(id)arg0 relatedToComposedIdentifier:(id)arg1 ;
-(id)_extensionDeviceDictionaryForCurrentDevice;
-(id)_extensionStatesDictionaryForCurrentDevice;
-(id)extensionAppsFromOtherDevices;
-(id)init;
-(void)_cloudExtensionStatesWereUpdated;
-(void)_deleteCurrentDeviceFromCloudKit;
-(void)_determineExtensionSyncAvailabilityIgnoringExtensionSyncEnabled:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)_determineExtensionSyncAvailabilityWithCompletionHandler:(id)arg0 ;
-(void)_ensureCurrentDeviceIsSavedPeriodically;
-(void)_getCloudExtensionStatesWithCompletionHandler:(id)arg0 ;
-(void)_getCloudSettingsContainerManateeStateWithCompletionHandler:(id)arg0 ;
-(void)_getPrimaryAppleAccountHasSafariSyncEnabledWithCompletionHandler:(id)arg0 ;
-(void)_pruneInactiveDevicesFromCloudKitWithCompletionHandler:(id)arg0 ;
-(void)_saveCurrentDeviceToCloudKitWithCompletionHandler:(id)arg0 ;
-(void)_saveExtensionStatesWithDictionaryRepresentation:(id)arg0 forDevice:(id)arg1 completionHandler:(id)arg2 ;
-(void)_schedulePruningOfInactiveDevices;
-(void)_updateCloudExtensionStatesFromSafariBookmarksSyncAgent:(id)arg0 ;
-(void)_updateStateProvidersFromCloudExtensionState;
-(void)addProvider:(id)arg0 ;
-(void)getLockupViewsForAppsOnOtherDevicesWithCompletionHandler:(id)arg0 ;
-(void)localExtensionStateDidChange;
-(void)updateNewTabPageFromCloudDeviceState;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLOUDTABSTORE_H
#define CLOUDTABSTORE_H

@class WBSCloudTabStore, WBSEncryptedCloudKeyValueStore, NSMutableArray, NSUUID, NSString;
@protocol WBSCloudTabStoreDelegate, OS_dispatch_queue, CloudTabStoreDelegate;



@interface CloudTabStore : WBSCloudTabStore <WBSCloudTabStoreDelegate>

 {
    NSObject<OS_dispatch_queue> *_internalQueue;
    WBSEncryptedCloudKeyValueStore *_syncedDevicesStore;
    WBSEncryptedCloudKeyValueStore *_userRequestsStore;
    BOOL _hasInitiatedFetchOfCloudKitDataAtLeastOnce;
    BOOL _hasCompletedFetchOfCloudKitDataAtLeastOnce;
    NSMutableArray *_fetchCloudKitDataCompletionHandlers;
    BOOL _didAttemptToCloseAtLeastOneTab;
}


@property (setter=_setCloudKitDataNeedsFetching:) BOOL _cloudKitDataNeedsFetching; // ivar: __cloudKitDataNeedsFetching
@property (readonly, nonatomic) NSUUID *currentDeviceUUID;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CloudTabStoreDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedCloudTabStore;
-(BOOL)_shouldUseCloudKitForSavingCurrentDevice;
-(BOOL)canSaveCloudTabsForCurrentDevice;
-(BOOL)closeAllTabsOnDevice:(id)arg0 ;
-(BOOL)closeTab:(id)arg0 onDevice:(id)arg1 ;
-(BOOL)closeTabs:(id)arg0 onDevice:(id)arg1 ;
-(BOOL)cloudTabsAreEnabled;
-(id)_keyValueStoreDictionaryRepresentation:(NSInteger)arg0 ;
-(id)_storeForIdentifier:(NSInteger)arg0 ;
-(id)currentDevice;
-(id)init;
-(id)syncedCloudTabDevices;
-(void)_callFetchCloudKitDataCompletionHandlers;
-(void)_clearAllDevices;
-(void)_clearTabsForCurrentDeviceWithSyncCompletionHandler:(id)arg0 ;
-(void)_closeRequestedTabIfPossible:(id)arg0 ;
-(void)_cloudKitDataDidUpdateOnServer:(id)arg0 ;
-(void)_cloudTabsEnabledDidChange;
-(void)_notifyCloudTabStoreDidUpdateWithType:(id)arg0 ;
-(void)_removeConflictingDevice;
-(void)_removeObjectFromKeyValueStore:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)_saveCurrentDeviceCloudTabs:(id)arg0 syncCompletionHandler:(id)arg1 ;
-(void)_setDictionaryInKeyValueStore:(NSInteger)arg0 dictionary:(id)arg1 forKey:(id)arg2 ;
-(void)_syncedDevicesStoreDidUpdate:(id)arg0 ;
-(void)_userRequestsStoreDidUpdate:(id)arg0 ;
-(void)_waitForInitialCloudKitFetchToComplete:(id)arg0 ;
-(void)clearTabsForCurrentDevice;
-(void)didGetCachedDevicesFromCloudKitForCloudTabStore:(id)arg0 ;
-(void)didUpdateDevicesAndCloseRequestsFromCloudKitForCloudTabStore:(id)arg0 error:(id)arg1 ;
-(void)fetchSyncedCloudTabDevicesAndCloseRequestsFromCloudKit;
-(void)saveCurrentDeviceCloudTabs:(id)arg0 ;
-(void)saveCurrentDeviceCloudTabsForEnteringBackground:(id)arg0 completion:(id)arg1 ;
-(void)saveCurrentDeviceTabsFromBrowserSavedState:(id)arg0 ;
-(void)saveCurrentDeviceTabsFromBrowserSavedState:(id)arg0 syncCompletionHandler:(id)arg1 ;
-(void)startObservingTabStoreStateChanges;
-(void)stopObservingTabStoreStateChanges;
-(void)synchronizeCloudTabDevices;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIITEMSTATECENTER_H
#define SKUIITEMSTATECENTER_H

@class ASDSoftwareUpdatesStore, ASDJobManager, SSDownloadManager, NSMutableArray, NSDate, NSMutableDictionary, NSCountedSet, NSHashTable, SSAppPurchaseHistoryDatabase, SSSoftwareUpdatesStore, NSString;
@protocol SSDownloadManagerObserver, ASDJobManagerObserver, BLDownloadQueueObserving, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SKUIStoreItemRelationshipCounsellor.h"

@interface SKUIItemStateCenter : NSObject <SSDownloadManagerObserver, ASDJobManagerObserver, BLDownloadQueueObserving>

 {
    NSObject<OS_dispatch_queue> *_accessQueue;
    char _appInstallRestricted;
    ASDSoftwareUpdatesStore *_appstoredUpdatesStore;
    ASDJobManager *_jobManager;
    char _canAccessAppUpdates;
    char _canAccessPurchaseHistory;
    SSDownloadManager *_downloadManager;
    NSMutableArray *_finishLoadBlocks;
    NSInteger _gratisState;
    NSDate *_gratisStateLastUpdate;
    NSInteger _loadCount;
    NSMutableDictionary *_itemStates;
    NSObject<OS_dispatch_queue> *_mediaLibraryQueue;
    NSMutableArray *_mediaLibraries;
    NSCountedSet *_observedLibraryItems;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSHashTable *_observers;
    NSInteger _parentalControlsRank;
    SSAppPurchaseHistoryDatabase *_purchaseHistoryDatabase;
    SKUIStoreItemRelationshipCounsellor *_relationshipCouncellor;
    char _runningInStoreDemoMode;
}


@property (readonly) SSSoftwareUpdatesStore *appUpdatesStore;
@property (readonly, getter=isApplicationInstallRestricted) BOOL applicationInstallRestricted;
@property (readonly) ASDSoftwareUpdatesStore *appstoredUpdatesStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isGratisEligible) BOOL gratisEligible;
@property (readonly) NSUInteger hash;
@property (readonly) NSInteger parentalControlsRank;
@property (readonly, getter=isRunningInStoreDemoMode) BOOL runningInStoreDemoMode;
@property (readonly) Class superclass;


+(id)defaultCenter;
-(BOOL)_gratisStateIsValid;
-(BOOL)_isPurchaseForOffDeviceContent:(id)arg0 ;
-(BOOL)isItemRestrictedWithParentalControlsRank:(NSInteger)arg0 ;
-(id)_addState:(NSUInteger)arg0 forItemIdentifier:(id)arg1 ;
-(id)_copyItemsStatesForLibraryItems:(id)arg0 ;
-(id)_downloadPhaseForJobPhase:(NSInteger)arg0 ;
-(id)_jobManager;
-(id)_newPurchaseWithItem:(id)arg0 offer:(id)arg1 ;
-(id)_newPurchasesForSoftwareWithBundleItem:(id)arg0 bundleOffer:(id)arg1 ;
-(id)_newPurchasesWithBundleItem:(id)arg0 bundleOffer:(id)arg1 ;
-(id)_newPurchasesWithItems:(id)arg0 ;
-(id)_newSoftwarePurchaseWithItem:(id)arg0 offer:(id)arg1 ;
-(id)_purchaseHistoryDatabase;
-(id)_removeState:(NSUInteger)arg0 forItemIdentifier:(id)arg1 ;
-(id)_setStateFlag:(NSUInteger)arg0 forItemsWithIdentifiers:(id)arg1 sendNotification:(BOOL)arg2 ;
-(id)_setStateFlag:(NSUInteger)arg0 forOnlyItemsWithIdentifiers:(id)arg1 sendNotification:(BOOL)arg2 ;
-(id)gratisEligibleItemIdentifiers;
-(id)init;
-(id)metricsActionTypeForItem:(id)arg0 ;
-(id)performActionForItem:(id)arg0 clientContext:(id)arg1 ;
-(id)performActionForItem:(id)arg0 clientContext:(id)arg1 completionBlock:(id)arg2 ;
-(id)performActionForItem:(id)arg0 offer:(id)arg1 clientContext:(id)arg2 completionBlock:(id)arg3 ;
-(id)performActionForItem:(id)arg0 withCompletionBlock:(id)arg1 ;
-(id)performActionForSoftwareItem:(id)arg0 offer:(id)arg1 clientContext:(id)arg2 completionBlock:(id)arg3 ;
-(id)stateForItemWithIdentifier:(NSInteger)arg0 ;
-(id)stateForItemWithStoreIdentifier:(id)arg0 ;
-(void)_appstoredUpdatesStoreChangeNotification:(id)arg0 ;
-(void)_enumerateAvailableItemsForLibraryItems:(id)arg0 usingBlock:(id)arg1 ;
-(void)_fireFinishLoadBlocksIfNecessary;
-(void)_mediaLibraryDidChangeNotification:(id)arg0 ;
-(void)_notifyObserversOfMediaLibraryChange;
-(void)_notifyObserversOfPurchasesResponses:(id)arg0 ;
-(void)_notifyObserversOfRestrictionsChange;
-(void)_notifyObserversOfSoftwarePurchasesResponses:(id)arg0 ;
-(void)_notifyObserversOfStateChange:(id)arg0 ;
-(void)_notifyObserversOfStateChanges:(id)arg0 ;
-(void)_performPurchases:(id)arg0 hasBundlePurchase:(BOOL)arg1 withClientContext:(id)arg2 completionBlock:(id)arg3 ;
-(void)_performSoftwarePurchases:(id)arg0 withClientContext:(id)arg1 completionBlock:(id)arg2 ;
-(void)_reloadAppUpdatesStore;
-(void)_reloadDownloadManager;
-(void)_reloadJobManager;
-(void)_reloadMediaLibraryStateForItems:(id)arg0 ;
-(void)_reloadPurchaseHistory;
-(void)_reloadSoftwareLibrary;
-(void)_reloadStateForObservedMediaLibraryItems;
-(void)_removePurchasingItemsForPurchases:(id)arg0 ;
-(void)_replacePurchasingItem:(id)arg0 withDownloadIDs:(id)arg1 ;
-(void)_restrictionsChangedNotification:(id)arg0 ;
-(void)_setAvailableAppstoredUpdatesWithUpdates:(id)arg0 decrementLoadCount:(BOOL)arg1 ;
-(void)_setDownloads:(id)arg0 ;
-(void)_setFirstPartyRemovableItemsIdentifiers:(id)arg0 ;
-(void)_setGratisIdentifiers:(id)arg0 error:(id)arg1 ;
-(void)_setInstalledItems:(id)arg0 ;
-(void)_setJobs:(id)arg0 ;
-(void)_setPurchaseHistoryItemsWithIdentifiers:(id)arg0 ;
-(void)_setPurchaseHistoryVPPItemsWithIdentifiers:(id)arg0 ;
-(void)_storefrontDidChangeNotification:(id)arg0 ;
-(void)_updatesSoftwarePurchasingItemsForPurchases:(id)arg0 purchaseWasSuccessful:(BOOL)arg1 ;
-(void)_updatesStoreChangeNotification:(id)arg0 ;
-(void)addDownloads:(id)arg0 ;
-(void)addManifestDownloadWithURL:(id)arg0 placeholderMetadata:(id)arg1 ;
-(void)addMediaLibrary:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)addRelationshipForParentAdamId:(id)arg0 withChildAdamIds:(id)arg1 ;
-(void)beginObservingLibraryItems:(id)arg0 ;
-(void)cancelDownloadForItemWithIdentifier:(NSInteger)arg0 ;
-(void)dealloc;
-(void)downloadManager:(id)arg0 downloadStatesDidChange:(id)arg1 ;
-(void)downloadManagerDownloadsDidChange:(id)arg0 ;
-(void)downloadQueue:(id)arg0 downloadStates:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)downloadQueue:(id)arg0 downloadStatesDidChange:(id)arg1 ;
-(void)endObservingLibraryItems:(id)arg0 ;
-(void)evaluatePurchaseResponseForRentals:(id)arg0 ;
-(void)findLibraryItemsForContentIdentifiers:(id)arg0 options:(id)arg1 completionBlock:(id)arg2 ;
-(void)finishLoadingWithCompletionBlock:(id)arg0 ;
-(void)getSoftwareUpdatesWithCompletionBlock:(id)arg0 ;
-(void)getUpdatesWithCompletionBlock:(id)arg0 ;
-(void)jobManager:(id)arg0 changedJobs:(id)arg1 ;
-(void)jobManager:(id)arg0 completedJobs:(id)arg1 ;
-(void)jobManager:(id)arg0 updatedProgressOfJobs:(id)arg1 ;
-(void)jobManager:(id)arg0 updatedStateOfJobs:(id)arg1 ;
-(void)performActionForLibraryItem:(id)arg0 ;
-(void)purchaseItem:(id)arg0 offer:(id)arg1 clientContext:(id)arg2 completionBlock:(id)arg3 ;
-(void)purchaseItems:(id)arg0 withClientContext:(id)arg1 completionBlock:(id)arg2 ;
-(void)purchaseItems:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)purchaseSoftwareItem:(id)arg0 offer:(id)arg1 clientContext:(id)arg2 completionBlock:(id)arg3 ;
-(void)purchaseTone:(id)arg0 withProperties:(id)arg1 clientContext:(id)arg2 completionBlock:(id)arg3 ;
-(void)reloadFromServer;
-(void)reloadFromServerWithCompletionBlock:(id)arg0 ;
-(void)reloadGratisEligibilityWithBundleIdentifiers:(id)arg0 clientContext:(id)arg1 ;
-(void)reloadMediaLibrary:(id)arg0 ;
-(void)reloadSoftwareUpdatesFromServerWithCompletionBlock:(id)arg0 ;
-(void)removeMediaLibrary:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)removeRelationshipsForParentAdamId:(id)arg0 ;


@end


#endif
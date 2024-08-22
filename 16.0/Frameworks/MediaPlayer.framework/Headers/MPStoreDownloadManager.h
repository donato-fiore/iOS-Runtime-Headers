// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSTOREDOWNLOADMANAGER_H
#define MPSTOREDOWNLOADMANAGER_H

@class NSArray, NSMutableArray, NSDictionary, NSMapTable, NSHashTable, SSDownloadManager, SSPurchaseManager, NSString;
@protocol SSDownloadManagerObserver, SSPurchaseManagerDelegate, UIAlertViewDelegate, SSDownloadHandlerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MPStoreDownloadManager : NSObject <SSDownloadManagerObserver, SSPurchaseManagerDelegate, UIAlertViewDelegate, SSDownloadHandlerDelegate>

 {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSArray *_activeDownloads;
    NSObject<OS_dispatch_queue> *_calloutSerialQueue;
    NSMutableArray *_blockObservers;
    NSDictionary *_downloadKindToRequiredClientBundleIdentifiers;
    NSMutableArray *_downloads;
    NSMutableArray *_userDownloads;
    NSMapTable *_downloadIdentifiersToDownloads;
    NSMapTable *_downloadsToObservers;
    NSMapTable *_libraryIdentifiersToDownloads;
    NSHashTable *_observersForAllDownloads;
    NSMapTable *_storeIdentifiersToDownloads;
    BOOL _fetchedInitialDownloads;
    SSDownloadManager *_downloadManager;
    SSPurchaseManager *_purchaseManager;
}


@property (readonly, nonatomic) NSArray *activeDownloads;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *downloads;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *userDownloads;
@property (readonly, nonatomic, getter=isUsingNetwork) BOOL usingNetwork;


+(id)sharedManager;
-(BOOL)_isActiveDownload:(id)arg0 ;
-(BOOL)_onQueue_hasExistingDownloadForStoreDownload:(id)arg0 ;
-(BOOL)_shouldHideDownload:(id)arg0 ;
-(BOOL)hasFetchedInitialDownloads;
-(id)_existingDownloadForSSDownload:(id)arg0 ;
-(id)_init;
-(id)_observersForAllDownloads;
-(id)_observersForDownload:(id)arg0 ;
-(id)_onQueue_findStoreDownloadWithSSDownload:(id)arg0 SSPurchase:(id)arg1 ;
-(id)activeDownloadForMediaItemPersistentID:(NSUInteger)arg0 ;
-(id)activeDownloadForStoreID:(NSInteger)arg0 ;
-(id)addDownloads:(id)arg0 ;
-(id)downloadForDownloadPersistentIdentifier:(NSInteger)arg0 ;
-(id)downloadForMediaItem:(id)arg0 ;
-(id)downloadForMediaItemPersistentID:(NSUInteger)arg0 ;
-(id)downloadForStoreID:(NSInteger)arg0 ;
-(id)init;
-(void)_addNonCancelledDownloadsToActiveList:(id)arg0 ;
// -(void)_addPurchaseFinishedHandler:(id)arg0 forDownloads:(unk)arg1  ;
-(void)_onQueue_addDownloadToMapTables:(id)arg0 ;
-(void)_onQueue_removeDownloadFromMapTables:(id)arg0 ;
-(void)_registerBlockObserver:(id)arg0 ;
-(void)_sendActiveDownloadsDidChangeToObserversWithAddedDownloads:(id)arg0 removedDownloads:(id)arg1 ;
-(void)_sendDownloadsDidChangeToObserversWithAddedDownloads:(id)arg0 removedDownloads:(id)arg1 ;
-(void)_sendDownloadsDidFinishPurchasesToObserversForDownloads:(id)arg0 ;
-(void)_sendDownloadsDidFinishToObserversForDownloads:(id)arg0 notifyDownloadManager:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_sendDownloadsDidProgressToObserversForDownloads:(id)arg0 ;
-(void)_unregisterBlockObserver:(id)arg0 ;
-(void)_updateActiveDownloadsWithCancelledDownloads:(id)arg0 ;
-(void)_updateActiveDownloadsWithChangedActiveDownloads:(id)arg0 inactiveDownloads:(id)arg1 ;
-(void)_updateDownloadsWithAdditions:(id)arg0 removals:(id)arg1 ;
-(void)_updateMediaItemPropertiesForFinishedStoreDownload:(id)arg0 SSDownload:(id)arg1 ;
// -(void)addFinishHandler:(id)arg0 forDownloads:(unk)arg1  ;
-(void)addObserver:(id)arg0 forDownloads:(id)arg1 ;
-(void)cancelDownloads:(id)arg0 ;
-(void)dealloc;
-(void)downloadManager:(id)arg0 downloadStatesDidChange:(id)arg1 ;
-(void)downloadManagerNetworkUsageDidChange:(id)arg0 ;
-(void)pauseDownloads:(id)arg0 ;
-(void)prioritizeDownloads:(id)arg0 ;
-(void)purchaseManager:(id)arg0 didFinishPurchasesWithResponses:(id)arg1 ;
-(void)reloadFromServer;
-(void)removeObserver:(id)arg0 forDownloads:(id)arg1 ;
-(void)requestPermissionToDownloadWithType:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)restartDownloads:(id)arg0 ;
-(void)resumeDownloads:(id)arg0 ;


@end


#endif
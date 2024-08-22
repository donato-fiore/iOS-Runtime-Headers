// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMEDIADOWNLOADMANAGER_H
#define MPMEDIADOWNLOADMANAGER_H

@class NSMutableOrderedSet, NSMutableDictionary, NSXPCConnection, NSHashTable, NSArray, NSString;
@protocol NSXPCListenerDelegate, MPStoreDownloadManagerObserver, ATDownloadProgressObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MPStoreDownloadManager.h"

@interface MPMediaDownloadManager : NSObject <NSXPCListenerDelegate, MPStoreDownloadManagerObserver, ATDownloadProgressObserver>

 {
    NSMutableOrderedSet *_cachedATDownloads;
    NSMutableDictionary *_cachedProgressMap;
    NSMutableOrderedSet *_cachedATUnEnqueuedDownloads;
    NSMutableDictionary *_cachedATPausedDownloads;
    NSXPCConnection *__downloadProgressConnection;
    NSXPCConnection *__keepLocalTaskConnection;
    MPStoreDownloadManager *_storeDownloadManager;
    NSHashTable *_downloadObservers;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_xpcConnectionQueue;
    BOOL _hasRequiredAirTrafficEntitlement;
}


@property (readonly, nonatomic) NSInteger activeDownloadsCount;
@property (readonly, nonatomic) NSArray *allMediaDownloadLibraryIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedManager;
-(BOOL)_hasRequiredAirTrafficEntitlement;
-(BOOL)_isValidMediaAsset:(id)arg0 ;
-(BOOL)hasActiveDownloads;
-(id)_downloadProgressConnection;
-(id)_init;
-(id)_keepLocalTaskConnection;
-(id)_statusChangeObservers;
-(id)_updateCacheAndGetItemToReportForATAssetDownloadPauseReasonChange:(id)arg0 ;
-(id)_updateCacheAndGetMediaDownloadToReportForStoreDownloadProgress:(id)arg0 ;
-(id)_updateCacheAndItemToReportForATAssetDownloadProgressChange:(id)arg0 ;
-(id)activeDownloadForMediaItemPersistentID:(NSInteger)arg0 ;
-(id)activeDownloadForStoreID:(NSInteger)arg0 ;
-(id)downloadForIdentifierSet:(id)arg0 downloadState:(*NSInteger)arg1 ;
-(id)init;
-(void)_notifyObserversOfAssetDownloadProgress:(id)arg0 ;
-(void)_notifyObserversOfDownloadCompleteForAssets:(id)arg0 withError:(id)arg1 ;
-(void)_notifyObserversOfDownloadPauseReasonChangedForAssets:(id)arg0 ;
-(void)_prefectchAllATDownloads;
-(void)addObserver:(id)arg0 ;
-(void)atcDidDownloadAsset:(id)arg0 withError:(id)arg1 ;
-(void)atcDidEnqueueAsset:(id)arg0 ;
-(void)atcDidUpdateAsset:(id)arg0 withProgress:(float)arg1 ;
-(void)atcDidUpdateDownloadStateForAssets:(id)arg0 ;
-(void)atcWillEnqueueDownloads:(id)arg0 cancelDownloads:(id)arg1 ;
-(void)cancelDownloads:(id)arg0 ;
-(void)dealloc;
-(void)downloadLibraryWithCompletionHandler:(id)arg0 ;
-(void)downloadManager:(id)arg0 didAddDownloads:(id)arg1 removeDownloads:(id)arg2 ;
-(void)downloadManager:(id)arg0 downloadDidFinish:(id)arg1 ;
-(void)downloadManager:(id)arg0 downloadDidProgress:(id)arg1 ;
-(void)downloadManager:(id)arg0 downloadsDidProgress:(id)arg1 ;
-(void)enqueueAssetForDownload:(NSInteger)arg0 withCompletionHandler:(id)arg1 ;
-(void)prioritizeDownload:(NSInteger)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)sendKeepLocalStatusChanged:(NSInteger)arg0 forLibraryIdentifier:(NSInteger)arg1 entityType:(NSInteger)arg2 withCompletionHandler:(id)arg3 ;


@end


#endif
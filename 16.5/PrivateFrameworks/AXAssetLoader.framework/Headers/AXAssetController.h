// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXASSETCONTROLLER_H
#define AXASSETCONTROLLER_H

@class NSHashTable, NSArray, NSMutableSet, AXDispatchTimer;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AXAssetPolicy.h"

@interface AXAssetController : NSObject {
    os_unfair_lock_s _assetsLock;
    NSHashTable *_observers;
    NSArray *_cachedAvailableAssets;
    NSMutableSet *_cachedInProgressAssets;
    NSObject<OS_dispatch_queue> *_refreshQueue;
    AXDispatchTimer *_refreshDispatchTimer;
    int _notifyToken;
}


@property (readonly, nonatomic) AXAssetPolicy *assetPolicy; // ivar: _assetPolicy
@property (readonly, nonatomic) BOOL hasInProgressDownloads;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *mobileAssetQueue; // ivar: _mobileAssetQueue
@property (nonatomic) BOOL shouldRefreshForAssetInstallNotifications; // ivar: _shouldRefreshForAssetInstallNotifications
@property (nonatomic) BOOL userInitiated; // ivar: _userInitiated


+(id)assetControllerWithPolicy:(id)arg0 ;
+(id)assetControllerWithPolicy:(id)arg0 qosClass:(unsigned int)arg1 ;
+(id)assetControllerWithPolicy:(id)arg0 qosClass:(unsigned int)arg1 shouldRefreshForAssetInstallNotifications:(BOOL)arg2 ;
-(BOOL)isAssetCatalogInstalled;
-(id)_initWithAssetPolicy:(id)arg0 qosClass:(unsigned int)arg1 shouldRefreshForAssetInstallNotifications:(BOOL)arg2 ;
-(id)description;
-(id)refreshAssetsWithAttributesSynchronously:(id)arg0 installedOnly:(BOOL)arg1 ;
-(id)refreshInstalledAssetsSynchronously;
-(id)refreshWithoutCatalogUpdateSynchronously;
-(void)_deregisterForNotifications;
-(void)_handleAssetDownloadCompletion:(id)arg0 downloadResult:(NSInteger)arg1 ;
-(void)_handleAssetDownloadStarted:(id)arg0 ;
-(void)_handleAssetProgressUpdate:(id)arg0 progressNotification:(id)arg1 ;
// -(void)_queue_downloadAssets:(id)arg0 successStartBlock:(id)arg1 completionBlock:(unk)arg2  ;
-(void)_queue_purgeAssets:(id)arg0 completion:(id)arg1 ;
-(void)_queue_refreshAssets:(BOOL)arg0 completion:(id)arg1 ;
-(void)_queue_updateDownloadPriorityIfNecessary;
-(void)_refreshQueue_refreshAssets:(BOOL)arg0 completion:(id)arg1 ;
-(void)_registerForNotifications;
-(void)_replaceCachedAssetsWithAssets:(id)arg0 error:(id)arg1 completion:(id)arg2 ;
-(void)_updateCatalogWithOverrideTimeout:(id)arg0 completion:(id)arg1 ;
-(void)addInProgressAsset:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)downloadAssets:(id)arg0 successStartBlock:(id)arg1 ;
// -(void)downloadAssets:(id)arg0 successStartBlock:(id)arg1 completionBlock:(unk)arg2  ;
-(void)getCachedAvailableAssets:(id)arg0 ;
-(void)getCachedDownloadedAssets:(id)arg0 ;
-(void)performBlockOnAssetObservers:(id)arg0 ;
-(void)performWithinLock:(id)arg0 ;
-(void)purgeAssets:(id)arg0 ;
-(void)purgeAssets:(id)arg0 completion:(id)arg1 ;
-(void)purgeAssetsSynchronously:(id)arg0 ;
-(void)purgeInMemoryCachedAssets;
-(void)refreshAssetsByForceUpdatingCatalog:(BOOL)arg0 updatingCatalogIfNeeded:(BOOL)arg1 ;
-(void)refreshAssetsByForceUpdatingCatalog:(BOOL)arg0 updatingCatalogIfNeeded:(BOOL)arg1 catalogRefreshOverrideTimeout:(id)arg2 ;
-(void)refreshAssetsByForceUpdatingCatalog:(BOOL)arg0 updatingCatalogIfNeeded:(BOOL)arg1 catalogRefreshOverrideTimeout:(id)arg2 completion:(id)arg3 ;
-(void)removeInProgressAsset:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)stopDownloadAsset:(id)arg0 completion:(id)arg1 ;


@end


#endif
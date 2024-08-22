// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATASSETLINKCONTROLLER_H
#define ATASSETLINKCONTROLLER_H

@class NSMutableOrderedSet, NSMapTable, NSMutableDictionary, NSHashTable, MSVXPCTransaction, NSString;
@protocol ATAssetLinkDelegate, ICEnvironmentMonitorObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ATAssetLinkController : NSObject <ATAssetLinkDelegate, ICEnvironmentMonitorObserver>

 {
    NSMutableOrderedSet *_assetLinks;
    NSMutableOrderedSet *_assetQueue;
    NSMapTable *_assetsToLinks;
    NSMapTable *_assetsToFailedLinks;
    NSMutableDictionary *_activeTrackAssetsByAssetType;
    NSMutableDictionary *_trackAssetsPendingInstallByAssetType;
    NSMutableDictionary *_nonTrackAssetsPendingInstallByAssetType;
    NSMutableDictionary *_progressBlocksForAssetsInFlight;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSUInteger _cachedThermalLevel;
    BOOL _isNetworkConstrained;
    BOOL _currentNetworkIsCellularType;
    MSVXPCTransaction *_activeDownLoadsKeepAliveTransaction;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_assetIsEnqueued:(id)arg0 ;
-(BOOL)_canEnqueueAsset:(id)arg0 ;
-(BOOL)_canEnqueueAsset:(id)arg0 onLink:(id)arg1 ;
-(BOOL)_shouldReleaseKeepAliveTransaction;
-(BOOL)assetIsEnqueued:(id)arg0 ;
-(NSUInteger)_getMaxThermalPressureThreshold;
-(id)allAssetLinks;
-(id)allAssets;
-(id)filteredAssetsToDownloadForAssets:(id)arg0 ;
-(id)init;
-(void)_addFailedLink:(id)arg0 forAsset:(id)arg1 ;
-(void)_assetsDidChange;
-(void)_cancelAssets:(id)arg0 withError:(id)arg1 completion:(id)arg2 ;
-(void)_finishAsset:(id)arg0 withError:(id)arg1 ;
-(void)_handleEnqueue:(id)arg0 onLink:(id)arg1 withPriority:(BOOL)arg2 ;
-(void)_performSelectorOnObservers:(SEL)arg0 object:(id)arg1 object:(id)arg2 ;
-(void)_prioritizeAsset:(id)arg0 onLinkClass:(Class)arg1 ;
-(void)_updateCountsForFinishedTrackAssetTypes:(id)arg0 ;
-(void)addAssetLink:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)assetLink:(id)arg0 didCloseWithOutstandingAssets:(id)arg1 ;
-(void)assetLink:(id)arg0 didFinishAsset:(id)arg1 error:(id)arg2 retryable:(BOOL)arg3 ;
-(void)assetLink:(id)arg0 didFinishAsset:(id)arg1 error:(id)arg2 retryable:(BOOL)arg3 cancelPendingAssetsInBatch:(BOOL)arg4 ;
-(void)assetLink:(id)arg0 didOpenWithPendingAssets:(id)arg1 ;
-(void)assetLink:(id)arg0 didPauseAsseDownload:(id)arg1 error:(id)arg2 ;
-(void)assetLink:(id)arg0 didTransitionAssetStates:(id)arg1 ;
-(void)assetLink:(id)arg0 didUpdateAsset:(id)arg1 progress:(CGFloat)arg2 ;
-(void)assetLink:(id)arg0 didUpdateDownloadPauseReasonForAssets:(id)arg1 ;
-(void)assetLinkDidChange:(id)arg0 ;
-(void)cancelAllAssetsMatchingPredicate:(id)arg0 excludeActiveDownloads:(BOOL)arg1 withError:(id)arg2 completion:(id)arg3 ;
-(void)cancelAssets:(id)arg0 withCompletion:(id)arg1 ;
-(void)cancelAssets:(id)arg0 withError:(id)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)dispatchBlockOnControllerQueue:(id)arg0 ;
-(void)enqueueAssetForStoreDownload:(NSInteger)arg0 withCompletion:(id)arg1 ;
-(void)enqueueAssets:(id)arg0 ;
// -(void)enqueueAssets:(id)arg0 progress:(id)arg1 completion:(unk)arg2  ;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg0 ;
-(void)environmentMonitorDidChangeNetworkType:(id)arg0 ;
-(void)environmentMonitorDidChangeThermalLevel:(id)arg0 ;
-(void)installCompleteForAssets:(id)arg0 ;
-(void)prioritizeAsset:(id)arg0 ;
-(void)prioritizeAssetWithStoreForLibraryIdentifier:(NSInteger)arg0 withCompletion:(id)arg1 ;
-(void)removeAssetLink:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)setPendingAssets:(id)arg0 ;


@end


#endif
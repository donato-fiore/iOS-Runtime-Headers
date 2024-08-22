// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSASASSETDOWNLOADER_H
#define MSASASSETDOWNLOADER_H

@class NSMutableDictionary, NSString, NSMutableArray;
@protocol MSASAssetDownloaderDelegate;


#import "MSASAssetTransferer.h"

@interface MSASAssetDownloader : MSASAssetTransferer

@property (retain, nonatomic) NSMutableDictionary *assetToItemInFlightMap; // ivar: _assetToItemInFlightMap
@property (retain, nonatomic) NSString *currentFocusAlbumGUID; // ivar: _currentFocusAlbumGUID
@property (retain, nonatomic) NSString *currentFocusAssetCollectionGUID; // ivar: _currentFocusAssetCollectionGUID
@property (weak, nonatomic) NSObject<MSASAssetDownloaderDelegate> *delegate;
@property (nonatomic) BOOL didEncounterNetworkConditionError; // ivar: _didEncounterNetworkConditionError
@property (retain, nonatomic) NSString *downloadBatchPerfGUID; // ivar: _downloadBatchPerfGUID
@property (retain, nonatomic) NSMutableArray *finishedAssets; // ivar: _finishedAssets
@property (nonatomic) BOOL isDownloadingThumbnails; // ivar: _isDownloadingThumbnails
@property (nonatomic) BOOL isWaitingForFirstDownloadEvent; // ivar: _isWaitingForFirstDownloadEvent
@property (retain, nonatomic) NSMutableArray *itemsInFlight; // ivar: _itemsInFlight
@property (retain, nonatomic) NSString *objectGUID; // ivar: _objectGUID
@property (nonatomic) int state; // ivar: _state


-(id)_orphanedAssetError;
-(id)_pathForPersonID:(id)arg0 ;
-(id)workQueueObjectGUID;
-(void)MMCSEngine:(id)arg0 didCreateRequestorContext:(id)arg1 forAssets:(id)arg2 ;
-(void)MMCSEngine:(id)arg0 didFinishGettingAsset:(id)arg1 path:(id)arg2 error:(id)arg3 ;
-(void)MMCSEngine:(id)arg0 didFinishPuttingAsset:(id)arg1 error:(id)arg2 ;
-(void)MMCSEngine:(id)arg0 didMakeGetProgress:(float)arg1 state:(int)arg2 onAsset:(id)arg3 ;
-(void)MMCSEngine:(id)arg0 didMakePutProgress:(float)arg1 state:(int)arg2 onAsset:(id)arg3 ;
-(void)_workQueueDidFinishWithItem:(id)arg0 error:(id)arg1 ;
-(void)_workQueueGoIdle;
-(void)_workQueueStopTrackingItem:(id)arg0 ;
-(void)didEnqueueAsset:(id)arg0 forAlbumGUID:(id)arg1 ;
-(void)didFinishGettingAllAssets;
-(void)didFinishPuttingAllAssets;
-(void)registerAssets:(id)arg0 completionBlock:(id)arg1 ;
-(void)unregisterAssets:(id)arg0 ;
-(void)workQueueCancel;
-(void)workQueueDownloadNextBatch;
-(void)workQueueRegisterAssets:(id)arg0 completionBlock:(id)arg1 ;
-(void)workQueueRetryOutstandingActivities;
-(void)workQueueShutDownCompletionBlock:(id)arg0 ;
-(void)workQueueStop;
-(void)workQueueUnregisterAssets:(id)arg0 ;


@end


#endif
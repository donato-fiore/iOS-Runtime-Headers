// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSASASSETUPLOADER_H
#define MSASASSETUPLOADER_H

@class NSMutableDictionary, NSMutableSet, NSMutableArray;
@protocol MSASAssetUploaderDelegate;


#import "MSASAssetTransferer.h"

@interface MSASAssetUploader : MSASAssetTransferer

@property (retain, nonatomic) NSMutableDictionary *assetCollectionGUIDToRequestorContext; // ivar: _assetCollectionGUIDToRequestorContext
@property (retain, nonatomic) NSMutableDictionary *assetCollectionsToItemInFlightMap; // ivar: _assetCollectionsToItemInFlightMap
@property (retain, nonatomic) NSMutableSet *assetCollectionsWithAuthorizationError; // ivar: _assetCollectionsWithAuthorizationError
@property (retain, nonatomic) NSMutableDictionary *assetToAssetCollectionMap; // ivar: _assetToAssetCollectionMap
@property (weak, nonatomic) NSObject<MSASAssetUploaderDelegate> *delegate;
@property (nonatomic) BOOL didEncounterNetworkConditionError; // ivar: _didEncounterNetworkConditionError
@property (retain, nonatomic) NSMutableArray *finishedAssetCollections; // ivar: _finishedAssetCollections
@property (retain, nonatomic) NSMutableArray *itemsInFlight; // ivar: _itemsInFlight
@property (nonatomic) int state; // ivar: _state


-(id)_orphanedAssetCollectionError;
-(id)_pathForPersonID:(id)arg0 ;
-(void)MMCSEngine:(id)arg0 didCreateRequestorContext:(id)arg1 forAssets:(id)arg2 ;
-(void)MMCSEngine:(id)arg0 didFinishGettingAsset:(id)arg1 path:(id)arg2 error:(id)arg3 ;
-(void)MMCSEngine:(id)arg0 didFinishPuttingAsset:(id)arg1 putReceipt:(id)arg2 error:(id)arg3 ;
-(void)MMCSEngine:(id)arg0 didMakeGetProgress:(float)arg1 state:(int)arg2 onAsset:(id)arg3 ;
-(void)MMCSEngine:(id)arg0 didMakePutProgress:(float)arg1 state:(int)arg2 onAsset:(id)arg3 ;
-(void)_workQueueStop;
-(void)cancelAssetCollections:(id)arg0 ;
-(void)didFinishGettingAllAssets;
-(void)didFinishPuttingAllAssets;
-(void)registerAssetCollections:(id)arg0 completionBlock:(id)arg1 ;
-(void)unregisterAssetCollections:(id)arg0 ;
-(void)unregisterAssetCollections:(id)arg0 completionBlock:(id)arg1 ;
-(void)workQueueCancel;
-(void)workQueueCancelAssetCollections:(id)arg0 ;
-(void)workQueueDidFinishWithItem:(id)arg0 error:(id)arg1 ;
-(void)workQueueGoIdle;
-(void)workQueueRegisterAssetCollections:(id)arg0 index:(NSUInteger)arg1 results:(id)arg2 completionBlock:(id)arg3 ;
-(void)workQueueRegisterAssets:(id)arg0 index:(NSUInteger)arg1 completionBlock:(id)arg2 ;
-(void)workQueueRetryOutstandingActivities;
-(void)workQueueShutDownCompletionBlock:(id)arg0 ;
-(void)workQueueStop;
-(void)workQueueStopTrackingItem:(id)arg0 ;
-(void)workQueueUploadNextBatch;


@end


#endif
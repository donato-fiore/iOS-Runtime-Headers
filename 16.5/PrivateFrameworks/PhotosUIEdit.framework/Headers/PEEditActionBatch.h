// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PEEDITACTIONBATCH_H
#define PEEDITACTIONBATCH_H

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSArray, NSProgress;
@protocol OS_dispatch_queue, PEEditActionBatchDelegate, PELoadingStatusDelegate;

#import <Foundation/Foundation.h>

#import "PEResourceManager.h"
#import "PEPhotoKitMediaDestination.h"

@interface PEEditActionBatch : NSObject {
    NSDictionary *_actionMap;
    NSMutableDictionary *_loadingIdMap;
    NSMutableDictionary *_progressMap;
    NSMutableSet *_mediaRequestIds;
    NSObject<OS_dispatch_queue> *_loadingQueue;
    PEResourceManager *_resourceManager;
    NSArray *_assets;
    PEPhotoKitMediaDestination *_mediaDestination;
}


@property (readonly, nonatomic) NSInteger actionType; // ivar: _actionType
@property (nonatomic) BOOL async; // ivar: _async
@property (nonatomic) BOOL crossPlatformSerializationEnabled; // ivar: _crossPlatformSerializationEnabled
@property (weak, nonatomic) NSObject<PEEditActionBatchDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL forceRunAsUnadjustedAsset; // ivar: _forceRunAsUnadjustedAsset
@property (weak, nonatomic) NSObject<PELoadingStatusDelegate> *loadingStatusManager; // ivar: _loadingStatusManager
@property (readonly) NSProgress *progress; // ivar: _progress
@property (readonly, nonatomic) NSInteger state; // ivar: _state


-(id)_presetForAsset:(id)arg0 ;
-(id)_processAssets:(id)arg0 ;
-(id)_processWillBeginWithAsset:(id)arg0 progress:(CGFloat)arg1 ;
-(id)initWithAssets:(id)arg0 action:(id)arg1 progress:(id)arg2 ;
-(id)initWithAssets:(id)arg0 actionMap:(id)arg1 progress:(id)arg2 ;
-(void)_cancelLoading;
-(void)_commitComposition:(id)arg0 toResource:(id)arg1 changeType:(NSInteger)arg2 completion:(id)arg3 ;
-(void)_processDidCompleteWithID:(id)arg0 error:(id)arg1 ;
-(void)_processDidUpdateWithID:(id)arg0 progress:(CGFloat)arg1 ;
-(void)_processResult:(id)arg0 targetPreset:(id)arg1 completion:(id)arg2 ;
// -(void)_requestResourcesForAsset:(id)arg0 progressHandler:(id)arg1 resultHandler:(unk)arg2  ;
-(void)_setupWithActionMap:(id)arg0 assets:(id)arg1 progress:(id)arg2 ;
-(void)_updateProgress:(CGFloat)arg0 forLoadingID:(id)arg1 ;
-(void)cancel;
-(void)runActionWithBatchSize:(NSUInteger)arg0 completion:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISPLAYERITEM_H
#define ISPLAYERITEM_H

@class AVVideoComposition, AVPlayerItem, NSNumber, NSString, NSError, AVAssetImageGenerator;
@protocol OS_dispatch_queue;


#import "ISObservable.h"
#import "ISPlayerContent.h"
#import "ISAsset.h"

@interface ISPlayerItem : ISObservable {
    *void _ivarQueueIdentifier;
    *void _workQueueIdentifier;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSInteger _ivarQueue_loadingTarget;
    AVVideoComposition *_ivarQueue_videoComposition;
    NSInteger _ivarQueue_videoPlayerItemRequestID;
    BOOL _ivarQueue_aggressivelyCacheVideoFrames;
    BOOL _ivarQueue_reversesMoreVideoFramesInMemory;
    BOOL _ivarQueue_decodesAllFramesDuringOrdinaryPlayback;
    BOOL _ivarQueue_contentSupportsVitality;
    ? _ivarQueue_playerItemPhotoTime;
    ? _ivarQueue_playerItemDuration;
    ISPlayerContent *_ivarQueue_playerContent;
    NSInteger _ivarQueue_status;
    AVPlayerItem *_ivarQueue_videoPlayerItem;
    NSNumber *_ivarQueue_variationIdentifier;
    NSString *_ivarQueue_minimumClientVersion;
    NSError *_ivarQueue_error;
    ? _ivarQueue_isValid;
    AVAssetImageGenerator *_workQueue_imageGenerator;
    BOOL _workQueue_isGeneratingOffsetImage;
}


@property (nonatomic, getter=_isLoadingCancelled, setter=_setLoadingCancelled:) BOOL _loadingCancelled; // ivar: __loadingCancelled
@property (retain, nonatomic, setter=_setMinimumClientVersion:) NSString *_minimumClientVersion;
@property (retain, nonatomic, setter=_setVariationIdentifier:) NSNumber *_variationIdentifier;
@property (nonatomic, setter=_setVideoPlayerItemRequestID:) NSInteger _videoPlayerItemRequestID;
@property (nonatomic) BOOL aggressivelyCacheVideoFrames;
@property (readonly, nonatomic) ISAsset *asset; // ivar: _asset
@property (nonatomic) BOOL contentSupportsVitality;
@property (nonatomic) BOOL decodesAllFramesDuringOrdinaryPlayback;
@property (retain, nonatomic, setter=_setError:) NSError *error;
@property (nonatomic) NSInteger loadingTarget;
@property (retain, nonatomic, setter=_setPlayerContent:) ISPlayerContent *playerContent;
@property (nonatomic) BOOL reversesMoreVideoFramesInMemory;
@property (nonatomic, setter=_setStatus:) NSInteger status;
@property (readonly, nonatomic) CGSize targetSize; // ivar: _targetSize
@property (copy, nonatomic) AVVideoComposition *videoComposition;


+(NSInteger)currentClientVersion;
+(id)playerItemWithAsset:(id)arg0 targetSize:(struct CGSize )arg1 ;
-(BOOL)_isContentSupportsVitalityValid;
-(BOOL)_isMinimumClientVersionValid;
-(BOOL)_isOnIvarQueue;
-(BOOL)_isOnWorkQueue;
-(BOOL)_isPlaybackStyleIdentifierValid;
-(BOOL)_isPlayerContentValid;
-(BOOL)_isStatusVaild;
-(BOOL)_isVideoPlayerItemValid;
-(BOOL)_needsUpdate;
-(id)_videoPlayerItem;
-(id)init;
-(id)initWithAsset:(id)arg0 targetSize:(struct CGSize )arg1 ;
-(id)mutableChangeObject;
-(void)_assertOnIvarQueue;
-(void)_assertOnWorkQueue;
-(void)_cancelLoading;
-(void)_handleVideoPlayerItemLoadResultWithSuccess:(BOOL)arg0 playerItem:(id)arg1 videoDuration:(struct ? )arg2 error:(id)arg3 ;
-(void)_invalidateContentSupportsVitality;
-(void)_invalidateMinimumClientVersion;
-(void)_invalidatePlaybackStyleIdentifier;
-(void)_invalidatePlayerContent;
-(void)_invalidateStatus;
-(void)_invalidateVideoPlayerItem;
-(void)_performIvarRead:(id)arg0 ;
-(void)_performIvarWrite:(id)arg0 ;
-(void)_performWork:(id)arg0 ;
// -(void)_performWork:(id)arg0 sync:(unk)arg1  ;
-(void)_reloadAllContent;
-(void)_setVideoPlayerItem:(id)arg0 videoDuration:(struct ? )arg1 ;
-(void)_updateContentSupportsVitalityIfNeeded;
-(void)_updateIfNeeded;
-(void)_updateMinimumClientVersionIfNeeded;
-(void)_updatePlaybackStyleIdentifierIfNeeded;
-(void)_updatePlayerContentIfNeeded;
-(void)_updateStatusIfNeeded;
-(void)_updateVideoPlayerItemIfNeeded;
-(void)cancelLoading;
-(void)dealloc;
-(void)didPerformChanges;
-(void)discardContentBelowLoadingTarget;
-(void)performChanges:(id)arg0 ;
-(void)resetAVObjects;


@end


#endif
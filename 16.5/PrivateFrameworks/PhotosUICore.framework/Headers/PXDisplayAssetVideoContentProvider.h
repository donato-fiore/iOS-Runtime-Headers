// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXDISPLAYASSETVIDEOCONTENTPROVIDER_H
#define PXDISPLAYASSETVIDEOCONTENTPROVIDER_H

@class NSMutableDictionary, NSArray, NSString, ISWrappedAVAudioSession;
@protocol PXDisplayAssetVideoContentProviderRequestDelegate, OS_dispatch_queue, PXDisplayAsset;


#import "PXVideoContentProvider.h"
#import "PXMediaProvider.h"

@interface PXDisplayAssetVideoContentProvider : PXVideoContentProvider <PXDisplayAssetVideoContentProviderRequestDelegate>

 {
    NSInteger _videoRequestID;
    NSObject<OS_dispatch_queue> *_loadingQueue;
    NSObject<OS_dispatch_queue> *_postprocessingQueue;
    NSMutableDictionary *_loadingQueue_requestsByPriority;
    NSInteger _loadingQueue_lastRequestedPriority;
    id<PXDisplayAsset> *_loadingQueue_asset;
    CGFloat _videoAspectRatio;
    NSArray *_strategies;
    BOOL _requestURLOnly;
    NSString *_contentIdentifier;
    ISWrappedAVAudioSession *_audioSession;
}


@property (retain, nonatomic) NSObject<PXDisplayAsset> *asset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (readonly, nonatomic) BOOL needsPostprocessing;
@property (readonly) Class superclass;


-(BOOL)_loadingQueue_needsNewRequestForPriority:(NSInteger)arg0 ;
-(id)analyticsPayload;
-(id)audioSession;
-(id)contentIdentifier;
-(id)init;
-(id)initWithAsset:(id)arg0 mediaProvider:(id)arg1 deliveryStrategies:(id)arg2 audioSession:(id)arg3 requestURLOnly:(BOOL)arg4 ;
-(id)videoAspectRatio;
-(void)_handleMediaServicesWereResetNotification:(id)arg0 ;
-(void)_handlePostprocessedPlayerItem:(id)arg0 priority:(NSInteger)arg1 description:(id)arg2 ;
-(void)_loadingQueueBeginLoadingWithPriority:(NSInteger)arg0 ;
-(void)_loadingQueue_beginRequestForPriorityIfNeeded:(NSInteger)arg0 ;
-(void)_loadingQueue_cancelAllRequests;
-(void)_loadingQueue_reloadContent;
-(void)_postprocessingQueue_performPostprocessingOfItem:(id)arg0 info:(id)arg1 priority:(NSInteger)arg2 ;
-(void)beginLoadingWithPriority:(NSInteger)arg0 ;
-(void)cancelLoading;
-(void)makeUniqueContentIdentifier;
-(void)postprocessPlayerItem:(id)arg0 completionHandler:(id)arg1 ;
-(void)reloadContent;
-(void)request:(id)arg0 didFinishWithPlayerItem:(id)arg1 videoURL:(id)arg2 downloadedTimeRange:(struct ? )arg3 info:(id)arg4 ;
-(void)requestLoadingProgressDidChange:(id)arg0 ;


@end


#endif
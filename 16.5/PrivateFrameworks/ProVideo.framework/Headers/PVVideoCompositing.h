// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PVVIDEOCOMPOSITING_H
#define PVVIDEOCOMPOSITING_H

@class AVVideoComposition, NSDictionary, NSString;
@protocol AVVideoCompositing, OS_dispatch_queue;


#import "PVRendererBase.h"
#import "PVEffectScheduler.h"
#import "PVTaskTokenPool.h"
#import "PVVideoCompositingContext.h"

@interface PVVideoCompositing : PVRendererBase <AVVideoCompositing>

 {
    AVVideoComposition *_videoComposition;
    NSDictionary *_sourceAttributes;
    NSDictionary *_destinationBufferPoolAttributes;
    ? _videoCompositionDuration;
    *HGSynchronizable _trackerLock;
    deque<int, std::allocator<int>> _dropFrameTracker;
    int _windowedDropTotal;
    BOOL _droppedResolution;
    PVEffectScheduler *_effectScheduler;
    ? _schedulingTime;
    *HGSynchronizable _playerRateLock;
    float _playerRate;
    *HGSynchronizable _throttleLock;
    unsigned int _throttleRequestHandling;
    *HGSynchronizable _cancelPendingLock;
    *HGSynchronizable _notificationStateLock;
    BOOL _hostAppIsShuttingDown;
    BOOL _didEnterBackground;
    HGRef<PVRenderManager> _renderManager;
    NSObject<OS_dispatch_queue> *_refreshCompletionCallbackQueue;
    PVTaskTokenPool *_tokenPool;
}


@property (readonly, nonatomic) BOOL canConformColorOfSourceFrames;
@property (nonatomic) BOOL cancelsPendingRequests; // ivar: _cancelsPendingRequests
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned int minimumRequestCompletionTimeMS; // ivar: _minimumRequestCompletionTimeMS
@property unsigned int parentCode; // ivar: _parentCode
@property (copy, nonatomic) id *refreshCompletionBlock; // ivar: _refreshCompletionBlock
@property (readonly, nonatomic) NSDictionary *requiredPixelBufferAttributesForRenderContext;
@property (readonly, nonatomic) NSDictionary *sourcePixelBufferAttributes;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsHDRSourceFrames;
@property (readonly, nonatomic) BOOL supportsWideColorSourceFrames;
@property (nonatomic) BOOL thumbnailCompositing; // ivar: _thumbnailCompositing
@property (retain) PVVideoCompositingContext *videoCompositingContext;


+(BOOL)flushOnFinalRelease;
+(void)setFlushOnFinalRelease:(BOOL)arg0 ;
-(BOOL)inPlayback;
-(BOOL)shouldDoLowPowerExport;
-(float)playerRate;
-(id)init;
-(struct ? )schedulingTime;
-(void)_validateDestinationBufferColorSpace:(id)arg0 ;
-(void)applicationWillTerminate:(id)arg0 ;
-(void)callRefreshCompletionBlock:(BOOL)arg0 ;
-(void)cancelAllPendingVideoCompositionRequests;
-(void)dealloc;
-(void)didEnterBackground:(id)arg0 ;
-(void)didRecieveMemoryWarning:(id)arg0 ;
-(void)renderContextChanged:(id)arg0 ;
-(void)renderRequestFinished:(struct HGRef<PVRenderJob> )arg0 ;
-(void)setColorSpacesFromDestinationBuffer:(id)arg0 ;
-(void)setPlayerRate:(float)arg0 ;
-(void)setSchedulingTime:(struct ? )arg0 ;
-(void)setupEffectScheduler;
-(void)setupTextureFactories;
-(void)signalScheduling:(struct ? )arg0 playerRate:(float)arg1 ;
-(void)signalSchedulingResetSearch;
-(void)startVideoCompositionRequest:(id)arg0 ;
-(void)updateDestinationFormatForOutputColorSpace;
-(void)videoCompositionChanged:(id)arg0 ;
-(void)willEnterForeground:(id)arg0 ;


@end


#endif
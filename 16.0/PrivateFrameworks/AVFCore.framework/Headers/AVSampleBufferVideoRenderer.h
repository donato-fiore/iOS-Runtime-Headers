// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVSAMPLEBUFFERVIDEORENDERER_H
#define AVSAMPLEBUFFERVIDEORENDERER_H

@class NSError, NSMutableArray, NSString, NSArray;
@protocol AVMediaDataRequesterConsumer, AVFigVideoQueueFactory, AVQueuedSampleBufferRenderingInternal, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVSampleBufferDisplayLayer.h"
#import "AVMediaDataRequester.h"
#import "AVSampleBufferRenderSynchronizer.h"
#import "AVContentKeySession.h"

@interface AVSampleBufferVideoRenderer : NSObject <AVMediaDataRequesterConsumer, AVFigVideoQueueFactory, AVQueuedSampleBufferRenderingInternal>

 {
    *OpaqueFigVideoQueue _videoQueue;
    BOOL _outputObscured;
    NSInteger _status;
    NSError *_error;
    AVSampleBufferDisplayLayer *_weakDisplayLayer;
    *__CFArray _figVideoTargets;
    BOOL _preventsDisplaySleepDuringVideoPlayback;
    BOOL _requiresFlushToResumeDecoding;
    BOOL _hasEverEnqueued;
    BOOL _isRequestingMediaData;
    AVMediaDataRequester *_mediaDataRequester;
    BOOL _aboveHighWaterLevel;
    BOOL _createVideoQueueFailed;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_videoQueueQueue;
    NSObject<OS_dispatch_queue> *_layerQueue;
    AVSampleBufferRenderSynchronizer *_weakReferenceToSynchronizer;
    BOOL _addedToSynchronizer;
    BOOL _controlTimebaseSetByUserIsInUse;
    *OpaqueCMTimebase _controlTimebaseSetByUser;
    *OpaqueCMTimebase _readOnlyVideoQueueTimebase;
    *OpaqueCMTimebase _readOnlyRenderingTimebase;
    NSMutableArray *_videoOutputs;
    NSObject<OS_dispatch_queue> *_flushCallbackListQueue;
    NSObject<OS_dispatch_queue> *_flushCallbackQueue;
    NSMutableArray *_flushCallbacks;
    NSObject<OS_dispatch_queue> *_queueForProtectingPrerollCompleteCallback;
    id *_pendingPrerollCompleteCallback;
    int _pendingPrerollRequestID;
    NSObject<OS_dispatch_queue> *_queueForCallingPrerollCompleteCallback;
    int _upcomingPTSExpectation;
    ? _minimumUpcomingPTS;
    AVContentKeySession *_weakContentKeySession;
    *opaqueCMFormatDescription _lastFormatDescription;
    *OpaqueFigCPECryptor _lastCryptor;
    NSString *_STSLabel;
    id *_didFinishSuspensionNotificationToken;
}


@property (copy, nonatomic, getter=_STSLabel) NSString *STSLabel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL outputObscuredDueToInsufficientExternalProtection;
@property (readonly, nonatomic) NSArray *outputs;
@property (nonatomic) BOOL preventsCapture;
@property (nonatomic) BOOL preventsDisplaySleepDuringVideoPlayback;
@property (readonly) Class superclass;


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(void)initialize;
-(?)_createVideoQueueerrorStep;
-(?)copyFigSampleBufferAudioRenderer;
-(?)createVideoQueue;
-(BOOL)_createVideoQueueFailed;
-(BOOL)_hasEverEnqueued;
-(BOOL)_isCreateVideoQueueErrorRetryable:(int)arg0 ;
-(BOOL)_setSynchronizerTimebase:(struct OpaqueCMTimebase *)arg0 error:(*id)arg1 ;
-(BOOL)_setUpcomingPresentationTimeExpectations:(int)arg0 minimumPresentationTime:(struct ? )arg1 ;
-(BOOL)attachedToExternalContentKeySession;
-(BOOL)hasSufficientMediaDataForReliablePlaybackStart;
-(BOOL)isReadyForMoreMediaData;
-(BOOL)requiresFlushToResumeDecoding;
-(BOOL)setRenderSynchronizer:(id)arg0 error:(*id)arg1 ;
-(NSInteger)status;
-(id)_displayLayer;
-(id)contentKeySession;
-(id)currentFigVideoQueueFactory;
-(id)error;
-(id)init;
-(id)videoPerformanceMetrics;
-(int)_enqueueSingleSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 bufferEnqueueingInfo:(struct ? *)arg1 ;
-(int)_initializeTimebases;
-(int)_setContentLayerOnFigVideoQueue:(struct OpaqueFigVideoQueue *)arg0 ;
-(int)attachToContentKeySession:(id)arg0 contentKeyBoss:(struct CMBaseObject *)arg1 failedSinceAlreadyAttachedToAnotherSession:(*BOOL)arg2 ;
-(struct OpaqueCMTimebase *)_readOnlyVideoQueueTimebase;
-(struct OpaqueCMTimebase *)controlTimebase;
-(struct OpaqueCMTimebase *)timebase;
-(struct OpaqueFigVideoQueue *)_copyVideoQueue;
-(struct __CVBuffer *)copyDisplayedPixelBuffer;
-(void)_addFigVideoQueueListeners;
// -(void)_callOldPrerollCompletionHandlerWithSuccess:(BOOL)arg0 andSetNewPrerollCompletionHandler:(id)arg1 forRequestID:(unk)arg2  ;
-(void)_completedDecodeForPrerollForRequestID:(int)arg0 ;
-(void)_didFinishSuspension:(id)arg0 ;
-(void)_flushComplete;
-(void)_refreshAboveHighWaterLevel;
-(void)_removeFigVideoQueueListeners;
-(void)_resetStatusWithOSStatus:(int)arg0 ;
-(void)_setCreateVideoQueueFailedWithOSStatus:(int)arg0 ;
-(void)_setRequiresFlushToResumeDecoding:(BOOL)arg0 ;
-(void)_setStatus:(NSInteger)arg0 error:(id)arg1 ;
-(void)_updateVideoOutputs;
-(void)_updateVideoTargetsOnVideoQueue;
-(void)addOutput:(id)arg0 ;
-(void)addSampleBufferDisplayLayer:(id)arg0 ;
-(void)addVideoTarget:(struct OpaqueFigVideoTarget *)arg0 ;
-(void)dealloc;
-(void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 bufferEnqueueingInfo:(struct ? *)arg1 ;
-(void)expectMinimumUpcomingSampleBufferPresentationTime:(struct ? )arg0 ;
-(void)expectMonotonicallyIncreasingUpcomingSampleBufferPresentationTimes;
-(void)flush;
-(void)flushAndRemoveImage;
-(void)flushWithRemovalOfDisplayedImage:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)prerollDecodeWithCompletionHandler:(id)arg0 ;
-(void)removeOutput:(id)arg0 ;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg0 usingBlock:(id)arg1 ;
-(void)resetUpcomingSampleBufferPresentationTimeExpectations;
-(void)setContentKeySession:(id)arg0 ;
-(void)setControlTimebase:(struct OpaqueCMTimebase *)arg0 ;
-(void)setDisplayLayerVisibility:(BOOL)arg0 ;
-(void)setToneMapToStandardDynamicRange:(BOOL)arg0 ;
-(void)stopRequestingMediaData;


@end


#endif
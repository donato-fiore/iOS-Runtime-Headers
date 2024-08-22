// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVSAMPLEBUFFERDISPLAYLAYER_H
#define AVSAMPLEBUFFERDISPLAYLAYER_H

@class CALayer, NSString, NSError;
@protocol AVContentKeyRecipient, AVContentKeyRecipientInternal, AVQueuedSampleBufferRendering, AVMediaDataRequesterConsumer, AVQueuedSampleBufferRenderingInternal, OS_dispatch_queue;


#import "AVSampleBufferVideoOutput.h"
#import "AVSampleBufferVideoRenderer.h"

@interface AVSampleBufferDisplayLayer : CALayer <AVContentKeyRecipient, AVContentKeyRecipientInternal, AVQueuedSampleBufferRendering, AVMediaDataRequesterConsumer, AVQueuedSampleBufferRenderingInternal>

 {
    CALayer *_contentLayer;
    NSString *_videoGravity;
    CGSize _presentationSize;
    CGRect _bounds;
    NSObject<OS_dispatch_queue> *_serialQueue;
    AVSampleBufferVideoOutput *_videoOutput;
    CALayer *_STSLayer;
}


@property (retain) *OpaqueCMTimebase controlTimebase;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) BOOL hasSufficientMediaDataForReliablePlaybackStart;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL mayRequireContentKeysForMediaDataProcessing;
@property (readonly, nonatomic) BOOL mayRequireContentKeysForMediaDataProcessing;
@property (nonatomic) AVSampleBufferVideoOutput *output;
@property (readonly, nonatomic) BOOL outputObscuredDueToInsufficientExternalProtection;
@property (nonatomic) BOOL preventsCapture;
@property (nonatomic) BOOL preventsDisplaySleepDuringVideoPlayback;
@property (readonly, getter=isReadyForMoreMediaData) BOOL readyForMoreMediaData;
@property (readonly, nonatomic) BOOL requiresFlushToResumeDecoding;
@property (readonly, nonatomic, getter=_sampleBufferVideoRenderer) AVSampleBufferVideoRenderer *sampleBufferVideoRenderer; // ivar: _sampleBufferVideoRenderer
@property (readonly, nonatomic) NSInteger status;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, retain) *OpaqueCMTimebase timebase;
@property (copy) NSString *videoGravity;


+(id)keyPathsForValuesAffectingError;
+(id)keyPathsForValuesAffectingOutputObscuredDueToInsufficientExternalProtection;
+(id)keyPathsForValuesAffectingStatus;
-(?)copyFigSampleBufferAudioRenderer;
-(BOOL)_attachedToExternalContentKeySession;
-(BOOL)setRenderSynchronizer:(id)arg0 error:(*id)arg1 ;
-(id)_STSLabel;
-(id)_contentLayer;
-(id)contentKeySession;
-(id)init;
-(id)makeVideoRenderer;
-(id)videoPerformanceMetrics;
-(int)_attachToContentKeySession:(id)arg0 contentKeyBoss:(struct CMBaseObject *)arg1 failedSinceAlreadyAttachedToAnotherSession:(*BOOL)arg2 ;
-(struct CGRect )_destRectForAspectRatio:(struct CGSize )arg0 ;
-(struct CGRect )videoRect;
-(struct __CVBuffer *)copyDisplayedPixelBuffer;
-(void)_updateLayerTreeGeometryWithVideoGravity:(id)arg0 presentationSize:(struct CGSize )arg1 videoGravityShouldTriggerAnimation:(BOOL)arg2 ;
-(void)_updatePresentationSize:(struct CGSize )arg0 ;
-(void)dealloc;
-(void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)expectMinimumUpcomingSampleBufferPresentationTime:(struct ? )arg0 ;
-(void)expectMonotonicallyIncreasingUpcomingSampleBufferPresentationTimes;
-(void)expire;
-(void)flush;
-(void)flushAndRemoveImage;
-(void)flushWithRemovalOfDisplayedImage:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)layerDidBecomeVisible:(BOOL)arg0 ;
-(void)layoutSublayers;
-(void)postVideoRectDidChangeNotification;
-(void)prerollDecodeWithCompletionHandler:(id)arg0 ;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg0 usingBlock:(id)arg1 ;
-(void)resetUpcomingSampleBufferPresentationTimeExpectations;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setSTSLabel:(id)arg0 ;
-(void)setToneMapToStandardDynamicRange:(BOOL)arg0 ;
-(void)stopRequestingMediaData;


@end


#endif
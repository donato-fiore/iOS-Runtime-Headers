// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIVIDEOANALYZERSERVER_H
#define HMIVIDEOANALYZERSERVER_H

@class NSString, NSData, NSDate, HMFTimer;
@protocol HMIVideoCommandBufferDelegate, HMIVideoDecoderDelegate, HMIVideoEncoderDelegate, HMIVideoFrameSelectorDelegate, HMIVideoFrameAnalyzerDelegate, HMIVideoFrameTrackerDelegate, HMIVideoAssetWriterDelegate, HMIVideoFrameSamplerDelegate, HMFTimerDelegate, OS_dispatch_queue;


#import "HMIVideoAnalyzer.h"
#import "HMIVideoAssetWriter.h"
#import "HMIVideoCommandBuffer.h"
#import "HMIVideoDecoder.h"
#import "HMIVideoEventBuffer.h"
#import "HMIVideoEncoder.h"
#import "HMIVideoFrameAnalyzer.h"
#import "HMIVideoFrameSelector.h"
#import "HMIVideoFrameSampler.h"
#import "HMIVideoFrameTracker.h"
#import "HMIVideoTemporalEventFilter.h"
#import "HMIVideoTimeline.h"

@interface HMIVideoAnalyzerServer : HMIVideoAnalyzer <HMIVideoCommandBufferDelegate, HMIVideoDecoderDelegate, HMIVideoEncoderDelegate, HMIVideoFrameSelectorDelegate, HMIVideoFrameAnalyzerDelegate, HMIVideoFrameTrackerDelegate, HMIVideoAssetWriterDelegate, HMIVideoFrameSamplerDelegate, HMFTimerDelegate>

 {
    NSInteger _numDecodedSamples;
    NSInteger _numDidAnalyzeFrames;
    NSInteger _numDidAnalyzePackages;
    NSInteger _numDidAnalyzeFragments;
    NSInteger _numDidCreateTimelapseFragments;
    BOOL _monitored;
    BOOL _encode;
    CGFloat _analysisFPS;
}


@property (retain) HMIVideoAssetWriter *assetWriter; // ivar: _assetWriter
@property (getter=isCancelled) BOOL cancelled; // ivar: _cancelled
@property (readonly) HMIVideoCommandBuffer *commandBuffer; // ivar: _commandBuffer
@property ? currentDTS; // ivar: _currentDTS
@property ? currentPTS; // ivar: _currentPTS
@property (readonly, copy) NSString *debugDescription;
@property (readonly) HMIVideoDecoder *decoder; // ivar: _decoder
@property (readonly, copy) NSString *description;
@property (readonly) HMIVideoEventBuffer *dynamicConfigurationBuffer; // ivar: _dynamicConfigurationBuffer
@property (retain) HMIVideoEncoder *encoder; // ivar: _encoder
@property (readonly) NSObject<OS_dispatch_queue> *encoderQueue; // ivar: _encoderQueue
@property (readonly) HMIVideoFrameAnalyzer *frameAnalyzer; // ivar: _frameAnalyzer
@property (readonly) HMIVideoEventBuffer *frameAnalyzerFrameResultBuffer; // ivar: _frameAnalyzerFrameResultBuffer
@property (readonly) HMIVideoFrameSelector *frameSelector; // ivar: _frameSelector
@property (readonly) HMIVideoFrameSampler *frameThumbnailSampler; // ivar: _frameThumbnailSampler
@property (readonly) HMIVideoFrameSampler *frameTimelapseSampler; // ivar: _frameTimelapseSampler
@property (readonly) HMIVideoFrameTracker *frameTracker; // ivar: _frameTracker
@property BOOL hasFailed; // ivar: _hasFailed
@property (readonly) NSUInteger hash;
@property (retain) NSData *initializationSegment; // ivar: _initializationSegment
@property *opaqueCMFormatDescription inputAudioFormat; // ivar: _inputAudioFormat
@property (readonly) NSObject<OS_dispatch_queue> *inputQueue; // ivar: _inputQueue
@property *opaqueCMFormatDescription inputVideoFormat; // ivar: _inputVideoFormat
@property (retain) NSDate *lastFragmentReceivedDate; // ivar: _lastFragmentReceivedDate
@property (readonly) NSDate *startDate; // ivar: _startDate
@property (readonly) Class superclass;
@property (readonly) HMIVideoTemporalEventFilter *temporalEventFilter; // ivar: _temporalEventFilter
@property (readonly) HMIVideoEventBuffer *thumbnailBuffer; // ivar: _thumbnailBuffer
@property (readonly) CGFloat timeSinceAnalyzerStarted;
@property (readonly) CGFloat timeSinceLastFragmentWasReceived;
@property (retain) HMIVideoAssetWriter *timelapseAssetWriter; // ivar: _timelapseAssetWriter
@property (retain) HMIVideoEncoder *timelapseEncoder; // ivar: _timelapseEncoder
@property (retain) NSData *timelapseInitializationSegment; // ivar: _timelapseInitializationSegment
@property *opaqueCMFormatDescription timelapseOutputVideoFormat; // ivar: _timelapseOutputVideoFormat
@property (readonly) HMIVideoTimeline *timeline; // ivar: _timeline
@property (readonly) HMFTimer *watchdogTimer; // ivar: _watchdogTimer
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(BOOL)encode;
-(BOOL)monitored;
-(CGFloat)analysisFPS;
-(CGFloat)delay;
-(NSUInteger)status;
-(id)_filterFrameResult:(id)arg0 dynamicConfiguration:(id)arg1 motionDetections:(id)arg2 ;
-(id)dynamicConfigurationForTime:(struct ? )arg0 ;
-(id)initWithConfiguration:(id)arg0 identifier:(id)arg1 ;
-(id)state;
-(struct opaqueCMSampleBuffer *)frameSelector:(id)arg0 prepareFrame:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)_configureAssetWriter;
-(void)_configureEncoder;
-(void)_configureTimelapseAssetWriter;
-(void)_configureTimelapseEncoder;
-(void)_ensureDecoderForFragment:(id)arg0 ;
-(void)_ensureEncoder;
-(void)_ensureTimelapseEncoder;
-(void)_handleDecodedSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)_notifyDelegateDidAnalyzeFragmentWithResult:(id)arg0 ;
-(void)_notifyDelegateDidAnalyzeFrameWithResult:(id)arg0 ;
-(void)_notifyDelegateDidCreateTimelapseFragment:(id)arg0 ;
-(void)_notifyDelegateDidFailWithError:(id)arg0 ;
-(void)_notifyDelegateDidProduceAnalysisStateUpdate:(id)arg0 ;
-(void)_prepareForInputVideoFormat:(struct opaqueCMFormatDescription *)arg0 audioFormat:(struct opaqueCMFormatDescription *)arg1 ;
-(void)_prepareForTimelapseOutputVideoFormat:(struct opaqueCMFormatDescription *)arg0 ;
-(void)_produceResult:(SEL)arg0 withArguments:(id)arg1 ;
-(void)_saveFragmentDataToDisk:(id)arg0 diskBufferSize:(NSUInteger)arg1 ;
-(void)assetWriter:(id)arg0 didFailWithError:(id)arg1 ;
-(void)assetWriter:(id)arg0 didOutputInitializationSegment:(id)arg1 ;
-(void)assetWriter:(id)arg0 didOutputSeparableSegment:(id)arg1 segmentReport:(id)arg2 ;
-(void)buffer:(id)arg0 willHandleSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)bufferWillFlush:(id)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)decoder:(id)arg0 didDecodeSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)decoder:(id)arg0 didFailWithError:(id)arg1 ;
-(void)encoder:(id)arg0 didEncodeSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)encoder:(id)arg0 didFailWithError:(id)arg1 ;
-(void)finishWithCompletionHandler:(id)arg0 ;
-(void)flush;
-(void)flushAsync;
-(void)frameAnalyzer:(id)arg0 didAnalyzeFrame:(id)arg1 ;
-(void)frameAnalyzer:(id)arg0 didProduceAnalysisStateUpdate:(id)arg1 ;
-(void)frameSampler:(id)arg0 didSampleFrame:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)frameSelector:(id)arg0 didSelectFrame:(struct opaqueCMSampleBuffer *)arg1 reference:(struct opaqueCMSampleBuffer *)arg2 ;
-(void)frameSelector:(id)arg0 didSkipFrame:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)frameTracker:(id)arg0 didTrackFrame:(struct opaqueCMSampleBuffer *)arg1 background:(struct opaqueCMSampleBuffer *)arg2 motionDetections:(id)arg3 tracks:(id)arg4 ;
-(void)handleAssetData:(id)arg0 withOptions:(id)arg1 completionHandler:(id)arg2 ;
-(void)handleMessageWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)handleSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 errorHandler:(id)arg1 ;
-(void)setAnalysisFPS:(CGFloat)arg0 ;
-(void)setEncode:(BOOL)arg0 ;
-(void)setMonitored:(BOOL)arg0 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif
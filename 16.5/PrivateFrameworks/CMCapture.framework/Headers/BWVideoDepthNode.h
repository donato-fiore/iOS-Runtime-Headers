// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWVIDEODEPTHNODE_H
#define BWVIDEODEPTHNODE_H

@class NSString;
@protocol BWInferenceFormatProvider, BWInferencePixelBufferPoolProvider, MTLEvent;


#import "BWNode.h"
#import "BWInferenceEngine.h"
#import "BWInferenceScheduler.h"
#import "BWInferenceVideoFormat.h"
#import "BWFigVideoCaptureDevice.h"
#import "BWVideoFormat.h"
#import "BWPixelBufferPool.h"

@interface BWVideoDepthNode : BWNode <BWInferenceFormatProvider, BWInferencePixelBufferPoolProvider>

 {
    BWInferenceEngine *_inferenceEngine;
    BWInferenceScheduler *_inferenceScheduler;
    BWInferenceVideoFormat *_primaryMediaInputFormat;
    BWInferenceVideoFormat *_disparityInputFormat;
    *opaqueCMFormatDescription _depthFormatDescription;
    BWFigVideoCaptureDevice *_captureDevice;
    *opaqueCMSampleBuffer _previousDisparitySampleBuffer;
    *opaqueCMSampleBuffer _previousFeaturesSampleBuffer;
    *opaqueCMSampleBuffer _disparityPostprocessingInStateSampleBuffer;
    *opaqueCMSampleBuffer _disparityPostprocessingOutStateSampleBuffer;
    *__CVBuffer _initialDisparityPixelBuffer;
    *__CVBuffer _initialFeaturesPixelBuffer;
    *__CVBuffer _blankDisparityPixelBuffer;
    ? _depthOutputDimensions;
    BOOL _videoDepthEnabled;
    BOOL _structuredLightIsOccluded;
    BWVideoFormat *_featuresVideoFormat;
    BWVideoFormat *_disparityStateVideoFormat;
    BWVideoFormat *_internalDisparityVideoFormat;
    BWPixelBufferPool *_internalDisparityPool;
    BWPixelBufferPool *_featuresPool;
    id<MTLEvent> *_backpressureEvent;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(BOOL)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)arg0 ;
-(id)initWithInferenceScheduler:(id)arg0 captureDevice:(id)arg1 videoDepthConfiguration:(id)arg2 ;
-(id)inputFormatForAttachedMediaKey:(id)arg0 ;
-(id)inputInferenceVideoFormatForAttachedMediaKey:(id)arg0 ;
-(id)inputVideoFormatForAttachedMediaKey:(id)arg0 ;
-(id)nodeSubType;
-(id)nodeType;
-(id)outputFormatForAttachedMediaKey:(id)arg0 ;
-(id)outputVideoFormatForAttachedMediaKey:(id)arg0 ;
-(id)preparedOutputPixelBufferPoolForAttachedMediaKey:(id)arg0 format:(id)arg1 ;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 forAttachedMediaKey:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;


@end


#endif
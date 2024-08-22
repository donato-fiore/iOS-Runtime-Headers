// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWVIDEODEPTHNODE_H
#define BWVIDEODEPTHNODE_H

@class NSString;
@protocol BWInferenceFormatProvider, BWInferencePixelBufferPoolProvider;


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
    *opaqueCMFormatDescription _colorImageFormatDescription;
    *opaqueCMFormatDescription _depthFormatDescription;
    BWFigVideoCaptureDevice *_captureDevice;
    *opaqueCMSampleBuffer _previousDisparitySampleBuffer;
    *opaqueCMSampleBuffer _previousFilteredDisparitySampleBuffer;
    *__CVBuffer _initialDisparityPixelBuffer;
    *__CVBuffer _initialFilteredPixelBuffer;
    *__CVBuffer _previousFilteredDisparityPixelBuffer;
    ? _depthOutputDimensions;
    BOOL _videoDepthEnabled;
    BWVideoFormat *_internalDisparityVideoFormat;
    BWVideoFormat *_cvsColorInputVideoFormat;
    BWPixelBufferPool *_internalDisparityPool;
    id *_postProcessCompletionBlock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(BOOL)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)arg0 ;
-(id)initWithInferenceScheduler:(id)arg0 captureDevice:(id)arg1 cinematographyModelVersionString:(id)arg2 videoDepthConfiguration:(id)arg3 ;
-(id)inputFormatForAttachedMediaKey:(id)arg0 ;
-(id)inputInferenceVideoFormatForAttachedMediaKey:(id)arg0 ;
-(id)inputVideoFormatForAttachedMediaKey:(id)arg0 ;
-(id)nodeSubType;
-(id)nodeType;
-(id)outputFormatForAttachedMediaKey:(id)arg0 ;
-(id)outputVideoFormatForAttachedMediaKey:(id)arg0 ;
-(id)preparedOutputPixelBufferPoolForAttachedMediaKey:(id)arg0 format:(id)arg1 ;
-(void)_copyPreviousFilteredDisparityIfPossible:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)dealloc;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 forAttachedMediaKey:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;


@end


#endif
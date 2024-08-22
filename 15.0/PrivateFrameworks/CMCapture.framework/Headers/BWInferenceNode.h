// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWINFERENCENODE_H
#define BWINFERENCENODE_H

@class NSSet, NSString;
@protocol BWInferenceFormatProvider, BWInferencePixelBufferPoolProvider;


#import "BWNode.h"
#import "BWFigVideoCaptureDevice.h"
#import "BWInferenceEngine.h"

@interface BWInferenceNode : BWNode <BWInferenceFormatProvider, BWInferencePixelBufferPoolProvider>

 {
    NSSet *_inferenceTypesToSkip;
    os_unfair_lock_s _inferenceTypesToSkipLock;
    BWFigVideoCaptureDevice *_captureDevice;
    BOOL _awaitAsynchronousOutputs;
    BOOL _applyRecommendedMasterPortType;
    NSString *_recommendedMasterPortType;
}


@property (nonatomic) int additionalOutputPoolRetainedBufferCount; // ivar: _additionalOutputPoolRetainedBufferCount
@property (nonatomic) BOOL applyRecommendedMasterPortType;
@property (nonatomic) BOOL awaitAsynchronousOutputs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BWInferenceEngine *inferenceEngine; // ivar: _inferenceEngine
@property (nonatomic) BOOL passthroughInputSampleBuffer; // ivar: _passthroughInputSampleBuffer
@property (copy, nonatomic) id *postprocessFilter; // ivar: _postprocessFilter
@property (readonly) Class superclass;


+(void)initialize;
-(BOOL)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)arg0 ;
-(id)initWithCaptureDevice:(id)arg0 scheduler:(id)arg1 priority:(unsigned int)arg2 ;
-(id)inputFormatForAttachedMediaKey:(id)arg0 ;
-(id)inputInferenceVideoFormatForAttachedMediaKey:(id)arg0 ;
-(id)inputVideoFormatForAttachedMediaKey:(id)arg0 ;
-(id)nodeSubType;
-(id)nodeType;
-(id)outputFormatForAttachedMediaKey:(id)arg0 ;
-(id)outputVideoFormatForAttachedMediaKey:(id)arg0 ;
-(id)preparedOutputPixelBufferPoolForAttachedMediaKey:(id)arg0 format:(id)arg1 ;
-(int)addInferenceOfType:(int)arg0 version:(struct ? )arg1 ;
-(int)addInferenceOfType:(int)arg0 version:(struct ? )arg1 configuration:(id)arg2 ;
-(struct opaqueCMSampleBuffer *)createOutputSampleBufferFromInput:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)dealloc;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 forAttachedMediaKey:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;
-(void)setInferencesToSkip:(id)arg0 ;
-(void)willEmitSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)willEmitSampleBufferAlways:(struct opaqueCMSampleBuffer *)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OPTICALFLOW_H
#define OPTICALFLOW_H

@protocol MTLDeviceSPI, MTLCommandQueue, OS_dispatch_semaphore, OS_dispatch_group, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FeatureExtractor.h"
#import "Correlation.h"
#import "Backwarp.h"

@interface OpticalFlow : NSObject {
    FeatureExtractor *_featureExtractor;
    FlowEstimate" _flowEstimator;
    FeatureExtractor *_baseFeatureExtractor;
    FlowEstimate" _baseFlowEstimator;
    Correlation *_correlation;
    Backwarp *_backwarp;
    id<MTLDeviceSPI> *_device;
    id<MTLCommandQueue> *_commandQueue;
    NSObject<OS_dispatch_semaphore> *_flowEstimateSemaphore;
    NSObject<OS_dispatch_group> *_dispatchGroup;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
    NSInteger _usage;
    NSInteger _baseStageUsage;
    BOOL _baseStageCreated;
    ? _features;
    ? _opticalFlowStroages;
    BOOL _resourcePreAllocated;
    BOOL _upscaleFinalFlow;
    BOOL _4xUpscale;
}


@property (nonatomic) BOOL concurrentDualFlowProcessing; // ivar: _concurrentDualFlowProcessing
@property (nonatomic) NSUInteger downsampling; // ivar: _downsampling
@property (readonly, nonatomic) NSUInteger flowHeight; // ivar: _flowHeight
@property (readonly, nonatomic) NSUInteger flowWidth; // ivar: _flowWidth
@property (readonly) *? imageFeatures;
@property (readonly, nonatomic) int numLevels; // ivar: _numLevels
@property (nonatomic) BOOL skipLastLevel; // ivar: _skipLastLevel
@property (readonly) *? storages;
@property (nonatomic) BOOL twoStageFlow; // ivar: _twoStageFlow


-(?)allocateCorreleationBuffer:(?)arg0 forLevelextractor;
-(BOOL)createBaseLayer;
-(BOOL)createModules;
-(BOOL)use4xDownScale:(NSInteger)arg0 ;
-(id)init;
-(id)initWithMode:(NSInteger)arg0 ;
-(void)allocateFeatureBuffers:(struct ? *)arg0 ;
-(void)allocateImageFeature:(struct ? *)arg0 extractor:(id)arg1 ;
-(void)allocateIntermediateStageStorage:(struct ? *)arg0 baseStage:(BOOL)arg1 ;
-(void)allocateIntermediateStorage:(struct ? *)arg0 ;
-(void)allocateResources;
-(void)dealloc;
-(void)estimateFlowFromFirstFeatures:(struct ? *)arg0 secondFeature:(struct ? *)arg1 storage:(struct ? *)arg2 outputFlow:(struct __CVBuffer *)arg3 ;
-(void)estimateFlowLevel:(unsigned int)arg0 withEstimator:(*id)arg1 firstFeatures:(struct ? *)arg2 secondFeatures:(struct ? *)arg3 correlation:(struct __CVBuffer *)arg4 upscaledFlow:(struct __CVBuffer *)arg5 warpedImage:(struct __CVBuffer *)arg6 prevFlow:(struct __CVBuffer *)arg7 outputFlow:(struct __CVBuffer *)arg8 waitForComplete:(BOOL)arg9 ;
-(void)estimateStageFlowFromFirstFeatures:(struct ? *)arg0 secondFeature:(struct ? *)arg1 storage:(struct ? *)arg2 baseStage:(BOOL)arg3 startLevel:(int)arg4 lastLevel:(int)arg5 startFlow:(struct __CVBuffer *)arg6 outputFlow:(struct __CVBuffer *)arg7 ;
-(void)estimateTwoWayFlowFromFirstFeatures:(struct ? *)arg0 secondFeature:(struct ? *)arg1 storage:(struct ? *)arg2 outputForwardFlow:(struct __CVBuffer *)arg3 outputBackwardFlow:(struct __CVBuffer *)arg4 ;
-(void)extractFeaturesFromFirst:(struct __CVBuffer *)arg0 second:(struct __CVBuffer *)arg1 outputFeatures:(struct ? *)arg2 ;
-(void)extractFeaturesFromImage:(struct __CVBuffer *)arg0 outputFeatures:(struct ? *)arg1 ;
-(void)opticalFlowFirstFrame:(struct __CVBuffer *)arg0 secondFrame:(struct __CVBuffer *)arg1 flow:(struct __CVBuffer *)arg2 ;
-(void)opticalFlowFirstFrame:(struct __CVBuffer *)arg0 secondFrame:(struct __CVBuffer *)arg1 flowForward:(struct __CVBuffer *)arg2 flowBackward:(struct __CVBuffer *)arg3 ;
-(void)opticalFlowFirstFrame:(struct __CVBuffer *)arg0 secondFrame:(struct __CVBuffer *)arg1 flowForward:(struct __CVBuffer *)arg2 flowBackward:(struct __CVBuffer *)arg3 reUseFlow:(BOOL)arg4 ;
-(void)predictFowardFlow:(struct __CVBuffer *)arg0 fromBackwardFlow:(struct __CVBuffer *)arg1 ;
-(void)releaseFeatureBuffers:(struct ? *)arg0 ;
-(void)releaseImageFeature:(struct ? *)arg0 ;
-(void)releaseIntermediateStageStorage:(struct ? *)arg0 ;
-(void)releaseIntermediateStorage:(struct ? *)arg0 ;
-(void)releaseResources;
-(void)releaseUnusedFeatures:(struct ? *)arg0 ;
-(void)subsmapleInput:(struct __CVBuffer *)arg0 to:(struct __CVBuffer *)arg1 forUsage:(NSInteger)arg2 ;
-(void)switchUsageTo:(NSInteger)arg0 ;
-(void)updateFlowSize;
-(void)upscaleInputFlow:(struct __CVBuffer *)arg0 outFlow:(struct __CVBuffer *)arg1 ;


@end


#endif
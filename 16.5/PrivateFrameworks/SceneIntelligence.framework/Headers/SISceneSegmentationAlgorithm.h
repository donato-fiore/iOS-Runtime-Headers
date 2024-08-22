// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SISCENESEGMENTATIONALGORITHM_H
#define SISCENESEGMENTATIONALGORITHM_H

@class NSString;
@protocol SIVisualLoggerSupporting;


#import "SIAlgorithm.h"
#import "SIScaler.h"
#import "SISceneSegmentation.h"
#import "SIImageInputData.h"
#import "SISceneSegmentationNetworkConfiguration.h"

@interface SISceneSegmentationAlgorithm : SIAlgorithm <SIVisualLoggerSupporting>

 {
    SIScaler *_scalerOne;
    SIScaler *_depthScaler;
    CGFloat _frameTimestamp;
    SISceneSegmentation *_model;
    SIImageInputData *_inputData;
}


@property (readonly, nonatomic) SISceneSegmentationNetworkConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)inputDataClass;
+(Class)outputDataClass;
+(id)subLoggers;
+(struct CGSize )getOutputResolution:(NSInteger)arg0 ;
+(struct CGSize )outputResolution;
-(BOOL)_isDepthAwareModel;
-(BOOL)supportUncertainty;
-(NSInteger)_inferenceWithInput:(id)arg0 output:(id)arg1 ;
-(NSInteger)_postprocessingOutput:(id)arg0 ;
-(NSInteger)_preprocessingInputData:(id)arg0 ;
-(NSInteger)_switchConfiguration:(NSUInteger)arg0 ;
-(NSInteger)runWithInput:(struct __CVBuffer *)arg0 depth:(struct __CVBuffer *)arg1 output:(id)arg2 resampleOutput:(BOOL)arg3 networkConfiguration:(NSInteger)arg4 ;
-(NSInteger)runWithInput:(struct __CVBuffer *)arg0 depthInput:(struct __CVBuffer *)arg1 output:(struct __IOSurface *)arg2 confidenceOutput:(struct __IOSurface *)arg3 uncertaintyOutput:(struct __IOSurface *)arg4 resampleOutput:(BOOL)arg5 ;
-(NSInteger)runWithInput:(struct __CVBuffer *)arg0 depthInput:(struct __CVBuffer *)arg1 output:(struct __IOSurface *)arg2 confidenceOutput:(struct __IOSurface *)arg3 uncertaintyOutput:(struct __IOSurface *)arg4 resampleOutput:(BOOL)arg5 networkConfiguration:(NSInteger)arg6 ;
-(NSInteger)runWithInput:(struct __CVBuffer *)arg0 output:(id)arg1 resampleOutput:(BOOL)arg2 networkConfiguration:(NSInteger)arg3 ;
-(NSInteger)runWithInput:(struct __CVBuffer *)arg0 output:(struct __IOSurface *)arg1 confidenceOutput:(struct __IOSurface *)arg2 ;
-(NSInteger)runWithInput:(struct __CVBuffer *)arg0 output:(struct __IOSurface *)arg1 confidenceOutput:(struct __IOSurface *)arg2 resampleOutput:(BOOL)arg3 ;
-(NSInteger)runWithInput:(struct __CVBuffer *)arg0 output:(struct __IOSurface *)arg1 confidenceOutput:(struct __IOSurface *)arg2 resampleOutput:(BOOL)arg3 networkConfiguration:(NSInteger)arg4 ;
-(NSInteger)runWithInput:(struct __CVBuffer *)arg0 output:(struct __IOSurface *)arg1 confidenceOutput:(struct __IOSurface *)arg2 uncertaintyOutput:(struct __IOSurface *)arg3 ;
-(NSInteger)runWithInput:(struct __CVBuffer *)arg0 output:(struct __IOSurface *)arg1 confidenceOutput:(struct __IOSurface *)arg2 uncertaintyOutput:(struct __IOSurface *)arg3 resampleOutput:(BOOL)arg4 ;
-(NSInteger)runWithInput:(struct __CVBuffer *)arg0 output:(struct __IOSurface *)arg1 confidenceOutput:(struct __IOSurface *)arg2 uncertaintyOutput:(struct __IOSurface *)arg3 resampleOutput:(BOOL)arg4 networkConfiguration:(NSInteger)arg5 ;
-(id)initWithComputeEngine:(NSInteger)arg0 andNetworkConfiguration:(NSInteger)arg1 ;
-(id)initWithComputeEngine:(NSInteger)arg0 andNetworkConfiguration:(NSInteger)arg1 managedBuffers:(BOOL)arg2 ;
-(id)initWithComputeEngine:(NSInteger)arg0 andNetworkConfiguration:(NSInteger)arg1 uncertaintyThreshold:(float)arg2 ;
-(id)initWithComputeEngine:(NSInteger)arg0 andNetworkConfiguration:(NSInteger)arg1 uncertaintyThreshold:(float)arg2 useE5RT:(BOOL)arg3 ;
-(id)initWithInputResolution:(struct CGSize )arg0 andComputeEngine:(NSInteger)arg1 ;
-(id)initWithNetworkConfiguration:(id)arg0 ;


@end


#endif
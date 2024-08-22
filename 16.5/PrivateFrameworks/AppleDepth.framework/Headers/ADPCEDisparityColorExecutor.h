// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ADPCEDISPARITYCOLOREXECUTOR_H
#define ADPCEDISPARITYCOLOREXECUTOR_H

@protocol MTLDevice, MTLCommandQueue;


#import "ADExecutor.h"
#import "ADPCEDisparityColorPipeline.h"
#import "ADPCEDisparityColorExecutorParameters.h"

@interface ADPCEDisparityColorExecutor : ADExecutor {
    BOOL _isPrepared;
    ADPCEDisparityColorPipeline *_pipeline;
    id<MTLDevice> *_metalDevice;
    id<MTLCommandQueue> *_cmdQueue;
    *__CVBuffer _preprocessorInputMetalHelper;
    *__CVBuffer _preprocessorOutputMetalHelper;
    *__CVBuffer _postprocessorInputMetalHelper;
    *__CVBuffer _postprocessorOutputMetalHelper;
    *__CVBuffer _itmCroppedScaledColor;
    *__CVBuffer _itmRotatedColor;
    *__CVBuffer _itmPreProcessedColor;
    *__CVBuffer _itmCroppedScaledDisparity;
    *__CVBuffer _itmRotatedDisparity;
    *__CVBuffer _itmProcessedUnfilteredDisparity;
    *__CVBuffer _itmPreProcessedDisparity;
    *__CVBuffer _itmPrevDisparity;
    BOOL _prevDisparityIsZeros;
    *__CVBuffer _itmPrevFeatures;
    *__CVBuffer _itmUnprocessedOutputDisparity;
    *__CVBuffer _itmPostProcessedDisparity;
    *__CVBuffer _itmFeaturesOutput;
}


@property (copy, nonatomic) ADPCEDisparityColorExecutorParameters *executorParameters; // ivar: _executorParameters
@property (readonly, nonatomic) *__CVBuffer prevDisparity;
@property (readonly, nonatomic) *__CVBuffer prevFeatures;


-(?)executeWithDisparity:(?)arg0 coloroutDisparity;
-(?)executeWithDisparity:(?)arg0 normalizationMultiplier:(?)arg1 normalizationOffset:(?)arg2 coloroutDisparity;
-(NSInteger)allocateIntermediateBuffers;
-(NSInteger)numberOfExecutionSteps;
-(NSInteger)postProcessDisparity:(struct __CVBuffer *)arg0 output:(struct __CVBuffer *)arg1 ;
-(NSInteger)preProcessDisparity:(struct __CVBuffer *)arg0 normalizationMultiplier:(float)arg1 normalizationOffset:(float)arg2 output:(struct __CVBuffer *)arg3 ;
-(NSInteger)prepareForEngineType:(NSUInteger)arg0 inputColorROI:(struct CGRect )arg1 ;
-(id)getIntermediates;
-(id)init;
-(id)initForInputSource:(NSUInteger)arg0 ;
-(id)initForInputSource:(NSUInteger)arg0 parameters:(id)arg1 ;
-(void)dealloc;
-(void)deallocateEspressoBuffers;


@end


#endif
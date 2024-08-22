// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ADMONOCULAREXECUTOR_H
#define ADMONOCULAREXECUTOR_H



#import "ADExecutor.h"
#import "ADMonocularPipeline.h"
#import "ADMonocularExecutorParameters.h"

@interface ADMonocularExecutor : ADExecutor {
    ADMonocularPipeline *_pipeline;
    *__CVBuffer _itmCroppedScaledColor;
    *__CVBuffer _itmRotatedColor;
    *__CVBuffer _itmPreProcessedColor;
    *__CVBuffer _itmUnprocessedDepth;
    *__CVBuffer _itmPostProcessedDepth;
}


@property (retain, nonatomic) ADMonocularExecutorParameters *executorParameters; // ivar: _executorParameters


-(?)executeWithColoroutDepthMap;
-(NSInteger)allocateIntermediateBuffers;
-(NSInteger)numberOfExecutionSteps;
-(NSInteger)prepareForEngineType:(NSUInteger)arg0 roi:(struct CGRect )arg1 exifOrientation:(unsigned int)arg2 ;
-(NSInteger)prepareForEngineType:(NSUInteger)arg0 roi:(struct CGRect )arg1 exifOrientation:(unsigned int)arg2 rotationPreference:(NSUInteger)arg3 ;
-(id)getIntermediates;
-(id)initWithInputPrioritization:(NSInteger)arg0 ;
-(void)dealloc;
-(void)deallocateEspressoBuffers;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ADMONOCULARV2EXECUTOR_H
#define ADMONOCULARV2EXECUTOR_H



#import "ADExecutor.h"
#import "ADMonocularV2Pipeline.h"
#import "ADMonocularV2ExecutorParameters.h"

@interface ADMonocularV2Executor : ADExecutor {
    BOOL _isPrepared;
    ADMonocularV2Pipeline *_pipeline;
    *__CVBuffer _itmCroppedScaledColor;
    *__CVBuffer _itmRotatedColor;
    *__CVBuffer _itmPreProcessedColor;
    *__CVBuffer _itmPrevDisparity;
    *__CVBuffer _itmUnprocessedOutputDisparity;
}


@property (copy, nonatomic) ADMonocularV2ExecutorParameters *executorParameters; // ivar: _executorParameters
@property (readonly, nonatomic) *__CVBuffer prevDisparity;


-(?)executeWithColoroutDisparity;
-(NSInteger)allocateIntermediateBuffers;
-(NSInteger)numberOfExecutionSteps;
-(NSInteger)prepareForEngineType:(NSUInteger)arg0 inputColorROI:(struct CGRect )arg1 ;
-(id)getIntermediates;
-(id)initWithInputPrioritization:(NSInteger)arg0 ;
-(id)initWithInputPrioritization:(NSInteger)arg0 parameters:(id)arg1 ;
-(void)dealloc;
-(void)deallocateEspressoBuffers;


@end


#endif
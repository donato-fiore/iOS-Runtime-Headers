// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ADSTEREOEXECUTOR_H
#define ADSTEREOEXECUTOR_H



#import "ADExecutor.h"
#import "ADStereoExecutorParameters.h"
#import "ADStereoPipeline.h"

@interface ADStereoExecutor : ADExecutor {
    BOOL _isPrepared;
    CGRect _refColorROI;
    CGRect _auxColorROI;
    *__CVBuffer _refColor;
    *__CVBuffer _itmChunkyRefColor;
    *__CVBuffer _itmCroppedScaledRefColor;
    *__CVBuffer _itmRotatedRefColor;
    *__CVBuffer _auxColor;
    *__CVBuffer _itmChunkyAuxColor;
    *__CVBuffer _itmCroppedScaledAuxColor;
    *__CVBuffer _itmRotatedAuxColor;
    *__CVBuffer _disparity;
}


@property (copy, nonatomic) ADStereoExecutorParameters *executorParameters; // ivar: _executorParameters
@property (readonly, retain, nonatomic) ADStereoPipeline *pipeline; // ivar: _pipeline


-(?)executeWithRefColor:(?)arg0 auxColoroutDisparityMap;
-(NSInteger)allocateIntermediateBuffers;
-(NSInteger)numberOfExecutionSteps;
-(NSInteger)prepareForEngineType:(NSUInteger)arg0 ;
-(NSInteger)prepareWithBestEngine;
-(id)initWithInputAlignment:(NSUInteger)arg0 andPrioritization:(NSInteger)arg1 ;
-(id)initWithInputAlignment:(NSUInteger)arg0 prioritization:(NSInteger)arg1 andParameters:(id)arg2 ;
-(void)dealloc;
-(void)deallocateEspressoBuffers;


@end


#endif
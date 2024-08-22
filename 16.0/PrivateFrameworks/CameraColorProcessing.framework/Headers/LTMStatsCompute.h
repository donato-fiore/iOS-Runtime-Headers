// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LTMSTATSCOMPUTE_H
#define LTMSTATSCOMPUTE_H

@class FigMetalContext;
@protocol LTMAlgorithmBase, MTLComputePipelineState, MTLBuffer;

#import <Foundation/Foundation.h>


@interface LTMStatsCompute : NSObject <LTMAlgorithmBase>

 {
    FigMetalContext *_metalContext;
    id<MTLComputePipelineState> *_calcLTMStatisticsPipelineState;
    id<MTLComputePipelineState> *_calcLocalHistogramShift;
    id<MTLComputePipelineState> *_localHistAndThumKernelPipelineState;
    id<MTLComputePipelineState> *_globalHistKernelPipelineState;
    id<MTLComputePipelineState> *_collectLocalHistKernelPipelineState;
    id<MTLBuffer> *_localHistTmpBuffer;
    ? _threadgroupSize;
}




-(float)calcExposureRatio:(struct sRefDriverInputs *)arg0 ;
-(id)initWithMetalContext:(id)arg0 ;
-(int)allocateResources;
-(int)createShaders:(id)arg0 ;
-(int)encodeLTMStatisticsCalculationOptimized:(id)arg0 params:(struct ? *)arg1 globalHistogram:(id)arg2 localHistogram:(id)arg3 thumbnail:(id)arg4 ;
-(int)encodeLTMStatisticsCalculationPrecise:(id)arg0 paramsGlobalHist:(struct ? *)arg1 globalHistogram:(id)arg2 localHistogram:(id)arg3 thumbnail:(id)arg4 ;
-(int)prewarmShaders;
-(int)purgeResources;
-(void)computeInputParametersForImageWidth:(id)arg0 calcGlobalHistOnROI:(BOOL)arg1 with:(struct sRefDriverInputs *)arg2 to:(struct ? *)arg3 ;
-(void)dealloc;


@end


#endif
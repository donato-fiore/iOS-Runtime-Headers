// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ADJASPERCOLORV2EXECUTOR_H
#define ADJASPERCOLORV2EXECUTOR_H



#import "ADExecutor.h"
#import "ADJasperColorV2Pipeline.h"
#import "ADMutableJasperPointCloud.h"
#import "ADJasperColorV2ExecutorParameters.h"

@interface ADJasperColorV2Executor : ADExecutor {
    BOOL _isPrepared;
    ADJasperColorV2Pipeline *_pipeline;
    *__CVBuffer _itmPreProcessedColor;
    *PixelBufferUtilsSession _colorProcessingSession;
    *__CVBuffer _itmPreProcessedJasper;
    *__CVBuffer _itmPrevDepth;
    *__CVBuffer _itmPrevColor;
    *__CVBuffer _itmPrevUncertainty;
    *__CVBuffer _itmUnprocessedDepth;
    *__CVBuffer _itmUnprocessedUncertainty;
    ADMutableJasperPointCloud *_itmPovChangedPointCloud;
    BOOL _temporalConsistencySupported;
    BOOL _isPaddingRequired;
    NSUInteger _paddingLinesTop;
    NSUInteger _paddingLinesBottom;
    CGFloat _preScaledPaddingLines;
    CGFloat _colorScaleFactor;
}


@property (copy, nonatomic) ADJasperColorV2ExecutorParameters *executorParameters; // ivar: _executorParameters
@property (readonly, nonatomic) CGSize expectedOutputSize;
@property (readonly, nonatomic) *__CVBuffer prevColor;
@property (readonly, nonatomic) *__CVBuffer prevDepth;
@property (readonly, nonatomic) *__CVBuffer prevUncertainty;


-(?)executeWithColor:(?)arg0 pointCloud:(?)arg1 jasperToColorTransform:(?)arg2 colorCamera:(?)arg3 outputDepthMapoutputConfidenceMap;
-(NSInteger)allocateIntermediateBuffers;
-(NSInteger)numberOfExecutionSteps;
-(NSInteger)prepareForColorROI:(struct CGRect )arg0 ;
-(id)getIntermediates;
-(id)initWithInputPrioritization:(NSInteger)arg0 ;
-(id)initWithInputPrioritization:(NSInteger)arg0 engineType:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)deallocateEspressoBuffers;


@end


#endif
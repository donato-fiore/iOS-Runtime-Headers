// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ADJASPERCOLORSTILLSEXECUTOR_H
#define ADJASPERCOLORSTILLSEXECUTOR_H

@class NSString, ADJasperPointCloud, ADEspressoRunner, ADEspressoBufferHandle;


#import "ADExecutor.h"
#import "ADJasperColorStillsPipeline.h"
#import "ADJasperColorStillsExecutorParameters.h"

@interface ADJasperColorStillsExecutor : ADExecutor {
    BOOL _isPrepared;
    ADJasperColorStillsPipeline *_pipeline;
    NSString *_correctionLogString;
    *__CVBuffer _itmCroppedScaledColor;
    *__CVBuffer _itmRotatedColor;
    *__CVBuffer _itmPreProcessedColor;
    *__CVBuffer _itmPreProcessedJasper;
    *__CVBuffer _itmPreProcessedJasperForCorrection;
    ADJasperPointCloud *_aggregatedPointCloud;
    ADJasperPointCloud *_aggregatedPointCloudBeforeCorrection;
    *__CVBuffer _itmUnprocessedDepth;
    *__CVBuffer _itmUnscaledProcessedDepth;
    ADEspressoRunner *_correctionBackendEspressoRunner;
    ADEspressoRunner *_correctionFrontendEspressoRunner;
    ADEspressoBufferHandle *_sijFeaturesOutputBuffer;
    *float _sijFeaturesOutput;
    *float _sijFeaturesInput;
    *float _sijAnglesOutput;
    *float _sijErrorsOutput;
}


@property (copy, nonatomic) ADJasperColorStillsExecutorParameters *executorParameters; // ivar: _executorParameters


-(?)executeWithColor:(?)arg0 pointCloudArray:(?)arg1 jasper2ColorTransform:(?)arg2 colorCameraCalibrationoutDepthMap;
-(NSInteger)allocateIntermediateBuffers;
-(NSInteger)numberOfExecutionSteps;
-(NSInteger)prepareForEngineType:(NSUInteger)arg0 inputSize:(struct CGSize )arg1 ;
-(id)getIntermediates;
-(id)init;
-(void)dealloc;
-(void)deallocateEspressoBuffers;


@end


#endif
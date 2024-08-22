// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ADJASPERCOLOREXECUTOR_H
#define ADJASPERCOLOREXECUTOR_H

@class ADCameraCalibration;


#import "ADExecutor.h"
#import "ADJasperColorPipeline.h"
#import "ADLKTExecutor.h"
#import "ADJasperColorExecutorParameters.h"

@interface ADJasperColorExecutor : ADExecutor {
    ADJasperColorPipeline *_pipeline;
    ADLKTExecutor *_lktExecutor;
    *__CVBuffer _itmPreProcessedColor;
    *PixelBufferUtilsSession _colorProcessingSession;
    *__CVBuffer _itmPreProcessedJasper;
    *__CVBuffer _itmUnprocessedDepth;
    *__CVBuffer _itmPostProcessedDepth;
    *__CVBuffer _itmUnprocessedConf;
    *__CVBuffer _itmPostProcessedConf;
    *__CVBuffer _itmUnprocessedNormals;
    *__CVBuffer _itmPostProcessedNormals;
    *__CVBuffer _itmUnprocessedAlpha;
    *__CVBuffer _itmWarpedPrevDepth;
    *__CVBuffer _itmWarpedPrevConf;
    *__CVBuffer _itmOpticalFlow;
    *__CVBuffer _itmPrevProcessedFusedDepth;
    *__CVBuffer _itmCurrProcessedFusedDepth;
    *__CVBuffer _itmPrevProcessedFusedConf;
    *__CVBuffer _itmCurrProcessedFusedConf;
    *__CVBuffer _itmPrevProcessedFusedNormals;
    *__CVBuffer _itmCurrProcessedFusedNormals;
    BOOL _firstTimeExecution;
    BOOL _opticalFlowEnabled;
    ? _prevPose;
    ADCameraCalibration *_prevCamCalib;
}


@property (retain, nonatomic) ADJasperColorExecutorParameters *executorParameters; // ivar: _executorParameters


-(?)executeWithColor:(?)arg0 pointCloud:(?)arg1 outDepthMap:(?)arg2 outConfMap:(?)arg3 outNormalsMap:(?)arg4 worldToCameraTransformcameraCalibration;
-(?)executeWithColor:(?)arg0 pointCloud:(?)arg1 outDepthMap:(?)arg2 outConfMap:(?)arg3 worldToCameraTransformcameraCalibration;
-(?)executeWithColor:(?)arg0 pointCloud:(?)arg1 outDepthMap:(?)arg2 outConfMapoutNormalsMap;
-(?)executeWithColor:(?)arg0 pointCloud:(?)arg1 outDepthMapoutConfMap;
-(NSInteger)allocateIntermediateBuffers;
-(NSInteger)numberOfExecutionSteps;
-(NSInteger)prepareForEngineType:(NSUInteger)arg0 roi:(struct CGRect )arg1 exifOrientation:(unsigned int)arg2 ;
-(NSInteger)prepareForEngineType:(NSUInteger)arg0 roi:(struct CGRect )arg1 exifOrientation:(unsigned int)arg2 rotationPreference:(NSUInteger)arg3 ;
-(NSInteger)prepareForEngineType:(NSUInteger)arg0 roi:(struct CGRect )arg1 exifOrientation:(unsigned int)arg2 useTemporalConsistency:(BOOL)arg3 ;
-(NSInteger)prepareForEngineType:(NSUInteger)arg0 roi:(struct CGRect )arg1 exifOrientation:(unsigned int)arg2 useTemporalConsistency:(BOOL)arg3 rotationPreference:(NSUInteger)arg4 ;
-(id)getIntermediates;
-(id)initWithInputPrioritization:(NSInteger)arg0 ;
-(void)dealloc;
-(void)deallocateEspressoBuffers;


@end


#endif
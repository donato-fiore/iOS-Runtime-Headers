// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARDEPTHTECHNIQUE_H
#define ARDEPTHTECHNIQUE_H

@class ADJasperColorPipeline, ADEspressoJasperColorInferenceDescriptor, ADLKTOpticalFlow, ADLKTTexturesDescriptor, ADCameraCalibration, NSMutableArray, ADNormalsBuffer, NSString, ADJasperColorPipelineParameters;
@protocol ARTechniqueBusyState, ARMLDepthDataSourceProvider, OS_dispatch_queue, MTLDevice, MTLCommandQueue;


#import "ARMLImageProcessingTechnique.h"
#import "ARImageRotationTechnique.h"

@interface ARDepthTechnique : ARMLImageProcessingTechnique <ARTechniqueBusyState, ARMLDepthDataSourceProvider>

 {
    CGSize _outputSize;
    ADJasperColorPipeline *_pipeline;
    ADEspressoJasperColorInferenceDescriptor *_inferenceDescriptor;
    ADLKTOpticalFlow *_lkt;
    ADLKTTexturesDescriptor *_lktDescriptor;
    BOOL _alphamapAvailable;
    NSUInteger _layout;
    *__CVPixelBufferPool _outputDepthPixelBufferPool;
    *__CVPixelBufferPool _outputConfidencePixelBufferPool;
    *__CVPixelBufferPool _outputConfidenceMapPixelBufferPool;
    *__CVPixelBufferPool _outputTemporalConsistentDepthPixelBufferPool;
    *__CVPixelBufferPool _outputTemporalConsistentConfidencePixelBufferPool;
    *__CVPixelBufferPool _outputAlphaPixelBufferPool;
    *__CVPixelBufferPool _scaledDepthOutputPixelBufferPool;
    *__CVPixelBufferPool _scaledConfidenceOutputPixelBufferPool;
    *__CVPixelBufferPool _scaledConfidenceMapPixelBufferPool;
    *__CVPixelBufferPool _scaledTemporallyConsistentDepthOutputPixelBufferPool;
    *__CVPixelBufferPool _scaledTemporallyConsistentConfidenceOutputPixelBufferPool;
    *__CVPixelBufferPool _opticalFlowPixelBufferPool;
    *__CVPixelBufferPool _normalPixelBufferPool;
    *__CVBuffer _jasperInputBuffer;
    *__CVBuffer _previousDepthBuffer;
    *__CVBuffer _previousConfidenceBuffer;
    *__CVBuffer _previousWarpedDepthBuffer;
    *__CVBuffer _previousWarpedConfidenceBuffer;
    ? _previousPose;
    ADCameraCalibration *_previousCameraCalibration;
    ARImageRotationTechnique *_float32RotationTechnique;
    ARImageRotationTechnique *_oneComponent8RotationTechnique;
    NSObject<OS_dispatch_queue> *_lktProcessingQueue;
    os_unfair_lock_s _opticalFlowOutputBufferLock;
    id<MTLDevice> *_device;
    id<MTLCommandQueue> *_commandQueue;
    NSInteger _storedFramesCount;
    NSInteger _currentFrameIndex;
    NSMutableArray *_pyramids;
    NSMutableArray *_features;
    NSMutableArray *_derivatives;
    BOOL _computeNormals;
    ADNormalsBuffer *_normalsHelperBuffer;
    NSUInteger _temporalConsistencyMethod;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSInteger depthDataSource;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isBusy;
@property (nonatomic) *__CVBuffer opticalFlowOutputBuffer; // ivar: _opticalFlowOutputBuffer
@property (readonly, nonatomic) ADJasperColorPipelineParameters *pipelineParameters; // ivar: _pipelineParameters
@property (readonly, nonatomic) NSInteger prioritization; // ivar: _prioritization
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)requiredTimeInterval;
-(id)_rotatedPixelBufferImageData:(struct __CVBuffer *)arg0 ;
-(id)createResultDataFromTensors:(struct ? *)arg0 numberOfOutputTensors:(NSUInteger)arg1 imageDataForNeuralNetwork:(id)arg2 inputImageData:(id)arg3 rotationNeeded:(NSInteger)arg4 regionOfInterest:(struct CGSize )arg5 ;
-(id)init;
-(id)initWithPrioritization:(NSInteger)arg0 temporalSmoothing:(BOOL)arg1 ;
-(id)networkModesForOrientation:(NSInteger)arg0 ;
-(id)resultDataClasses;
-(int)bindInputBuffer:(NSUInteger)arg0 withImage:(id)arg1 andOriginalImageData:(id)arg2 rotationOfResultTensor:(NSInteger)arg3 ;
-(int)prepareBindInputBuffer:(NSUInteger)arg0 withName:(id)arg1 ;
-(struct __CVBuffer *)_executeLKTWithFrame:(struct __CVBuffer *)arg0 ;
-(void)_allocateLKTBuffers;
-(void)_captureMLRunNetworkInputImageData:(CGFloat)arg0 cameraType:(NSInteger)arg1 imageWidth:(NSUInteger)arg2 imageHeight:(NSUInteger)arg3 ;
-(void)_endLoadingMLModelSignpost;
-(void)_endMLCreateResultSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_endMLProcessingSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_endMLRunNetworkSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_initLKT;
-(void)_startLoadingMLModelSignpost;
-(void)_startMLCreateResultSignpostWithTimestamp:(CGFloat)arg0 orientation:(NSInteger)arg1 outputSize:(struct CGSize )arg2 ;
-(void)_startMLProcessingSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_startMLRunNetworkSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_updateOpticalFlowOutputBufferInBackgroundFromImageData:(id)arg0 ;
-(void)dealloc;
-(void)networkModeDidChange:(id)arg0 toMode:(id)arg1 ;


@end


#endif
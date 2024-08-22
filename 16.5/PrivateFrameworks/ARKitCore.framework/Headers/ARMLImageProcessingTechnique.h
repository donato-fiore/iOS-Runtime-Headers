// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARMLIMAGEPROCESSINGTECHNIQUE_H
#define ARMLIMAGEPROCESSINGTECHNIQUE_H

@class NSString, NSArray;
@protocol ARTechniqueBusyState, OS_dispatch_queue, OS_dispatch_semaphore;


#import "ARImageBasedTechnique.h"

@interface ARMLImageProcessingTechnique : ARImageBasedTechnique <ARTechniqueBusyState>

 {
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSObject<OS_dispatch_semaphore> *_processingSemaphore;
    os_unfair_lock_s _prepLock;
    CGFloat _espressoInputBufferTimestamp;
    os_unfair_lock_s _espressoInputBufferLock;
    *void _espressoContext;
    *void _espressoPlan;
    ? _espressoNetwork;
    vector<espresso_buffer_t, std::allocator<espresso_buffer_t>> _espressoOutputTensors;
    vector<__CVPixelBufferPool *, std::allocator<__CVPixelBufferPool *>> _espressoOutputBufferPools;
    vector<espresso_buffer_t, std::allocator<espresso_buffer_t>> _espressoInputTensors;
    BOOL _hasBegunPrep;
    BOOL _delegateInference;
    *__CVPixelBufferPool _bgraPixelBufferPool;
    NSString *_previous_network_configuration;
    int _lockedOrientation;
    BOOL _deterministic;
}


@property (nonatomic) CGSize allowedResamplingImageSize; // ivar: _allowedResamplingImageSize
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL failedToLoadNetwork; // ivar: _failedToLoadNetwork
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *inputTensorNames; // ivar: _inputTensorNames
@property (readonly, nonatomic) BOOL isBusy;
@property (retain, nonatomic) NSString *networkFilePath; // ivar: _networkFilePath
@property BOOL networkHasConfigurations; // ivar: _networkHasConfigurations
@property (readonly, nonatomic) CGSize networkInputScaleBeforeRotation; // ivar: _networkInputScaleBeforeRotation
@property (readonly, nonatomic) NSString *networkVersionString;
@property (readonly, nonatomic) NSArray *outputTensorNames; // ivar: _outputTensorNames
@property BOOL prepComplete; // ivar: _prepComplete
@property (readonly) Class superclass;
@property (nonatomic) BOOL useEspressoZeroCopyOutput; // ivar: _useEspressoZeroCopyOutput


+(BOOL)isSupported;
-(*void)espressoPlan;
-(BOOL)ARMLVerifyLoadedModelVersion:(id)arg0 deviceName:(id)arg1 major:(int)arg2 minor:(int)arg3 ;
-(BOOL)isLoadedModelVersionCorrect:(id)arg0 ;
-(BOOL)networkProvidesConfigurationsForDeviceOrientation;
-(BOOL)preProcessNetworkInputImage:(struct __CVBuffer *)arg0 ;
-(BOOL)shouldUseSynchronizedUltraWide;
-(CGFloat)requiredTimeInterval;
-(NSInteger)captureBehavior;
-(NSInteger)getDeviceOrientationFromImageData:(id)arg0 ;
-(NSInteger)numberOfInputChannelsToExpectInNetwork;
-(NSInteger)orientationForInitializingEspresso;
-(NSUInteger)espressoInputTensorsSize;
-(NSUInteger)espressoOutputTensorsSize;
-(NSUInteger)requiredSensorDataTypes;
-(id)_resampleImage:(id)arg0 rotationOfResultTensor:(NSInteger)arg1 networkInputSize:(struct CGSize )arg2 ;
-(id)createResultDataFromTensors:(struct ? *)arg0 numberOfOutputTensors:(NSUInteger)arg1 imageDataForNeuralNetwork:(id)arg2 inputImageData:(id)arg3 rotationNeeded:(NSInteger)arg4 regionOfInterest:(struct CGSize )arg5 ;
-(id)defaultEngineName;
-(id)initWithDispatchQueue:(id)arg0 inputTensorNames:(id)arg1 outputTensorNames:(id)arg2 networkInputScaleBeforeRotation:(struct CGSize )arg3 networkFilePath:(id)arg4 ;
-(id)initWithDispatchQueue:(id)arg0 inputTensorNames:(id)arg1 outputTensorNames:(id)arg2 networkInputScaleBeforeRotation:(struct CGSize )arg3 networkFilePath:(id)arg4 useEspressoZeroCopyOutput:(BOOL)arg5 ;
-(id)initWithDispatchQueue:(id)arg0 networkInputScaleBeforeRotation:(struct CGSize )arg1 ;
-(id)initWithDispatchQueue:(id)arg0 networkInputScaleBeforeRotation:(struct CGSize )arg1 delegateInference:(BOOL)arg2 ;
-(id)networkModesForOrientation:(NSInteger)arg0 ;
-(id)processData:(id)arg0 ;
-(id)processEspressoTensor:(id)arg0 ;
-(id)processImageDataThroughNeuralNetwork:(id)arg0 originalImageData:(id)arg1 regionOfInterest:(struct CGSize )arg2 rotationOfResultTensor:(NSInteger)arg3 ;
-(id)processingSemaphore;
-(id)resultDataClasses;
-(id)runNeuralNetworkWithImageData:(id)arg0 originalImageData:(id)arg1 regionOfInterest:(struct CGSize )arg2 rotationOfResultTensor:(NSInteger)arg3 ;
-(int)bindInputBuffer:(NSUInteger)arg0 withImage:(id)arg1 andOriginalImageData:(id)arg2 rotationOfResultTensor:(NSInteger)arg3 ;
-(int)defaultEngine;
-(int)prepareBindInputBuffer:(NSUInteger)arg0 withName:(id)arg1 ;
-(struct ? )espressoNetwork;
-(struct ? )networkInputParams;
-(struct ? *)espressoInputTensorsData;
-(struct ? *)espressoOutputTensorsData;
-(void)_asynchronousProcessDownSampledImage:(id)arg0 ;
-(void)_asynchronousProcessEspressoTensor:(id)arg0 ;
-(void)_bindOutputTensor;
-(void)_captureMLRunNetworkInputImageData:(CGFloat)arg0 cameraType:(NSInteger)arg1 imageWidth:(NSUInteger)arg2 imageHeight:(NSUInteger)arg3 ;
-(void)_endLoadingMLModelSignpost;
-(void)_endMLCreateResultSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_endMLProcessingSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_endMLRunNetworkSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_prepareOnce:(BOOL)arg0 ;
-(void)_runNeuralNetworkAndPushResult:(id)arg0 originalImageData:(id)arg1 regionOfInterest:(struct CGSize )arg2 rotationOfResultTensor:(NSInteger)arg3 ;
-(void)_startLoadingMLModelSignpost;
-(void)_startMLCreateResultSignpostWithTimestamp:(CGFloat)arg0 orientation:(NSInteger)arg1 outputSize:(struct CGSize )arg2 ;
-(void)_startMLProcessingSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_startMLRunNetworkSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)changeEspressoConfig:(id)arg0 ;
-(void)dealloc;
-(void)loadMLWithPath:(id)arg0 networkMode:(id)arg1 ;
-(void)lockOrientation:(NSInteger)arg0 ;
-(void)networkModeDidChange:(id)arg0 toMode:(id)arg1 ;
-(void)prepare:(BOOL)arg0 ;
-(void)waitForProcessingCompleteInDeterministicMode;


@end


#endif
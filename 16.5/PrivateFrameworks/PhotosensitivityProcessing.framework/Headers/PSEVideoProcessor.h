// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSEVIDEOPROCESSOR_H
#define PSEVIDEOPROCESSOR_H

@protocol MTLDevice, MTLCommandQueue, MTLLibrary, MTLComputePipelineState, MTLBuffer, MTLTexture;

#import <Foundation/Foundation.h>

#import "SwiftVideoProcessor.h"

@interface PSEVideoProcessor : NSObject {
    SwiftVideoProcessor *_swiftProcessor;
    CGFloat _previousSurfaceTime;
    BOOL _needsInitialization;
    id<MTLDevice> *_device;
    id<MTLCommandQueue> *_commandQueue;
    id<MTLLibrary> *_library;
    id<MTLComputePipelineState> *_cptPSO_RiskComputePass0;
    id<MTLComputePipelineState> *_cptPSO_RiskComputePass1;
    id<MTLComputePipelineState> *_cptPSO_RiskComputePass2;
    id<MTLComputePipelineState> *_cptPSO_RiskComputePass3;
    id<MTLBuffer>" _bufferFrameLumaSum;
    id<MTLBuffer>" _bufferData;
    id<MTLBuffer>" _bufferCurState;
    id<MTLBuffer>" _bufferGammaKernel;
    id<MTLBuffer>" _bufferEnergy;
    id<MTLBuffer>" _bufferEnergy2;
    id<MTLBuffer>" _bufferContrastKernel;
    id<MTLBuffer>" _bufferContrast;
    id<MTLBuffer>" _bufferResponses;
    id<MTLBuffer>" _bufferResponsesNorm;
    id<MTLBuffer>" _bufferResults;
    NSUInteger _protectionStatus;
    id<MTLBuffer> *_bufferDataDebug;
    id<MTLTexture> *_sourceTexture;
    id<MTLTexture> *_processedTexture;
    ConstBuf _bufferConstants;
    float _fps;
    float _nits;
    float _area;
    float _avl;
    float _gain;
    float _energyPoolGammaShape;
    float _energypoolexponent;
    float _energyPoolGammaScale;
    float _probabilityPoolGammaShape;
    float _probabilityPoolExponent;
    float _probabilitypoolgammascale;
    float _cA;
    float _tauadapt;
    float _taumitigation;
    int _idxFrameRate;
    int _idxEquivalentSize;
    int _idxEquivalentKernelIndex;
}


@property (nonatomic) BOOL inTestingMode; // ivar: _inTestingMode
@property (copy, nonatomic) id *validationCallback; // ivar: _validationCallback


+(BOOL)needsProcessing;
+(void)initialize;
-(BOOL)canProcessSurface:(struct __IOSurface *)arg0 ;
-(NSUInteger)_pixelFormatForSurface:(struct __IOSurface *)arg0 ;
-(id)_prepare_gamma_kernel:(float)arg0 shape:(float)arg1 scale:(float)arg2 ;
-(id)init;
-(int)_colorSpaceFromSurface:(struct __IOSurface *)arg0 ;
-(int)_colorSpaceValueForName:(struct __CFString *)arg0 ;
-(int)_computeFrameRateIndexSelection;
-(int)_deviceClass;
-(struct KernelData )_prepare_contrast_kernels;
-(void)_computeDisplaySizeIndexSelection;
-(void)_initialize;
-(void)_initializeProtectedBuffers:(NSUInteger)arg0 ;
-(void)_processFrame:(id)arg0 sourceSurface:(struct __IOSurface *)arg1 outSurface:(struct __IOSurface *)arg2 ;
-(void)_resetState:(NSUInteger)arg0 ;
-(void)_sourceCopyDebuggingChanged:(id)arg0 ;
-(void)_visualDebuggingChanged:(id)arg0 ;
-(void)processSourceSurface:(struct __IOSurface *)arg0 withTimestamp:(CGFloat)arg1 toDestinationSurface:(struct __IOSurface *)arg2 options:(id)arg3 ;


@end


#endif
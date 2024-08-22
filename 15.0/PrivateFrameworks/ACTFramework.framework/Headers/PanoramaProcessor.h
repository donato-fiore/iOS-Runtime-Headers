// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PANORAMAPROCESSOR_H
#define PANORAMAPROCESSOR_H

@class FigMetalContext, NSDictionary, NRFProcessor, NSString, NSNumber;
@protocol MetalImageBufferProcessor, OS_dispatch_queue, MTLCommandQueue, PanoRegistrationProvider;

#import <Foundation/Foundation.h>

#import "PanoramaRegistrationStage.h"
#import "PanoramaParallaxStage.h"
#import "PanoramaStitchingStage.h"
#import "PanoramaAssemblyStage.h"
#import "PanoramaGyroStage.h"
#import "ACTPanoGPUDownscaler.h"
#import "PanoramaOutput.h"
#import "PanoramaPreviewOutput.h"

@interface PanoramaProcessor : NSObject <MetalImageBufferProcessor>

 {
    FigMetalContext *_metal;
    PanoramaRegistrationStage *_registrationStage;
    PanoramaParallaxStage *_parallaxStage;
    PanoramaStitchingStage *_stitchingStage;
    PanoramaAssemblyStage *_assemblyStage;
    PanoramaGyroStage *_gyroStage;
    NSObject<OS_dispatch_queue> *_processingQueue;
    ACTPanoGPUDownscaler *_downscaler;
    *__CVBuffer _toACTFramework;
    *__CVPixelBufferPool _downsampledRegistrationPool;
    *__CVPixelBufferPool _inputSlicePool;
    NSUInteger _poolOccupancy;
    BOOL _prevFrameDropped;
    NSUInteger _sliceWidth;
    NSUInteger _sliceHeight;
    int _direction;
    CGRect _cropRect;
    ? _initialHomography;
    *OpaqueVTPixelTransferSession _vtSession;
    NSDictionary *_cameraSetupPlist;
    NSDictionary *_lastMetadata;
    NRFProcessor *_nrfProcessor;
}


@property (retain, nonatomic) NSDictionary *cameraInfoByPortType; // ivar: cameraInfoByPortType
@property (readonly, nonatomic) NSObject<MTLCommandQueue> *commandQueue; // ivar: _commandQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSNumber *defaultBlendingConfig; // ivar: _defaultBlendingConfig
@property (readonly, nonatomic) NSNumber *defaultDirection; // ivar: _defaultDirection
@property (readonly, nonatomic) NSNumber *defaultFallback; // ivar: _defaultFallback
@property (readonly, nonatomic) NSNumber *defaultPrediction; // ivar: _defaultPrediction
@property (readonly, nonatomic) NSNumber *defaultPredictionMethod; // ivar: _defaultPredictionMethod
@property (readonly, nonatomic) NSNumber *defaultRegistrationMethod; // ivar: _defaultRegistrationMethod
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL doParallaxCorrection; // ivar: _doParallaxCorrection
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *maxWidth; // ivar: _maxWidth
@property (retain, nonatomic) NSObject<MTLCommandQueue> *metalCommandQueue; // ivar: metalCommandQueue
@property (readonly, nonatomic) NSUInteger nbFramesDropped; // ivar: _nbFramesDropped
@property (readonly, nonatomic) NSUInteger nbFramesReceived; // ivar: _nbFramesReceived
@property (readonly, nonatomic) NSUInteger nbFramesSkipped; // ivar: _nbFramesSkipped
@property (retain, nonatomic) PanoramaOutput *output; // ivar: _output
@property (readonly, nonatomic) NSNumber *previewHeight; // ivar: _previewHeight
@property (retain, nonatomic) PanoramaPreviewOutput *previewOutput; // ivar: _previewOutput
@property (readonly, nonatomic) NSNumber *previewScale; // ivar: _previewScale
@property (readonly, nonatomic) NSNumber *previewWidth; // ivar: _previewWidth
@property (retain, nonatomic) NSObject<PanoRegistrationProvider> *registrationProvider; // ivar: _registrationProvider
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDictionary *tuningParameters; // ivar: tuningParameters
@property (retain, nonatomic) NSNumber *writeSlicesToDisc; // ivar: _writeSlicesToDisc


+(void)prewarm;
-(id)encodedResult;
-(id)init;
-(id)initWithContext:(id)arg0 ;
-(id)metalContext;
-(int)_addLastSlice;
-(int)_commonInitWithContext:(id)arg0 ;
-(int)_createDummyOutput;
-(int)addFrame:(struct opaqueCMSampleBuffer *)arg0 registrationCallback:(id)arg1 ;
-(int)addFrameForStitching:(struct opaqueCMSampleBuffer *)arg0 withInitialHomography:(struct ? )arg1 registrationCallback:(id)arg2 ;
-(int)addFrameWithoutStitching:(struct opaqueCMSampleBuffer *)arg0 registrationCallback:(id)arg1 ;
-(int)finishProcessing;
-(int)getMaskAsBuffer:(*char *)arg0 widthOut:(*NSUInteger)arg1 heightOut:(*NSUInteger)arg2 ;
-(int)prepareToProcess:(unsigned int)arg0 ;
-(int)prepareToProcess_PanoSpecific:(unsigned int)arg0 frameWidth:(NSUInteger)arg1 frameHeight:(NSUInteger)arg2 ;
-(int)prewarm;
-(int)process;
-(int)purgeResources;
-(int)resetState;
-(int)setDirection:(int)arg0 ;
-(int)setup;
-(struct ? )refineInitialHomography:(struct ? )arg0 ;
-(struct CGRect )autocropMask;
-(void)_setPreviousFrameDroppedFlag:(struct opaqueCMSampleBuffer *)arg0 dropped:(BOOL)arg1 ;
-(void)dealloc;
-(void)getRegistrationWidth:(*NSUInteger)arg0 height:(*NSUInteger)arg1 ;


@end


#endif
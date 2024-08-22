// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PANORAMAASSEMBLYSTAGE_H
#define PANORAMAASSEMBLYSTAGE_H

@class FigMetalContext, NSMutableArray, NSDictionary, NSString, NRFProcessor;
@protocol MetalImageBufferProcessor, MTLTexture, MTLCommandQueue;

#import <Foundation/Foundation.h>

#import "PanoramaAssemblyShaders.h"

@interface PanoramaAssemblyStage : NSObject <MetalImageBufferProcessor>

 {
    FigMetalContext *_metal;
    PanoramaAssemblyShaders *_shaders;
    NSUInteger _sliceWidth;
    NSUInteger _sliceHeight;
    int _direction;
    NSUInteger _stagingWidth;
    NSUInteger _stagingHeight;
    ? _assemblyParams;
    NSUInteger _sliceBufferAllocSize;
    NSUInteger _sliceBufferLength;
    *? _sliceHomographies;
    *? _atlasHomographies;
    id<MTLTexture> *_projectiveGrid;
    NSMutableArray *_stagingBufferPool;
    NSMutableArray *_dirtyStagingBuffers;
    *__CVBuffer _nrfInputPixelBuffer;
    id<MTLTexture> *_nrfInputLuma;
    id<MTLTexture> *_nrfInputChroma;
    *opaqueCMSampleBuffer _nrfInputSampleBuffer;
    *__CVBuffer _nrfOutputPixelBuffer;
    id<MTLTexture> *_nrfOutputLuma;
    id<MTLTexture> *_nrfOutputChroma;
    float _startingMean;
    float _lastFilteredValue;
    *float _movingAverageBuffer;
    id<MTLTexture> *_outputBoundLuma;
    id<MTLTexture> *_outputBoundChroma;
    id<MTLTexture> *_outputMask;
    ? _outputAtlasHomography;
}


@property (nonatomic) int assemblyMode; // ivar: _assemblyMode
@property (retain, nonatomic) NSDictionary *cameraInfoByPortType; // ivar: cameraInfoByPortType
@property (nonatomic) CGRect cropRect; // ivar: _cropRect
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<MTLCommandQueue> *metalCommandQueue; // ivar: metalCommandQueue
@property (retain, nonatomic) NRFProcessor *nrfProcessor; // ivar: _nrfProcessor
@property (nonatomic) *__CVBuffer output; // ivar: _output
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDictionary *tuningParameters; // ivar: tuningParameters


-(id)initWithContext:(id)arg0 robustPanoParams:(struct ? )arg1 ;
-(int)_addStagingBuffer;
-(int)_bindOutput;
-(int)addSlice:(struct __CVBuffer *)arg0 metadata:(id)arg1 sliceHomography:(struct ? )arg2 stitchingMask:(id)arg3 motionCue:(id)arg4 roi:(struct CGRect )arg5 sliceType:(int)arg6 ;
-(int)addSliceToProjectiveGrid:(struct ? )arg0 atlasHomography:(struct ? )arg1 panoHomography:(struct ? )arg2 encoder:(id)arg3 sliceType:(int)arg4 ;
-(int)addSliceToStagingBuffer:(id)arg0 sliceLuma:(id)arg1 sliceChroma:(id)arg2 sliceMask:(id)arg3 sliceGlobalHomography:(struct ? )arg4 encoder:(id)arg5 ;
-(int)addStagingToOutput:(id)arg0 ;
-(int)clearStagingBuffer:(id)arg0 withEncoder:(id)arg1 ;
-(int)finishProcessing;
-(int)getMaskAsBuffer:(*char *)arg0 widthOut:(*NSUInteger)arg1 heightOut:(*NSUInteger)arg2 ;
-(int)prepareToProcess:(unsigned int)arg0 ;
-(int)prepareToProcessPanoWidth:(NSUInteger)arg0 panoHeight:(NSUInteger)arg1 ;
-(int)prepareToProcessSliceWidth:(NSUInteger)arg0 sliceHeight:(NSUInteger)arg1 stagingWidth:(NSUInteger)arg2 stagingHeight:(NSUInteger)arg3 ;
-(int)prewarm;
-(int)process;
-(int)purgeResources;
-(int)renderDirtyStagingBuffers;
-(int)resetState;
-(int)setDirection:(int)arg0 ;
-(int)setup;
-(struct ? )_stagingHomography;
-(struct ? )panoHomography;
-(void)addHomogToStaging:(struct ? )arg0 ;
-(void)dealloc;


@end


#endif
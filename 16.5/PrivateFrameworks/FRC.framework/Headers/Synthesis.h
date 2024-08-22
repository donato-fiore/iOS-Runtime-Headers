// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SYNTHESIS_H
#define SYNTHESIS_H

@class NSString;
@protocol FRCSynthesis, MTLDeviceSPI, MTLCommandQueue, MTLTexture, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "Forwarp.h"
#import "Backwarp.h"
#import "SynthesisGridNet.h"
#import "Pyramid.h"
#import "Tiling.h"

@interface Synthesis : NSObject <FRCSynthesis>

 {
    id<MTLDeviceSPI> *_device;
    id<MTLCommandQueue> *_commandQueue;
    Forwarp *_forwarp;
    Backwarp *_backwarp;
    SynthesisGridNet *_gridNet;
    Pyramid *_pyramid;
    *__CVBuffer _normalizedFirst;
    *__CVBuffer _normalizedSecond;
    *__CVBuffer _forwardFlow;
    *__CVBuffer _backwardFlow;
    id<MTLTexture>" _forwardLossTexture;
    id<MTLTexture>" _backwardLossTexture;
    id<MTLTexture>" _forwardFlowTexture;
    id<MTLTexture>" _backwardFlowTexture;
    id<MTLBuffer>" _bestErrorBuffer;
    id<MTLBuffer>" _warpOutputBuffer;
    id<MTLTexture> *_filteredForwardLossTexture;
    id<MTLTexture> *_filteredBackwarLossTexture;
    NSObject<OS_dispatch_semaphore> *_completionSemaphore;
    ? _firstFeatures;
    ? _secondFeatures;
    ? _warpedForwardFeatures;
    ? _warpedBackwardFeatures;
    BOOL _resourcesPreAllocated;
    Tiling *_tiling;
    unsigned int _numTiles;
    NSInteger _originalUsage;
    *? _imageTileInfo;
    ? _firstImageTiles;
    ? _secondImageTiles;
    ? _forwardFlowTiles;
    ? _backwardFlowTiles;
    ? _outputTiles;
    NSUInteger _numWarpedBuffers;
    NSUInteger _bufferIndex;
    NSUInteger _pyramidLevels;
    *__CVPixelBufferPool _normalizedBufferPool;
    id<MTLTexture> *_dilatedForwardMask;
    id<MTLTexture> *_dilatedBackwardMask;
    id<MTLTexture> *_firstWarpedTexture;
    id<MTLTexture> *_secondWarpedTexture;
    *__CVPixelBufferPool _dcBufferPool;
    NSInteger _fullWarpStartLevel;
    BOOL _filterErrorMap;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int flowLevel; // ivar: _flowLevel
@property (nonatomic) BOOL framePipeline; // ivar: _framePipeline
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL linearSplatting; // ivar: _linearSplatting
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger synthesisMode; // ivar: _synthesisMode
@property (nonatomic) BOOL temporalFiltering; // ivar: _temporalFiltering
@property (nonatomic) BOOL tilingEnabled; // ivar: _tilingEnabled
@property (nonatomic) NSInteger usage; // ivar: _usage


-(?)allocateOutputTiletileInfo;
-(BOOL)createModules;
-(BOOL)switchUsageTo:(NSInteger)arg0 ;
-(NSInteger)usageForTiling:(NSInteger)arg0 ;
-(id)backwardLossTextureLevel:(int)arg0 ;
-(id)bestErrorBufferLevel:(int)arg0 ;
-(id)forwardFlowTextureLevel:(int)arg0 ;
-(id)forwardLossTextureLevel:(int)arg0 ;
-(id)init;
-(id)initWithMode:(NSInteger)arg0 ;
-(id)warpOutputBufferLevel:(int)arg0 ;
-(struct ? )synthesisTensorSizeForLevel:(unsigned int)arg0 ;
-(struct ? *)firstFeatures;
-(struct ? *)secondFeatures;
-(struct ? *)warpedBackwardFeatures;
-(struct ? *)warpedForwardFeatures;
-(struct __CVBuffer *)synthesizeFrameForTimeScale:(float)arg0 frameIndex:(NSUInteger)arg1 ;
-(struct __CVBuffer *)synthesizeFrameFromFirstImage:(struct __CVBuffer *)arg0 secondImage:(struct __CVBuffer *)arg1 flowForward:(struct __CVBuffer *)arg2 flowBackward:(struct __CVBuffer *)arg3 timeScale:(float)arg4 frameIndex:(NSUInteger)arg5 ;
-(struct __CVBuffer *)synthesizeTilesWithTimeScale:(float)arg0 ;
-(void)allocateFeatures;
-(void)allocateFeaturesForUsage:(NSInteger)arg0 Level:(int)arg1 ;
-(void)allocateFlowAndLossTextures;
-(void)allocateForwardWarpBuffersForLevel:(int)arg0 ;
-(void)allocateForwardWarpInternalBuffers;
-(void)allocateResources;
-(void)allocateSplattingTextures;
-(void)allocateWarpedFeatures;
-(void)calcBackwarpLossFirst:(id)arg0 second:(id)arg1 timeScale:(float)arg2 ;
-(void)createFeaturePyramid:(struct __CVBuffer *)arg0 second:(struct __CVBuffer *)arg1 ;
-(void)createFeaturesFromFirstImage:(struct __CVBuffer *)arg0 secondImage:(struct __CVBuffer *)arg1 flowForward:(struct __CVBuffer *)arg2 flowBackward:(struct __CVBuffer *)arg3 ;
-(void)createTilesFromFirstImage:(struct __CVBuffer *)arg0 secondImage:(struct __CVBuffer *)arg1 flowForward:(struct __CVBuffer *)arg2 flowBackward:(struct __CVBuffer *)arg3 ;
-(void)dealloc;
-(void)encodeForwarpInputsForBlendToCommandBuffer:(id)arg0 timeScale:(float)arg1 ;
-(void)encodeForwarpToCommandBuffer:(id)arg0 level:(int)arg1 firstTexture:(id)arg2 secondTexture:(id)arg3 firstWarpedTexture:(id)arg4 secondWarpedTexture:(id)arg5 timeScale:(float)arg6 useFlowMagnitude:(BOOL)arg7 ;
-(void)encodeSubsampleToCommandBuffer:(id)arg0 flow:(*id)arg1 loss:(*id)arg2 ;
-(void)filterGridNetOutput:(struct __CVBuffer *)arg0 timeScale:(float)arg1 destination:(struct __CVBuffer *)arg2 ;
-(void)forwardWarpForLevel:(int)arg0 feature:(id)arg1 flow:(id)arg2 error:(id)arg3 timeScale:(float)arg4 warpedOutput:(id)arg5 fullWarp:(BOOL)arg6 callback:(id)arg7 ;
-(void)forwardWarpForLevel:(int)arg0 first:(id)arg1 second:(id)arg2 timeScale:(float)arg3 forwardOutput:(id)arg4 backwardOutput:(id)arg5 ;
-(void)getWarpedFeatureSizeForLevel:(int)arg0 tensorSize:(struct ? *)arg1 ;
-(void)releaseFeatures;
-(void)releaseFeaturesForLevel:(int)arg0 ;
-(void)releaseForwardWarpInternalTextures;
-(void)releaseForwardWarpInternalTexturesAndBuffers;
-(void)releaseForwardWarpLinearBuffersForLevel:(int)arg0 ;
-(void)releaseForwardWarpTexturesForLevel:(int)arg0 ;
-(void)releaseResources;
-(void)releaseSplattingTextures;
-(void)releaseTiles;
-(void)releaseWarpedFeaturesForIndex:(NSUInteger)arg0 ;
-(void)retainFeatures;
-(void)synthesizeFrameFromFeatureForward:(struct ? *)arg0 backward:(struct ? *)arg1 destination:(struct __CVBuffer *)arg2 callback:(id)arg3 ;
-(void)synthesizeImageFromFirstImage:(struct __CVBuffer *)arg0 secondImage:(struct __CVBuffer *)arg1 flowForward:(struct __CVBuffer *)arg2 flowBackward:(struct __CVBuffer *)arg3 timeScale:(float)arg4 destination:(struct __CVBuffer *)arg5 ;
-(void)synthesizeImageWithFlowSplattingFromFirstImage:(struct __CVBuffer *)arg0 secondImage:(struct __CVBuffer *)arg1 flowForward:(struct __CVBuffer *)arg2 flowBackward:(struct __CVBuffer *)arg3 timeScale:(float)arg4 destination:(struct __CVBuffer *)arg5 ;
-(void)synthesizeImageWithForwarpOnlyFromFirstImage:(struct __CVBuffer *)arg0 secondImage:(struct __CVBuffer *)arg1 flowForward:(struct __CVBuffer *)arg2 flowBackward:(struct __CVBuffer *)arg3 timeScale:(float)arg4 destination:(struct __CVBuffer *)arg5 ;
-(void)warpFeatureLevel:(int)arg0 timeScale:(float)arg1 ;
-(void)warpFeaturesPerLayerWithFlowForward:(struct __CVBuffer *)arg0 flowBackward:(struct __CVBuffer *)arg1 timeScale:(float)arg2 ;


@end


#endif
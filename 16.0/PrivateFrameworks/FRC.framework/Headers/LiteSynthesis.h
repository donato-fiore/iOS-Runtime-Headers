// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LITESYNTHESIS_H
#define LITESYNTHESIS_H

@class NSString;
@protocol FRCSynthesis, MTLDeviceSPI, MTLCommandQueue, OS_dispatch_semaphore, MTLTexture;

#import <Foundation/Foundation.h>

#import "Forwarp.h"
#import "Backwarp.h"
#import "GPUSynthesis.h"

@interface LiteSynthesis : NSObject <FRCSynthesis>

 {
    id<MTLDeviceSPI> *_device;
    id<MTLCommandQueue> *_commandQueue;
    Forwarp *_forwarp;
    Backwarp *_backwarp;
    GPUSynthesis *_synthesis;
    NSObject<OS_dispatch_semaphore> *_completionSemaphore;
    *__CVBuffer _flowPixelBuffer0;
    *__CVBuffer _flowPixelBuffer1;
    *__CVBuffer _selectMap;
    *__CVBuffer _alphaMap;
    *__CVBuffer _intermediaCVBuffer;
    *__CVBuffer _L1Loss0;
    *__CVBuffer _L1Loss1;
    ? _warpedForwardFeatures;
    id<MTLTexture> *_alphaTexture;
    id<MTLTexture> *_flowTexture0;
    id<MTLTexture> *_flowTexture1;
    id<MTLTexture> *_L1Texture0;
    id<MTLTexture> *_L1Texture1;
    id<MTLTexture> *_mapTexture;
    id<MTLTexture> *_combinedWarpedTexture;
    id<MTLBuffer>" _bestErrorBuffer;
    id<MTLBuffer>" _warpOutputBuffer;
    id<MTLTexture>" _warpedForwardTextures;
    id<MTLTexture>" _normalizedFwarpTextures;
    ? flowStats0;
    ? flowStats1;
    *__CVBuffer _normalizedFirst;
    *__CVBuffer _normalizedSecond;
    *__CVBuffer _forwardFlow;
    *__CVBuffer _backwardFlow;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enableMemDump; // ivar: _enableMemDump
@property (nonatomic) int flowLevel;
@property (nonatomic) BOOL framePipeline; // ivar: _framePipeline
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger synthesisMode;
@property (nonatomic) BOOL temporalFiltering; // ivar: _temporalFiltering
@property (nonatomic) BOOL textureFromCVPixelBuffer; // ivar: _textureFromCVPixelBuffer
@property (nonatomic) NSInteger usage; // ivar: _usage


-(BOOL)createModules;
-(BOOL)dumpMemoryAt:(float)arg0 frameIndex:(NSUInteger)arg1 width:(NSUInteger)arg2 height:(NSUInteger)arg3 channels:(NSUInteger)arg4 ;
-(BOOL)switchUsageTo:(NSInteger)arg0 ;
-(id)initWithMode:(NSInteger)arg0 ;
-(struct __CVBuffer *)synthesizeFrameForTimeScale:(float)arg0 frameIndex:(NSUInteger)arg1 ;
-(struct __CVBuffer *)synthesizeFrameFromFirstImage:(struct __CVBuffer *)arg0 secondImage:(struct __CVBuffer *)arg1 flowForward:(struct __CVBuffer *)arg2 flowBackward:(struct __CVBuffer *)arg3 timeScale:(float)arg4 frameIndex:(NSUInteger)arg5 ;
-(void)allocateResources;
-(void)calcBackwarpLossFirst:(id)arg0 second:(id)arg1 commandBuffer:(id)arg2 callback:(id)arg3 ;
-(void)combineWarpedTexture:(id)arg0 and:(id)arg1 normalized0:(id)arg2 normalized1:(id)arg3 alpha:(id)arg4 toOutput:(id)arg5 mapTexture:(id)arg6 callback:(id)arg7 ;
-(void)createFeaturesFromFirstImage:(struct __CVBuffer *)arg0 secondImage:(struct __CVBuffer *)arg1 flowForward:(struct __CVBuffer *)arg2 flowBackward:(struct __CVBuffer *)arg3 ;
-(void)forwardWarpForFlow:(int)arg0 feature:(id)arg1 flow:(id)arg2 error:(id)arg3 timeScale:(float)arg4 warpedOutput:(id)arg5 callback:(id)arg6 ;
-(void)forwarpFirstTexture:(id)arg0 SecondTexture:(id)arg1 timeScale:(float)arg2 needWait:(BOOL)arg3 ;
-(void)generateBlendingMap:(id)arg0 and:(id)arg1 toAlpha:(id)arg2 timeScale:(float)arg3 normalized0:(id)arg4 normalized1:(id)arg5 callback:(id)arg6 ;
-(void)liteSynthesisWithFlowForward:(struct __CVBuffer *)arg0 flowBackward:(struct __CVBuffer *)arg1 firstFeature:(id)arg2 secondFeature:(id)arg3 outputTexture:(id)arg4 timeScale:(float)arg5 frameIndex:(NSUInteger)arg6 ;
-(void)postFilterFrom:(id)arg0 mapTexture:(id)arg1 toTexture:(id)arg2 callback:(id)arg3 ;
-(void)releaseFeatures;
-(void)releaseResources;
-(void)upScaleforwardFlow:(struct __CVBuffer *)arg0 backwardFlow:(struct __CVBuffer *)arg1 outputTexture:(id)arg2 commandBuffer:(id)arg3 ;


@end


#endif
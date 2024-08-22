// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PANORAMAPARALLAXSTAGE_H
#define PANORAMAPARALLAXSTAGE_H

@class FigMetalContext, NSMutableArray, NSDictionary, NSString;
@protocol MetalImageBufferProcessor, MTLTexture, MTLCommandQueue;

#import <Foundation/Foundation.h>

#import "PanoramaParallaxStageShaders.h"

@interface PanoramaParallaxStage : NSObject <MetalImageBufferProcessor>

 {
    FigMetalContext *_metal;
    PanoramaParallaxStageShaders *_shaders;
    id<MTLTexture> *_warpedLuma;
    id<MTLTexture> *_warpedChroma;
    NSMutableArray *_preShiftPyramid;
}


@property (retain, nonatomic) NSDictionary *cameraInfoByPortType; // ivar: cameraInfoByPortType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<MTLCommandQueue> *metalCommandQueue; // ivar: metalCommandQueue
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDictionary *tuningParameters; // ivar: tuningParameters
@property *__CVBuffer warpedFrame; // ivar: _warpedFrame
@property (retain) NSObject<MTLTexture> *warpedMask; // ivar: _warpedMask


-(id)initWithContext:(id)arg0 ;
-(int)_allocateShiftPyramidLike:(id)arg0 ;
-(int)_applyWarpToSlice:(id)arg0 chroma:(id)arg1 mask:(id)arg2 preFlow:(id)arg3 warpedLuma:(id)arg4 warpedChroma:(id)arg5 warpedMask:(id)arg6 ;
-(int)_buildShiftPyramid;
-(int)_computePreShift:(id)arg0 homography:(struct ? )arg1 ;
-(int)addSlice:(struct __CVBuffer *)arg0 mask:(id)arg1 homography:(struct ? )arg2 residualFlow:(struct __CVBuffer *)arg3 ;
-(int)finishProcessing;
-(int)prepareToProcess:(NSUInteger)arg0 sliceHeight:(NSUInteger)arg1 ;
-(int)prepareToProcess:(unsigned int)arg0 ;
-(int)prewarm;
-(int)process;
-(int)purgeResources;
-(int)resetState;
-(int)setDirection:(int)arg0 ;
-(int)setup;
-(void)dealloc;


@end


#endif
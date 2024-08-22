// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGDEEPZOOMMETALSTAGE_H
#define FIGDEEPZOOMMETALSTAGE_H

@class FigMetalContext;
@protocol MTLComputePipelineState, MTLTexture;

#import <Foundation/Foundation.h>

#import "FigDeepZoomPostProcMetalStage.h"

@interface FigDeepZoomMetalStage : NSObject {
    FigMetalContext *_metalContext;
    *__CVMetalTextureCache _cvMetalTextureCacheRef;
    id<MTLComputePipelineState> *_clearTexturePipelineState;
    id<MTLComputePipelineState> *_tileCutPipelineState;
    id<MTLComputePipelineState> *_tilePastePipelineState;
    *__CVBuffer _tileOutputEnhancedPixelBuffer;
    *__CVBuffer _tileInputWeightsPixelBuffer;
    id<MTLTexture> *_tileInputWeightsTexture;
    FigDeepZoomPostProcMetalStage *_deepZoomPostProcStage;
}




-(id)_cachedTexturesFromPixelBuffer:(struct __CVBuffer *)arg0 usage:(NSUInteger)arg1 ;
-(id)initWithMetalContext:(id)arg0 withTileConfiguration:(struct ? *)arg1 ;
-(int)_compileShaders;
-(int)_computeWeights:(struct __CVBuffer *)arg0 tileConfig:(struct ? *)arg1 ;
-(int)clearBuffer:(struct __CVBuffer *)arg0 ;
-(int)configurePostProcess:(struct ? *)arg0 ;
-(int)cutTileFrom:(struct __CVBuffer *)arg0 to:(struct __CVBuffer *)arg1 params:(struct ? *)arg2 outCommandBuffer:(*id)arg3 ;
-(int)pasteTileFrom:(struct __CVBuffer *)arg0 with:(struct __CVBuffer *)arg1 to:(struct __CVBuffer *)arg2 params:(struct ? *)arg3 outCommandBuffer:(*id)arg4 ;
-(void)dealloc;
-(void)finishProcessing;


@end


#endif
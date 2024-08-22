// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGLEARNEDMATTINGMETALSTAGE_H
#define FIGLEARNEDMATTINGMETALSTAGE_H

@class FigMetalContext;
@protocol MTLComputePipelineState;

#import <Foundation/Foundation.h>


@interface FigLearnedMattingMetalStage : NSObject {
    FigMetalContext *_metalContext;
    id<MTLComputePipelineState> *_createTileKernel;
    id<MTLComputePipelineState> *_pasteTileKernel;
    id<MTLComputePipelineState> *_copyTextureKernel;
    id<MTLComputePipelineState> *_clearTextureKernel;
    *__CVMetalTextureCache _textureCache;
}




-(id)_runKernel:(id)arg0 sourceTexture:(id)arg1 destinationTexture:(id)arg2 gridSize:(struct ? )arg3 setParamsBlock:(id)arg4 ;
-(id)_textureFromPixelBuffer:(struct __CVBuffer *)arg0 usage:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithMetalContext:(id)arg0 ;
-(int)_compileShaders;
-(int)clearBuffer:(struct __CVBuffer *)arg0 ;
-(int)copyBufferFrom:(struct __CVBuffer *)arg0 to:(struct __CVBuffer *)arg1 outCommandBuffer:(*id)arg2 ;
-(int)createTileFrom:(struct __CVBuffer *)arg0 to:(struct __CVBuffer *)arg1 withStart:(*id)arg2 outCommandBuffer;
-(int)createTileFrom:(struct __CVBuffer *)arg0 to:(struct __CVBuffer *)arg1 withStart:(*id)arg2 withScaleoutCommandBuffer;
-(int)pasteTileFrom:(struct __CVBuffer *)arg0 to:(struct __CVBuffer *)arg1 withStart:(*id)arg2 withNoOverlapStartwithNoOverlapEndoutCommandBuffer;
-(void)dealloc;
-(void)finishProcessing;


@end


#endif
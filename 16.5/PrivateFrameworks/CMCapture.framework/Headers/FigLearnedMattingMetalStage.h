// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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




-(id)init;
-(id)initWithMetalContext:(id)arg0 ;
-(int)clearBuffer:(struct __CVBuffer *)arg0 ;
-(int)copyBufferFrom:(struct __CVBuffer *)arg0 to:(struct __CVBuffer *)arg1 outCommandBuffer:(*id)arg2 ;
-(int)createTileFrom:(struct __CVBuffer *)arg0 to:(struct __CVBuffer *)arg1 withStart:(*id)arg2 outCommandBuffer;
-(int)createTileFrom:(struct __CVBuffer *)arg0 to:(struct __CVBuffer *)arg1 withStart:(*id)arg2 withScaleoutCommandBuffer;
-(int)pasteTileFrom:(struct __CVBuffer *)arg0 to:(struct __CVBuffer *)arg1 withStart:(*id)arg2 withNoOverlapStartwithNoOverlapEndoutCommandBuffer;
-(void)dealloc;
-(void)finishProcessing;


@end


#endif
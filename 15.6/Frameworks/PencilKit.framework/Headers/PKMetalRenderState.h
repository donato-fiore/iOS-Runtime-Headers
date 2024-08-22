// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKMETALRENDERSTATE_H
#define PKMETALRENDERSTATE_H

@class NSMutableArray;
@protocol MTLCommandQueue, MTLCommandBuffer, MTLRenderCommandEncoder, MTLComputeCommandEncoder, MTLTexture;

#import <Foundation/Foundation.h>


@interface PKMetalRenderState : NSObject {
    NSMutableArray *_commandBuffers;
    NSMutableArray *_purgeableFramebuffers;
    BOOL _liveRendering;
    BOOL _waitUntilCompletedOnCommit;
    BOOL _msaaRendering;
    BOOL _renderOnPaper;
    BOOL _needRenderMask;
    id<MTLCommandQueue> *_commandQueue;
    id<MTLCommandBuffer> *_commandBuffer;
    id<MTLCommandBuffer> *_computeCommandBuffer;
    id<MTLCommandBuffer> *_maskCommandBuffer;
    id<MTLRenderCommandEncoder> *_renderEncoder;
    id<MTLComputeCommandEncoder> *_computeEncoder;
    id<MTLRenderCommandEncoder> *_maskRenderEncoder;
    NSUInteger _vertexEncodeCount;
    id<MTLTexture> *_destinationTexture;
    NSUInteger _destinationColorAttachmentIndex;
    NSInteger _sixChannelRenderMode;
    id<MTLTexture> *_sixChannelContentTexture;
    ? _scissorRect;
    CGAffineTransform _renderTextureTexCoordTransform;
}




+(void)renderTargetBarrierForRenderEncoder:(id)arg0 ;
-(void)dealloc;


@end


#endif
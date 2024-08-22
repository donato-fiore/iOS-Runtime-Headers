// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERCARDRENDERER_H
#define PKPAYLATERCARDRENDERER_H

@class PKPayLaterCardMagnitudes, NSMutableArray, MTLRenderPassDescriptor;
@protocol MTLCommandQueue, MTLRenderPipelineState, MTLBuffer, MTLTexture;

#import <Foundation/Foundation.h>

#import "PKMetalRenderLoop.h"
#import "PKTextureLoader.h"

@interface PKPayLaterCardRenderer : NSObject {
    BOOL _invalidated;
    PKPayLaterCardMagnitudes *_magnitudes;
    NSMutableArray *_instances;
    PKMetalRenderLoop *_loop;
    id<MTLCommandQueue> *_commandQueue;
    id<MTLRenderPipelineState> *_backgroundPipelineState;
    id<MTLRenderPipelineState> *_overlayPipelineState;
    id<MTLRenderPipelineState> *_instancePipelineState;
    NSUInteger _drawableWidth;
    NSUInteger _drawableHeight;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    PKTextureLoader *_overlayLoader;
    id<MTLBuffer> *_vertices;
    id<MTLBuffer> *_instanceVertexCoords;
    id<MTLBuffer> *_uniform;
    id<MTLBuffer> *_instanceUniforms;
    id<MTLTexture> *_overlay;
    CGFloat _viewHalfWidthAtInstancePlane;
    CGFloat _viewHalfHeightAtInstancePlane;
    CGFloat _minSeparationAtInstancePlane;
    CGFloat _instancePlaneDepthScaleFactor;
    CGFloat _smoothedViewZoom;
    CGFloat _smoothedSpacing;
    CGFloat _smoothedWaveAmount;
    CGFloat _smoothedPresentedAmount;
    CGFloat _overlayAlpha;
    ? _viewMatrix;
    ? _projectionMatrix;
    BOOL _presented;
    ? _rotation;
    ? _gravity;
}




-(id)init;
-(void)dealloc;


@end


#endif
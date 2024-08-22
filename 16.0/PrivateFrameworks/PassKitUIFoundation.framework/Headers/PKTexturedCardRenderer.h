// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKTEXTUREDCARDRENDERER_H
#define PKTEXTUREDCARDRENDERER_H

@class MTLRenderPassDescriptor;
@protocol MTLCommandQueue, MTLRenderPipelineState, MTLBuffer, MTLTexture;

#import <Foundation/Foundation.h>

#import "PKMetalRenderLoop.h"
#import "PKTextureLoader.h"

@interface PKTexturedCardRenderer : NSObject {
    BOOL _invalidated;
    NSInteger _style;
    PKMetalRenderLoop *_loop;
    id<MTLCommandQueue> *_commandQueue;
    id<MTLRenderPipelineState> *_pipelineState;
    NSUInteger _drawableWidth;
    NSUInteger _drawableHeight;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    PKTextureLoader *_diffuseLoader;
    PKTextureLoader *_metalnessLoader;
    PKTextureLoader *_normalLoader;
    id<MTLBuffer> *_vertices;
    id<MTLBuffer> *_uniform;
    id<MTLTexture> *_diffuse;
    id<MTLTexture> *_metalness;
    id<MTLTexture> *_normal;
    float _lightIntensity;
    ? _rotation;
}




-(id)init;
-(void)dealloc;


@end


#endif
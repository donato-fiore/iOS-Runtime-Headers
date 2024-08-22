// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKTEXTUREDCARDRENDERER_H
#define PKTEXTUREDCARDRENDERER_H

@class MTLRenderPassDescriptor, NSString;
@protocol PKInvalidatable, MTLCommandQueue, MTLRenderPipelineState, MTLBuffer, MTLTexture;

#import <Foundation/Foundation.h>

#import "PKMetalRenderLoop.h"

@interface PKTexturedCardRenderer : NSObject <PKInvalidatable>

 {
    BOOL _invalidated;
    NSInteger _style;
    PKMetalRenderLoop *_loop;
    id<MTLCommandQueue> *_commandQueue;
    id<MTLRenderPipelineState> *_pipelineState;
    NSUInteger _drawableWidth;
    NSUInteger _drawableHeight;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    id<MTLBuffer> *_vertices;
    id<MTLBuffer> *_uniform;
    id<MTLTexture> *_diffuse;
    id<MTLTexture> *_metalness;
    id<MTLTexture> *_normal;
    float _lightIntensity;
    ? _rotation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;
-(void)invalidate;


@end


#endif
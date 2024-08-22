// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLSPLINERENDERER_H
#define MTLSPLINERENDERER_H

@class MTKView, NSMutableArray;
@protocol MTLDevice, MTLLibrary, MTLCommandQueue, MTLComputePipelineState, MTLRenderPipelineState;

#import <Foundation/Foundation.h>


@interface MTLSplineRenderer : NSObject {
    float _edgeFactor;
    float _insideFactor;
    MTKView *_view;
    id<MTLDevice> *_device;
    id<MTLLibrary> *_library;
    id<MTLCommandQueue> *_commandQueue;
    id<MTLComputePipelineState> *_computeTessellationFactorsPipeline;
    id<MTLRenderPipelineState> *_renderPostTessellationPipelineState;
}


@property (retain) NSMutableArray *dataCollection; // ivar: _dataCollection
@property ? projectionMatrix; // ivar: _projectionMatrix
@property NSUInteger triangleFillMode; // ivar: _triangleFillMode


-(id)init;
-(id)initWithMTKView:(id)arg0 dataCollection:(id)arg1 ;
-(void)computeTessellationFactors:(id)arg0 data:(id)arg1 ;
-(void)createPipelineStates;
-(void)renderPostTessellation:(id)arg0 data:(id)arg1 ;
-(void)renderToTextureWithCommandBuffer:(id)arg0 texture:(id)arg1 ;
-(void)renderWithCommandBuffer:(id)arg0 ;


@end


#endif
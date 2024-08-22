// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARGPUCUBEMAPPROJECTOR_H
#define ARGPUCUBEMAPPROJECTOR_H

@protocol MTLDevice, MTLCommandQueue, MTLRenderPipelineState, MTLDepthStencilState;

#import <Foundation/Foundation.h>


@interface ARGPUCubemapProjector : NSObject {
    id<MTLDevice> *_device;
    id<MTLCommandQueue> *_commandQueue;
    id<MTLRenderPipelineState> *_cubemapPipelineStateSRGB_BGRA;
    id<MTLRenderPipelineState> *_cubemapPipelineStateSRGB_RGBA;
    id<MTLRenderPipelineState> *_cubemapPipelineStateHDR;
    id<MTLDepthStencilState> *_cubemapDepthState;
}




+(id)createCubemap:(NSUInteger)arg0 ;
-(id)init;
-(void)projectToCube:(id)arg0 transformWorldFromCube:(struct ? )arg1 meshes:(id)arg2 blend:(BOOL)arg3 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKMETALSHADER_H
#define PKMETALSHADER_H

@class MTLRenderPipelineDescriptor;
@protocol MTLFunction, MTLRenderPipelineState;

#import <Foundation/Foundation.h>

#import "PKMetalShader.h"

@interface PKMetalShader : NSObject {
    id<MTLFunction> *_vertexFunction;
    id<MTLFunction> *_fragmentFunction;
    id<MTLRenderPipelineState> *_pipelineState;
    id<MTLRenderPipelineState> *_pipelineStateWithColorMaskNone;
    id<MTLRenderPipelineState> *_msaaPipelineState;
    id<MTLRenderPipelineState> *_msaaPipelineStateWithColorMaskNone;
    NSUInteger _stencilPixelFormat;
    NSInteger _blendMode;
    NSUInteger _colorAttachmentIndex;
    MTLRenderPipelineDescriptor *_sharedPipelineDescriptor;
    NSUInteger _numColorAttachments;
    PKMetalShader *_noBlendModeShader;
    PKMetalShader *_addBlendModeShader;
    PKMetalShader *_addNoAlphaBlendModeShader;
    PKMetalShader *_linearDodgeBlendModeShader;
    PKMetalShader *_multiplyBlendModeShader;
    PKMetalShader *_sourceOverBlendModeShader;
    PKMetalShader *_subtractBlendModeShader;
    PKMetalShader *_maxBlendModeShader;
    PKMetalShader *_invertBlendModeShader;
    NSUInteger _msaaPipelineStateSampleCount;
    NSUInteger _msaaPipelineStateWithColorMaskNoneSampleCount;
}




-(id)init;


@end


#endif
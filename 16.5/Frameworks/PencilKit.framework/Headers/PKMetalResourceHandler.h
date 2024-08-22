// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKMETALRESOURCEHANDLER_H
#define PKMETALRESOURCEHANDLER_H

@class NSMutableDictionary, MTLPipelineBufferDescriptor;
@protocol MTLComputePipelineState, MTLRenderPipelineState, MTLBuffer, MTLLibrary, MTLTexture, OS_dispatch_queue, MTLPipelineLibrarySPI, MTLDevice;

#import <Foundation/Foundation.h>

#import "PKLRUCache.h"
#import "PKMetalResourceHandlerBuffer.h"

@interface PKMetalResourceHandler : NSObject {
    id<MTLComputePipelineState> *_particleShaderKernelPipelineState;
    id<MTLComputePipelineState> *_particleShaderKernelPipelineStateWithVariableSpacing;
    id<MTLComputePipelineState> *_paintShaderKernelPipelineState;
    id<MTLComputePipelineState> *_paintShaderKernelPipelineStateWithLiveStrokeMode;
    id<MTLComputePipelineState> *_paintShaderKernelPipelineStateWithLiveStrokeParticles;
    id<MTLRenderPipelineState> *_sixChannelCopyToCanvasPipelineState;
    id<MTLBuffer> *_cachedQuadVertexBuffer;
    id<MTLBuffer> *_cachedQuadTexCoordBuffer;
    NSMutableDictionary *_inkTextures;
    unordered_map<(anonymous namespace)::PKMetalShaderKey, PKMetalShader *, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, std::equal_to<(anonymous namespace)::PKMetalShaderKey>, std::allocator<std::pair<const (anonymous namespace)::PKMetalShaderKey, PKMetalShader *>>> _uberShaders;
    unordered_map<(anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, std::equal_to<(anonymous namespace)::PKSixChannelShaderKey>, std::allocator<std::pair<const (anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *>>> _sixChannelShaders;
    unordered_map<PKNamedShaderKey, PKMetalShader *, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, std::equal_to<PKNamedShaderKey>, std::allocator<std::pair<const PKNamedShaderKey, PKMetalShader *>>> _namedShaders;
    unordered_map<PKShaderPipelineConfig, MTLRenderPipelineDescriptor *, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, std::equal_to<PKShaderPipelineConfig>, std::allocator<std::pair<const PKShaderPipelineConfig, MTLRenderPipelineDescriptor *>>> _pipelineDescriptors;
    unordered_map<(anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, std::equal_to<(anonymous namespace)::PKMetalKernelKey>, std::allocator<std::pair<const (anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>>>> _kernelPipelines;
    id<MTLLibrary> *_defaultLibrary;
    id<MTLTexture> *_paperTexture;
    CGSize _paperTextureSize;
    PKLRUCache *_strokeRenderCache;
    id<MTLBuffer> *_particleIndexBuffer;
    id<MTLBuffer> *_randomNumberBuffer;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSUInteger _signpost_id;
    PKMetalResourceHandlerBuffer *_purgeableResourceBuffer;
    PKMetalResourceHandlerBuffer *_resourceBuffer;
    PKMetalResourceHandlerBuffer *_gpuResourceBuffer;
    id<MTLPipelineLibrarySPI> *_pipelineLibrary;
    BOOL _generatePipelineDescriptors;
    BOOL _generateForScribble;
    BOOL _deviceSupportsAppleFamily;
    BOOL _deviceSupportsMacFamily;
    BOOL _deviceSupportsFramebufferFetch;
    BOOL _sixChannelUsesWideGamut;
    id<MTLDevice> *_device;
    NSUInteger _sixChannelOriginalBackPixelFormat;
    NSUInteger _sixChannelMetalLayerPixelFormat;
    MTLPipelineBufferDescriptor *_sharedPipelineDescriptor;
}




+(id)generatePipelineDescriptorsForDevice:(id)arg0 ;
-(id)init;


@end


#endif
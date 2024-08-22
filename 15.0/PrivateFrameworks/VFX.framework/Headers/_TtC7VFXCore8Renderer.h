// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC7VFXCORE8RENDERER_H
#define _TTC7VFXCORE8RENDERER_H

@class SwiftObject;



@interface _TtC7VFXCore8Renderer : SwiftObject {
    ? device;
    ? lock;
    ? uploadLock;
    ? renderOutputs;
    ? renderOutputsForThisFrame;
    ? shaderCache;
    ? textureCache;
    ? GPUToolBox;
    ? texturePool;
    ? renderGraph;
    ? useGammaBlending;
    ? bufferPool;
    ? wholeFrameBufferPool;
    ? uniformBufferPool;
    ? captureInProgress;
    ? commandQueue;
    ? showDebugMenu;
    ? additiveWritesToAlpha;
    ? hideOpaquePass;
    ? hideTransparentPass;
    ? canUseImgui;
    ? isPostFXEnabled;
    ? outputCommandBuffer;
    ? unscheduledCommandBuffersLock;
    ? unscheduledCommandBuffers;
    ? currentCommandBuffer;
    ? currentEncoder;
    ? currentRenderPassDescriptor;
    ? cachedMTLRenderPassDescriptor;
    ? counterRecorder;
    ? _renderOutputTexture;
    ? _renderOutputTextureFetchedThisFrame;
    ? renderOutputRenderPassFormat;
    ? encoders;
    ? mtkMeshBufferAllocator;
    ? opaqueDepthState;
    ? transparentDepthState;
    ? transparentStencilOverdrawDepthState;
    ? depthAlwaysNoWriteState;
    ? reversedDepthState;
    ? reversedNoWriteDepthState;
    ? inFlightSemaphore;
    ? defaultSampler;
    ? defaultSamplerRepeatTrilinear;
    ? defaultSamplerClampMipNearest;
    ? defaultSamplerRepeatMipNearest;
    ? defaultSamplerRepeatSMipNearest;
    ? defaultSamplerMirrorRepeatMipNearest;
    ? _defaultIrradianceTexture;
    ? _defaultRadianceTexture;
    ? _defaultBrdfLutTexture;
    ? _defaultWhiteTexture;
    ? _defaultGreyTexture;
    ? _defaultBlackTexture;
    ? _defaultBlackCubeTexture;
    ? _defaultNormalMapTexture;
    ? frameTimestamp;
    ? currentRenderOutputHandle;
    ? colorRamps;
    ? curves;
    ? stripIndexBuffers;
    ? deformedBuffers;
}






@end


#endif
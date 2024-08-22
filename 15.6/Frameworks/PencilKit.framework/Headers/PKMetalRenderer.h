// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKMETALRENDERER_H
#define PKMETALRENDERER_H

@class MTKTextureLoader;
@protocol MTLDevice, MTLCommandQueueSPI, MTLTexture, MTLBuffer;

#import <Foundation/Foundation.h>

#import "PKMetalRenderState.h"
#import "PKMetalFramebuffer.h"
#import "PKMetalResourceHandler.h"
#import "PKMetalShader.h"
#import "PKLinedPaper.h"

@interface PKMetalRenderer : NSObject {
    PKMetalRenderState *_currentRenderState;
    NSUInteger _currentCacheSize;
    id<MTLDevice> *_device;
    id<MTLCommandQueueSPI> *_commandQueue;
    PKMetalFramebuffer *_originalBackFramebuffer;
    BOOL _originalBackFramebufferIsNonPurgeable;
    PKMetalFramebuffer *_sixChannelMultiplyFramebuffer;
    BOOL _sixChannelMultiplyFramebufferIsNonPurgeable;
    BOOL _shouldClearOriginalBackFramebuffer;
    ? _originalBackClearColor;
    PKMetalFramebuffer *_paintFramebuffer;
    BOOL _paintFramebufferIsNonPurgeable;
    PKMetalFramebuffer *_alwaysMemorylessPaintFramebuffer;
    PKMetalFramebuffer *_paintFramebufferMask;
    PKMetalFramebuffer *_maskMSAAFramebuffer;
    PKMetalResourceHandler *_resourceHandler;
    PKMetalFramebuffer *_dummyPaintFramebuffer;
    PKMetalFramebuffer *_dummyColorFramebuffer;
    CGSize _drawingPixelSize;
    *CGColor _backgroundColor;
    CGSize _actualSize;
    CGFloat _fromStrokeSpaceScale;
    CGAffineTransform _strokeTransform;
    CGRect _viewScissor;
    BOOL _lastPointForEraserIsValid;
    _PKStrokePoint _lastPointForEraser;
    id<MTLTexture> *_paperTexture;
    CGSize _paperTextureSize;
    NSUInteger _pixelFormat;
    NSUInteger _originalBackPixelFormat;
    NSUInteger _paintAndParticlePixelFormat;
    vector<PKMetalParticleStrokePoint, std::allocator<PKMetalParticleStrokePoint>> _particleStrokePointBuffer;
    vector<PKMetalPaintStrokePoint, std::allocator<PKMetalPaintStrokePoint>> _paintStrokePointBuffer;
    vector<PKMetalLiveStrokePaintStrokePoint, std::allocator<PKMetalLiveStrokePaintStrokePoint>> _liveStrokeStrokePointBuffer;
    shared_ptr<std::vector<(anonymous namespace)::StrokeVertex>> _sharedStrokeVertexBuffer;
    vector<(anonymous namespace)::AnimatingStroke, std::allocator<(anonymous namespace)::AnimatingStroke>> _animatingStrokes;
    CGRect _paintFramebufferDirtyRect;
    PKMetalShader *_paintShader;
    PKMetalShader *_particleShader;
    PKMetalShader *_particleShaderWithAspectRatioSupport;
    PKMetalShader *_erasePaintShader;
    id<MTLBuffer> *_particleIndexBuffer;
    id<MTLBuffer> *_randomNumberBuffer;
    NSUInteger _renderMaskMSAASampleCount;
    BOOL _needRestartWorkaroundForOldIntelDrivers;
    BOOL _useComputeRenderCaches;
    BOOL _sixChannelBlending;
    CGRect _drawableDirtyRect;
    MTKTextureLoader *_textureLoader;
    BOOL _solidColorBackboard;
    BOOL _oneRenderPassForLiveRendering;
    BOOL _fadeOutStrokesMode;
    BOOL _liveStrokeMode;
    BOOL _edgeMask;
    BOOL _invertColors;
    PKLinedPaper *_linedPaper;
    *CGColor _liveRenderingOverrideColor;
    CGFloat _backboardPaperMultiply;
    CGFloat _inputScale;
    CGFloat _eraserIndicatorAlpha;
    CGFloat _liveStrokeElapsedTime;
    CGSize _liveStrokeMaxSize;
    CGAffineTransform _paperTransform;
}




-(void)dealloc;


@end


#endif
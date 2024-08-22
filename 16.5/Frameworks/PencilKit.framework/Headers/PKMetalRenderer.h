// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKMETALRENDERER_H
#define PKMETALRENDERER_H

@class NSArray, MTKTextureLoader;
@protocol MTLDevice, MTLCommandQueueSPI, MTLTexture, MTLBuffer;

#import <Foundation/Foundation.h>

#import "PKMetalRenderState.h"
#import "PKMetalFramebuffer.h"
#import "PKMetalResourceHandler.h"
#import "PKStroke.h"
#import "PKMetalPencilShadowRenderer.h"
#import "PKLinedPaper.h"

@interface PKMetalRenderer : NSObject {
    PKMetalRenderState *_currentRenderState;
    NSUInteger _currentCacheSize;
    id<MTLDevice> *_device;
    id<MTLCommandQueueSPI> *_commandQueue;
    RendererFramebuffer _originalBackFramebuffer;
    RendererFramebuffer _sixChannelMultiplyFramebuffer;
    BOOL _shouldClearOriginalBackFramebuffer;
    ? _originalBackClearColor;
    RendererFramebuffer _paintFramebuffer;
    RendererFramebuffer _paintAccumulationFramebuffer;
    PKMetalFramebuffer *_paintFramebufferMask;
    PKMetalFramebuffer *_maskMSAAFramebuffer;
    PKMetalResourceHandler *_resourceHandler;
    PKMetalFramebuffer" _dummyPaintFramebuffer;
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
    NSUInteger _originalBackPixelFormat;
    NSUInteger _paintAndParticlePixelFormat;
    vector<PKMetalParticleStrokePoint, std::allocator<PKMetalParticleStrokePoint>> _particleStrokePointBuffer;
    vector<PKMetalPaintStrokePoint, std::allocator<PKMetalPaintStrokePoint>> _paintStrokePointBuffer;
    vector<PKMetalLiveStrokePaintStrokePoint, std::allocator<PKMetalLiveStrokePaintStrokePoint>> _liveStrokeStrokePointBuffer;
    shared_ptr<std::vector<(anonymous namespace)::StrokeVertex>> _sharedStrokeVertexBuffer;
    vector<(anonymous namespace)::AnimatingStroke, std::allocator<(anonymous namespace)::AnimatingStroke>> _animatingStrokes;
    PKStroke *_activeCombinedStroke;
    NSArray *_activeCombinedAlternativeStrokes;
    CGRect _paintFramebufferDirtyRect;
    id<MTLBuffer> *_particleIndexBuffer;
    id<MTLBuffer> *_randomNumberBuffer;
    NSUInteger _renderMaskMSAASampleCount;
    BOOL _needRestartWorkaroundForOldIntelDrivers;
    BOOL _useComputeRenderCaches;
    BOOL _sixChannelBlending;
    CGRect _drawableDirtyRect;
    MTKTextureLoader *_textureLoader;
    vector<_PKStrokePoint, std::allocator<_PKStrokePoint>> previewStrokePoints;
    PKShaderPipelineConfig _defaultNonSixChannelPipelineConfig;
    PKShaderPipelineConfig _defaultSixChannelPipelineConfig;
    PKMetalPencilShadowRenderer *_pencilShadowRenderer;
    _PKStrokePoint _latestPencilShadowPoint;
    CGFloat _latestPencilShadowPointTimestamp;
    BOOL _solidColorBackboard;
    BOOL _oneRenderPassForLiveRendering;
    BOOL _fadeOutStrokesMode;
    BOOL _liveStrokeMode;
    BOOL _edgeMask;
    BOOL _invertColors;
    BOOL _combineStrokesAllowed;
    NSUInteger _pixelFormat;
    PKLinedPaper *_linedPaper;
    *CGColor _liveRenderingOverrideColor;
    CGFloat _backboardPaperMultiply;
    CGFloat _inputScale;
    CGFloat _eraserIndicatorAlpha;
    CGFloat _previewStrokeAlpha;
    CGFloat _pencilShadowElevation;
    CGFloat _pencilShadowAlpha;
    CGFloat _previewStrokeMaxPoints;
    CGFloat _liveStrokeElapsedTime;
    CGSize _liveStrokeMaxSize;
    CGAffineTransform _paperTransform;
}




-(void)dealloc;


@end


#endif
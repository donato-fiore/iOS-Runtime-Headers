// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKMETALRENDERERCONTROLLER_H
#define PKMETALRENDERERCONTROLLER_H

@class NSMutableArray, NSArray, CAMetalLayer;
@protocol PKRendererVSyncControllerDelegate, OS_dispatch_queue, OS_dispatch_semaphore, MTLTexture, CAMetalDrawable, PKMetalRendererControllerDelegate;

#import <Foundation/Foundation.h>

#import "PKStrokeGenerator.h"
#import "PKLinedPaper.h"
#import "PKMetalRenderer.h"

@interface PKMetalRendererController : NSObject <PKRendererVSyncControllerDelegate>

 {
    NSObject<OS_dispatch_queue> *_renderQueue;
    uint8_t _cancelLongRunningRenderingCount;
    uint8_t _cancelAllRendering;
    NSObject<OS_dispatch_semaphore> *_canBeginRenderSemaphore;
    atomic_flag _readyToBeginRender;
    uint8_t _lastFrameDuration;
    uint8_t _lastPresentationTime;
    uint8_t _queuedRenders;
    NSMutableArray *_postPresentCallbacks;
    BOOL _isTorndown;
    CGSize _pixelSize;
    CGSize _actualSize;
    NSInteger _presentationCount;
    PKRunningStat _strokeLatencyStat;
    PKRunningStat _predictedTouchesLatencyStat;
    id<MTLTexture> *_currentTextureTarget;
    id<CAMetalDrawable> *_currentDrawable;
    *CGImage _paperTextureImage;
    CGPoint _canvasOffset;
    CGAffineTransform _strokeTransformForRenderQueue;
    id *_canvasOffsetBlock;
    NSArray *_liveStrokeStrokes;
    CGRect _liveStrokeStrokesAnimationBounds;
    BOOL _dirtyRectMightBeInvalid;
    BOOL _sixChannelUsesWideGamut;
    BOOL _liveStrokeMode;
    BOOL _fadeOutStrokesMode;
    BOOL _invertColors;
    BOOL _sixChannelBlending;
    id<PKMetalRendererControllerDelegate> *_delegate;
    NSUInteger _pixelFormat;
    NSUInteger _sixChannelMetalLayerPixelFormat;
    PKStrokeGenerator *_inputController;
    PKLinedPaper *_linedPaper;
    CGFloat _liveStrokeElapsedTime;
    CGFloat _liveStrokeDuration;
    CAMetalLayer *_presentationLayer;
    PKMetalRenderer *_renderer;
    CGFloat _inputScale;
    CGFloat __latestLatency;
    CGSize _liveStrokeMaxSize;
    CGRect _viewScissor;
    CGAffineTransform _strokeTransform;
    CGAffineTransform _paperTransform;
    CGAffineTransform _renderTransform;
}




-(void)dealloc;
-(void)signalVSyncSemaphore:(CGFloat)arg0 presentationTime:(NSUInteger)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MDDISPLAYLAYER_H
#define MDDISPLAYLAYER_H

@class NSString, CALayer;
@protocol GGLLayerDelegate, MDRenderTarget, GGLRenderQueueSource;

#import <Foundation/Foundation.h>


@interface MDDisplayLayer : NSObject <GGLLayerDelegate, MDRenderTarget>

 {
    shared_ptr<md::TaskContext> _taskContext;
    *void _activeRenderQueue;
    _retain_ptr<VKSharedResources *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> _sharedResources;
    deque<std::function<void ()>, std::allocator<std::function<void ()>>> _completionHandlers;
    RenderTargetFormat _sRGBFormat;
    *void _device;
    *void _renderer;
    mutex _debugConsoleManagerCreationLock;
    unique_ptr<md::DebugConsoleManager, std::default_delete<md::DebugConsoleManager>> _debugConsoleManager;
    unique_ptr<ggl::RenderTarget, std::default_delete<ggl::RenderTarget>> _sRGBRenderTarget;
    unique_ptr<ggl::RenderBuffer, std::default_delete<ggl::RenderBuffer>> _depthStencil;
    ? _sRGBMsaaTexture;
    shared_ptr<ggl::Texture2DAbstract> _sRGBTexture;
    shared_ptr<ggl::RenderBuffer> _sRGBColorTextures;
    unique_ptr<ggl::RenderTarget, std::default_delete<ggl::RenderTarget>> _blitRenderTarget;
    RenderTargetFormat _blitFormat;
    RenderTargetFormat _linearFormat;
    unique_ptr<ggl::RenderTarget, std::default_delete<ggl::RenderTarget>> _linearRenderTarget;
    ? _linearTexture;
    shared_ptr<ggl::RenderBuffer> _linearColorTextures;
    BOOL _requiresMultisampling;
    *CGContext _snapshotContext;
    BOOL _readPixels;
    CGRect _bounds;
    CGFloat _contentsScale;
    NSUInteger _signpostId;
}


@property (readonly, nonatomic) float averageFPS;
@property (readonly, nonatomic) *RenderTargetFormat blitFormat;
@property (readonly, nonatomic) *void blitRenderTarget;
@property (nonatomic) CGRect bounds;
@property (nonatomic) CGFloat contentScale;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) *void finalRenderTarget;
@property (readonly, nonatomic) *RenderTargetFormat format;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CALayer *layer; // ivar: _layer
@property (readonly, nonatomic) *RenderTargetFormat linearFormat;
@property (readonly, nonatomic) *void linearRenderTarget;
@property (readonly, nonatomic) BOOL multiSample; // ivar: _useMultisampling
@property (nonatomic) NSObject<GGLRenderQueueSource> *renderSource; // ivar: _renderSource
@property (readonly, nonatomic) *void renderer;
@property (readonly, nonatomic) BOOL shouldRasterize; // ivar: _shouldRasterize
@property (nonatomic) CGSize size;
@property (readonly, nonatomic) CGSize sizeInPixels;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsFramebufferFetch; // ivar: _supportsFramebufferFetch


-(*void)_renderQueueForTimestamp:(CGFloat)arg0 prepareHandler:(id)arg1 ;
-(*void)debugConsoleForId:(int)arg0 ;
-(*void)renderQueueForTimestamp:(CGFloat)arg0 ;
-(BOOL)hasRenderTarget;
-(BOOL)isDelayedRenderQueueConsumptionSupported;
-(id)initWithContentScale:(CGFloat)arg0 useMultisampling:(BOOL)arg1 extraColorFormats:(*void)arg2 shouldRasterize:(BOOL)arg3 taskContext:(*void)arg4 device:(*void)arg5 sharedResources:(id)arg6 signpostId:(NSUInteger)arg7 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 toLayer:(id)arg1 ;
-(struct __IOSurface *)flipImage;
-(struct shared_ptr<ggl::BitmapDataBase> )bitmapData;
-(void)_didReadPixels:(*void)arg0 ;
-(void)createRenderTarget;
-(void)dealloc;
-(void)destroyRenderTarget;
-(void)didEnterBackground;
-(void)didPresent;
-(void)didReceiveMemoryWarning;
-(void)didUpdateFrameTexture;
-(void)disablePerformanceHUD:(id)arg0 ;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)drawToTexture:(*void)arg0 withRenderQueue:(*void)arg1 ;
-(void)drawToTexture:(*void)arg0 withRenderQueue:(*void)arg1 completionHandler:(id)arg2 ;
-(void)enablePerformanceHUD:(id)arg0 ;
-(void)expandedPerformanceHUD:(id)arg0 ;
-(void)prepareTargetsForPlatormsWithFramebufferFetch:(*void)arg0 ;
-(void)prepareTargetsForPlatormsWithoutFramebufferFetch:(*void)arg0 ;
-(void)prepareTexture:(*void)arg0 ;
-(void)renderWithTimestamp:(CGFloat)arg0 completion:(struct function<void ()> )arg1 ;
-(void)setBackgroundColor:(struct CGColor *)arg0 ;
-(void)setContentsGravity:(id)arg0 ;
-(void)setNeedsDisplayOnBoundsChange:(BOOL)arg0 ;
-(void)setOpaque:(BOOL)arg0 ;
-(void)willPresent;
-(void)willUpdateFrameTexture;


@end


#endif
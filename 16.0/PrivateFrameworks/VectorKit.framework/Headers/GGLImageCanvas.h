// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GGLIMAGECANVAS_H
#define GGLIMAGECANVAS_H

@class NSString;
@protocol MDRenderTarget, GGLRenderQueueSource;

#import <Foundation/Foundation.h>


@interface GGLImageCanvas : NSObject <MDRenderTarget>

 {
    shared_ptr<ggl::Device> _device;
    BOOL _canMakeImage;
    BOOL _recreateRenderTarget;
    unique_ptr<ggl::IOSurfaceTexture, std::default_delete<ggl::IOSurfaceTexture>> _flippedSurfaceTexture;
    unique_ptr<ggl::RenderTarget, std::default_delete<ggl::RenderTarget>> _flippedRenderTarget;
    unique_ptr<(anonymous namespace)::YFlipPass, std::default_delete<(anonymous namespace)::YFlipPass>> _yFlipPass;
    RenderTargetFormat _sRGBFormat;
    RenderTargetFormat _resolvedRenderTargetFormat;
    unique_ptr<ggl::Renderer, std::default_delete<ggl::Renderer>> _renderer;
    unique_ptr<ggl::RenderTarget, std::default_delete<ggl::RenderTarget>> _sRGBRenderTarget;
    shared_ptr<ggl::Texture2DAbstract> _sRGBColorBuffer;
    unique_ptr<ggl::RenderBuffer, std::default_delete<ggl::RenderBuffer>> _depthStencilBuffer;
    array<std::shared_ptr<ggl::RenderBuffer>, 3UL> _sRGBColorTextures;
    RenderTargetFormat _linearFormat;
    unique_ptr<ggl::RenderTarget, std::default_delete<ggl::RenderTarget>> _linearRenderTarget;
    shared_ptr<ggl::Texture2DAbstract> _linearColorBuffer;
    array<std::shared_ptr<ggl::RenderBuffer>, 3UL> _linearColorTextures;
    unique_ptr<ggl::RenderTarget, std::default_delete<ggl::RenderTarget>> _blitRenderTarget;
    RenderTargetFormat _blitFormat;
    shared_ptr<ggl::Texture> _msaaResolveBuffer;
    NSUInteger _signpostId;
    *void _mdDevice;
    mutex _debugConsoleManagerCreationLock;
    unique_ptr<md::DebugConsoleManager, std::default_delete<md::DebugConsoleManager>> _debugConsoleManager;
}


@property (nonatomic) BOOL allowAlpha; // ivar: _allowAlpha
@property (readonly, nonatomic) float averageFPS;
@property (readonly, nonatomic) *RenderTargetFormat blitFormat;
@property (readonly, nonatomic) *void blitRenderTarget;
@property (nonatomic) CGRect bounds; // ivar: _bounds
@property (nonatomic) CGFloat contentScale; // ivar: _contentScale
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) *void finalRenderTarget;
@property (readonly, nonatomic) *RenderTargetFormat format;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *void imageTexture;
@property (readonly, nonatomic) *RenderTargetFormat linearFormat;
@property (readonly, nonatomic) *void linearRenderTarget;
@property (readonly, nonatomic) BOOL multiSample; // ivar: _useMultisampling
@property (weak, nonatomic) NSObject<GGLRenderQueueSource> *renderSource; // ivar: _renderSource
@property (readonly, nonatomic) *void renderTarget;
@property (readonly, nonatomic) *void renderer;
@property (readonly, nonatomic) BOOL shouldRasterize;
@property (nonatomic) CGSize size; // ivar: _size
@property (readonly, nonatomic) CGSize sizeInPixels;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsFramebufferFetch; // ivar: _supportsFramebufferFetch


-(*void)_internalRenderTarget;
-(*void)debugConsoleForId:(int)arg0 ;
-(*void)finalSurface;
-(BOOL)hasRenderTarget;
-(id)initWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 useMultisampling:(BOOL)arg2 extraColorFormats:(*void)arg3 taskContext:(*void)arg4 device:(*void)arg5 signpostId:(NSUInteger)arg6 ;
-(struct __IOSurface *)flipImage;
-(struct shared_ptr<ggl::BitmapDataBase> )bitmapData;
-(void)createRenderTarget;
-(void)dealloc;
-(void)destroyRenderTarget;
-(void)didDrawView;
-(void)renderWithTimestamp:(CGFloat)arg0 completion:(struct function<void ()> )arg1 ;
-(void)willDealloc;
-(void)willDrawView;


@end


#endif
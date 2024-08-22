// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTKVIEW_H
#define MTKVIEW_H

@class UIView, CAMetalLayer, CADisplayLink, NSString, MTLRenderPassDescriptor;
@protocol NSCoding, CALayerDelegate, MTLTexture, CAMetalDrawable, MTKViewDelegate, MTLDevice;



@interface MTKView : UIView <NSCoding, CALayerDelegate>

 {
    CAMetalLayer *_metalLayer;
    BOOL _sizeDirty;
    CGSize _drawableScaleFactor;
    BOOL _pausedOnBackgrounding;
    CADisplayLink *_displayLink;
    *unk _drawRectSubIMP;
    BOOL _subClassOverridesDrawRect;
    BOOL _deviceReset;
    BOOL _doesNotifyOnRecommendedSizeUpdate;
    id<MTLTexture> *_depthStencilTexture;
    id<MTLTexture> *_multisampleColorTexture;
    BOOL _framebufferOnly;
    NSUInteger _depthStencilTextureUsage;
    NSUInteger _multisampleColorTextureUsage;
    NSUInteger _depthStencilStorageMode;
    NSUInteger _drawableAttachmentIndex;
    NSInteger _nominalFramesPerSecond;
    NSInteger _maxValidAttachmentIndex;
    NSUInteger _colorPixelFormats;
    id<MTLTexture>" _multisampleColorTextures;
    id<MTLTexture>" _colorTextures;
    MTKOffscreenDrawable" _offscreenSwapChain;
    NSUInteger _drawableIdx;
    int _renderAttachmentDirtyState;
    NSUInteger _terminateAfterFrame;
    NSUInteger _terminateAfterSeconds;
    NSUInteger _measureAfterFrame;
    NSUInteger _measureAfterSeconds;
    NSUInteger _dumpFrameAtFrame;
    NSUInteger _dumpFrameAtSeconds;
    NSString *_dumpPath;
    BOOL _dumpFirstFrame;
    BOOL _drawOffscreen;
    NSInteger _forceOrientation;
    CGFloat _startTime;
    unsigned int _frameNum;
}


@property (nonatomic) BOOL autoResizeDrawable; // ivar: _autoResizeDrawable
@property (nonatomic) ? clearColor; // ivar: _clearColor
@property (nonatomic) CGFloat clearDepth; // ivar: _clearDepth
@property (nonatomic) unsigned int clearStencil; // ivar: _clearStencil
@property (nonatomic) NSUInteger colorPixelFormat;
@property (nonatomic) *CGColorSpace colorspace;
@property (readonly, nonatomic) NSObject<CAMetalDrawable> *currentDrawable; // ivar: _currentDrawable
@property (readonly, nonatomic) MTLRenderPassDescriptor *currentRenderPassDescriptor;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MTKViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSUInteger depthStencilAttachmentTextureUsage;
@property (nonatomic) NSUInteger depthStencilPixelFormat; // ivar: _depthStencilPixelFormat
@property (nonatomic) NSUInteger depthStencilStorageMode;
@property (readonly, nonatomic) NSObject<MTLTexture> *depthStencilTexture;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<MTLDevice> *device; // ivar: _device
@property (nonatomic) CGSize drawableSize; // ivar: _drawableSize
@property (nonatomic) BOOL enableSetNeedsDisplay; // ivar: _enableSetNeedsDisplay
@property (nonatomic) BOOL framebufferOnly;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger multisampleColorAttachmentTextureUsage;
@property (readonly, nonatomic) NSObject<MTLTexture> *multisampleColorTexture;
@property (nonatomic, getter=isPaused) BOOL paused; // ivar: _paused
@property (readonly) NSObject<MTLDevice> *preferredDevice;
@property (readonly, nonatomic) CGSize preferredDrawableSize; // ivar: _preferredDrawableSize
@property (nonatomic) NSInteger preferredFramesPerSecond; // ivar: _preferredFramesPerSecond
@property (nonatomic) BOOL presentsWithTransaction;
@property (nonatomic) NSUInteger sampleCount; // ivar: _sampleCount
@property (readonly) Class superclass;


+(Class)layerClass;
-(*id)colorTextures;
-(*id)colorTexturesForceUpdate:(BOOL)arg0 ;
-(*id)multisampleColorTexturesForceUpdate:(BOOL)arg0 ;
-(BOOL)_canDrawContent;
-(BOOL)_controlsOwnScaleFactor;
-(BOOL)exportToTargaAtLocation:(id)arg0 width:(NSUInteger)arg1 height:(NSUInteger)arg2 size:(NSUInteger)arg3 bytes:(*void)arg4 ;
-(CGFloat)startTime;
-(NSInteger)_calculateRefeshesPerSecond;
-(NSInteger)nominalFramesPerSecond;
-(NSUInteger)drawNumber;
-(NSUInteger)drawableAttachmentIndex;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 device:(id)arg1 ;
-(struct CGSize )_pixelSizeFromPointSize:(struct CGSize )arg0 ;
-(void)__initCommon;
-(void)_applicationDidEnterBackground:(id)arg0 ;
-(void)_applicationWillEnterForeground:(id)arg0 ;
-(void)_createDisplayLinkForScreen:(id)arg0 ;
-(void)_dumpFrameImageWithFilename:(id)arg0 ;
-(void)_dumpFramerate:(CGFloat)arg0 withFilename:(id)arg1 ;
-(void)_resizeDrawable;
-(void)_resizeMetalLayerDrawable;
-(void)_updateToNativeScale;
-(void)createDepthStencilTexture;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)displayLayer:(id)arg0 ;
-(void)draw;
-(void)drawLayer:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getEnvironmentSettings;
-(void)layoutSubviews;
-(void)releaseDrawables;
-(void)setContentScaleFactor:(CGFloat)arg0 ;
-(void)setDrawableAttachmentIndex:(NSUInteger)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setNilValueForKey:(id)arg0 ;
-(void)setNominalFramesPerSecond:(NSInteger)arg0 ;


@end


#endif
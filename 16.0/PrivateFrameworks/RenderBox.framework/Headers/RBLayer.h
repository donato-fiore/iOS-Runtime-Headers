// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBLAYER_H
#define RBLAYER_H

@class CALayer, NSString, NSDictionary;
@protocol _RBDrawableDelegate, _RBSharedSurfaceOwner, RBDrawableStatistics;


#import "RBDevice.h"

@interface RBLayer : CALayer <_RBDrawableDelegate, _RBSharedSurfaceOwner, RBDrawableStatistics>

 {
    spin_lock _lock;
    objc_ptr<RBDevice *> _device;
    refcounted_ptr<RB::Drawable> _drawable;
    objc_ptr<RBImageQueueLayer *> _queueLayer;
    *void _pending_async_surface;
    SharedSubsurface _subsurface;
    NSUInteger _statistics_mask;
    CGFloat _statistics_alpha;
    objc_ptr<void (^)(id<RBDrawableStatistics>)> _statistics_handler;
    atomic<bool> _deallocating;
    BOOL _visible;
    BOOL _needs_display_on_visible;
    BOOL _pending_visible_callback;
}


@property (nonatomic) BOOL allowsPackedDrawable; // ivar: _allowsPackedDrawable
@property (nonatomic) ? clearColor; // ivar: _clearColor
@property (nonatomic) BOOL clearsBackground; // ivar: _clearsBackground
@property (nonatomic) int colorMode; // ivar: _colorMode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) RBDevice *device;
@property (readonly, nonatomic, getter=isDrawableAvailable) BOOL drawableAvailable;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger maxDrawableCount; // ivar: _maxDrawableCount
@property (nonatomic) BOOL needsSynchronousUpdate; // ivar: _needsSynchronousUpdate
@property (nonatomic) NSUInteger pixelFormat; // ivar: _pixelFormat
@property (nonatomic) BOOL promotesFramebuffer; // ivar: _promotesFramebuffer
@property (nonatomic) BOOL rendersAsynchronously; // ivar: _rendersAsynchronously
@property (readonly, copy, nonatomic) NSDictionary *statistics;
@property (copy, nonatomic) id *statisticsHandler;
@property (readonly) Class superclass;


+(id)defaultValueForKey:(id)arg0 ;
-(BOOL)_willMoveSubsurface:(unsigned int)arg0 ;
-(BOOL)displayWithBounds:(struct CGRect )arg0 callback:(id)arg1 ;
-(id)actionForKey:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLayer:(id)arg0 ;
-(void)_RBDrawableStatisticsDidChange;
-(void)_moveSubsurface:(*void)arg0 ;
-(void)_renderForegroundInContext:(struct CGContext *)arg0 ;
-(void)copyImageInRect:(struct CGRect )arg0 options:(id)arg1 completionQueue:(id)arg2 handler:(id)arg3 ;
-(void)dealloc;
-(void)display;
-(void)drawInDisplayList:(id)arg0 ;
-(void)layerDidBecomeVisible:(BOOL)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setContents:(id)arg0 ;
-(void)waitUntilAsyncRenderingCompleted;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKMETALRENDERLOOP_H
#define PKMETALRENDERLOOP_H

@class CAMetalLayer, CALayer;
@protocol CAMetalDrawable, PKMetalRenderLoopDelegate, MTLDevice;


#import "PKRenderLoop.h"

@interface PKMetalRenderLoop : PKRenderLoop {
    CAMetalLayer *_layer;
    BOOL _paused;
    BOOL _forcingPaused;
    BOOL _effectivePaused;
    BOOL _drawableSizeDirty;
    id<CAMetalDrawable> *_currentDrawable;
}


@property (weak, nonatomic) NSObject<PKMetalRenderLoopDelegate> *delegate;
@property (readonly, nonatomic) NSObject<MTLDevice> *device; // ivar: _device
@property (nonatomic) CGSize drawableSize; // ivar: _drawableSize
@property (nonatomic) BOOL framebufferOnly;
@property (readonly, nonatomic) CALayer *layer;
@property (readonly, nonatomic) NSUInteger pixelFormat; // ivar: _pixelFormat


-(BOOL)isDrawableAvailable;
-(BOOL)isForcingPause;
-(BOOL)isPaused;
-(id)currentDrawable;
-(id)init;
-(id)initWithPixelFormat:(NSUInteger)arg0 forDevice:(id)arg1 ;
-(void)_didDraw;
-(void)_willDraw;
-(void)invalidate;
-(void)setPaused:(BOOL)arg0 ;


@end


#endif
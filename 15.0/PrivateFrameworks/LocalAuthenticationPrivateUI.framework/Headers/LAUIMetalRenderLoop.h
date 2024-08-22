// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LAUIMETALRENDERLOOP_H
#define LAUIMETALRENDERLOOP_H

@class CAMetalLayer, CALayer;
@protocol CAMetalDrawable, LAUIMetalRenderLoopDelegate, MTLDevice;


#import "LAUIRenderLoop.h"

@interface LAUIMetalRenderLoop : LAUIRenderLoop {
    CAMetalLayer *_layer;
    BOOL _drawable_size_dirty;
    id<CAMetalDrawable> *_current_drawable;
}


@property (weak, nonatomic) NSObject<LAUIMetalRenderLoopDelegate> *delegate;
@property (readonly, nonatomic) NSObject<MTLDevice> *device; // ivar: _device
@property (nonatomic) CGSize drawableSize; // ivar: _drawable_size
@property (nonatomic) BOOL framebufferOnly;
@property (readonly, nonatomic) CALayer *layer;
@property (readonly, nonatomic) NSUInteger pixelFormat; // ivar: _pixel_format


-(BOOL)_preferredPauseState;
-(BOOL)isDrawableAvailable;
-(id)currentDrawable;
-(id)init;
-(id)initWithPixelFormat:(NSUInteger)arg0 forDevice:(id)arg1 ;
-(void)_didDraw;
-(void)_didInvalidate;
-(void)_willDraw;


@end


#endif
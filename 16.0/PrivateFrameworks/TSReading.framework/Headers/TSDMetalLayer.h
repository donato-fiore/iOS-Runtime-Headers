// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDMETALLAYER_H
#define TSDMETALLAYER_H

@class CAMetalLayer, CADisplayLink;
@protocol MTLCommandQueue, TSDMetalLayerDelegate;



@interface TSDMetalLayer : CAMetalLayer {
    CADisplayLink *_displayLink;
    BOOL _isAnimationStopping;
}


@property (readonly, nonatomic) NSObject<MTLCommandQueue> *commandQueue; // ivar: _commandQueue
@property (weak) NSObject<TSDMetalLayerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL shouldSkipNextDisplayLink; // ivar: _shouldSkipNextDisplayLink


-(id)device;
-(id)initWithFrame:(struct CGRect )arg0 isOpaque:(BOOL)arg1 isWideGamut:(BOOL)arg2 delegate:(id)arg3 metalDevice:(id)arg4 ;
-(void)displayAtCurrentLayerTime;
-(void)p_drawFrameAtLayerTime:(CGFloat)arg0 ;
-(void)p_drawFrameFromDisplayLink:(id)arg0 ;
-(void)p_performWorkOnMainThread:(id)arg0 ;
-(void)pauseAnimation;
-(void)resumeAnimation;
-(void)setDevice:(id)arg0 ;
-(void)startAnimation;
-(void)stopAnimation;
-(void)tearDown;


@end


#endif
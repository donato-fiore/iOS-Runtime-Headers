// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDGLLAYER_H
#define TSDGLLAYER_H

@class CAEAGLLayer, CADisplayLink, EAGLContext;
@protocol TSDGLLayerContext, TSDGLLayerDelegate;



@interface TSDGLLayer : CAEAGLLayer {
    id<TSDGLLayerContext> *_layerContext;
    BOOL _setNeedsDisplay;
    BOOL _wasSharedContextCreated;
    CADisplayLink *_displayLink;
}


@property NSObject<TSDGLLayerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) EAGLContext *sharedContext; // ivar: _sharedContext


-(id)initWithFrame:(struct CGRect )arg0 isOpaque:(BOOL)arg1 delegate:(id)arg2 sharedContext:(id)arg3 isWideGamut:(BOOL)arg4 ;
-(void)dealloc;
-(void)displayAtCurrentLayerTime;
-(void)lock;
-(void)p_drawFrameAtLayerTime:(CGFloat)arg0 ;
-(void)p_drawFrameFromDisplayLink:(id)arg0 ;
-(void)pauseAnimation;
-(void)resumeAnimation;
-(void)setCurrentContext;
-(void)startAnimation;
-(void)stopAnimation;
-(void)teardown;
-(void)unlock;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKRENDERLOOP_H
#define PKRENDERLOOP_H

@class CADisplayLink, UIScreen;
@protocol PKRenderLoopDelegate;

#import <Foundation/Foundation.h>


@interface PKRenderLoop : NSObject {
    CADisplayLink *_displayLink;
    BOOL _effectivePaused;
    BOOL _background;
    BOOL _delegateObservesForcingPause;
    BOOL _lastForcingPauseNotification;
}


@property (weak, nonatomic) NSObject<PKRenderLoopDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic, getter=isDrawing) BOOL drawing; // ivar: _drawing
@property (readonly, nonatomic, getter=isForcingPause) BOOL forcingPause; // ivar: _forcingPause
@property (nonatomic) BOOL inApplicationContext; // ivar: _inApplicationContext
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated; // ivar: _invalidated
@property (nonatomic, getter=isPaused) BOOL paused; // ivar: _paused
@property (nonatomic) NSInteger preferredFramesPerSecond; // ivar: _preferredFramesPerSecond
@property (readonly, nonatomic) UIScreen *screen; // ivar: _screen


-(BOOL)attachToScreen:(id)arg0 ;
-(id)init;
-(void)_applicationDidBecomeActive:(id)arg0 ;
-(void)_applicationDidEnterBackground:(id)arg0 ;
-(void)_applicationWillEnterForeground:(id)arg0 ;
-(void)_didDraw;
-(void)_drawAtTime:(CGFloat)arg0 ;
-(void)_drawWithDisplayLink:(id)arg0 ;
-(void)_updateApplicationState;
-(void)_updateEffectivePausedState;
-(void)_willDraw;
-(void)dealloc;
-(void)invalidate;


@end


#endif
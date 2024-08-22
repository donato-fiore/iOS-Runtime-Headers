// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKRENDERLOOP_H
#define PKRENDERLOOP_H

@class CADisplayLink, UIScreen, UIWindowScene;
@protocol PKRenderLoopDelegate;

#import <Foundation/Foundation.h>


@interface PKRenderLoop : NSObject {
    CADisplayLink *_displayLink;
    BOOL _observingSceneNotifications;
    BOOL _hasHighFrameRateReason;
    BOOL _background;
    BOOL _delegateObservesEffectivePaused;
    BOOL _delegateObservesRunnable;
}


@property (weak, nonatomic) NSObject<PKRenderLoopDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic, getter=isDrawing) BOOL drawing; // ivar: _drawing
@property (readonly, nonatomic, getter=effectiveIsPaused) BOOL effectivePaused; // ivar: _effectivePaused
@property (nonatomic) unsigned int highFrameRateReason; // ivar: _highFrameRateReason
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated; // ivar: _invalidated
@property (nonatomic, getter=isPaused) BOOL paused; // ivar: _paused
@property (nonatomic) CAFrameRateRange preferredFrameRateRange; // ivar: _preferredFrameRateRange
@property (readonly, nonatomic, getter=isRunnable) BOOL runnable; // ivar: _runnable
@property (readonly, weak, nonatomic) UIScreen *screen; // ivar: _screen
@property (readonly, weak, nonatomic) UIWindowScene *windowScene; // ivar: _windowScene


-(BOOL)_isForcingPause;
-(BOOL)attachToWindowScene:(id)arg0 ;
-(id)init;
-(void)_didDraw;
-(void)_didInvalidate;
-(void)_sceneDidActivate:(id)arg0 ;
-(void)_sceneDidDisconnect:(id)arg0 ;
-(void)_sceneDidEnterBackground:(id)arg0 ;
-(void)_sceneWillConnect:(id)arg0 ;
-(void)_sceneWillDeactivate:(id)arg0 ;
-(void)_sceneWillEnterForeground:(id)arg0 ;
-(void)_willDraw;
-(void)dealloc;
-(void)invalidate;


@end


#endif
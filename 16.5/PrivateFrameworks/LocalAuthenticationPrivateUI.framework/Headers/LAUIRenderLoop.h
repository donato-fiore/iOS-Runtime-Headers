// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LAUIRENDERLOOP_H
#define LAUIRENDERLOOP_H

@class CADisplayLink, UIScreen;
@protocol LAUIRenderLoopDelegate;

#import <Foundation/Foundation.h>


@interface LAUIRenderLoop : NSObject {
    CADisplayLink *_display_link;
    BOOL _has_high_fps_reason;
    BOOL _background;
    BOOL _delegate_observes_effective_paused;
    BOOL _delegate_observes_runnable;
}


@property (weak, nonatomic) NSObject<LAUIRenderLoopDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic, getter=isDrawing) BOOL drawing; // ivar: _drawing
@property (readonly, nonatomic, getter=effectiveIsPaused) BOOL effectivePaused; // ivar: _effective_paused
@property (nonatomic) unsigned int highFrameRateReason; // ivar: _high_fps_reason
@property (nonatomic, getter=isInApplicationContext) BOOL inApplicationContext; // ivar: _in_application_context
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated; // ivar: _invalidated
@property (nonatomic, getter=isPaused) BOOL paused; // ivar: _paused
@property (nonatomic) CAFrameRateRange preferredFrameRateRange; // ivar: _preferred_fps_range
@property (readonly, nonatomic, getter=isRunnable) BOOL runnable; // ivar: _runnable
@property (readonly, weak, nonatomic) UIScreen *screen; // ivar: _screen


-(BOOL)_isForcingPause;
-(BOOL)attachToScreen:(id)arg0 ;
-(id)init;
-(void)_applicationDidBecomeActive:(id)arg0 ;
-(void)_applicationDidEnterBackground:(id)arg0 ;
-(void)_applicationWillEnterForeground:(id)arg0 ;
-(void)_didDraw;
-(void)_didInvalidate;
-(void)_willDraw;
-(void)dealloc;
-(void)invalidate;


@end


#endif
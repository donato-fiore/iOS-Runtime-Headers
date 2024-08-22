// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LAUIRENDERLOOP_H
#define LAUIRENDERLOOP_H

@class CADisplayLink;
@protocol LAUIRenderLoopDelegate;

#import <Foundation/Foundation.h>


@interface LAUIRenderLoop : NSObject {
    CADisplayLink *_display_link;
    BOOL _effective_paused;
    BOOL _background;
}


@property (weak, nonatomic) NSObject<LAUIRenderLoopDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic, getter=isDrawing) BOOL drawing; // ivar: _drawing
@property (nonatomic, getter=isInApplicationContext) BOOL inApplicationContext; // ivar: _in_application_context
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated; // ivar: _invalidated
@property (nonatomic, getter=isPaused) BOOL paused; // ivar: _paused
@property (nonatomic) NSInteger preferredFramesPerSecond; // ivar: _preferred_fps


-(BOOL)_preferredPauseState;
-(id)init;
-(void)_applicationDidBecomeActive:(id)arg0 ;
-(void)_applicationDidEnterBackground:(id)arg0 ;
-(void)_applicationWillEnterForeground:(id)arg0 ;
-(void)_didDraw;
-(void)_didInvalidate;
-(void)_drawAtTime:(CGFloat)arg0 ;
-(void)_drawWithDisplayLink:(id)arg0 ;
-(void)_updateEffectivePausedState;
-(void)_willDraw;
-(void)attachToScreen:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif
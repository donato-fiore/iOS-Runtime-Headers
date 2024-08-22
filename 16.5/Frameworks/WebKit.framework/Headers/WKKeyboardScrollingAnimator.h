// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKKEYBOARDSCROLLINGANIMATOR_H
#define WKKEYBOARDSCROLLINGANIMATOR_H

@protocol WKKeyboardScrollableInternal;

#import <Foundation/Foundation.h>


@interface WKKeyboardScrollingAnimator : NSObject {
    id<WKKeyboardScrollableInternal> *_scrollable;
    RetainPtr<CADisplayLink> _displayLink;
    optional<WebCore::KeyboardScroll> _currentScroll;
    BOOL _scrollTriggeringKeyIsPressed;
    FloatSize _velocity;
    FloatPoint _idealPosition;
    FloatPoint _currentPosition;
    FloatPoint _idealPositionForMinimumTravel;
}




-(BOOL)beginWithEvent:(id)arg0 ;
-(BOOL)scrollTriggeringKeyIsPressed;
-(id)init;
-(id)initWithScrollable:(id)arg0 ;
-(struct optional<WebCore::KeyboardScroll> )keyboardScrollForEvent:(id)arg0 ;
-(void)displayLinkFired:(id)arg0 ;
-(void)handleKeyEvent:(id)arg0 ;
-(void)invalidate;
-(void)startDisplayLinkIfNeeded;
-(void)stopAnimatedScroll;
-(void)stopDisplayLink;
-(void)willStartInteractiveScroll;


@end


#endif
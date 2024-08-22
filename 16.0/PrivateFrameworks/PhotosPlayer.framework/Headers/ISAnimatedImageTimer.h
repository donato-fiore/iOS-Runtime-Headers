// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ISANIMATEDIMAGETIMER_H
#define ISANIMATEDIMAGETIMER_H

@class CADisplayLink;


#import "ISObservable.h"
#import "_ISAnimatedImageTimerForwardingProxy.h"

@interface ISAnimatedImageTimer : ISObservable {
    CADisplayLink *_displayLink;
    _ISAnimatedImageTimerForwardingProxy *_displayLinkProxy;
}


@property (nonatomic, setter=_setTimestamp:) CGFloat timestamp; // ivar: _timestamp


+(id)sharedTimer;
-(id)init;
-(id)mutableChangeObject;
-(void)_fireTimerWithInterval:(CGFloat)arg0 ;
-(void)_iosAnimationTimerFired:(id)arg0 ;
-(void)_iosDealloc;
-(void)_iosInitialization;
-(void)_iosUpdateDisplayLink;
-(void)_updateDisplayLink;
-(void)dealloc;
-(void)hasObserversDidChange;


@end


#endif
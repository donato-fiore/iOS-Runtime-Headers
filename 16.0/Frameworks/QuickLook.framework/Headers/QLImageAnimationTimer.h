// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLIMAGEANIMATIONTIMER_H
#define QLIMAGEANIMATIONTIMER_H

@class CADisplayLink, NSMutableSet;

#import <Foundation/Foundation.h>


@interface QLImageAnimationTimer : NSObject

@property (retain, nonatomic) CADisplayLink *displayLink; // ivar: _displayLink
@property (retain, nonatomic) NSMutableSet *observers; // ivar: _observers


+(id)sharedTimer;
-(id)init;
-(void)addAnimationTimerObserver:(id)arg0 ;
-(void)animationTimerFired:(id)arg0 ;
-(void)removeAnimationTimerObserver:(id)arg0 ;


@end


#endif
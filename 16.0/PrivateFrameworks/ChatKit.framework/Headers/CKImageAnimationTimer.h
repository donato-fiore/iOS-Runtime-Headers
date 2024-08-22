// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKIMAGEANIMATIONTIMER_H
#define CKIMAGEANIMATIONTIMER_H

@class CADisplayLink, NSMutableSet, NSDate;

#import <Foundation/Foundation.h>


@interface CKImageAnimationTimer : NSObject

@property (retain, nonatomic) CADisplayLink *displayLink; // ivar: _displayLink
@property (nonatomic) NSUInteger frame; // ivar: _frame
@property (retain, nonatomic) NSMutableSet *observers; // ivar: _observers
@property (nonatomic) BOOL shouldStopWhenBackgrounded; // ivar: _shouldStopWhenBackgrounded
@property (retain, nonatomic) NSDate *startTime; // ivar: _startTime


+(id)sharedTimer;
-(id)init;
-(void)addAnimationTimerObserver:(id)arg0 ;
-(void)animationTimerFired;
-(void)dealloc;
-(void)removeAnimationTimerObserver:(id)arg0 ;
-(void)updateDisplayLink;


@end


#endif
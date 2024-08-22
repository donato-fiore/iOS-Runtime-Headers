// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISANIMATEDIMAGEPLAYER_H
#define ISANIMATEDIMAGEPLAYER_H

@class NSHashTable, PFAnimatedImage, NSString;
@protocol ISChangeObserver;

#import <Foundation/Foundation.h>

#import "ISAnimatedImageTimer.h"

@interface ISAnimatedImagePlayer : NSObject <ISChangeObserver>

 {
    NSHashTable *_weakDestinations;
    PFAnimatedImage *_image;
    ISAnimatedImageTimer *_timer;
    *CGImage _currentImage;
    BOOL _hasStartedAnimating;
    BOOL _hasFinishedAnimating;
    CGFloat _timeAccumulator;
    CGFloat _previousFrameTime;
    BOOL _infiniteLoop;
    NSUInteger _remainingLoopCount;
}


@property (nonatomic) BOOL allowFrameDrops; // ivar: _allowFrameDrops
@property (readonly, nonatomic) PFAnimatedImage *animatedImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger displayedFrameIndex; // ivar: _displayedFrameIndex
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isPlaying) BOOL playing; // ivar: _playing
@property (readonly) Class superclass;


-(BOOL)_anyDestinationIsReady;
-(BOOL)_shouldAnimate;
-(id)initWithAnimatedImage:(id)arg0 ;
-(struct CGImage *)currentImage;
-(void)_notifyDestinationsOfAnimationEnd;
-(void)_notifyDestinationsOfAnimationStart;
-(void)_notifyDestinationsOfFrameChange;
-(void)_resetAnimationState;
-(void)_seekToBeginning;
-(void)_setCurrentFrame:(struct CGImage *)arg0 ;
-(void)animationTimerFired:(CGFloat)arg0 ;
-(void)dealloc;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)registerDestination:(id)arg0 ;
-(void)unregisterDestination:(id)arg0 ;
-(void)updateAnimation;


@end


#endif
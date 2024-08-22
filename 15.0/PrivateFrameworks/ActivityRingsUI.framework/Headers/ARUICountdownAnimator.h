// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARUICOUNTDOWNANIMATOR_H
#define ARUICOUNTDOWNANIMATOR_H

@protocol ARUICountdownAnimation, ARUICountdownAnimatorDelegate;

#import <Foundation/Foundation.h>

#import "ARUICountdownView.h"
#import "ARUICountdownTimeline.h"

@interface ARUICountdownAnimator : NSObject {
    ? _delegateFlags;
    BOOL _animating;
    BOOL _canceled;
    id<ARUICountdownAnimation> *_currentAnimation;
}


@property (weak, nonatomic) ARUICountdownView *countdownView; // ivar: _countdownView
@property (weak, nonatomic) NSObject<ARUICountdownAnimatorDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) ARUICountdownTimeline *timeline; // ivar: _timeline


-(BOOL)canceled;
-(BOOL)isAnimating;
-(id)initWithTimeline:(id)arg0 ;
-(void)_applyAnimationAtIndex:(NSUInteger)arg0 ;
-(void)_applyCancelAnimationAtIndex:(NSUInteger)arg0 ;
-(void)_delegate_completedAnimation:(id)arg0 ;
-(void)_delegate_performingAnimation:(id)arg0 withDuration:(CGFloat)arg1 ;
-(void)_delegate_willBeginAnimation:(id)arg0 afterDelay:(CGFloat)arg1 ;
-(void)beginAnimations;
-(void)cancelAnimations;
-(void)prepareToAnimate;


@end


#endif
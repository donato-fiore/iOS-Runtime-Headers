// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TVPLAYBACKFADEANIMATOR_H
#define _TVPLAYBACKFADEANIMATOR_H

@class NSString;
@protocol UIViewControllerAnimatedTransitioning;

#import <Foundation/Foundation.h>


@interface _TVPlaybackFadeAnimator : NSObject <UIViewControllerAnimatedTransitioning>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldAnimateHalfwayThenPopIn; // ivar: _shouldAnimateHalfwayThenPopIn
@property (readonly) Class superclass;
@property (nonatomic) CGFloat transitionDuration; // ivar: _transitionDuration
@property (nonatomic) BOOL usesCustomEasing; // ivar: _usesCustomEasing


-(CGFloat)transitionDuration:(id)arg0 ;
-(id)init;
-(void)_beginFadeAnimationFromViewController:(id)arg0 toViewController:(id)arg1 containerView:(id)arg2 completion:(id)arg3 ;
-(void)animateTransition:(id)arg0 ;


@end


#endif
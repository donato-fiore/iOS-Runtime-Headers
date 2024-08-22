// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TVNAVIGATIONCROSSFADEANIMATOR_H
#define _TVNAVIGATIONCROSSFADEANIMATOR_H

@class NSString;
@protocol UIViewControllerAnimatedTransitioning;

#import <Foundation/Foundation.h>


@interface _TVNavigationCrossfadeAnimator : NSObject <UIViewControllerAnimatedTransitioning>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL fadeOutFromView; // ivar: _fadeOutFromView
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)_beginCrossfadeAnimationFromView:(id)arg0 toView:(id)arg1 containerView:(id)arg2 delay:(CGFloat)arg3 fadeOutFromView:(BOOL)arg4 removeFromView:(BOOL)arg5 completion:(id)arg6 ;
-(CGFloat)transitionDuration:(id)arg0 ;
-(void)_beginCrossfadeAnimationFromViewController:(id)arg0 toViewController:(id)arg1 containerView:(id)arg2 completion:(id)arg3 ;
-(void)animateTransition:(id)arg0 ;


@end


#endif
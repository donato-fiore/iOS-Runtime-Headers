// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBFEDITINGZOOMUPANIMATIONCONTROLLER_H
#define PBFEDITINGZOOMUPANIMATIONCONTROLLER_H

@class NSString, UIView;
@protocol PREditingSceneViewControllerObserver, UIViewControllerAnimatedTransitioning, UIViewControllerContextTransitioning;


#import "PBFEditingZoomAnimationController.h"

@interface PBFEditingZoomUpAnimationController : PBFEditingZoomAnimationController <PREditingSceneViewControllerObserver, UIViewControllerAnimatedTransitioning>



@property (nonatomic, getter=isAnimationFinished) BOOL animationFinished; // ivar: _animationFinished
@property (nonatomic, getter=isContentReady) BOOL contentReady; // ivar: _contentReady
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIView *dimmingView; // ivar: _dimmingView
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<UIViewControllerContextTransitioning> *transitionContext; // ivar: _transitionContext
@property (retain, nonatomic) UIView *zoomingView; // ivar: _zoomingView


-(CGFloat)transitionDuration:(id)arg0 ;
-(void)animateTransition:(id)arg0 ;
-(void)editingSceneViewControllerDidFinishShowingContent:(id)arg0 ;
-(void)finishTransitionIfPossible;


@end


#endif
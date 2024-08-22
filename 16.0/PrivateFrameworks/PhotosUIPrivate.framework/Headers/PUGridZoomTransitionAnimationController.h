// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUGRIDZOOMTRANSITIONANIMATIONCONTROLLER_H
#define PUGRIDZOOMTRANSITIONANIMATIONCONTROLLER_H

@class UICollectionViewControllerLayoutToLayoutTransition;
@protocol UIViewControllerContextTransitioning;


#import "PUZoomableGridTransition.h"

@interface PUGridZoomTransitionAnimationController : UICollectionViewControllerLayoutToLayoutTransition {
    id<UIViewControllerContextTransitioning> *_transitionContext;
}


@property (readonly, nonatomic) PUZoomableGridTransition *gridTransitionInfo;


-(CGFloat)transitionDuration:(id)arg0 ;
-(void)animateTransition:(id)arg0 ;
-(void)animationEnded:(BOOL)arg0 ;


@end


#endif
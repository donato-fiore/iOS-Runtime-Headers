// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBFEDITINGZOOMDOWNANIMATIONCONTROLLER_H
#define PBFEDITINGZOOMDOWNANIMATIONCONTROLLER_H

@class NSString;
@protocol UIViewControllerAnimatedTransitioning;


#import "PBFEditingZoomAnimationController.h"

@interface PBFEditingZoomDownAnimationController : PBFEditingZoomAnimationController <UIViewControllerAnimatedTransitioning>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)transitionDuration:(id)arg0 ;
-(void)animateTransition:(id)arg0 ;


@end


#endif
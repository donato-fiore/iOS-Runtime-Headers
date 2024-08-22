// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUCAMERASTREAMFULLSCREENDISMISSINGANIMATOR_H
#define HUCAMERASTREAMFULLSCREENDISMISSINGANIMATOR_H

@class UIView, NSString;
@protocol UIViewControllerAnimatedTransitioning;


#import "HUCameraStreamFullScreenAnimator.h"

@interface HUCameraStreamFullScreenDismissingAnimator : HUCameraStreamFullScreenAnimator <UIViewControllerAnimatedTransitioning>



@property (readonly, nonatomic) UIView *cameraOverlaySnapshot; // ivar: _cameraOverlaySnapshot
@property (readonly, nonatomic) UIView *cameraViewSnapshot; // ivar: _cameraViewSnapshot
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)transitionDuration:(id)arg0 ;
-(id)initWithSourceCameraCell:(id)arg0 cameraViewSnapshot:(id)arg1 cameraOverlaySnapshot:(id)arg2 ;
-(void)animateTransition:(id)arg0 ;


@end


#endif
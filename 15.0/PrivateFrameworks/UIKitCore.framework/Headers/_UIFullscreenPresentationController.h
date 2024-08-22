// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIFULLSCREENPRESENTATIONCONTROLLER_H
#define _UIFULLSCREENPRESENTATIONCONTROLLER_H

@class UICurrentContextPresentationController;


#import "UIView.h"

@interface _UIFullscreenPresentationController : UICurrentContextPresentationController {
    UIView *_counterRotatedView;
    CGFloat _counterRotatedAngle;
    CGRect _counterRotatedOriginalBounds;
    NSInteger _originalOrientation;
    BOOL _presentingViewControllerHandledCounterRotation;
    id *finalRotationBlock;
}




-(BOOL)_inheritsPresentingViewControllerThemeLevel;
-(BOOL)_invokesDelegatesOnOrientationChange;
-(BOOL)_shouldRespectDefinesPresentationContext;
-(BOOL)shouldPresentInFullscreen;
-(NSInteger)presentationStyle;
-(struct CGRect )frameOfPresentedViewInContainerView;
-(void)_adjustOrientationIfNecessaryInWindow:(id)arg0 forViewController:(id)arg1 preservingViewController:(id)arg2 ;
-(void)_placeCounterRotationViewWithView:(id)arg0 inWindow:(id)arg1 fromOrientation:(NSInteger)arg2 toOrientation:(NSInteger)arg3 force:(BOOL)arg4 ;
-(void)_removeCounterRotation;
-(void)_setPresentedViewController:(id)arg0 ;
-(void)dealloc;
-(void)dismissalTransitionDidEnd:(BOOL)arg0 ;
-(void)presentationTransitionDidEnd:(BOOL)arg0 ;


@end


#endif
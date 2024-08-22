// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UINAVIGATIONCONTROLLERVISUALSTYLEWATCHOS_H
#define _UINAVIGATIONCONTROLLERVISUALSTYLEWATCHOS_H

@class UINavigationControllerVisualStyle;
@protocol UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning;



@interface _UINavigationControllerVisualStyleWatchOS : UINavigationControllerVisualStyle {
    id<UIViewControllerAnimatedTransitioning> *_transitionController;
    id<UIViewControllerInteractiveTransitioning> *_interactionController;
}




-(BOOL)isUsingParallaxTransition;
-(id)interactionController;
-(id)transitionController;
-(void)setInteractionController:(id)arg0 ;
-(void)setTransitionController:(id)arg0 ;


@end


#endif
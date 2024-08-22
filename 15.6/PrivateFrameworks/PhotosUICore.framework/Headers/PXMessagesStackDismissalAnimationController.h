// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXMESSAGESSTACKDISMISSALANIMATIONCONTROLLER_H
#define PXMESSAGESSTACKDISMISSALANIMATIONCONTROLLER_H

@class UIViewPropertyAnimator, NSString, UIViewController;
@protocol PXPhotosGridEdgeSwipeInteractiveDismissalDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning;

#import <Foundation/Foundation.h>

#import "PXPhotosGridStackTransitionHelper.h"
#import "PXMessagesStackView.h"

@interface PXMessagesStackDismissalAnimationController : NSObject <PXPhotosGridEdgeSwipeInteractiveDismissalDelegate, UIViewControllerAnimatedTransitioning>

 {
    CGFloat _transitionDuration;
    PXPhotosGridStackTransitionHelper *_transitionHelper;
    UIViewPropertyAnimator *_propertyAnimator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIViewController *dismissingViewController; // ivar: _dismissingViewController
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<UIViewControllerInteractiveTransitioning> *interactionController;
@property (readonly, nonatomic) PXMessagesStackView *stackView; // ivar: _stackView
@property (readonly) Class superclass;


-(CGFloat)transitionDuration:(id)arg0 ;
-(id)initWithStackView:(id)arg0 dismissingViewController:(id)arg1 ;
-(id)interruptibleAnimatorForTransition:(id)arg0 ;
-(void)animateTransition:(id)arg0 ;
-(void)runTransitionAnimation:(id)arg0 ;


@end


#endif
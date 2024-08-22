// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXMESSAGESSTACKPRESENTATIONANIMATIONCONTROLLER_H
#define PXMESSAGESSTACKPRESENTATIONANIMATIONCONTROLLER_H

@class UIViewPropertyAnimator, NSString;
@protocol UIViewControllerAnimatedTransitioning;

#import <Foundation/Foundation.h>

#import "PXPhotosGridStackTransitionHelper.h"
#import "PXMessagesStackView.h"

@interface PXMessagesStackPresentationAnimationController : NSObject <UIViewControllerAnimatedTransitioning>

 {
    CGFloat _transitionDuration;
    PXPhotosGridStackTransitionHelper *_transitionHelper;
    UIViewPropertyAnimator *_propertyAnimator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXMessagesStackView *stackView; // ivar: _stackView
@property (readonly) Class superclass;


-(CGFloat)transitionDuration:(id)arg0 ;
-(id)initWithStackView:(id)arg0 ;
-(id)interruptibleAnimatorForTransition:(id)arg0 ;
-(void)animateTransition:(id)arg0 ;


@end


#endif
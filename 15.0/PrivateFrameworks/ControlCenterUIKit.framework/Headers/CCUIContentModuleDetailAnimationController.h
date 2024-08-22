// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CCUICONTENTMODULEDETAILANIMATIONCONTROLLER_H
#define CCUICONTENTMODULEDETAILANIMATIONCONTROLLER_H

@class UIViewController, NSString, UIViewPropertyAnimator;
@protocol UIViewControllerAnimatedTransitioning;

#import <Foundation/Foundation.h>


@interface CCUIContentModuleDetailAnimationController : NSObject <UIViewControllerAnimatedTransitioning>

 {
    UIViewController *_anchoringViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isPresenting) BOOL presenting; // ivar: _presenting
@property (readonly, nonatomic) UIViewPropertyAnimator *propertyAnimator; // ivar: _propertyAnimator
@property (readonly) Class superclass;


-(CGFloat)transitionDuration:(id)arg0 ;
-(id)_contentModuleContainingViewController;
-(id)_newPropertyAnimator;
-(id)initForPresenting:(BOOL)arg0 anchoringViewController:(id)arg1 ;
-(void)animateTransition:(id)arg0 ;
-(void)animationEnded:(BOOL)arg0 ;
-(void)performTransition:(id)arg0 ;


@end


#endif
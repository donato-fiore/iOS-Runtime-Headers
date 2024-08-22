// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PRXPULLDISMISSALINTERACTIONDRIVER_H
#define PRXPULLDISMISSALINTERACTIONDRIVER_H

@class NSString, UIViewController;
@protocol UIScrollViewDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning;

#import <Foundation/Foundation.h>

#import "PRXPurelyInteractiveTransition.h"
#import "PRXPullDismissalScrollView.h"

@interface PRXPullDismissalInteractionDriver : NSObject <UIScrollViewDelegate>

 {
    PRXPurelyInteractiveTransition *_interactiveTransition;
}


@property (readonly, nonatomic) NSObject<UIViewControllerAnimatedTransitioning> *animationController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<UIViewControllerInteractiveTransitioning> *interactionController;
@property (readonly, weak, nonatomic) UIViewController *presentedViewController; // ivar: _presentedViewController
@property (readonly, weak, nonatomic) PRXPullDismissalScrollView *scrollView; // ivar: _scrollView
@property (readonly) Class superclass;


-(id)initWithPresentedViewController:(id)arg0 scrollView:(id)arg1 ;
-(void)_finishPullToDismiss;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;


@end


#endif
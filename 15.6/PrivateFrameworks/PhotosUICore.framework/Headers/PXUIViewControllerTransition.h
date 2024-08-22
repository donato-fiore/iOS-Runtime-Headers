// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXUIVIEWCONTROLLERTRANSITION_H
#define PXUIVIEWCONTROLLERTRANSITION_H

@class UIViewController, NSString, UIPercentDrivenInteractiveTransition;
@protocol UIViewControllerAnimatedTransitioning;

#import <Foundation/Foundation.h>

#import "PXRegionOfInterest.h"

@interface PXUIViewControllerTransition : NSObject <UIViewControllerAnimatedTransitioning>

 {
    UIViewController *_internalMasterViewController;
    UIViewController *_internalDetailViewController;
    id *_transitionAnimationStartHandler;
    id *_transitionAnimationCompletionHandler;
}


@property (retain, nonatomic, setter=_setPauseToken:) id *_pauseToken; // ivar: __pauseToken
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) UIViewController *detailViewController;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIPercentDrivenInteractiveTransition *interactionController; // ivar: _interactionController
@property (readonly, nonatomic, getter=isInteractive) BOOL interactive; // ivar: _interactive
@property (retain, nonatomic) PXRegionOfInterest *masterRegionOfInterest; // ivar: _masterRegionOfInterest
@property (readonly, weak, nonatomic) UIViewController *masterViewController;
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsEdgeSwipeBackGesture; // ivar: _supportsEdgeSwipeBackGesture
@property (readonly, nonatomic) NSInteger transitionIdentifier;
@property (nonatomic, getter=isTransitioningToDetail) BOOL transitioningToDetail; // ivar: _transitioningToDetail


+(BOOL)isTransitionSupportedWithMasterViewController:(id)arg0 detailViewController:(id)arg1 ;
-(CGFloat)transitionDuration:(id)arg0 ;
-(NSInteger)transitionIdentifierForTransitionMode:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithMasterViewController:(id)arg0 detailViewController:(id)arg1 ;
-(void)animateTransition:(id)arg0 ;
-(void)didEndTransition;
-(void)installTransitionAnimationCompletionHandler:(id)arg0 ;
-(void)installTransitionAnimationStartHandler:(id)arg0 ;
-(void)willEndTransition;
-(void)willStartTransition;


@end


#endif
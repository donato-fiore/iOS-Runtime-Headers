// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLTRANSITIONCONTROLLER_H
#define QLTRANSITIONCONTROLLER_H

@class UIView, UINavigationController, UIViewController<QLCustomTransitioning>, NSString, UIViewController, NSDate;
@protocol UIViewControllerAnimatedTransitioning, QLTransitionControllerProtocol, UIViewControllerContextTransitioning;

#import <Foundation/Foundation.h>

#import "QLPreviewController.h"
#import "QLTransitionContext.h"

@interface QLTransitionController : NSObject <UIViewControllerAnimatedTransitioning, QLTransitionControllerProtocol>

 {
    UIView *_transitionBackgroundView;
    UINavigationController *_disabledNavigationController;
    id *_startTransitionBlock;
}


@property (readonly) UIViewController<QLCustomTransitioning> *animatedController; // ivar: _animatedController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property CGFloat duration; // ivar: _duration
@property (nonatomic) BOOL hasPerformedTransition; // ivar: _hasPerformedTransition
@property (readonly) NSUInteger hash;
@property (readonly) UIViewController *presenterViewController;
@property (readonly) QLPreviewController *previewController;
@property (retain) QLTransitionContext *quickLookTransitionContext; // ivar: _quickLookTransitionContext
@property (retain, nonatomic) NSDate *setupDate; // ivar: _setupDate
@property BOOL showing; // ivar: _showing
@property (readonly) Class superclass;
@property (weak) NSObject<UIViewControllerContextTransitioning> *transitionContext; // ivar: _transitionContext
@property (readonly) id *transitionDriver; // ivar: _transitionDriver
@property NSUInteger transitionState; // ivar: _transitionState


-(BOOL)forceDismissalIfNeeded;
-(CGFloat)transitionDuration:(id)arg0 ;
-(struct ? )_requiredVisualStateTransitions;
-(void)_completeBackgroundTransition:(BOOL)arg0 ;
-(void)_completeOverlayTransition:(BOOL)arg0 ;
-(void)_performForcedDismissal;
-(void)_performStartBlockIfNeeded;
-(void)_performTransition;
-(void)_prepareTimedForcedDismissal;
-(void)_updateBackgroundTransitionWithProgress:(CGFloat)arg0 ;
-(void)_updateOverlayTransitionWithProgress:(CGFloat)arg0 ;
-(void)_view:(id)arg0 applyFrameFromTransitionContextAsFinalFrame:(BOOL)arg1 isToView:(BOOL)arg2 ;
-(void)animateTransition:(id)arg0 ;
-(void)completeTransition:(BOOL)arg0 ;
-(void)completeTransition:(BOOL)arg0 withDuration:(CGFloat)arg1 ;
-(void)setUpWithTransitionContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)tearDownTransition:(BOOL)arg0 ;
-(void)updateTransitionWithProgress:(CGFloat)arg0 ;


@end


#endif
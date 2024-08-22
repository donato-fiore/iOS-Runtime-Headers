// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYVIEWCONTROLLERTRANSITION_H
#define PXSTORYVIEWCONTROLLERTRANSITION_H

@class NSString, UIViewController, NSArray, UIView, UIPercentDrivenInteractiveTransition;
@protocol UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, PXStoryMutableViewControllerTransition, PXStoryViewControllerTransitionEndPoint, UIViewControllerContextTransitioning;


#import "PXObservable.h"
#import "_PXStoryTransitionEndPointInfo.h"
#import "PXStoryItemPlacement.h"
#import "PXDisplayLink.h"
#import "PXStoryViewControllerItemPlacementInterpolator.h"

@interface PXStoryViewControllerTransition : PXObservable <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, PXStoryMutableViewControllerTransition>



@property (copy, nonatomic) id *animationUpdateBlock; // ivar: _animationUpdateBlock
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<PXStoryViewControllerTransitionEndPoint> *detailEndPoint; // ivar: _detailEndPoint
@property (readonly, nonatomic) _PXStoryTransitionEndPointInfo *detailEndPointInfo;
@property (readonly, nonatomic) PXStoryItemPlacement *detailItemOriginalPlacement; // ivar: _detailItemOriginalPlacement
@property (copy, nonatomic) PXStoryItemPlacement *detailItemPlacementOverride; // ivar: _detailItemPlacementOverride
@property (readonly, nonatomic) UIViewController *detailViewController; // ivar: _detailViewController
@property (retain, nonatomic) PXDisplayLink *displayLink; // ivar: _displayLink
@property (copy, nonatomic) NSArray *endPointInfos; // ivar: _endPointInfos
@property (nonatomic) CGFloat fractionCompleted; // ivar: fractionCompleted
@property (retain, nonatomic) UIView *fromContentView; // ivar: _fromContentView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIPercentDrivenInteractiveTransition *interactiveTransition; // ivar: _interactiveTransition
@property (nonatomic) BOOL isEnding; // ivar: _isEnding
@property (nonatomic) BOOL isInteractive; // ivar: _isInteractive
@property (readonly, nonatomic) BOOL isVerticalOnly; // ivar: _isVerticalOnly
@property (retain, nonatomic) PXStoryViewControllerItemPlacementInterpolator *itemPlacementInterpolator; // ivar: _itemPlacementInterpolator
@property (readonly, weak, nonatomic) UIViewController *presentedViewController; // ivar: _presentedViewController
@property (weak, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (readonly, nonatomic) NSObject<PXStoryViewControllerTransitionEndPoint> *summaryEndPoint; // ivar: _summaryEndPoint
@property (readonly, nonatomic) _PXStoryTransitionEndPointInfo *summaryEndPointInfo;
@property (readonly, nonatomic) PXStoryItemPlacement *summaryItemOriginalPlacement; // ivar: _summaryItemOriginalPlacement
@property (copy, nonatomic) PXStoryItemPlacement *summaryItemPlacementOverride; // ivar: _summaryItemPlacementOverride
@property (readonly, nonatomic) UIViewController *summaryViewController; // ivar: _summaryViewController
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *toContentView; // ivar: _toContentView
@property (retain, nonatomic) NSObject<UIViewControllerContextTransitioning> *transitionContext; // ivar: _transitionContext
@property (nonatomic) CGFloat transitionDuration; // ivar: _transitionDuration
@property (nonatomic) NSInteger transitionKind; // ivar: _transitionKind


+(id)_createTransitionWithSummaryViewController:(id)arg0 presentedViewController:(id)arg1 detailViewController:(id)arg2 ;
+(id)_transitionWithDetailViewController:(id)arg0 createIfNeeded:(BOOL)arg1 verticalOnly:(BOOL)arg2 ;
+(id)interactiveDismissalOfDetailViewController:(id)arg0 ;
+(id)transitionWithDetailViewController:(id)arg0 ;
+(void)prepareDismissalOfDetailViewController:(id)arg0 ;
+(void)prepareTransitionFromSummaryViewController:(id)arg0 toPresentedViewController:(id)arg1 detailViewController:(id)arg2 ;
-(BOOL)_isContentViewControllerHidden:(id)arg0 ;
-(BOOL)_isTransitionAllowedWithKind:(NSInteger)arg0 ;
-(CGFloat)transitionDuration:(id)arg0 ;
-(id)_initWithSummaryViewController:(id)arg0 presentedViewController:(id)arg1 detailViewController:(id)arg2 ;
-(id)_transitionViewControllerForContentViewController:(id)arg0 ;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)init;
-(id)interactionControllerForDismissal:(id)arg0 ;
-(id)interactionControllerForPresentation:(id)arg0 ;
-(struct CGRect )_rectInContainerViewFromRect:(struct CGRect )arg0 inCoordinateSpace:(id)arg1 inContentViewController:(id)arg2 ;
-(void)_endTransitionAnimation:(BOOL)arg0 ;
-(void)_handleDisplayLink:(id)arg0 ;
// -(void)_prepareTransitionAnimationWithReadinessHandler:(id)arg0 completionHandler:(unk)arg1  ;
-(void)_transitionDidEnd:(BOOL)arg0 ;
-(void)_transitionDidUpdateWithTransitionTime:(CGFloat)arg0 ;
-(void)_transitionWillBegin;
-(void)_willDismissWithoutTransition;
-(void)animateTransition:(id)arg0 ;
-(void)cancel;
-(void)finish;
-(void)installCompletionHandler:(id)arg0 ;
-(void)performChanges:(id)arg0 ;


@end


#endif
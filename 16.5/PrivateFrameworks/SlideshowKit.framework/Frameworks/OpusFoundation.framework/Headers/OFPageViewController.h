// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OFPAGEVIEWCONTROLLER_H
#define OFPAGEVIEWCONTROLLER_H

@class UIPanGestureRecognizer, UITapGestureRecognizer, NSDictionary, NSString;
@protocol UIGestureRecognizerDelegate, OFPageViewControllerDataSource, OFPageViewControllerDelegate;


#import "OFUIViewController.h"
#import "_OFViewControllerTransitionContext.h"

@interface OFPageViewController : OFUIViewController <UIGestureRecognizerDelegate>

 {
    _OFViewControllerTransitionContext *_currentTransitionContext;
    CGFloat _progressOffset;
    BOOL _isInteractive;
    BOOL _isForward;
    BOOL _chainsNextTransition;
    CGFloat _progressVelocityForChainedTransition;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIEdgeInsets _tapRegionInsets;
    CGSize _tapRegionBreadths;
    UIEdgeInsets _effectiveTapRegionInsets;
    CGSize _effectiveTapRegionBreadths;
    *CGRect _tapRegions;
    CGFloat _pageSpacing;
    NSDictionary *_incomingAndOutgoingViewControllersForManualTransition;
    NSInteger _lastKnownNavigationDirection;
    ? _flags;
}


@property (nonatomic) BOOL bouncesOnEdges; // ivar: _bouncesOnEdges
@property (nonatomic) NSObject<OFPageViewControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<OFPageViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat interactiveTransitionProgressThreshold; // ivar: _interactiveTransitionProgressThreshold
@property (nonatomic) CGFloat interactiveTransitionTrackingBoxRadius; // ivar: _interactiveTransitionTrackingBoxRadius
@property (nonatomic) CGFloat interactiveTransitionVelocityThreshold; // ivar: _interactiveTransitionVelocityThreshold
@property (nonatomic) NSInteger navigationOrientation; // ivar: _navigationOrientation
@property (nonatomic) BOOL panIsEnabled; // ivar: _panIsEnabled
@property (readonly) Class superclass;
@property (readonly) OFUIViewController *viewController; // ivar: _viewController
@property (nonatomic) BOOL wantsPageControl; // ivar: _wantsPageControl


+(Class)viewClass;
-(BOOL)_shouldFinishTransitionWithVelocity:(CGFloat)arg0 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)usesPageControl;
-(CGFloat)_normalizerForBoxTracking;
-(CGFloat)_normalizerForFingerTracking;
-(CGFloat)_progressFromRubberBandingProgress:(CGFloat)arg0 ;
-(CGFloat)_rubberBandingProgressFromProgress:(CGFloat)arg0 ;
-(id)_contentView;
-(id)_customAnimationControllerForDirection:(NSInteger)arg0 fromViewController:(id)arg1 toViewController:(id)arg2 ;
-(id)_customInteractionControllerForAnimationController:(id)arg0 ;
-(id)_pageControl;
-(id)_transitionContextForDirection:(NSInteger)arg0 fromViewController:(id)arg1 toViewController:(id)arg2 ;
-(void)_beginTransitionWithContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)_cancelInteractiveTransitionWithProgressVelocity:(CGFloat)arg0 ;
-(void)_contentViewFrameOrBoundsDidChange;
-(void)_fakeHandlePanGesture;
-(void)_finishInteractiveTransitionWithProgress:(CGFloat)arg0 andProgressVelocity:(CGFloat)arg1 ;
-(void)_handlePanGesture:(id)arg0 ;
-(void)_handleTapGesture:(id)arg0 ;
-(void)_pageControlValueChanged:(id)arg0 ;
-(void)_resumeInteractiveTransitionWithTranslation:(CGFloat)arg0 ;
-(void)_startInteractiveTransitionWithVelocity:(CGFloat)arg0 ;
-(void)_startTransition;
-(void)_updateInteractiveTransitionForProgress:(CGFloat)arg0 ;
-(void)_updatePageControlViaDataSourceIfNecessary;
-(void)bounceInDirection:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)commonInit;
-(void)dealloc;
-(void)loadView;
-(void)reportTransitionProgress:(CGFloat)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIPAGEVIEWCONTROLLER_H
#define UIPAGEVIEWCONTROLLER_H

@class NSMutableArray, NSMutableDictionary, NSHashTable, NSDictionary, NSArray, NSString;
@protocol UIGestureRecognizerDelegate, _UIQueuingScrollViewDelegate, _UIQueuingScrollViewDataSource, UIPageViewControllerDelegate, UIPageViewControllerDataSource;


#import "UIViewController.h"
#import "_UIPageCurl.h"
#import "UIPanGestureRecognizer.h"
#import "UITapGestureRecognizer.h"
#import "_UIPageViewControllerContentView.h"
#import "_UIQueuingScrollView.h"

@interface UIPageViewController : UIViewController <UIGestureRecognizerDelegate, _UIQueuingScrollViewDelegate, _UIQueuingScrollViewDataSource>

 {
    id<UIPageViewControllerDelegate> *_delegate;
    id<UIPageViewControllerDataSource> *_dataSource;
    NSInteger _transitionStyle;
    NSInteger _navigationOrientation;
    NSInteger _spineLocation;
    BOOL _doubleSided;
    BOOL _pageControlRequiresValidation;
    _UIPageCurl *_pageCurl;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    BOOL _stashingViewControllersForRotation;
    NSMutableArray *_rotationSnapshotViews;
    NSInteger _spineLocationPriorToInterfaceRotation;
    UIEdgeInsets _tapRegionInsets;
    CGSize _tapRegionBreadths;
    UIEdgeInsets _effectiveTapRegionInsets;
    CGSize _effectiveTapRegionBreadths;
    *CGRect _tapRegions;
    CGFloat _pageSpacing;
    NSMutableDictionary *_cachedViewControllersForCurl;
    NSHashTable *_cachedViewControllersForScroll;
    NSDictionary *_incomingAndOutgoingViewControllersForManualTransition;
    NSInteger _lastKnownNavigationDirection;
    NSInteger _disableAutorotationCount;
    ? _delegateFlags;
    id<UIPageViewControllerDataSource> *_unsafeUnretainedDataSource;
    id<UIPageViewControllerDelegate> *_unsafeUnretainedDelegate;
}


@property (readonly, nonatomic) _UIPageViewControllerContentView *_contentView;
@property (readonly, nonatomic, getter=_isInterfaceRotating) BOOL _interfaceRotating; // ivar: _interfaceRotating
@property (readonly, nonatomic) NSInteger _navigationOrientation;
@property (readonly, nonatomic, getter=_isPageControlVisible) BOOL _pageControlVisible;
@property (nonatomic, setter=_setPageSpacing:) CGFloat _pageSpacing;
@property (readonly, nonatomic) _UIQueuingScrollView *_scrollView;
@property (readonly, nonatomic) NSInteger _transitionStyle;
@property (retain, nonatomic, setter=_setViewControllers:) NSArray *_viewControllers; // ivar: _viewControllers
@property (retain, nonatomic, setter=_setViewControllersStashedForRotation:) NSArray *_viewControllersStashedForRotation; // ivar: _viewControllersStashedForRotation
@property (weak, nonatomic) NSObject<UIPageViewControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UIPageViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDoubleSided) BOOL doubleSided;
@property (readonly, nonatomic) NSArray *gestureRecognizers;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger navigationOrientation;
@property (readonly, nonatomic) NSInteger spineLocation;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger transitionStyle;
@property (readonly, nonatomic) NSArray *viewControllers;


+(BOOL)_isNavigationOrientation:(NSInteger)arg0 supportedForTransitionStyle:(NSInteger)arg1 ;
+(BOOL)_isSpineLocation:(NSInteger)arg0 supportedForTransitionStyle:(NSInteger)arg1 ;
+(BOOL)_isSupportedTransitionStyle:(NSInteger)arg0 ;
+(BOOL)doesOverridePreferredInterfaceOrientationForPresentation;
+(id)_incomingViewControllerKeys;
+(id)_outgoingViewControllerKeys;
+(id)stringForSpineLocation:(NSInteger)arg0 ;
-(BOOL)_canHandleGestures;
-(BOOL)_child:(id)arg0 canBeginAppearanceTransition:(BOOL)arg1 ;
-(BOOL)_childCanEndAppearanceTransition:(id)arg0 ;
-(BOOL)_gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)_hasPreferredInterfaceOrientationForPresentation;
-(BOOL)_isCurrentViewControllerStateValid;
-(BOOL)_shouldBeginNavigationInDirection:(*NSInteger)arg0 inResponseToPanGestureRecognizer:(id)arg1 ;
-(BOOL)_shouldCompleteManualCurlWithSuggestedVelocity:(*CGFloat)arg0 ;
-(BOOL)_shouldFlipInRightToLeft;
-(BOOL)_shouldNavigateInDirection:(*NSInteger)arg0 inResponseToTapGestureRecognizer:(id)arg1 ;
-(BOOL)_shouldNavigateInDirection:(*NSInteger)arg0 inResponseToVelocity:(*CGFloat)arg1 ofGestureRecognizedByPanGestureRecognizer:(id)arg2 ;
-(BOOL)_shouldPersistViewWhenCoding;
-(BOOL)queuingScrollViewShouldLayoutSubviews:(id)arg0 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(NSInteger)_navigationEndDirectionInResponseToPanGestureRecognizer:(id)arg0 suggestedVelocity:(*CGFloat)arg1 ;
-(NSInteger)_requestSpineLocationForInterfaceOrientationAndUpdateStashedViewControllers:(NSInteger)arg0 ;
-(NSInteger)preferredInterfaceOrientationForPresentation;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_deepestActionResponder;
-(id)_incomingViewControllersForGestureDrivenCurlInDirection:(NSInteger)arg0 ;
-(id)_pageControl;
-(id)_queuingScrollView:(id)arg0 viewBefore:(BOOL)arg1 view:(id)arg2 ;
-(id)_validatedViewControllersForPresentationOfViewControllers:(id)arg0 validRange:(struct _NSRange )arg1 ;
-(id)_validatedViewControllersForTransitionWithViewControllers:(id)arg0 animated:(BOOL)arg1 ;
-(id)_viewControllerAfterViewController:(id)arg0 ;
-(id)_viewControllerBefore:(BOOL)arg0 viewController:(id)arg1 ;
-(id)_viewControllerBeforeViewController:(id)arg0 ;
-(id)_viewControllersForCurlWithViewControllers:(id)arg0 direction:(NSInteger)arg1 ;
-(id)_viewControllersForPendingSpineLocation:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithTransitionStyle:(NSInteger)arg0 navigationOrientation:(NSInteger)arg1 options:(id)arg2 ;
-(id)preferredFocusedView;
-(id)queuingScrollView:(id)arg0 viewAfterView:(id)arg1 ;
-(id)queuingScrollView:(id)arg0 viewBeforeView:(id)arg1 ;
-(struct CGRect )_disabledScrollingRegion;
-(struct CGRect *)_tapRegions;
-(struct CGSize )_contentSizeForSize:(struct CGSize )arg0 ;
-(struct CGSize )_effectiveTapRegionBreadths;
-(struct CGSize )_tapRegionBreadths;
-(struct UIEdgeInsets )_edgeInsetsForChildViewController:(id)arg0 insetsAreAbsolute:(*BOOL)arg1 ;
-(struct UIEdgeInsets )_effectiveTapRegionInsets;
-(struct UIEdgeInsets )_tapRegionInsets;
-(struct _NSRange )_validRangeForPresentationOfViewControllersWithSpineLocation:(NSInteger)arg0 ;
-(void)_beginDisablingInterfaceAutorotation;
-(void)_cacheViewControllerForScroll:(id)arg0 ;
-(void)_child:(id)arg0 beginAppearanceTransition:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_child:(id)arg0 beginAppearanceTransitionIfPossible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_child:(id)arg0 didRotateFromInterfaceOrientation:(NSInteger)arg1 ;
-(void)_child:(id)arg0 endAppearanceTransitionIfPossible:(BOOL)arg1 ;
-(void)_child:(id)arg0 willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(CGFloat)arg2 ;
-(void)_child:(id)arg0 willRotateToInterfaceOrientation:(NSInteger)arg1 duration:(CGFloat)arg2 ;
-(void)_childEndAppearanceTransition:(id)arg0 ;
-(void)_endDisablingInterfaceAutorotation;
-(void)_flushViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)_handlePagingInDirection:(NSInteger)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_handlePanGesture:(id)arg0 ;
-(void)_handleTapGesture:(id)arg0 ;
-(void)_invalidateEffectiveTapRegions;
-(void)_invalidatePageCurl;
-(void)_invalidateViewControllersStashedForCurlFromDataSource;
-(void)_marginInfoForChild:(id)arg0 leftMargin:(*CGFloat)arg1 rightMargin:(*CGFloat)arg2 ;
-(void)_pageControlValueChanged:(id)arg0 ;
-(void)_populateIncomingViewControllersInMap:(id)arg0 withViewControllers:(id)arg1 forCurlInDirection:(NSInteger)arg2 ;
-(void)_populateOutgoingViewControllersInMap:(id)arg0 ;
-(void)_sendChildViewWill:(BOOL)arg0 appear:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setDisabledScrollingRegion:(struct CGRect )arg0 ;
-(void)_setTapRegionBreadths:(struct CGSize )arg0 ;
-(void)_setTapRegionInsets:(struct UIEdgeInsets )arg0 ;
-(void)_updatePageControlViaDataSourceIfNecessary;
-(void)dealloc;
-(void)didRotateFromInterfaceOrientation:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)loadView;
-(void)queuingScrollView:(id)arg0 attemptToPageInDirection:(NSInteger)arg1 ;
-(void)queuingScrollView:(id)arg0 didBailoutOfScrollAndRevealedView:(id)arg1 ;
-(void)queuingScrollView:(id)arg0 didCommitManualScroll:(BOOL)arg1 toRevealView:(id)arg2 concealView:(id)arg3 direction:(NSInteger)arg4 animated:(BOOL)arg5 canComplete:(BOOL)arg6 ;
-(void)queuingScrollView:(id)arg0 didEndManualScroll:(BOOL)arg1 toRevealView:(id)arg2 direction:(NSInteger)arg3 animated:(BOOL)arg4 didFinish:(BOOL)arg5 didComplete:(BOOL)arg6 ;
-(void)queuingScrollView:(id)arg0 didFlushView:(id)arg1 animated:(BOOL)arg2 ;
-(void)queuingScrollView:(id)arg0 willManuallyScroll:(BOOL)arg1 toRevealView:(id)arg2 concealView:(id)arg3 animated:(BOOL)arg4 ;
-(void)queuingScrollViewDidFinishScrolling:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillUnload;
-(void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)willRotateToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;


@end


#endif
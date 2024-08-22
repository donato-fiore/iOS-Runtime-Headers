// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKSTACKINGVIEWCONTROLLER_H
#define MKSTACKINGVIEWCONTROLLER_H

@class UIViewController, NSLayoutConstraint, NSMapTable, NSArray, NSHashTable, UIView, NSString, UIScrollView;
@protocol _MKStackViewDelegate, _MKAnimationStackViewDelegate, MKScrollableStacking, UIScrollViewDelegate, MKStackingViewControllerDelegate;


#import "_MKStackView.h"
#import "_MKStackingContentView.h"

@interface MKStackingViewController : UIViewController <_MKStackViewDelegate, _MKAnimationStackViewDelegate, MKScrollableStacking, UIScrollViewDelegate>

 {
    _MKStackView *_stackView;
    _MKStackingContentView *_contentView;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_stackViewWidthConstraint;
    BOOL _isScrollDisabled;
    NSUInteger _countOfCurrentLayoutInvocations;
    NSMapTable *_viewControllersToPreferredHeightConstraints;
    NSMapTable *_viewsToViewControllers;
    NSArray *_titleViewConstraints;
    BOOL _willRelayoutForPreferredContentSizeChange;
    BOOL _isSettingStackedViews;
    BOOL _contentViewConstraintsAdded;
    NSHashTable *_minimallyVisibleViews;
    BOOL _needsToPerformLayout;
    UIView *_overlayView;
    CGFloat _overlayViewOriginY;
    BOOL _mayWantSpearators;
    BOOL _needToCallViewControllerLayoutDelegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isScrollEnabled) BOOL scrollEnabled;
@property (readonly, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (weak, nonatomic) NSObject<MKStackingViewControllerDelegate> *stackingDelegate; // ivar: _stackingDelegate
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *viewControllers; // ivar: _viewControllers


-(BOOL)_isSafeToPerformLayout;
-(BOOL)isViewVisbile:(id)arg0 percentageTreshold:(CGFloat)arg1 ;
-(CGFloat)_fittingHeightForView:(id)arg0 ;
-(CGFloat)_titleHeight;
-(CGFloat)currentHeight;
-(CGFloat)stackView:(id)arg0 distanceBetweenUpperView:(id)arg1 andLowerView:(id)arg2 ;
-(void)_addPreferredHeightConstraintForViewControllerIfNeeded:(id)arg0 ;
-(void)_callViewControllersLayoutDelegateIfNeeded;
-(void)_didScroll;
-(void)_removePreferredHeightConstraintFromViewController:(id)arg0 ;
-(void)_sendScrollnotification;
-(void)_setOverlayViewFrame;
-(void)_setPreferredHeight:(CGFloat)arg0 forViewController:(id)arg1 ;
-(void)_setUpEnteringViewController:(id)arg0 ;
-(void)_tearDownExitingViewController:(id)arg0 ;
-(void)_updateFixedHeightAwareControllers;
-(void)_updateStackViewSubviewsAndChildVCsEntering:(id)arg0 exiting:(id)arg1 ;
-(void)_updateViewControllerVisibilityAfterPositionChange;
-(void)dealloc;
-(void)loadView;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)removeOverlayViewAnimated:(BOOL)arg0 ;
-(void)scrollToTopAnimated:(BOOL)arg0 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)setOverlayView:(id)arg0 withOriginY:(CGFloat)arg1 ;
-(void)setWidthConstraintConstant:(CGFloat)arg0 ;
-(void)stackViewNeedsLayout:(id)arg0 ;
-(void)updateViewConstraints;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHOMESCREENOVERLAYVIEWCONTROLLER_H
#define SBHOMESCREENOVERLAYVIEWCONTROLLER_H

@class UIViewController, NSCountedSet, MTMaterialView, NSLayoutConstraint, SBHRootSidebarController, NSString, SBTitledHomeScreenButton, SBFTodayGestureSettings, UIViewController<SBHVisibleContentPresenter>, UIViewFloatAnimatableProperty, SBHRootFolderVisualConfiguration;
@protocol WGWidgetGroupViewControllerDelegate, SBHLibraryViewControllerPresenter, SBHWidgetSheetViewControllerPresenter, SBHVisibleContentPresenter, SBHomeScreenOverlayViewControllerDelegate, SBIconListLayoutProvider;



@interface SBHomeScreenOverlayViewController : UIViewController <WGWidgetGroupViewControllerDelegate, SBHLibraryViewControllerPresenter, SBHWidgetSheetViewControllerPresenter, SBHVisibleContentPresenter>

 {
    NSCountedSet *_reasonsToSnapshotBackgroundView;
    NSUInteger _defaultAnimationCount;
    NSUInteger _fadingAnimationCount;
    CGSize _boundsSizeForConstraints;
}


@property (readonly, nonatomic) MTMaterialView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) NSLayoutConstraint *contentLeadingConstraint; // ivar: _contentLeadingConstraint
@property (readonly, nonatomic) CGRect contentRect;
@property (readonly, nonatomic) SBHRootSidebarController *contentViewController; // ivar: _contentViewController
@property (nonatomic) NSUInteger contentVisibility; // ivar: _contentVisibility
@property (readonly, nonatomic) CGFloat contentWidth;
@property (retain, nonatomic) NSLayoutConstraint *contentWidthConstraint; // ivar: _contentWidthConstraint
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBHomeScreenOverlayViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SBTitledHomeScreenButton *doneButton; // ivar: _doneButton
@property (nonatomic, getter=isFromLeading) BOOL fromLeading; // ivar: _fromLeading
@property (retain, nonatomic) SBFTodayGestureSettings *gestureSettings; // ivar: _gestureSettings
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isHeaderVisible) BOOL headerVisible;
@property (readonly, nonatomic) CGFloat layerPresentationProgress;
@property (retain, nonatomic) UIViewController<SBHVisibleContentPresenter> *leadingSidebarViewController; // ivar: _leadingSidebarViewController
@property (readonly, nonatomic, getter=isLibraryPresentationModal) BOOL libraryPresentationModal;
@property (readonly, nonatomic) NSObject<SBIconListLayoutProvider> *listLayoutProvider; // ivar: _listLayoutProvider
@property (retain, nonatomic) UIViewFloatAnimatableProperty *overlayPresentationFloatAnimatableProperty; // ivar: _overlayPresentationFloatAnimatableProperty
@property (nonatomic) CGFloat presentationProgress; // ivar: _presentationProgress
@property (readonly, nonatomic) SBHRootFolderVisualConfiguration *rootFolderVisualConfiguration; // ivar: _rootFolderVisualConfiguration
@property (nonatomic) BOOL shouldUseReducedMotionAnimation; // ivar: _shouldUseReducedMotionAnimation
@property (nonatomic) BOOL showsAddWidgetButton; // ivar: _showsAddWidgetButton
@property (nonatomic) BOOL showsDoneButton; // ivar: _showsDoneButton
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressesExtraEditingButtons; // ivar: _suppressesExtraEditingButtons
@property (nonatomic) CGFloat titledButtonsAlpha; // ivar: _titledButtonsAlpha
@property (retain, nonatomic) UIViewController<SBHVisibleContentPresenter> *trailingSidebarViewController; // ivar: _trailingSidebarViewController
@property (nonatomic, getter=isTransitioningPresentationProgress) BOOL transitioningPresentationProgress; // ivar: _transitioningPresentationProgress
@property (retain, nonatomic) SBTitledHomeScreenButton *widgetButton; // ivar: _widgetButton


-(BOOL)_canShowWhileLocked;
-(BOOL)bs_beginAppearanceTransition:(BOOL)arg0 animated:(BOOL)arg1 ;
-(BOOL)bs_endAppearanceTransition;
-(BOOL)bs_endAppearanceTransition:(BOOL)arg0 ;
-(BOOL)isDisplayingEditingButtons;
-(BOOL)isPresentingLibraryInMostForegroundState:(id)arg0 ;
-(CGFloat)contentWidthWithContainerWidth:(CGFloat)arg0 ;
-(NSUInteger)childContentVisibility;
-(NSUInteger)presenterType;
-(id)acquireUseSnapshotAsBackgroundViewAssertionForReason:(id)arg0 ;
-(id)currentSidebarViewController;
-(id)initWithListLayoutProvider:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)makeTitledButtonOfClass:(Class)arg0 ;
-(id)newHomeScreenButtonBackgroundView;
-(struct CGSize )_suggestedTodayViewSizeForBounds:(struct CGRect )arg0 ;
-(struct CGSize )widgetGroupViewController:(id)arg0 sizeForInterfaceOrientation:(NSInteger)arg1 ;
-(void)_button:(id)arg0 appearAnimated:(BOOL)arg1 ;
-(void)_button:(id)arg0 disappearAnimated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_configureMatchMoveAnimationForBackgroundView:(id)arg0 withSourceView:(id)arg1 ;
-(void)_updateBackgroundView;
-(void)_updateConstraintsForPresentationProgress:(CGFloat)arg0 ;
-(void)_updateConstraintsForPresentationProgress:(CGFloat)arg0 layoutIfNeeded:(BOOL)arg1 ;
-(void)_updateLayoutForEditButtonsWithSize:(struct CGSize )arg0 ;
-(void)animatePresentationProgress:(CGFloat)arg0 withGestureLiftOffVelocity:(CGFloat)arg1 completionHandler:(id)arg2 ;
-(void)doneButtonTriggered:(id)arg0 ;
-(void)loadView;
-(void)setSuppressesEditingStateForListView:(BOOL)arg0 ;
-(void)updateExtraButtonVisibilityAnimated:(BOOL)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)widgetButtonTriggered:(id)arg0 ;


@end


#endif
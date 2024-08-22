// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WGWIDGETLISTVIEWCONTROLLER_H
#define WGWIDGETLISTVIEWCONTROLLER_H

@class UIViewController, MTMaterialView, NSMutableDictionary, UIScrollView, UIStackView, NSString, UIControl, NSArray, NSLayoutConstraint;
@protocol WGWidgetDebugging, UIScrollViewDelegate, WGWidgetDiscoveryObserving, WGWidgetHostingViewControllerDelegate, WGWidgetListItemViewControllerDelegate, WGWidgetExtensionVisibilityProviding, WGWidgetListViewControllerDelegatePrivate, WGWidgetListViewControllerDelegate;


#import "WGWidgetDiscoveryController.h"

@interface WGWidgetListViewController : UIViewController <WGWidgetDebugging, UIScrollViewDelegate, WGWidgetDiscoveryObserving, WGWidgetHostingViewControllerDelegate, WGWidgetListItemViewControllerDelegate, WGWidgetExtensionVisibilityProviding>

 {
    WGWidgetDiscoveryController *_discoveryController;
    MTMaterialView *_captureOnlyMaterialView;
    NSMutableDictionary *_userInterfaceStylesToCaptureOnlyMaterialViews;
    UIScrollView *_scrollView;
    UIStackView *_stackView;
    NSMutableDictionary *_cancelTouchesAssertionsByWidgetID;
    NSMutableDictionary *_widgetIDsToItemVCs;
    CGSize _maxVisibleContentSize;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WGWidgetListViewControllerDelegatePrivate> *delegate;
@property (weak, nonatomic) NSObject<WGWidgetListViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIControl *editButton; // ivar: _editButton
@property (nonatomic, getter=isEditingIcons) BOOL editingIcons; // ivar: _editingIcons
@property (readonly, nonatomic, getter=_group) NSString *group;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, getter=_previouslyVisibleWidgetIDs, setter=_setPreviouslyVisibleWidgetIDs:) NSArray *previouslyVisibleWidgetIDs; // ivar: _previouslyVisibleWidgetIDs
@property (retain, nonatomic) NSMutableDictionary *resizeContexts; // ivar: _resizeContexts
@property (nonatomic) BOOL shouldBlurContent; // ivar: _shouldBlurContent
@property (nonatomic) BOOL shouldIncludeScrollView; // ivar: _shouldIncludeScrollView
@property (readonly, nonatomic) NSLayoutConstraint *stackViewBottomConstraint; // ivar: _stackViewBottomConstraint
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger widgetCount;
@property (readonly, nonatomic) UIScrollView *widgetListView;


-(BOOL)isWidgetExtensionVisible:(id)arg0 ;
-(BOOL)managingContainerIsVisibleForWidget:(id)arg0 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg0 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(NSUInteger)_insertionIndexofListItem:(id)arg0 intoWidgetViews:(id)arg1 withOrderedIdentifiers:(id)arg2 ;
-(id)_animatablePropertiesForStackViewUpdate;
-(id)_beginInsertion:(SEL)arg0 ofListItem:(BOOL)arg1 withOrderedIdentifiers:(id)arg2 removingViewIfPossible:(id)arg3 ;
-(id)_identifierForCell:(id)arg0 ;
-(id)_insert:(SEL)arg0 listItem:(BOOL)arg1 withOrderedIdentifiers:(id)arg2 animated:(id)arg3 ;
-(id)_listItemViewControllerForWidgetWithIdentifier:(id)arg0 creatingIfNecessary:(BOOL)arg1 ;
-(id)_newCaptureOnlyMaterialView;
-(id)_platterViewAtLocation:(struct CGPoint )arg0 ;
-(id)_platterViewForWidgetWithIdentifier:(id)arg0 creatingIfNecessary:(BOOL)arg1 ;
-(id)_scrollViewIfLoaded;
-(id)_scrollViewLoadingIfNecessary:(BOOL)arg0 ;
-(id)_widgetIdentifiersForPlatterViewsVisibleInBounds;
-(id)_wrapperViewForWidgetPlatterView:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithWidgetDiscoveryController:(id)arg0 ;
-(id)visibleWidgetIdentifiers;
-(id)widgetListItemViewController:(id)arg0 widgetHostWithIdentifier:(id)arg1 ;
-(struct CGRect )_visibleContentFrameForBounds:(struct CGRect )arg0 withContentOccludingInsets:(struct UIEdgeInsets )arg1 ;
-(struct CGRect )visibleFrameForWidget:(id)arg0 ;
-(struct CGSize )_maxVisibleContentSize;
-(struct CGSize )maxSizeForWidget:(id)arg0 forDisplayMode:(NSInteger)arg1 ;
-(struct CGSize )sizeForChildContentContainer:(id)arg0 withParentContainerSize:(struct CGSize )arg1 ;
-(struct UIEdgeInsets )layoutMarginForWidget:(id)arg0 ;
-(struct UIEdgeInsets )marginInsetsForWidget:(id)arg0 ;
-(void)_adjustContentOffsetToInsideContent:(BOOL)arg0 ;
-(void)_cancelTouchesForHitWidgetIfNecessaryAndDisableTouchesOnAllWidgets;
-(void)_cancelTouchesForWidget:(id)arg0 ;
-(void)_configureAlternateCaptureOnlyMaterialViewWithUserInterfaceStyle:(NSInteger)arg0 ;
-(void)_configureCaptureOnlyMaterialView;
-(void)_configureScrollView;
-(void)_configureStackView;
-(void)_createPropertiesForStackViewUpdate;
-(void)_didUpdateStackViewArrangedSubviews;
-(void)_disableTouchesOnAllWidgets;
-(void)_enableTouchesOnAllWidgets;
-(void)_invalidateAllAlternateCaptureOnlyMaterialViews;
-(void)_invalidateAllCancelTouchesAssertions;
-(void)_invalidateAlternateCaptureOnlyMaterialViewWithUserInterfaceStyle:(NSInteger)arg0 ;
// -(void)_invokeBlock:(id)arg0 withPlatterViewsPassingTest:(unk)arg1  ;
-(void)_invokeBlockWithAllPlatterViews:(id)arg0 ;
-(void)_invokeBlockWithPlatterViewsVisibleInBounds:(id)arg0 ;
-(void)_invokeBlockWithPlatterViewsVisibleInRect:(struct CGRect )arg0 block:(id)arg1 ;
-(void)_presentEditViewController;
-(void)_pruneAlternateCaptureOnlyMaterialViews;
-(void)_repopulateStackView;
-(void)_repopulateStackViewWithWidgetIdentifiers:(id)arg0 ;
-(void)_resizeCell:(id)arg0 ;
-(void)_scrollViewDidStop;
-(void)_stackViewArrangedSubviewsTransformPresentationValueChanged;
-(void)_updateBackgroundViewForPlatter:(id)arg0 ;
-(void)_updateWidgetViewStateWithPreviouslyVisibleWidgetIdentifiers:(id)arg0 ;
-(void)brokenViewDidAppearForWidget:(id)arg0 ;
-(void)dealloc;
-(void)makeVisibleWidgetWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)registerWidgetForRefreshEvents:(id)arg0 ;
-(void)remoteViewControllerDidDisconnectForWidget:(id)arg0 ;
-(void)remoteViewControllerViewDidAppearForWidget:(id)arg0 ;
-(void)remoteViewControllerViewDidHideForWidget:(id)arg0 ;
-(void)resizeWidgetWrapperView:(id)arg0 toSize:(struct CGSize )arg1 withTransitionContext:(id)arg2 completion:(id)arg3 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewDidScrollToTop:(id)arg0 ;
-(void)scrollViewWillBeginDecelerating:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)unregisterWidgetForRefreshEvents:(id)arg0 ;
-(void)updatePreviouslyVisibleWidgetIDs;
-(void)updateWidgetViewState;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)widget:(id)arg0 didChangeLargestSupportedDisplayMode:(NSInteger)arg1 ;
-(void)widgetDiscoveryController:(id)arg0 orderDidChangeForWidgetIdentifiers:(id)arg1 ;
-(void)widgetDiscoveryControllerSignificantWidgetsChange:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISEARCHBARVISUALPROVIDERLEGACY_H
#define _UISEARCHBARVISUALPROVIDERLEGACY_H

@class UISearchBarVisualProviderBase, NSString, NSArray;
@protocol _UINavigationBarTitleViewDataSource;


#import "_UISearchBarAppearanceStorage.h"
#import "UIBarButtonItem.h"
#import "UINavigationItem.h"
#import "UISearchBarTextField.h"
#import "UISearchBarBackground.h"
#import "_UIBackdropView.h"
#import "UIVisualEffectView.h"
#import "UIView.h"
#import "UIButton.h"
#import "UINavigationButton.h"
#import "UILabel.h"
#import "UIImageView.h"
#import "UISegmentedControl.h"
#import "_UISearchBarScopeBarBackground.h"
#import "UIColor.h"
#import "_UINavigationBarTitleViewOverlayRects.h"

@interface _UISearchBarVisualProviderLegacy : UISearchBarVisualProviderBase {
    UIEdgeInsets _effectiveContentInset;
    _UISearchBarAppearanceStorage *_appearanceStorage;
    UIBarButtonItem *_animatedAppearanceBarButtonItem;
    UINavigationItem *_searchNavigationItem;
    id *_searchDisplayController;
    ? _searchBarVisualProviderFlags;
    UISearchBarTextField *_searchField;
    UISearchBarBackground *_searchBarBackground;
    _UIBackdropView *_backdrop;
    UIVisualEffectView *_backdropVisualEffectView;
    UIView *_searchBarClippingView;
    UIButton *_cancelButton;
    UIBarButtonItem *_cancelBarButtonItem;
    NSString *_cancelButtonText;
    UINavigationButton *_leftButton;
    UILabel *_promptLabel;
    UIImageView *_separator;
    UISegmentedControl *_scopeBar;
    UIView *_scopeBarContainerView;
    _UISearchBarScopeBarBackground *_scopeBarBackgroundView;
    NSArray *_scopeTitles;
    NSInteger _selectedScope;
    NSUInteger _backdropStyle;
    UIColor *_barTintColor;
    NSInteger _barPosition;
    NSUInteger _scopeBarPosition;
    CGFloat _tableViewIndexWidth;
    NSInteger _navBarTitleViewLocation;
    _UINavigationBarTitleViewOverlayRects *_navBarTitleViewOverlayRects;
    id<_UINavigationBarTitleViewDataSource> *_navBarTitleViewDataSource;
    UIImageView *_shadowView;
    UIEdgeInsets _minimumContentInsetPrivate;
}




-(BOOL)_getNavigationTitleLeadingInset:(*CGFloat)arg0 trailingInset:(*CGFloat)arg1 isRTL:(BOOL)arg2 ;
-(BOOL)allowsInlineScopeBar;
-(BOOL)alwaysUsesLayoutMarginsForHorizontalContentInset;
-(BOOL)autoDisableCancelButton;
-(BOOL)backgroundLayoutNeedsUpdate;
-(BOOL)cancelButtonWantsLetterpress;
-(BOOL)centerPlaceholder;
-(BOOL)containsScopeBar;
-(BOOL)drawsBackground;
-(BOOL)drawsBackgroundInPalette;
-(BOOL)hasDarkUIAppearance;
-(BOOL)isAtTop;
-(BOOL)isEnabled;
-(BOOL)isFrozenForDismissalCrossfade;
-(BOOL)isHostedByNavigationBar;
-(BOOL)isInBarButNotHosted;
-(BOOL)isInNavigationPalette;
-(BOOL)isLegacy;
-(BOOL)isPlacedInNavigationBar;
-(BOOL)isPlacedInToolbar;
-(BOOL)isSearchResultsButtonSelected;
-(BOOL)isTranslucent;
-(BOOL)reliesOnNavigationBarBackdrop;
-(BOOL)scopeBarIsVisible;
-(BOOL)searchFieldWidthShouldBeFlexible;
-(BOOL)shouldCombineLandscapeBarsForOrientation:(NSInteger)arg0 ;
-(BOOL)shouldDisplayShadow;
-(BOOL)showsBookmarkButton;
-(BOOL)showsCancelButton;
-(BOOL)showsScopeBar;
-(BOOL)showsSearchResultsButton;
-(BOOL)useRelaxedScopeLayout;
-(BOOL)usesEmbeddedAppearance;
-(BOOL)wantsDictationButton;
-(BOOL)wouldCombineLandscapeBarsForSize:(struct CGSize )arg0 ;
-(CGFloat)_defaultWidth;
-(CGFloat)availableBoundsWidth;
-(CGFloat)availableBoundsWidthForSize:(struct CGSize )arg0 ;
-(CGFloat)barHeightForBarMetrics:(NSInteger)arg0 ;
-(CGFloat)barHeightForBarMetrics:(NSInteger)arg0 barPosition:(NSInteger)arg1 ;
-(CGFloat)barHeightForBarMetrics:(NSInteger)arg0 withEffectiveInsets:(struct UIEdgeInsets )arg1 ;
-(CGFloat)defaultHeight;
-(CGFloat)defaultHeightForOrientation:(NSInteger)arg0 ;
-(CGFloat)landscapeScopeBarWidth;
-(CGFloat)landscapeSearchFieldWidth;
-(CGFloat)navigationBarContentHeight;
-(CGFloat)scopeBarHeight;
-(CGFloat)searchFieldHeight;
-(CGFloat)tableViewIndexWidth;
-(NSInteger)barMetricsForOrientation:(NSInteger)arg0 ;
-(NSInteger)barPosition;
-(NSInteger)barStyle;
-(NSInteger)barTranslucence;
-(NSInteger)navBarTitleViewLocation;
-(NSInteger)searchFieldLeftViewMode;
-(NSInteger)selectedScope;
-(NSUInteger)backdropStyle;
-(NSUInteger)scopeBarPosition;
-(NSUInteger)searchBarStyle;
-(id)animatedAppearanceBarButtonItem;
-(id)backdrop;
-(id)backdropVisualEffectView;
-(id)backgroundImageForBarPosition:(NSInteger)arg0 barMetrics:(NSInteger)arg1 ;
-(id)barTintColor;
-(id)cancelBarButtonItem;
-(id)cancelButton;
-(id)cancelButtonText;
-(id)colorForComponent:(NSUInteger)arg0 disabled:(BOOL)arg1 ;
-(id)currentSeparatorImage;
-(id)effectiveBarTintColor;
-(id)imageForSearchBarIcon:(NSInteger)arg0 state:(NSUInteger)arg1 ;
-(id)internalImageForSearchBarIcon:(NSInteger)arg0 state:(NSUInteger)arg1 ;
-(id)internalImageForSearchBarIcon:(NSInteger)arg0 state:(NSUInteger)arg1 customImage:(*BOOL)arg2 ;
-(id)leftButton;
-(id)makeShadowView;
-(id)navBarTitleViewDataSource;
-(id)navBarTitleViewOverlayRects;
-(id)navigationBarForShadow;
-(id)prompt;
-(id)promptLabel;
-(id)runtimeOnlyViews;
-(id)scopeBar;
-(id)scopeBarBackgroundImage;
-(id)scopeBarBackgroundView;
-(id)scopeBarContainerView;
-(id)scopeTitles;
-(id)searchBarBackground;
-(id)searchBarClippingView;
-(id)searchDisplayController;
-(id)searchField;
-(id)searchFieldBackgroundImageForState:(NSUInteger)arg0 ;
-(id)searchFieldIfExists;
-(id)searchNavigationItem;
-(id)separator;
-(id)separatorImage;
-(id)shadowView;
-(id)textColor;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )effectiveContentInset;
-(struct UIEdgeInsets )minimumContentInset;
-(struct UIEdgeInsets )scopeBarInsets;
-(struct UIOffset )searchFieldBackgroundPositionAdjustment;
-(void)_removeBackdropVisualEffectView;
-(void)_removeLegacyBackdropView;
-(void)_setAutoDisableCancelButton:(BOOL)arg0 ;
-(void)_setBarStyle:(NSInteger)arg0 ;
-(void)_setBarTintColor:(id)arg0 ;
-(void)_setBarTranslucence:(NSInteger)arg0 ;
-(void)_setHideBackground:(BOOL)arg0 ;
-(void)_setSearchResultsButtonSelected:(BOOL)arg0 ;
-(void)_setShowsBookmarkButton:(BOOL)arg0 ;
-(void)_setShowsCancelButton:(BOOL)arg0 ;
-(void)_setShowsScopeBar:(BOOL)arg0 ;
-(void)_setShowsSearchResultsButton:(BOOL)arg0 ;
-(void)allowCursorToAppear:(BOOL)arg0 ;
-(void)applySearchBarStyle;
-(void)destroyCancelButton;
-(void)destroyPromptLabel;
-(void)displayNavBarCancelButton:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)effectiveBarTintColorDidChange:(BOOL)arg0 ;
-(void)getOverrideContentInsets:(struct UIEdgeInsets *)arg0 overriddenEdges:(*NSUInteger)arg1 ;
-(void)getScopeBarHeight:(*CGFloat)arg0 containerHeight:(*CGFloat)arg1 ;
-(void)getTopInset:(*CGFloat)arg0 bottomInset:(*CGFloat)arg1 forBarMetrics:(NSInteger)arg2 barPosition:(NSInteger)arg3 ;
-(void)layoutBackgroundViewConsideringTopBarStatusAndChangedHeight:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)layoutSubviewsInBounds:(struct CGRect )arg0 ;
-(void)navigationBarTransitionCompleted:(NSInteger)arg0 willBeDisplayed:(BOOL)arg1 ;
-(void)navigationBarTransitionWillBegin:(NSInteger)arg0 willBeDisplayed:(BOOL)arg1 ;
-(void)prepare;
-(void)prepareFromAbandonedVisualProvider:(id)arg0 ;
-(void)setAllowsInlineScopeBar:(BOOL)arg0 ;
-(void)setAutoDisableCancelButton:(BOOL)arg0 ;
-(void)setBackdrop:(id)arg0 ;
-(void)setBackdropStyle:(NSUInteger)arg0 ;
-(void)setBackdropVisualEffectView:(id)arg0 ;
-(void)setBackgroundImage:(id)arg0 forBarPosition:(NSInteger)arg1 barMetrics:(NSInteger)arg2 ;
-(void)setBackgroundLayoutNeedsUpdate;
-(void)setBarPosition:(NSInteger)arg0 ;
-(void)setBarStyle:(NSInteger)arg0 ;
-(void)setBarTintColor:(id)arg0 ;
-(void)setBarTintColor:(id)arg0 forceUpdate:(BOOL)arg1 ;
-(void)setBarTranslucence:(NSInteger)arg0 ;
-(void)setCancelButton:(id)arg0 ;
-(void)setCancelButtonText:(id)arg0 ;
-(void)setCancelButtonWantsLetterpress:(BOOL)arg0 ;
-(void)setCenterPlaceholder:(BOOL)arg0 ;
-(void)setClippingViewActive:(BOOL)arg0 ;
-(void)setClippingViewBounds:(struct CGRect )arg0 ;
-(void)setDisableDictationButton:(BOOL)arg0 ;
-(void)setDrawsBackground:(BOOL)arg0 ;
-(void)setDrawsBackgroundInPalette:(BOOL)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setEnabled:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setHelperPlaceholder:(id)arg0 ;
-(void)setHelperPlaceholderHidden:(BOOL)arg0 ;
-(void)setHelperPlaceholderOverride:(id)arg0 ;
-(void)setHostedByNavigationBar:(BOOL)arg0 ;
-(void)setImage:(id)arg0 forSearchBarIcon:(NSInteger)arg1 state:(NSUInteger)arg2 ;
-(void)setInNavigationPalette:(BOOL)arg0 ;
-(void)setMinimumContentInset:(struct UIEdgeInsets )arg0 ;
-(void)setNavBarTitleViewDataSource:(id)arg0 ;
-(void)setNavBarTitleViewLocation:(NSInteger)arg0 ;
-(void)setNavBarTitleViewOverlayRects:(id)arg0 ;
-(void)setOverrideContentInsets:(struct UIEdgeInsets )arg0 forRectEdges:(NSUInteger)arg1 ;
-(void)setPlacedInNavigationBar:(BOOL)arg0 ;
-(void)setPlacedInToolbar:(BOOL)arg0 ;
-(void)setPrompt:(id)arg0 ;
-(void)setPromptLabel:(id)arg0 ;
-(void)setReliesOnNavigationBarBackdrop:(BOOL)arg0 ;
-(void)setScopeBar:(id)arg0 ;
-(void)setScopeBarBackgroundImage:(id)arg0 ;
-(void)setScopeBarBackgroundView:(id)arg0 ;
-(void)setScopeBarPosition:(NSUInteger)arg0 ;
-(void)setScopeTitles:(id)arg0 ;
-(void)setSearchBarBackground:(id)arg0 ;
-(void)setSearchBarStyle:(NSUInteger)arg0 ;
-(void)setSearchDisplayController:(id)arg0 ;
-(void)setSearchDisplayControllerShowsCancelButton:(BOOL)arg0 ;
-(void)setSearchField:(id)arg0 ;
-(void)setSearchFieldBackgroundImage:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setSearchFieldBackgroundPositionAdjustment:(struct UIOffset )arg0 ;
-(void)setSearchFieldLeftViewMode:(NSInteger)arg0 ;
-(void)setSearchResultsButtonSelected:(BOOL)arg0 ;
-(void)setSelectedScope:(NSInteger)arg0 ;
-(void)setSeparator:(id)arg0 ;
-(void)setSeparatorImage:(id)arg0 ;
-(void)setShadowVisibleIfNecessary:(BOOL)arg0 ;
-(void)setShowsBookmarkButton:(BOOL)arg0 ;
-(void)setShowsCancelButton:(BOOL)arg0 ;
-(void)setShowsCancelButton:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setShowsDeleteButton:(BOOL)arg0 ;
-(void)setShowsScopeBar:(BOOL)arg0 ;
-(void)setShowsScopeBar:(BOOL)arg0 animateOpacity:(BOOL)arg1 ;
-(void)setShowsSearchResultsButton:(BOOL)arg0 ;
-(void)setShowsSeparator:(BOOL)arg0 ;
-(void)setTableViewIndexWidth:(CGFloat)arg0 ;
-(void)setUpCancelButton;
-(void)setUpCancelButtonWithAppearance:(id)arg0 ;
-(void)setUpLeftButton;
-(void)setUpPromptLabel;
-(void)setUpScopeBar;
-(void)setUpSearchField;
-(void)setUpSearchNavigationItemWithSizingOption:(NSUInteger)arg0 ;
-(void)setUsesEmbeddedAppearance:(BOOL)arg0 ;
-(void)teardown;
-(void)updateBackgroundToBackdropStyle:(NSInteger)arg0 ;
-(void)updateDictationButton;
-(void)updateEffectiveContentInset;
-(void)updateForDrawsBackgroundInPalette;
-(void)updateForDynamicType;
-(void)updateForSemanticContext;
-(void)updateIfNecessaryForOldSize:(struct CGSize )arg0 ;
-(void)updateMagnifyingGlassView;
-(void)updateNavigationBarLayoutInsertDataForSearchBar:(id)arg0 collapsibleScopeBar:(id)arg1 forLayoutState:(NSInteger)arg2 ;
-(void)updateNeedForBackdrop;
-(void)updatePlaceholderColor;
-(void)updateRightView;
-(void)updateScopeBarBackground;
-(void)updateScopeBarForSelectedScope;
-(void)updateScopeBarFrame;
-(void)updateSearchBarOpacity;
-(void)updateSearchFieldArt;


@end


#endif
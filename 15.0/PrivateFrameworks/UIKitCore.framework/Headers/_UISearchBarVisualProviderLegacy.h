// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISEARCHBARVISUALPROVIDERLEGACY_H
#define _UISEARCHBARVISUALPROVIDERLEGACY_H

@class NSString, UIView<_UISearchBarVisualProvidingDelegate><_UINavigationBarAugmentedTitleView><UITextInputTraits_Private>, NSArray;
@protocol _UISearchBarVisualProviding, _UINavigationBarTitleViewDataSource;

#import <Foundation/Foundation.h>

#import "_UISearchBarAppearanceStorage.h"
#import "UINavigationItem.h"
#import "UIBarButtonItem.h"
#import "_UIBackdropView.h"
#import "UIVisualEffectView.h"
#import "UIColor.h"
#import "UIButton.h"
#import "UINavigationButton.h"
#import "_UINavigationBarTitleViewOverlayRects.h"
#import "UILabel.h"
#import "UISegmentedControl.h"
#import "UIImage.h"
#import "_UISearchBarScopeBarBackground.h"
#import "UIView.h"
#import "UISearchBarBackground.h"
#import "UISearchBarTextField.h"
#import "UITextField.h"
#import "UIImageView.h"

@interface _UISearchBarVisualProviderLegacy : NSObject <_UISearchBarVisualProviding>

 {
    _UISearchBarAppearanceStorage *_appearanceStorage;
    UINavigationItem *_searchNavigationItem;
    id *_searchDisplayController;
    ? _searchBarVisualProviderFlags;
}


@property (nonatomic) BOOL allowsInlineScopeBar;
@property (readonly, nonatomic) BOOL alwaysUsesLayoutMarginsForHorizontalContentInset;
@property (readonly, nonatomic) UIBarButtonItem *animatedAppearanceBarButtonItem; // ivar: _animatedAppearanceBarButtonItem
@property (nonatomic) BOOL autoDisableCancelButton;
@property (retain, nonatomic) _UIBackdropView *backdrop; // ivar: _backdrop
@property (nonatomic) NSUInteger backdropStyle; // ivar: _backdropStyle
@property (retain, nonatomic) UIVisualEffectView *backdropVisualEffectView; // ivar: _backdropVisualEffectView
@property (readonly, nonatomic) BOOL backgroundLayoutNeedsUpdate;
@property (nonatomic) NSInteger barPosition; // ivar: _barPosition
@property (nonatomic) NSInteger barStyle;
@property (retain, nonatomic) UIColor *barTintColor; // ivar: _barTintColor
@property (nonatomic) NSInteger barTranslucence;
@property (readonly, nonatomic) UIBarButtonItem *cancelBarButtonItem; // ivar: _cancelBarButtonItem
@property (retain, nonatomic) UIButton *cancelButton; // ivar: _cancelButton
@property (copy, nonatomic) NSString *cancelButtonText; // ivar: _cancelButtonText
@property (nonatomic) BOOL cancelButtonWantsLetterpress;
@property (nonatomic) BOOL centerPlaceholder;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) UIView<_UISearchBarVisualProvidingDelegate><_UINavigationBarAugmentedTitleView><UITextInputTraits_Private> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL drawsBackground;
@property (nonatomic) BOOL drawsBackgroundInPalette;
@property (readonly, nonatomic) UIEdgeInsets effectiveContentInset; // ivar: _effectiveContentInset
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic, getter=isFrozenForDismissalCrossfade) BOOL frozenForDismissalCrossfade;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHostedByNavigationBar) BOOL hostedByNavigationBar;
@property (nonatomic, getter=isInNavigationPalette) BOOL inNavigationPalette;
@property (readonly, nonatomic) CGSize intrinsicContentSize;
@property (readonly, nonatomic) UINavigationButton *leftButton; // ivar: _leftButton
@property (readonly, nonatomic, getter=isLegacy) BOOL legacy;
@property (nonatomic) UIEdgeInsets minimumContentInset; // ivar: _minimumContentInsetPrivate
@property (weak, nonatomic) NSObject<_UINavigationBarTitleViewDataSource> *navBarTitleViewDataSource; // ivar: _navBarTitleViewDataSource
@property (nonatomic) NSInteger navBarTitleViewLocation; // ivar: _navBarTitleViewLocation
@property (retain, nonatomic) _UINavigationBarTitleViewOverlayRects *navBarTitleViewOverlayRects; // ivar: _navBarTitleViewOverlayRects
@property (nonatomic, getter=isPlacedInNavigationBar) BOOL placedInNavigationBar;
@property (nonatomic, getter=isPlacedInToolbar) BOOL placedInToolbar;
@property (copy, nonatomic) NSString *prompt;
@property (retain, nonatomic) UILabel *promptLabel; // ivar: _promptLabel
@property (nonatomic) BOOL reliesOnNavigationBarBackdrop;
@property (readonly, copy, nonatomic) NSArray *runtimeOnlyViews;
@property (retain, nonatomic) UISegmentedControl *scopeBar; // ivar: _scopeBar
@property (retain, nonatomic) UIImage *scopeBarBackgroundImage;
@property (retain, nonatomic) _UISearchBarScopeBarBackground *scopeBarBackgroundView; // ivar: _scopeBarBackgroundView
@property (readonly, nonatomic) UIView *scopeBarContainerView; // ivar: _scopeBarContainerView
@property (readonly, nonatomic) CGFloat scopeBarHeight;
@property (readonly, nonatomic) UIEdgeInsets scopeBarInsets;
@property (readonly, nonatomic) BOOL scopeBarIsVisible;
@property (nonatomic) NSUInteger scopeBarPosition; // ivar: _scopeBarPosition
@property (copy, nonatomic) NSArray *scopeTitles; // ivar: _scopeTitles
@property (retain, nonatomic) UISearchBarBackground *searchBarBackground; // ivar: _searchBarBackground
@property (readonly, nonatomic) UIView *searchBarClippingView; // ivar: _searchBarClippingView
@property (nonatomic) NSUInteger searchBarStyle;
@property (weak, nonatomic) id *searchDisplayController;
@property (retain, nonatomic) UISearchBarTextField *searchField; // ivar: _searchField
@property (nonatomic) UIOffset searchFieldBackgroundPositionAdjustment;
@property (readonly, nonatomic) CGFloat searchFieldHeight;
@property (readonly, nonatomic) UITextField *searchFieldIfExists;
@property (nonatomic) NSInteger searchFieldLeftViewMode;
@property (readonly, nonatomic) UINavigationItem *searchNavigationItem;
@property (nonatomic, getter=isSearchResultsButtonSelected) BOOL searchResultsButtonSelected;
@property (nonatomic) NSInteger selectedScope; // ivar: _selectedScope
@property (retain, nonatomic) UIImageView *separator; // ivar: _separator
@property (retain, nonatomic) UIImage *separatorImage;
@property (readonly, nonatomic) UIImageView *shadowView; // ivar: _shadowView
@property (nonatomic) BOOL showsBookmarkButton;
@property (nonatomic) BOOL showsCancelButton;
@property (nonatomic) BOOL showsScopeBar;
@property (nonatomic) BOOL showsSearchResultsButton;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat tableViewIndexWidth; // ivar: _tableViewIndexWidth
@property (readonly, nonatomic) UIColor *textColor;
@property (nonatomic) BOOL usesEmbeddedAppearance;


-(BOOL)_getNavigationTitleLeadingInset:(*CGFloat)arg0 trailingInset:(*CGFloat)arg1 isRTL:(BOOL)arg2 ;
-(BOOL)containsScopeBar;
-(BOOL)hasDarkUIAppearance;
-(BOOL)isAtTop;
-(BOOL)isInBarButNotHosted;
-(BOOL)isTranslucent;
-(BOOL)shouldCombineLandscapeBarsForOrientation:(NSInteger)arg0 ;
-(BOOL)shouldDisplayShadow;
-(BOOL)useRelaxedScopeLayout;
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
-(NSInteger)barMetricsForOrientation:(NSInteger)arg0 ;
-(id)backgroundImageForBarPosition:(NSInteger)arg0 barMetrics:(NSInteger)arg1 ;
-(id)colorForComponent:(NSUInteger)arg0 disabled:(BOOL)arg1 ;
-(id)currentSeparatorImage;
-(id)effectiveBarTintColor;
-(id)imageForSearchBarIcon:(NSInteger)arg0 state:(NSUInteger)arg1 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)internalImageForSearchBarIcon:(NSInteger)arg0 state:(NSUInteger)arg1 ;
-(id)internalImageForSearchBarIcon:(NSInteger)arg0 state:(NSUInteger)arg1 customImage:(*BOOL)arg2 ;
-(id)makeShadowView;
-(id)navigationBarForShadow;
-(id)searchFieldBackgroundImageForState:(NSUInteger)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_removeBackdropVisualEffectView;
-(void)_removeLegacyBackdropView;
-(void)_setHideBackground:(BOOL)arg0 ;
-(void)allowCursorToAppear:(BOOL)arg0 ;
-(void)applySearchBarStyle;
-(void)destroyCancelButton;
-(void)destroyPromptLabel;
-(void)displayNavBarCancelButton:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)effectiveBarTintColorDidChange:(BOOL)arg0 ;
-(void)getOverrideContentInsets:(struct UIEdgeInsets *)arg0 overriddenEdges:(*NSUInteger)arg1 ;
-(void)getScopeBarHeight:(*CGFloat)arg0 containerHeight:(*CGFloat)arg1 ;
-(void)getTopInset:(*CGFloat)arg0 bottomInset:(*CGFloat)arg1 forBarMetrics:(NSInteger)arg2 barPosition:(NSInteger)arg3 ;
-(void)invalidateLayout;
-(void)layoutBackgroundViewConsideringTopBarStatusAndChangedHeight:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)layoutSubviewsInBounds:(struct CGRect )arg0 ;
-(void)navigationBarTransitionCompleted:(NSInteger)arg0 willBeDisplayed:(BOOL)arg1 ;
-(void)navigationBarTransitionWillBegin:(NSInteger)arg0 willBeDisplayed:(BOOL)arg1 ;
-(void)prepare;
-(void)prepareFromAbandonedVisualProvider:(id)arg0 ;
-(void)setBackgroundImage:(id)arg0 forBarPosition:(NSInteger)arg1 barMetrics:(NSInteger)arg2 ;
-(void)setClippingViewActive:(BOOL)arg0 ;
-(void)setClippingViewBounds:(struct CGRect )arg0 ;
-(void)setDisableDictationButton:(BOOL)arg0 ;
-(void)setHelperPlaceholder:(id)arg0 ;
-(void)setHelperPlaceholderHidden:(BOOL)arg0 ;
-(void)setHelperPlaceholderOverride:(id)arg0 ;
-(void)setImage:(id)arg0 forSearchBarIcon:(NSInteger)arg1 state:(NSUInteger)arg2 ;
-(void)setOverrideContentInsets:(struct UIEdgeInsets )arg0 forRectEdges:(NSUInteger)arg1 ;
-(void)setShadowVisibleIfNecessary:(BOOL)arg0 ;
-(void)setShowsDeleteButton:(BOOL)arg0 ;
-(void)setShowsSeparator:(BOOL)arg0 ;
-(void)setUpCancelButton;
-(void)setUpCancelButtonWithAppearance:(id)arg0 ;
-(void)setUpLeftButton;
-(void)setUpPromptLabel;
-(void)setUpScopeBar;
-(void)setUpSearchField;
-(void)setUpSearchNavigationItemWithSizingOption:(NSUInteger)arg0 ;
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
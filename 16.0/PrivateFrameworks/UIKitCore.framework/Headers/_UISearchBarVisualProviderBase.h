// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISEARCHBARVISUALPROVIDERBASE_H
#define _UISEARCHBARVISUALPROVIDERBASE_H

@class NSString, NSArray;
@protocol _UINavigationBarTitleViewDataSource;

#import <Foundation/Foundation.h>

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
#import "UISearchBar.h"
#import "UISearchBarBackground.h"
#import "UISearchBarTextField.h"
#import "UITextField.h"
#import "UINavigationItem.h"
#import "UIImageView.h"

@interface _UISearchBarVisualProviderBase : NSObject

@property (nonatomic, getter=isActiveSearchDeferringScopeBar) BOOL activeSearchDeferringScopeBar;
@property (nonatomic) BOOL allowsInlineScopeBar;
@property (readonly, nonatomic) BOOL alwaysUsesLayoutMarginsForHorizontalContentInset;
@property (readonly, nonatomic) UIBarButtonItem *animatedAppearanceBarButtonItem;
@property (nonatomic) BOOL autoDisableCancelButton;
@property (retain, nonatomic) _UIBackdropView *backdrop;
@property (nonatomic) NSUInteger backdropStyle;
@property (retain, nonatomic) UIVisualEffectView *backdropVisualEffectView;
@property (readonly, nonatomic) BOOL backgroundLayoutNeedsUpdate;
@property (nonatomic) NSInteger barPosition;
@property (nonatomic) NSInteger barStyle;
@property (retain, nonatomic) UIColor *barTintColor;
@property (nonatomic) NSInteger barTranslucence;
@property (readonly, nonatomic) UIBarButtonItem *cancelBarButtonItem;
@property (retain, nonatomic) UIButton *cancelButton;
@property (copy, nonatomic) NSString *cancelButtonText;
@property (nonatomic) BOOL cancelButtonWantsLetterpress;
@property (nonatomic) BOOL centerPlaceholder;
@property (nonatomic) BOOL drawsBackground;
@property (nonatomic) BOOL drawsBackgroundInPalette;
@property (readonly, nonatomic) UIEdgeInsets effectiveContentInset;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) UIBarButtonItem *existingSearchIconBarButtonItem;
@property (readonly, nonatomic, getter=isFrozenForDismissalCrossfade) BOOL frozenForDismissalCrossfade;
@property (nonatomic, getter=isHostedByNavigationBar) BOOL hostedByNavigationBar;
@property (nonatomic, getter=isHostedInlineByNavigationBar) BOOL hostedInlineByNavigationBar;
@property (nonatomic, getter=isInNavigationPalette) BOOL inNavigationPalette;
@property (readonly, nonatomic) CGSize intrinsicContentSize;
@property (readonly, nonatomic) NSInteger layoutState;
@property (readonly, nonatomic) UINavigationButton *leftButton;
@property (nonatomic) CGFloat leftInsetForInlineSearch;
@property (readonly, nonatomic, getter=isLegacy) BOOL legacy;
@property (nonatomic) UIEdgeInsets minimumContentInset;
@property (weak, nonatomic) NSObject<_UINavigationBarTitleViewDataSource> *navBarTitleViewDataSource;
@property (nonatomic) NSInteger navBarTitleViewLocation;
@property (retain, nonatomic) _UINavigationBarTitleViewOverlayRects *navBarTitleViewOverlayRects;
@property (nonatomic, getter=isPlacedInNavigationBar) BOOL placedInNavigationBar;
@property (nonatomic, getter=isPlacedInToolbar) BOOL placedInToolbar;
@property (copy, nonatomic) NSString *prompt;
@property (retain, nonatomic) UILabel *promptLabel;
@property (nonatomic) BOOL providesRestingMeasurementValues;
@property (nonatomic) BOOL reliesOnNavigationBarBackdrop;
@property (nonatomic) BOOL requiresSearchTextField;
@property (nonatomic) CGFloat rightInsetForInlineSearch;
@property (readonly, copy, nonatomic) NSArray *runtimeOnlyViews;
@property (retain, nonatomic) UISegmentedControl *scopeBar;
@property (retain, nonatomic) UIImage *scopeBarBackgroundImage;
@property (retain, nonatomic) _UISearchBarScopeBarBackground *scopeBarBackgroundView;
@property (readonly, nonatomic) UIView *scopeBarContainerView;
@property (readonly, nonatomic) CGFloat scopeBarHeight;
@property (readonly, nonatomic) UIEdgeInsets scopeBarInsets;
@property (readonly, nonatomic) BOOL scopeBarIsVisible;
@property (nonatomic) NSUInteger scopeBarPosition;
@property (copy, nonatomic) NSArray *scopeTitles;
@property (nonatomic) UISearchBar *searchBar; // ivar: _searchBar
@property (retain, nonatomic) UISearchBarBackground *searchBarBackground;
@property (readonly, nonatomic) UIView *searchBarClippingView;
@property (nonatomic) NSUInteger searchBarStyle;
@property (weak, nonatomic) id *searchDisplayController;
@property (retain, nonatomic) UISearchBarTextField *searchField;
@property (nonatomic) UIOffset searchFieldBackgroundPositionAdjustment;
@property (readonly, nonatomic) CGFloat searchFieldHeight;
@property (readonly, nonatomic) UITextField *searchFieldIfExists;
@property (nonatomic) NSInteger searchFieldLeftViewMode;
@property (readonly, nonatomic) UIBarButtonItem *searchIconBarButtonItem;
@property (readonly, nonatomic) UINavigationItem *searchNavigationItem;
@property (nonatomic, getter=isSearchResultsButtonSelected) BOOL searchResultsButtonSelected;
@property (nonatomic) NSInteger selectedScope;
@property (retain, nonatomic) UIImageView *separator;
@property (retain, nonatomic) UIImage *separatorImage;
@property (readonly, nonatomic) UIImageView *shadowView;
@property (nonatomic) BOOL showsBookmarkButton;
@property (nonatomic) BOOL showsCancelButton;
@property (nonatomic) BOOL showsScopeBar;
@property (nonatomic) BOOL showsSearchResultsButton;
@property (nonatomic) CGFloat tableViewIndexWidth;
@property (readonly, nonatomic) UIColor *textColor;
@property (nonatomic, getter=isTextFieldManagedInNSToolbar) BOOL textFieldManagedInNSToolbar;
@property (nonatomic) BOOL usesEmbeddedAppearance;
@property (readonly, nonatomic) UIView *viewStackedInNavigationBar;


-(BOOL)isInBarButNotHosted;
-(BOOL)shouldCombineLandscapeBarsForOrientation:(NSInteger)arg0 ;
-(BOOL)wantsDictationButton;
-(BOOL)wouldCombineLandscapeBarsForSize:(struct CGSize )arg0 ;
-(CGFloat)barHeightForBarMetrics:(NSInteger)arg0 ;
-(CGFloat)barHeightForBarMetrics:(NSInteger)arg0 barPosition:(NSInteger)arg1 ;
-(CGFloat)barHeightForBarMetrics:(NSInteger)arg0 withEffectiveInsets:(struct UIEdgeInsets )arg1 ;
-(CGFloat)defaultHeightForOrientation:(NSInteger)arg0 ;
-(CGFloat)idealInlineWidthForLayoutState:(NSInteger)arg0 ;
-(CGFloat)navigationBarContentHeight;
-(NSInteger)barMetricsForOrientation:(NSInteger)arg0 ;
-(id)backgroundImageForBarPosition:(NSInteger)arg0 barMetrics:(NSInteger)arg1 ;
-(id)colorForComponent:(NSUInteger)arg0 disabled:(BOOL)arg1 ;
-(id)effectiveBarTintColor;
-(id)imageForSearchBarIcon:(NSInteger)arg0 state:(NSUInteger)arg1 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)internalImageForSearchBarIcon:(NSInteger)arg0 state:(NSUInteger)arg1 customImage:(*BOOL)arg2 ;
-(id)makeShadowView;
-(id)searchFieldBackgroundImageForState:(NSUInteger)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_setHideBackground:(BOOL)arg0 ;
-(void)allowCursorToAppear:(BOOL)arg0 ;
-(void)applySearchBarStyle;
-(void)destroyCancelButton;
-(void)getOverrideContentInsets:(struct UIEdgeInsets *)arg0 overriddenEdges:(*NSUInteger)arg1 ;
-(void)invalidateLayout;
-(void)layoutSubviews;
-(void)navigationBarTransitionCompleted:(NSInteger)arg0 willBeDisplayed:(BOOL)arg1 ;
-(void)navigationBarTransitionWillBegin:(NSInteger)arg0 willBeDisplayed:(BOOL)arg1 ;
-(void)prepare;
-(void)setBackgroundImage:(id)arg0 forBarPosition:(NSInteger)arg1 barMetrics:(NSInteger)arg2 ;
-(void)setClippingViewActive:(BOOL)arg0 ;
-(void)setClippingViewBounds:(struct CGRect )arg0 ;
-(void)setDeferredAutomaticShowsScopeBarInNavigationBar:(id)arg0 ;
-(void)setDisableDictationButton:(BOOL)arg0 ;
-(void)setHelperPlaceholder:(id)arg0 ;
-(void)setHelperPlaceholderHidden:(BOOL)arg0 ;
-(void)setHelperPlaceholderOverride:(id)arg0 ;
-(void)setImage:(id)arg0 forSearchBarIcon:(NSInteger)arg1 state:(NSUInteger)arg2 ;
-(void)setOverrideContentInsets:(struct UIEdgeInsets )arg0 forRectEdges:(NSUInteger)arg1 ;
-(void)setShadowVisibleIfNecessary:(BOOL)arg0 ;
-(void)setShowsDeleteButton:(BOOL)arg0 ;
-(void)setShowsSeparator:(BOOL)arg0 ;
-(void)setUpCancelButtonWithAppearance:(id)arg0 ;
-(void)setUpPromptLabel;
-(void)setUpScopeBar;
-(void)setUpSearchField;
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
-(void)updatePlaceholderColor;
-(void)updateRightView;
-(void)updateScopeBarBackground;
-(void)updateScopeBarForSelectedScope;
-(void)updateSearchBarOpacity;
-(void)updateSearchFieldArt;


@end


#endif
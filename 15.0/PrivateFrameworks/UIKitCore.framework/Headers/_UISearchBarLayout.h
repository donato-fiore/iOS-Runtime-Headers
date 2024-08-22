// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISEARCHBARLAYOUT_H
#define _UISEARCHBARLAYOUT_H

@class UISearchBarLayoutBase, NSString, UIFont;
@protocol _UISearchBarContainerSublayoutDelegate;


#import "UIView.h"
#import "_UISearchBarPromptContainerView.h"
#import "_UISearchBarScopeContainerView.h"
#import "_UISearchBarScopeContainerLayout.h"
#import "_UISearchBarSearchContainerLayout.h"
#import "UISearchBarTextField.h"
#import "_UISearchBarSearchContainerView.h"

@interface _UISearchBarLayout : UISearchBarLayoutBase <_UISearchBarContainerSublayoutDelegate>

 {
    ? _searchBarLayoutFlags;
    CGFloat _cachedFontValueBeforeScaling;
    CGFloat _cachedFontValueAfterScaling;
}


@property (nonatomic) CGFloat additionalPaddingForCancelButtonAtLeadingEdge;
@property (nonatomic) CGFloat additionalPaddingForSearchFieldAtLeadingEdge;
@property (nonatomic) BOOL allowSearchFieldShrinkage;
@property (nonatomic) CGFloat backgroundExtension; // ivar: _backgroundExtension
@property (retain, nonatomic) UIView *cancelButton;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *deleteButton;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasCancelButton;
@property (nonatomic) BOOL hasDeleteButton;
@property (nonatomic) BOOL hasLeftButton;
@property (nonatomic) BOOL hasPromptLabel;
@property (nonatomic) BOOL hasScopeBar;
@property (nonatomic) BOOL hasSearchBarBackdrop;
@property (nonatomic) BOOL hasSearchBarBackground;
@property (nonatomic) BOOL hasSeparator;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ? heightRange; // ivar: _heightRange
@property (nonatomic, getter=isHostingNavBarTransitionActive) BOOL hostingNavBarTransitionActive;
@property (retain, nonatomic) UIView *leftButton;
@property (readonly, nonatomic) CGFloat naturalPromptContainerHeight;
@property (readonly, nonatomic) CGFloat naturalScopeBarHeight;
@property (readonly, nonatomic) CGFloat naturalSearchBarHeight;
@property (readonly, nonatomic) CGFloat naturalSearchFieldHeight;
@property (readonly, nonatomic) CGFloat naturalTotalHeight;
@property (nonatomic) NSUInteger numberOfScopeTitles; // ivar: _numberOfScopeTitles
@property (retain, nonatomic) _UISearchBarPromptContainerView *promptContainer; // ivar: _promptContainer
@property (readonly, nonatomic) CGRect promptContainerLayoutFrame; // ivar: _promptContainerLayoutFrame
@property (nonatomic, getter=isProspective) BOOL prospective;
@property (nonatomic) NSInteger representedLayoutState; // ivar: _representedLayoutState
@property (retain, nonatomic) UIView *scopeBar;
@property (retain, nonatomic) _UISearchBarScopeContainerView *scopeBarContainer; // ivar: _scopeBarContainer
@property (readonly, nonatomic) CGRect scopeBarContainerLayoutFrame; // ivar: _scopeBarContainerLayoutFrame
@property (retain, nonatomic) _UISearchBarScopeContainerLayout *scopeContainerLayout; // ivar: _scopeContainerLayout
@property (readonly, nonatomic) UIEdgeInsets scopeContainerSpecificInsets;
@property (retain, nonatomic) UIView *searchBarBackdrop; // ivar: _searchBarBackdrop
@property (retain, nonatomic) UIView *searchBarBackground; // ivar: _searchBarBackground
@property (readonly, nonatomic) CGRect searchBarBackgroundLayoutFrame; // ivar: _searchBarBackgroundLayoutFrame
@property (nonatomic) CGFloat searchBarReadableWidth; // ivar: _searchBarReadableWidth
@property (retain, nonatomic) _UISearchBarSearchContainerLayout *searchContainerLayout; // ivar: _searchContainerLayout
@property (retain, nonatomic) UISearchBarTextField *searchField;
@property (nonatomic) UIOffset searchFieldBackgroundPositionAdjustment; // ivar: _searchFieldBackgroundPositionAdjustment
@property (retain, nonatomic) _UISearchBarSearchContainerView *searchFieldContainer; // ivar: _searchFieldContainer
@property (readonly, nonatomic) CGRect searchFieldContainerLayoutFrame; // ivar: _searchFieldContainerLayoutFrame
@property (nonatomic) BOOL searchFieldEffectivelySupportsDynamicType;
@property (retain, nonatomic) UIFont *searchFieldFont; // ivar: _searchFieldFont
@property (nonatomic) BOOL searchFieldUsesCustomBackgroundImage;
@property (retain, nonatomic) UIView *separator; // ivar: _separator
@property (readonly, nonatomic) CGRect separatorLayoutFrame; // ivar: _separatorLayoutFrame
@property (readonly) Class superclass;


-(CGFloat)layout:(id)arg0 fontScaledValueForValue:(CGFloat)arg1 ;
-(CGFloat)minimumLayoutWidth;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)applyLayout;
-(void)applyScopeContainerSublayout;
-(void)cleanUpLayout;
-(void)containerLayoutWillUpdateLayout:(id)arg0 ;
-(void)ensureCorrectContainerViewOrdering;
-(void)prepareBaseConfigurationForSublayout:(id)arg0 ;
-(void)prepareScopeContainerLayout;
-(void)prepareSearchContainerLayout;
-(void)prepareSublayouts;
-(void)setDelegateSearchFieldFrameManipulationBlock:(id)arg0 ;
-(void)setLayoutCustomizationDelegateSearchFieldContainerWillLayoutSubviewsCallback:(id)arg0 ;
-(void)setUpScopeContainerLayout;
-(void)setUpSearchContainerLayout;
-(void)updateLayout;


@end


#endif
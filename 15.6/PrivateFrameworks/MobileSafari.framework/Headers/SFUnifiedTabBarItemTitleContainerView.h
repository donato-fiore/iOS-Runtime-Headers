// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFUNIFIEDTABBARITEMTITLECONTAINERVIEW_H
#define SFUNIFIEDTABBARITEMTITLECONTAINERVIEW_H

@class UIView, UIImageView, UILabel, NSLayoutConstraint, UIButton, NSArray, UIImage, NSString, UIFont, UITextField;


#import "SFFaviconView.h"
#import "SFURLLabel.h"
#import "SFUnifiedTabBarItemTitleContainerViewTheme.h"

@interface SFUnifiedTabBarItemTitleContainerView : UIView {
    SFFaviconView *_iconView;
    SFURLLabel *_titleLabel;
    UIImageView *_lockView;
    UIImageView *_squishedIconView;
    UIImageView *_squishedLockView;
    SFURLLabel *_leadingAnnotationLabel;
    UILabel *_trailingAnnotationLabel;
    UILabel *_availabilityLabel;
    NSLayoutConstraint *_availabilityLabelAlignmentConstraint;
    CGFloat _offsetOfTitleInSearchField;
    UIButton *_fakeClearButton;
    CGFloat _iconSpacing;
    BOOL _titleLanguageIsRightToLeft;
}


@property (readonly, nonatomic) NSArray *_arrangedViews;
@property (readonly, nonatomic) NSArray *_arrangedViewsByContentCompressionResistancePriority;
@property (nonatomic, setter=_setShowsFakeClearButton:) BOOL _showsFakeClearButton;
@property (nonatomic) NSInteger alignment; // ivar: _alignment
@property (nonatomic) BOOL animateLockViewPosition; // ivar: _animateLockViewPosition
@property (nonatomic, getter=isAnimatingResize) BOOL animatingResize; // ivar: _animatingResize
@property (nonatomic, getter=isCollapsed) BOOL collapsed; // ivar: _collapsed
@property (nonatomic) CGFloat contentOffset; // ivar: _contentOffset
@property (nonatomic) BOOL dimsText; // ivar: _dimsText
@property (nonatomic) BOOL hasFocusedSensitiveInputField; // ivar: _hasFocusedSensitiveInputField
@property (nonatomic) BOOL hidesIconForHover; // ivar: _hidesIconForHover
@property (retain, nonatomic) UIImage *icon; // ivar: _icon
@property (nonatomic) CGFloat iconAlpha; // ivar: _iconAlpha
@property (readonly, nonatomic) CGRect iconFrame;
@property (nonatomic) BOOL leadingAlignsIcon; // ivar: _leadingAlignsIcon
@property (nonatomic) NSInteger lockIconEdge; // ivar: _lockIconEdge
@property (readonly, nonatomic) CGSize lockSize;
@property (readonly, nonatomic) CGFloat maximumIconWidth;
@property (readonly, nonatomic) CGFloat minimumWidthToShowTitle;
@property (readonly, nonatomic, getter=isNarrow) BOOL narrow; // ivar: _narrow
@property (copy, nonatomic) NSString *placeholder; // ivar: _placeholder
@property (retain, nonatomic) UIFont *placeholderFont; // ivar: _placeholderFont
@property (retain, nonatomic) UITextField *searchField; // ivar: _searchField
@property (nonatomic) NSInteger securityAnnotation; // ivar: _securityAnnotation
@property (nonatomic) BOOL showsIcon; // ivar: _showsIcon
@property (nonatomic) BOOL showsLockIcon; // ivar: _showsLockIcon
@property (nonatomic) BOOL showsPrivateAnnotation; // ivar: _showsPrivateAnnotation
@property (nonatomic) BOOL showsSearchField; // ivar: _showsSearchField
@property (nonatomic) BOOL showsSearchIcon; // ivar: _showsSearchIcon
@property (nonatomic) BOOL showsSquishedAccessoryViews; // ivar: _showsSquishedAccessoryViews
@property (nonatomic) CGFloat spacing; // ivar: _spacing
@property (readonly, nonatomic) NSArray *squishedAccessoryViews;
@property (nonatomic) NSUInteger startIndexOfTitleInTextWhenExpanded; // ivar: _startIndexOfTitleInTextWhenExpanded
@property (nonatomic) BOOL suppressesText; // ivar: _suppressesText
@property (copy, nonatomic) NSString *textWhenExpanded; // ivar: _textWhenExpanded
@property (retain, nonatomic) SFUnifiedTabBarItemTitleContainerViewTheme *theme; // ivar: _theme
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) CGRect titleRect;
@property (retain, nonatomic) NSString *titleTextStyle; // ivar: _titleTextStyle
@property (nonatomic) CGFloat titleToSearchIconSpacing; // ivar: _titleToSearchIconSpacing
@property (copy, nonatomic) NSString *titleWhenCollapsed; // ivar: _titleWhenCollapsed
@property (readonly, nonatomic) CGSize urlSize;
@property (nonatomic) BOOL usesInsetFromLayoutMargins; // ivar: _usesInsetFromLayoutMargins


-(BOOL)_shouldShowAvailabilityLabel;
-(BOOL)_shouldSlideArrangedViewForSearchField:(id)arg0 ;
-(BOOL)_showsPlaceholder;
-(BOOL)_showsView:(id)arg0 ;
-(BOOL)_viewCollapsesWhenHidden:(id)arg0 ;
-(CGFloat)_alphaForView:(id)arg0 ;
-(CGFloat)_collapsedWidthForView:(id)arg0 ;
-(CGFloat)_spacingBetweenView:(id)arg0 nextView:(id)arg1 ;
-(id)_lastVisibleViewInViews:(id)arg0 ;
-(id)_squishedAccessorySymbolConfiguration;
-(id)_squishedIconView;
-(id)_squishedLockView;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithAlignment:(NSInteger)arg0 ;
-(struct CGSize )_preferredSizeForView:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct NSDirectionalEdgeInsets )_effectiveDirectionalLayoutMargins;
-(struct UIEdgeInsets )_effectiveLayoutMargins;
-(void)_layOutFakeClearButtonUsingPresentationFrame:(BOOL)arg0 ;
-(void)_layOutSearchField;
-(void)_layoutArrangedViews;
-(void)_layoutSquishedAccessoryView:(id)arg0 forView:(id)arg1 ;
-(void)_layoutSquishedAccessoryViews;
-(void)_leadingAlignCenteredIconIfNeeded;
-(void)_slideArrangedViewsForSearchField:(CGFloat)arg0 ;
-(void)_updateAlignmentForAvailabilityLabel:(id)arg0 ;
-(void)_updateIcon;
-(void)_updateIconSpacing;
-(void)_updateOffsetOfTitleInSearchField;
-(void)_updateSearchFieldColor;
-(void)_updateSecurityAnnotation;
-(void)_updateSecurityAnnotationAnimated:(BOOL)arg0 ;
-(void)_updateSquishedAccessorySymbolConfigurations;
-(void)_updateTitle;
-(void)_updateTitleColor;
-(void)_updateTitleFont;
-(void)beginTitleTextStyleAnimation;
-(void)beginTransitioningSearchField;
-(void)dismissAvailabilityLabelAnimated:(BOOL)arg0 withCompletionHandler:(id)arg1 ;
-(void)endTitleTextStyleAnimation;
-(void)endTransitioningSearchField;
-(void)layoutMarginsDidChange;
-(void)layoutSubviews;
-(void)presentAvailabilityLabelWithText:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif
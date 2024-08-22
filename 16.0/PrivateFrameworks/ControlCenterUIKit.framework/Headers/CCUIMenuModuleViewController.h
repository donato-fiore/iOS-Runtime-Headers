// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CCUIMENUMODULEVIEWCONTROLLER_H
#define CCUIMENUMODULEVIEWCONTROLLER_H

@class UILabel, UIView, MTMaterialView, NSMutableDictionary, UIStackView, NSMutableArray, UIScrollView, UIActivityIndicatorView, UILongPressGestureRecognizer, UISelectionFeedbackGenerator, UIViewPropertyAnimator, NSString;
@protocol UIGestureRecognizerDelegate, CCUIContentModuleContentViewController;


#import "CCUIButtonModuleViewController.h"
#import "CCUIMenuModuleItemView.h"
#import "CCUIContentModuleContext.h"

@interface CCUIMenuModuleViewController : CCUIButtonModuleViewController <UIGestureRecognizerDelegate, CCUIContentModuleContentViewController>

 {
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_transformView;
    UIView *_headerSeparatorView;
    UIView *_footerSeparatorView;
    MTMaterialView *_platterMaterialView;
    NSMutableDictionary *_categoriesToVisualStylingProviders;
    UIStackView *_menuItemsContainer;
    NSMutableArray *_menuItems;
    NSMutableDictionary *_identiferToActivityIndicatorView;
    UIScrollView *_contentScrollView;
    UIView *_darkeningBackgroundView;
    UIActivityIndicatorView *_busyIndicatorView;
    UILongPressGestureRecognizer *_pressGestureRecognizer;
    UISelectionFeedbackGenerator *_feedbackGenerator;
    BOOL _allowsMenuInteraction;
    BOOL _ignoreMenuItemAtTouchLocationAfterExpanded;
    CGPoint _touchLocationToIgnore;
    CCUIMenuModuleItemView *_footerButtonView;
    BOOL _shouldShowFooterButton;
    UIView *_customContentView;
    BOOL _customContentViewScrolls;
    BOOL _forceLimitContentSizeCategory;
}


@property (readonly, nonatomic) NSUInteger actionsCount;
@property (nonatomic, getter=isBusy) BOOL busy; // ivar: _busy
@property (weak, nonatomic) CCUIContentModuleContext *contentModuleContext; // ivar: _contentModuleContext
@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasFooterButton;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat headerHeight;
@property (nonatomic) BOOL hideGlyphInHeader; // ivar: _hideGlyphInHeader
@property (nonatomic) NSUInteger indentation; // ivar: _indentation
@property (readonly, nonatomic) NSUInteger menuItemCount;
@property (nonatomic) NSUInteger minimumMenuItems; // ivar: _minimumMenuItems
@property (readonly, nonatomic) CGFloat preferredExpandedContentHeight;
@property (readonly, nonatomic) CGFloat preferredExpandedContentWidth;
@property (readonly, nonatomic) CGFloat preferredExpandedContinuousCornerRadius;
@property (readonly, nonatomic) BOOL providesOwnPlatter;
@property (readonly, nonatomic) BOOL shouldPerformClickInteraction;
@property (readonly, nonatomic) BOOL shouldPerformHoverInteraction;
@property (nonatomic) BOOL shouldProvideOwnPlatter; // ivar: _shouldProvideOwnPlatter
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL useTallLayout; // ivar: _useTallLayout
@property (nonatomic) BOOL useTrailingCheckmarkLayout; // ivar: _useTrailingCheckmarkLayout
@property (nonatomic) BOOL useTrailingInset; // ivar: _useTrailingInset
@property (nonatomic) CGFloat visibleMenuItems; // ivar: _visibleMenuItems


+(id)checkmarkImageForPreferredContentSizeCategory:(id)arg0 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)_shouldHideGlyphForLimitedContentSizeCategory;
-(BOOL)_shouldLimitContentSizeCategory;
-(BOOL)_shouldShowFooterChin;
-(BOOL)_shouldShowFooterSeparator;
-(BOOL)_toggleSelectionForMenuItem:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)hasGlyph;
-(BOOL)shouldBeginTransitionToExpandedContentModule;
-(CGFloat)_aggregateModuleHeight;
-(CGFloat)_contentScaleForSize:(struct CGSize )arg0 ;
-(CGFloat)_defaultMenuItemHeight;
-(CGFloat)_desiredExpandedHeight;
-(CGFloat)_footerHeight;
-(CGFloat)_maximumHeight;
-(CGFloat)_menuItemsHeightForWidth:(CGFloat)arg0 ;
-(CGFloat)_separatorHeight;
-(CGFloat)_titleWidthForContainerWidth:(CGFloat)arg0 ;
-(CGFloat)headerHeightForWidth:(CGFloat)arg0 ;
-(CGFloat)preferredExpandedContentHeightWithWidth:(CGFloat)arg0 ;
-(CGFloat)scrollViewContentHeightForWidth:(CGFloat)arg0 ;
-(id)_busyIndicatorView;
-(id)_leadingViewForMenuItem:(id)arg0 ;
-(id)_menuItemFromPlaceholderIndex:(NSUInteger)arg0 ;
-(id)_preferredFontForTextStyle:(id)arg0 hiFontStyle:(NSInteger)arg1 ;
-(id)_trailingViewForMenuItem:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)leadingImageForMenuItem:(id)arg0 ;
-(id)leadingViewForMenuItem:(id)arg0 ;
-(id)menuItemForIdentifier:(id)arg0 ;
-(id)trailingImageForMenuItem:(id)arg0 ;
-(id)trailingViewForMenuItem:(id)arg0 ;
-(id)viewForTouchContinuation;
-(void)_contentSizeCategoryDidChange;
-(void)_fadeViewsForExpandedState:(BOOL)arg0 ;
-(void)_handleActionTapped:(id)arg0 ;
-(void)_handlePressGesture:(id)arg0 ;
-(void)_layoutBusyIndicatorForSize:(struct CGSize )arg0 ;
-(void)_layoutContentViewForSize:(struct CGSize )arg0 ;
-(void)_layoutFooterButtonForSize:(struct CGSize )arg0 ;
-(void)_layoutFooterSeparatorForSize:(struct CGSize )arg0 ;
-(void)_layoutGlyphViewForSize:(struct CGSize )arg0 ;
-(void)_layoutHeaderSeparatorForSize:(struct CGSize )arg0 ;
-(void)_layoutSubtitleLabelForSize:(struct CGSize )arg0 ;
-(void)_layoutTitleLabelForSize:(struct CGSize )arg0 ;
-(void)_layoutTransformViewForSize:(struct CGSize )arg0 ;
-(void)_layoutViewSubviews;
-(void)_setForceLimitContentSizeCategory:(BOOL)arg0 ;
-(void)_setMenuItems:(id)arg0 ;
-(void)_setRootViewClipsToBounds:(BOOL)arg0 ;
-(void)_setTransformViewClipsToBounds:(BOOL)arg0 ;
-(void)_setView:(id)arg0 clipsToBounds:(BOOL)arg1 ;
-(void)_setupTitleLabel;
-(void)_updateLeadingAndTrailingViews;
-(void)_updateMenuItemsSeparatorVisiblity;
-(void)_updatePreferredContentSize;
-(void)_updateTitleFont;
-(void)addActionWithTitle:(id)arg0 glyph:(id)arg1 handler:(id)arg2 ;
-(void)addActionWithTitle:(id)arg0 subtitle:(id)arg1 glyph:(id)arg2 handler:(id)arg3 ;
-(void)contentModuleWillTransitionToExpandedContentMode:(BOOL)arg0 ;
-(void)didTransitionToExpandedContentMode:(BOOL)arg0 ;
-(void)removeAllActions;
-(void)removeFooterButton;
-(void)scrollToTop:(BOOL)arg0 ;
-(void)setCustomContentView:(id)arg0 ;
-(void)setFooterButtonTitle:(id)arg0 handler:(id)arg1 ;
-(void)setGlyphImage:(id)arg0 ;
-(void)setGlyphPackageDescription:(id)arg0 ;
-(void)setMenuItems:(id)arg0 ;
-(void)setUseIndentedLayout:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willTransitionToExpandedContentMode:(BOOL)arg0 ;


@end


#endif
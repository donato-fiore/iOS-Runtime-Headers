// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CCUIMENUMODULEITEMVIEW_H
#define CCUIMENUMODULEITEMVIEW_H

@class UIControl, BSUIEmojiLabelView, UIView, MTVisualStylingProvider, NSString;
@protocol UIPointerInteractionDelegate;


#import "CCUIMenuModuleItem.h"

@interface CCUIMenuModuleItemView : UIControl <UIPointerInteractionDelegate>

 {
    BSUIEmojiLabelView *_titleLabel;
    BSUIEmojiLabelView *_subtitleLabel;
    UIView *_separatorView;
    UIView *_highlightedBackgroundView;
    MTVisualStylingProvider *_visualStylingProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger indentation; // ivar: _indentation
@property (retain, nonatomic) UIView *leadingView; // ivar: _leadingView
@property (retain, nonatomic) CCUIMenuModuleItem *menuItem; // ivar: _menuItem
@property (nonatomic) CGFloat preferredMaxLayoutWidth; // ivar: _preferredMaxLayoutWidth
@property (nonatomic) BOOL separatorVisible; // ivar: _separatorVisible
@property (nonatomic) BOOL shouldLimitContentSizeCategory; // ivar: _shouldLimitContentSizeCategory
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *trailingView; // ivar: _trailingView
@property (nonatomic) BOOL useTallLayout; // ivar: _useTallLayout
@property (nonatomic) BOOL useTrailingCheckmarkLayout; // ivar: _useTrailingCheckmarkLayout
@property (nonatomic) BOOL useTrailingInset; // ivar: _useTrailingInset


+(BOOL)_shouldLimitContentSizeCategory:(id)arg0 forceLimitContentSizeCategory:(BOOL)arg1 ;
+(CGFloat)defaultMenuItemHeightForContentSizeCategory:(id)arg0 ;
+(id)_preferredFontForTextStyle:(id)arg0 hiFontStyle:(NSInteger)arg1 contentSizeCategory:(id)arg2 shouldLimitContentSizeCategory:(BOOL)arg3 ;
+(id)_subtitleFontForContentSizeCategory:(id)arg0 ;
+(id)_subtitleFontForContentSizeCategory:(id)arg0 shouldLimitContentSizeCategory:(BOOL)arg1 ;
+(id)_titleFontForContentSizeCategory:(id)arg0 ;
+(id)_titleFontForContentSizeCategory:(id)arg0 shouldLimitContentSizeCategory:(BOOL)arg1 ;
-(BOOL)_shouldHorizontallyCenterText;
-(BOOL)continueTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)_labelLeadingInset;
-(CGFloat)_labelTrailingInset;
-(CGFloat)_separatorHeight;
-(CGFloat)_textHeightForEmojiLabel:(id)arg0 width:(CGFloat)arg1 ;
-(CGFloat)_titleBaselineToBottom;
-(CGFloat)_titleBaselineToTop;
-(CGFloat)_trailingWidthForCustomViews;
-(id)_subtitleFont;
-(id)_titleFont;
-(id)initWithMenuItem:(id)arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(id)subtitle;
-(id)title;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct NSDirectionalEdgeInsets )_labelInsets;
-(void)_contentSizeCategoryDidChange;
-(void)_layoutLeadingCustomView;
-(void)_layoutTrailingCustomViews;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ;
-(void)_setSubtitle:(id)arg0 ;
-(void)_setTitle:(id)arg0 ;
-(void)_stopAutomaticallyUpdatingView:(id)arg0 recursivelyIfNeeded:(BOOL)arg1 ;
-(void)_updateForStateChange;
-(void)_updateVisualStyleOfView:(id)arg0 withStyle:(NSInteger)arg1 recursivelyIfNeeded:(BOOL)arg2 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateSubviewsAlpha:(CGFloat)arg0 ;


@end


#endif
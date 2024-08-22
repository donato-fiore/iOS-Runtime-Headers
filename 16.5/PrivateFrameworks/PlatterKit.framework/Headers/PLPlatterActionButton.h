// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLPLATTERACTIONBUTTON_H
#define PLPLATTERACTIONBUTTON_H

@class UIControl, UIView, UIColor, MTMaterialView, NSString, UIFont, BSUIFontProvider, UILabel, MTVisualStylingProvider;
@protocol PLContentSizeCategoryAdjusting, MTMaterialGrouping;



@interface PLPlatterActionButton : UIControl <PLContentSizeCategoryAdjusting, MTMaterialGrouping>

 {
    UIView *_backgroundTintColoringView;
}


@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (nonatomic) NSInteger backgroundMaterialRecipe; // ivar: _backgroundMaterialRecipe
@property (copy, nonatomic) UIColor *backgroundTintColor; // ivar: _backgroundTintColor
@property (retain, nonatomic) MTMaterialView *backgroundView; // ivar: _backgroundView
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) UIFont *font; // ivar: _font
@property (retain, nonatomic, getter=_fontProvider, setter=_setFontProvider:) BSUIFontProvider *fontProvider; // ivar: _fontProvider
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *materialGroupNameBase; // ivar: _materialGroupNameBase
@property (copy, nonatomic) NSString *preferredContentSizeCategory; // ivar: _preferredContentSizeCategory
@property (readonly) Class superclass;
@property (copy, nonatomic) UIColor *textColor; // ivar: _textColor
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) MTVisualStylingProvider *titleLabelVisualStylingProvider; // ivar: _titleLabelVisualStylingProvider


-(BOOL)adjustForContentSizeCategoryChange;
-(NSInteger)_wordCountForText:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureBackgroundColoringViewIfNecessary;
-(void)_configureBackgroundViewIfNecessary;
-(void)_configureTitleLabelEffects;
-(void)_configureTitleLabelIfNecessary;
-(void)_handleHoverGestureRecognizerEvent:(id)arg0 ;
-(void)_layoutBackgroundView;
-(void)_layoutTitleLabel;
-(void)_updateTitleLabelFont;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)willMoveToSuperview:(id)arg0 ;


@end


#endif
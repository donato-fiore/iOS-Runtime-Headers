// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLPLATTERHEADERCONTENTVIEW_H
#define PLPLATTERHEADERCONTENTVIEW_H

@class UIView, UILabel<BSUIDateLabel>, UIButton, MTVisualStylingProvider, NSDate, UILabel, UIFont, NSString, BSUIFontProvider, NSArray, NSTimeZone;
@protocol BSUIDateLabelDelegate, MTVisualStylingRequiring, PLContentSizeCategoryAdjusting;


#import "PLPlatterHeaderContentViewLayoutManager.h"

@interface PLPlatterHeaderContentView : UIView <BSUIDateLabelDelegate, MTVisualStylingRequiring, PLContentSizeCategoryAdjusting>

 {
    UILabel<BSUIDateLabel> *_dateLabel;
    UIButton *_utilityButton;
    PLPlatterHeaderContentViewLayoutManager *_layoutManager;
    BOOL _hasUpdatedContent;
    MTVisualStylingProvider *_visualStylingProvider;
}


@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (readonly, nonatomic) CGFloat contentBaseline;
@property (copy, nonatomic) NSDate *date; // ivar: _date
@property (nonatomic, getter=isDateAllDay) BOOL dateAllDay; // ivar: _dateAllDay
@property (nonatomic) NSInteger dateFormatStyle; // ivar: _dateFormatStyle
@property (readonly, nonatomic, getter=_dateLabel) UILabel *dateLabel;
@property (readonly, nonatomic, getter=_dateLabelFont) UIFont *dateLabelFont;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic, getter=_fontProvider, setter=_setFontProvider:) BSUIFontProvider *fontProvider;
@property (retain, nonatomic, getter=_fontProvider, setter=_setFontProvider:) BSUIFontProvider *fontProvider; // ivar: _fontProvider
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL heedsHorizontalLayoutMargins; // ivar: _heedsHorizontalLayoutMargins
@property (readonly, nonatomic) NSArray *iconButtons; // ivar: _iconButtons
@property (readonly, nonatomic, getter=_iconDimension) CGFloat iconDimension;
@property (readonly, nonatomic, getter=_iconLeadingPadding) CGFloat iconLeadingPadding;
@property (readonly, nonatomic, getter=_iconTrailingPadding) CGFloat iconTrailingPadding;
@property (copy, nonatomic) NSArray *icons;
@property (copy, nonatomic) NSString *preferredContentSizeCategory; // ivar: _preferredContentSizeCategory
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic, getter=_titleLabel) UILabel *titleLabel;
@property (retain, nonatomic, getter=_titleLabel, setter=_setTitleLabel:) UILabel *titleLabel; // ivar: _titleLabel
@property (readonly, nonatomic, getter=_titleLabelFont) UIFont *titleLabelFont;
@property (nonatomic, getter=_usesLargeTextLayout, setter=_setUsesLargeTextLayout:) BOOL usesLargeTextLayout;
@property (nonatomic, getter=_usesLargeTextLayout, setter=_setUsesLargeTextLayout:) BOOL usesLargeTextLayout; // ivar: _usesLargeTextLayout
@property (readonly, nonatomic) UIButton *utilityButton;
@property (nonatomic, getter=_utilityButtonHorizontalLayoutReference, setter=_setUtilityButtonHorizontalLayoutReference:) CGFloat utilityButtonHorizontalLayoutReference;
@property (nonatomic, getter=_utilityButtonHorizontalLayoutReference, setter=_setUtilityButtonHorizontalLayoutReference:) CGFloat utilityButtonHorizontalLayoutReference; // ivar: _utilityButtonHorizontalLayoutReference
@property (retain, nonatomic) UIView *utilityView; // ivar: _utilityView


+(CGFloat)contentBaselineToBoundsBottomWithWidth:(CGFloat)arg0 scale:(CGFloat)arg1 ;
+(id)_titleLabelFontFromFontProvider:(id)arg0 ;
-(BOOL)adjustForContentSizeCategoryChange;
-(CGFloat)_headerHeightForWidth:(CGFloat)arg0 ;
-(id)_attributedStringForTitle:(id)arg0 ;
-(id)_layoutManager;
-(id)_lazyTitleLabel;
-(id)_newIconButton;
-(id)_newTitleLabel;
-(id)_updateTitleAttributesForAttributedString:(id)arg0 ;
-(id)init;
-(id)visualStylingProvider;
-(id)visualStylingProviderForCategory:(NSInteger)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureDateLabel;
-(void)_configureDateLabelIfNecessary;
-(void)_configureIconButton:(id)arg0 withIcon:(id)arg1 ;
-(void)_configureIconButtonsForIcons:(id)arg0 ;
-(void)_configureTitleLabel:(id)arg0 ;
-(void)_configureUtilityButton;
-(void)_configureUtilityButtonIfNecessary;
-(void)_darkerSystemColorsStatusDidChange:(id)arg0 ;
-(void)_layoutDateLabelWithScale:(CGFloat)arg0 ;
-(void)_layoutIconButtonsWithScale:(CGFloat)arg0 ;
-(void)_layoutTitleLabelWithScale:(CGFloat)arg0 ;
-(void)_layoutUtilityButtonWithScale:(CGFloat)arg0 ;
-(void)_recycleDateLabel;
-(void)_reduceTransparencyStatusDidChange:(id)arg0 ;
-(void)_tearDownDateLabel;
-(void)_updateStylingForTitleLabel:(id)arg0 ;
-(void)_updateTextAttributesForTitleLabel:(id)arg0 ;
-(void)dateLabelDidChange:(id)arg0 ;
-(void)dealloc;
-(void)layoutMarginsDidChange;
-(void)layoutSubviews;
-(void)setVisualStylingProvider:(id)arg0 ;
-(void)setVisualStylingProvider:(id)arg0 forCategory:(NSInteger)arg1 ;


@end


#endif
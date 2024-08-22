// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCAUXILIARYOPTIONSVIEW_H
#define NCAUXILIARYOPTIONSVIEW_H

@class UIView, UILabel, NSStringDrawingContext, NSArray, NSString, UIColor, BSUIFontProvider;
@protocol NCAuxiliaryOptionsSupporting, PLContentSizeCategoryAdjusting;



@interface NCAuxiliaryOptionsView : UIView <NCAuxiliaryOptionsSupporting, PLContentSizeCategoryAdjusting>

 {
    UILabel *_optionsSummaryLabel;
    UIView *_overlayView;
    CGFloat _widthForCachedLayoutInfo;
    NSUInteger _cachedSummaryLabelNumberOfLines;
    NSStringDrawingContext *_drawingContext;
}


@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (retain, nonatomic) NSArray *auxiliaryOptionActions; // ivar: _auxiliaryOptionActions
@property (readonly, nonatomic) NSArray *auxiliaryOptionButtons; // ivar: _auxiliaryOptionButtons
@property (copy, nonatomic) NSString *auxiliaryOptionsSummaryText;
@property (copy, nonatomic) UIColor *auxiliaryOptionsTextColor; // ivar: _auxiliaryOptionsTextColor
@property (copy, nonatomic) UIColor *auxiliaryOptionsTintColor; // ivar: _auxiliaryOptionsTintColor
@property (nonatomic) BOOL auxiliaryOptionsVisible; // ivar: _auxiliaryOptionsVisible
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) BSUIFontProvider *fontProvider; // ivar: _fontProvider
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (readonly) Class superclass;


-(BOOL)adjustForContentSizeCategoryChange;
-(CGFloat)_optionsButtonWidthForBounds:(struct CGRect )arg0 auxiliaryOptionButtonsCount:(NSUInteger)arg1 ;
-(CGFloat)_optionsSummaryWidthForBounds:(struct CGRect )arg0 ;
-(NSUInteger)_summaryLabelNumberOfLinesForBoundsSize:(struct CGSize )arg0 ;
-(id)_defaultTextColor;
-(id)_newOptionsButton;
-(id)_preferredFontForAuxiliaryOptionsSummaryTextLabel;
-(id)_preferredFontForOptionButton;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_optionsSummaryMeasuringFrameForBounds:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_calculateOptionsSummaryLabelLayoutInfoForBoundsSize:(struct CGSize )arg0 ;
-(void)_configureAuxiliaryOptionsSummaryTextLabelIfNecessary;
-(void)_configureOverlayIfNecessary;
-(void)_layoutOptionsButtons;
-(void)_layoutOptionsSummaryLabel;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ;
-(void)_setDefaultAttributes;
-(void)_updateOverlayTintColor;
-(void)_updateTextAttributesForOptionButton:(id)arg0 ;
-(void)_updateTextAttributesForOptionsSummaryLabel;
-(void)layoutSubviews;


@end


#endif
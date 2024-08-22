// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCAUXILIARYOPTIONSVIEW_H
#define NCAUXILIARYOPTIONSVIEW_H

@class UIView, UILabel, NSStringDrawingContext, NSString, BSUIFontProvider, NSArray;
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
@property (nonatomic) BOOL auxiliaryOptionsVisible; // ivar: _auxiliaryOptionsVisible
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) BSUIFontProvider *fontProvider; // ivar: _fontProvider
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger numberOfOptionButtons;
@property (readonly, nonatomic) NSArray *optionButtons; // ivar: _optionButtons
@property (copy, nonatomic) NSString *optionsSummaryText;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (readonly) Class superclass;


-(BOOL)adjustForContentSizeCategoryChange;
-(CGFloat)_optionsButtonWidthForBounds:(struct CGRect )arg0 optionButtonsCount:(NSUInteger)arg1 ;
-(CGFloat)_optionsSummaryWidthForBounds:(struct CGRect )arg0 ;
-(NSUInteger)_summaryLabelNumberOfLinesForBoundsSize:(struct CGSize )arg0 ;
-(id)_newOptionsButton;
-(id)_preferredFontForOptionButton;
-(id)_preferredFontForOptionsSummaryTextLabel;
-(struct CGRect )_optionsSummaryMeasuringFrameForBounds:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_calculateOptionsSummaryLabelLayoutInfoForBoundsSize:(struct CGSize )arg0 ;
-(void)_configureOptionsButtonsWithCount:(NSUInteger)arg0 ;
-(void)_configureOptionsSummaryTextLabelIfNecessary;
-(void)_configureOverlayIfNecessary;
-(void)_layoutOptionsButtons;
-(void)_layoutOptionsSummaryLabel;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ;
-(void)_updateTextAttributesForOptionButton:(id)arg0 ;
-(void)_updateTextAttributesForOptionsSummaryLabel;
-(void)layoutSubviews;


@end


#endif
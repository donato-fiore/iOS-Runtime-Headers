// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLSUMMARYCONTENTVIEW_H
#define PLSUMMARYCONTENTVIEW_H

@class UIView, UIImageView, NSMutableDictionary, NSStringDrawingContext, MTVisualStylingProvider, NSString, BSUIFontProvider, UILabel, NSArray, BSUIEmojiLabelView, UIImage;
@protocol MTVisualStylingRequiring, PLContentSizeCategoryAdjusting;



@interface PLSummaryContentView : UIView <MTVisualStylingRequiring, PLContentSizeCategoryAdjusting>

 {
    UIEdgeInsets _contentInsets;
    UIView *_contentView;
    UIImageView *_thumbnailImageView;
    NSMutableDictionary *_widthToFontToStringToMeasuredNumLines;
    NSStringDrawingContext *_drawingContext;
    MTVisualStylingProvider *_visualStylingProvider;
}


@property (retain, nonatomic) UIView *accessoryView; // ivar: _accessoryView
@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) BSUIFontProvider *fontProvider; // ivar: _fontProvider
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger messageNumberOfLines;
@property (copy, nonatomic) NSString *preferredContentSizeCategory; // ivar: _preferredContentSizeCategory
@property (retain, nonatomic, getter=_primaryLabel, setter=_setPrimaryLabel:) UILabel *primaryLabel; // ivar: _primaryLabel
@property (retain, nonatomic, getter=_primarySubtitleLabel, setter=_setPrimarySubtitleLabel:) UILabel *primarySubtitleLabel; // ivar: _primarySubtitleLabel
@property (retain, nonatomic) NSString *primarySubtitleText;
@property (retain, nonatomic) NSString *primaryText;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (readonly, nonatomic, getter=_secondaryLabel) UILabel *secondaryLabel; // ivar: _secondaryLabel
@property (retain, nonatomic) NSString *secondaryText;
@property (retain, nonatomic, getter=_summaryLabel, setter=_setSummaryLabel:) BSUIEmojiLabelView *summaryLabel; // ivar: _summaryLabel
@property (retain, nonatomic) NSString *summaryText;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIImage *thumbnail;


-(BOOL)adjustForContentSizeCategoryChange;
-(CGFloat)_primaryTextBaselineOffsetWithBaseValue:(CGFloat)arg0 ;
-(CGFloat)_secondaryTextBaselineOffsetFromBottomWithBaseValue:(CGFloat)arg0 ;
-(CGFloat)_secondaryTextBaselineOffsetWithBaseValue:(CGFloat)arg0 ;
-(CGFloat)_summaryTextBaselineOffsetWithBaseValue:(CGFloat)arg0 ;
-(NSUInteger)_cachedNumberOfMeasuredLinesForText:(id)arg0 withFont:(id)arg1 forWidth:(CGFloat)arg2 ;
-(NSUInteger)_numberOfMeasuredLinesForText:(id)arg0 withFont:(id)arg1 forSize:(struct CGSize )arg2 ;
-(NSUInteger)_primarySubtitleTextMeasuredNumberOfLinesForWidth:(CGFloat)arg0 ;
-(NSUInteger)_primarySubtitleTextNumberOfLinesWithMeasuredNumberOfLines:(NSUInteger)arg0 ;
-(NSUInteger)_primaryTextMeasuredNumberOfLinesForWidth:(CGFloat)arg0 ;
-(NSUInteger)_primaryTextNumberOfLinesWithMeasuredNumberOfLines:(NSUInteger)arg0 ;
-(NSUInteger)_secondaryTextMeasuredNumberOfLinesForWidth:(CGFloat)arg0 ;
-(NSUInteger)_secondaryTextNumberOfLinesWithMeasuredNumberOfLines:(NSUInteger)arg0 ;
-(NSUInteger)_summaryTextMeasuredNumberOfLinesForWidth:(CGFloat)arg0 ;
-(NSUInteger)_summaryTextNumberOfLinesWithMeasuredNumberOfLines:(NSUInteger)arg0 ;
-(id)_lazyPrimaryLabel;
-(id)_lazyPrimarySubtitleLabel;
-(id)_lazySecondaryLabel;
-(id)_lazySecondaryTextSupportingView;
-(id)_lazySummaryLabel;
-(id)_lazyThumbnailImageView;
-(id)_newPrimaryLabel;
-(id)_newSecondaryLabel;
-(id)_newSummaryLabel;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)visualStylingProviderForCategory:(NSInteger)arg0 ;
-(struct CGRect )_frameForThumbnailInRect:(struct CGRect )arg0 ;
-(struct CGRect )_primaryLabelBoundsForSize:(struct CGSize )arg0 withContentInsets:(struct UIEdgeInsets )arg1 andNumberOfLines:(NSUInteger)arg2 ;
-(struct CGRect )_primarySubtitleLabelBoundsForSize:(struct CGSize )arg0 withContentInsets:(struct UIEdgeInsets )arg1 andNumberOfLines:(NSUInteger)arg2 ;
-(struct CGRect )_secondaryTextViewBoundsForSize:(struct CGSize )arg0 withContentInsets:(struct UIEdgeInsets )arg1 andNumberOfLines:(NSUInteger)arg2 ;
-(struct CGRect )_summaryLabelBoundsForSize:(struct CGSize )arg0 withContentInsets:(struct UIEdgeInsets )arg1 andNumberOfLines:(NSUInteger)arg2 ;
-(struct CGSize )_sizeThatFits:(struct CGSize )arg0 withContentInsets:(struct UIEdgeInsets )arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )_contentInsets;
-(struct UIEdgeInsets )_contentInsetsForLongLook;
-(struct UIEdgeInsets )_contentInsetsForShortLook;
-(void)_clearCacheForFont:(id)arg0 ;
-(void)_configureTextSupportingView:(id)arg0 ;
-(void)_invalidateNumberOfLinesCache;
-(void)_updateFontForSecondaryTextSupportingView:(id)arg0 ;
-(void)_updateStyleForPrimaryLabel:(id)arg0 ;
-(void)_updateStyleForSecondaryTextSupportingView:(id)arg0 ;
-(void)_updateStyleForSummaryLabel:(id)arg0 ;
-(void)_updateTextAttributesForLabel:(id)arg0 ;
-(void)_updateTextAttributesForPrimaryLabel:(id)arg0 ;
-(void)_updateTextAttributesForSummaryLabel:(id)arg0 ;
-(void)layoutSubviews;
-(void)setVisualStylingProvider:(id)arg0 forCategory:(NSInteger)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif
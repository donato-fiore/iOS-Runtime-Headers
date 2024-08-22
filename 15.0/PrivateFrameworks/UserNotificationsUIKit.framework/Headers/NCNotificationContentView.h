// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NCNOTIFICATIONCONTENTVIEW_H
#define NCNOTIFICATIONCONTENTVIEW_H

@class UIView, UIImageView, NSMutableDictionary, NSStringDrawingContext, MTVisualStylingProvider, NSDate, NSString, BSUIFontProvider, NSAttributedString, UIImageConfiguration, UILabel, UIImage, NSArray, UITextView, BSUIEmojiLabelView, NSTimeZone;
@protocol UITextViewDelegate, NCNotificationContentDisplaying, NCNotificationContentViewDelegate;



@interface NCNotificationContentView : UIView <UITextViewDelegate, NCNotificationContentDisplaying>

 {
    NSInteger _lookStyle;
    UIEdgeInsets _contentInsets;
    UIView *_contentView;
    UIImageView *_thumbnailImageView;
    NSMutableDictionary *_widthToFontToStringToMeasuredNumLines;
    NSStringDrawingContext *_drawingContext;
    MTVisualStylingProvider *_visualStylingProvider;
    BOOL _hasUpdatedContent;
}


@property (retain, nonatomic) UIView *accessoryView; // ivar: _accessoryView
@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (copy, nonatomic) NSDate *date;
@property (nonatomic, getter=isDateAllDay) BOOL dateAllDay;
@property (nonatomic) NSInteger dateFormatStyle;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NCNotificationContentViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) BSUIFontProvider *fontProvider; // ivar: _fontProvider
@property (copy, nonatomic) NSString *footerText;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSAttributedString *importantAttributedText;
@property (copy, nonatomic) NSString *importantText;
@property (readonly, copy, nonatomic) UIImageConfiguration *importantTextImageConfiguration;
@property (copy, nonatomic) MTVisualStylingProvider *importantTextVisualStylingProvider;
@property (nonatomic) NSUInteger maximumNumberOfPrimaryLargeTextLines; // ivar: _maximumNumberOfPrimaryLargeTextLines
@property (nonatomic) NSUInteger maximumNumberOfPrimaryTextLines; // ivar: _maximumNumberOfPrimaryTextLines
@property (nonatomic) NSUInteger maximumNumberOfSecondaryLargeTextLines; // ivar: _maximumNumberOfSecondaryLargeTextLines
@property (nonatomic) NSUInteger maximumNumberOfSecondaryTextLines; // ivar: _maximumNumberOfSecondaryTextLines
@property (copy, nonatomic) NSString *preferredContentSizeCategory; // ivar: _preferredContentSizeCategory
@property (retain, nonatomic, getter=_primaryLabel, setter=_setPrimaryLabel:) UILabel *primaryLabel; // ivar: _primaryLabel
@property (retain, nonatomic, getter=_primarySubtitleLabel, setter=_setPrimarySubtitleLabel:) UILabel *primarySubtitleLabel; // ivar: _primarySubtitleLabel
@property (copy, nonatomic) NSString *primarySubtitleText;
@property (copy, nonatomic) NSString *primaryText;
@property (copy, nonatomic) UIImage *prominentIcon;
@property (copy, nonatomic) UIView *prominentIconView;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (readonly, nonatomic, getter=_secondaryLabel) UILabel *secondaryLabel; // ivar: _secondaryLabel
@property (copy, nonatomic) NSString *secondaryText;
@property (readonly, nonatomic, getter=_secondaryTextView) UITextView *secondaryTextView; // ivar: _secondaryTextView
@property (copy, nonatomic) UIImage *subordinateIcon;
@property (retain, nonatomic, getter=_summaryLabel, setter=_setSummaryLabel:) BSUIEmojiLabelView *summaryLabel; // ivar: _summaryLabel
@property (copy, nonatomic) NSString *summaryText;
@property (readonly) Class superclass;
@property (copy, nonatomic) UIImage *thumbnail;
@property (nonatomic, getter=isThumbnailContactImage) BOOL thumbnailIsContactImage; // ivar: _thumbnailIsContactImage
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) BOOL useSmallTopMargin; // ivar: _useSmallTopMargin


-(BOOL)adjustForContentSizeCategoryChange;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(CGFloat)_primaryTextBaselineOffsetWithBaseValue:(CGFloat)arg0 ;
-(CGFloat)_secondaryTextBaselineOffsetFromBottomWithBaseValue:(CGFloat)arg0 ;
-(CGFloat)_secondaryTextBaselineOffsetWithBaseValue:(CGFloat)arg0 ;
-(CGFloat)_summaryTextBaselineOffsetWithBaseValue:(CGFloat)arg0 ;
-(CGFloat)topMarginToPrimaryLabelForCurrentStyle;
-(NSUInteger)_cachedNumberOfMeasuredLinesForText:(id)arg0 withFont:(id)arg1 forWidth:(CGFloat)arg2 scale:(CGFloat)arg3 ;
-(NSUInteger)_numberOfMeasuredLinesForText:(id)arg0 withFont:(id)arg1 forSize:(struct CGSize )arg2 ;
-(NSUInteger)_primarySubtitleTextMeasuredNumberOfLinesForWidth:(CGFloat)arg0 scale:(CGFloat)arg1 ;
-(NSUInteger)_primarySubtitleTextNumberOfLinesWithMeasuredNumberOfLines:(NSUInteger)arg0 ;
-(NSUInteger)_primaryTextMeasuredNumberOfLinesForWidth:(CGFloat)arg0 scale:(CGFloat)arg1 ;
-(NSUInteger)_primaryTextNumberOfLinesWithMeasuredNumberOfLines:(NSUInteger)arg0 ;
-(NSUInteger)_secondaryTextMeasuredNumberOfLinesForWidth:(CGFloat)arg0 scale:(CGFloat)arg1 ;
-(NSUInteger)_secondaryTextNumberOfLinesWithMeasuredNumberOfLines:(NSUInteger)arg0 ;
-(NSUInteger)_summaryTextMeasuredNumberOfLinesForWidth:(CGFloat)arg0 scale:(CGFloat)arg1 ;
-(NSUInteger)_summaryTextNumberOfLinesWithMeasuredNumberOfLines:(NSUInteger)arg0 ;
-(id)_lazyPrimaryLabel;
-(id)_lazyPrimarySubtitleLabel;
-(id)_lazySecondaryLabel;
-(id)_lazySecondaryTextSupportingView;
-(id)_lazySecondaryTextView;
-(id)_lazySummaryLabel;
-(id)_lazyThumbnailImageView;
-(id)_newPrimaryLabel;
-(id)_newSecondaryLabel;
-(id)_newSecondaryTextView;
-(id)_newSummaryLabel;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)visualStylingProviderForCategory:(NSInteger)arg0 ;
-(struct CGRect )_frameForThumbnailInRect:(struct CGRect )arg0 withContentViewInsets:(struct UIEdgeInsets )arg1 ;
-(struct CGRect )_primaryLabelBoundsForSize:(struct CGSize )arg0 withContentInsets:(struct UIEdgeInsets )arg1 andNumberOfLines:(NSUInteger)arg2 ;
-(struct CGRect )_primarySubtitleLabelBoundsForSize:(struct CGSize )arg0 withContentInsets:(struct UIEdgeInsets )arg1 andNumberOfLines:(NSUInteger)arg2 ;
-(struct CGRect )_secondaryTextViewBoundsForSize:(struct CGSize )arg0 withContentInsets:(struct UIEdgeInsets )arg1 andNumberOfLines:(NSUInteger)arg2 ;
-(struct CGRect )_summaryLabelBoundsForSize:(struct CGSize )arg0 withContentInsets:(struct UIEdgeInsets )arg1 andNumberOfLines:(NSUInteger)arg2 ;
-(struct CGSize )_sizeThatFits:(struct CGSize )arg0 withContentInsets:(struct UIEdgeInsets )arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )_contentInsets;
-(struct UIEdgeInsets )_contentInsetsForLongLook;
-(struct UIEdgeInsets )_contentInsetsForShortLook;
-(struct UIEdgeInsets )_contentInsetsForStyle:(NSInteger)arg0 ;
-(void)_clearCacheForFont:(id)arg0 ;
-(void)_configureTextSupportingView:(id)arg0 ;
-(void)_configureThumbnailAsContactImage:(BOOL)arg0 ;
-(void)_layoutSubviews;
-(void)_updateContentModeForThumbnailImage:(id)arg0 ;
-(void)_updateStyleForPrimaryLabel:(id)arg0 withStyle:(NSInteger)arg1 ;
-(void)_updateStyleForSecondaryTextSupportingView:(id)arg0 withStyle:(NSInteger)arg1 ;
-(void)_updateStyleForSummaryLabel:(id)arg0 withStyle:(NSInteger)arg1 ;
-(void)_updateStyleForThumbnailImage:(id)arg0 withStyle:(NSInteger)arg1 ;
-(void)_updateTextAttributesForPrimaryLabel:(id)arg0 withStyle:(NSInteger)arg1 ;
-(void)_updateTextAttributesForSecondaryTextSupportingView:(id)arg0 withStyle:(NSInteger)arg1 ;
-(void)_updateTextAttributesForSummaryLabel:(id)arg0 withStyle:(NSInteger)arg1 ;
-(void)layoutSubviews;
-(void)setVisualStylingProvider:(id)arg0 forCategory:(NSInteger)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif
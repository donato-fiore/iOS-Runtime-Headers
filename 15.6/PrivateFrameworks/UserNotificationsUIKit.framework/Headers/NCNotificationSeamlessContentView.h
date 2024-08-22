// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCNOTIFICATIONSEAMLESSCONTENTVIEW_H
#define NCNOTIFICATIONSEAMLESSCONTENTVIEW_H

@class UIView, UILabel, UIView<NCTextSupporting>, UILabel<BSUIDateLabel>, BSUIEmojiLabelView, UIImageView, MTVisualStylingProvider, NSDate, NSString, BSUIFontProvider, NSAttributedString, UIImageConfiguration, UIImage, NSArray, NSTimeZone;
@protocol BSUIDateLabelDelegate, UITextViewDelegate, NCNotificationContentDisplaying, NCNotificationSeamlessContentViewDelegate;


#import "NCBadgedIconView.h"

@interface NCNotificationSeamlessContentView : UIView <BSUIDateLabelDelegate, UITextViewDelegate, NCNotificationContentDisplaying>

 {
    UIView *_crossfadingContentView;
    UILabel *_primaryTextLabel;
    UILabel *_primarySubtitleTextLabel;
    UIView<NCTextSupporting> *_secondaryTextElement;
    UILabel *_importantTextLabel;
    UILabel *_footerTextLabel;
    UILabel<BSUIDateLabel> *_dateLabel;
    BSUIEmojiLabelView *_summaryTextLabel;
    NCBadgedIconView *_badgedIconView;
    UIImageView *_thumbnailImageView;
    MTVisualStylingProvider *_strokeVisualStylingProvider;
    BOOL _hasUpdatedContent;
}


@property (nonatomic, getter=isURLInteractionEnabled) BOOL URLInteractionEnabled; // ivar: _URLInteractionEnabled
@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (copy, nonatomic) NSDate *date; // ivar: _date
@property (nonatomic, getter=isDateAllDay) BOOL dateAllDay; // ivar: _dateAllDay
@property (nonatomic) NSInteger dateFormatStyle; // ivar: _dateFormatStyle
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NCNotificationSeamlessContentViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) BSUIFontProvider *fontProvider;
@property (copy, nonatomic) NSString *footerText;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHorizontalMarginPaddingDisabled) BOOL horizontalMarginPaddingDisabled; // ivar: _horizontalMarginPaddingDisabled
@property (copy, nonatomic) NSAttributedString *importantAttributedText;
@property (copy, nonatomic) NSString *importantText;
@property (readonly, copy, nonatomic) UIImageConfiguration *importantTextImageConfiguration;
@property (copy, nonatomic) MTVisualStylingProvider *importantTextVisualStylingProvider; // ivar: _importantTextVisualStylingProvider
@property (copy, nonatomic) NSString *preferredContentSizeCategory; // ivar: _preferredContentSizeCategory
@property (copy, nonatomic) NSString *primarySubtitleText;
@property (nonatomic) NSUInteger primarySubtitleTextMaximumNumberOfLines; // ivar: _primarySubtitleTextMaximumNumberOfLines
@property (copy, nonatomic) NSString *primaryText;
@property (nonatomic) NSUInteger primaryTextMaximumNumberOfLines; // ivar: _primaryTextMaximumNumberOfLines
@property (copy, nonatomic) UIImage *prominentIcon;
@property (copy, nonatomic) UIView *prominentIconView;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (copy, nonatomic) NSString *secondaryText;
@property (nonatomic) NSUInteger secondaryTextMaximumNumberOfLines; // ivar: _secondaryTextMaximumNumberOfLines
@property (copy, nonatomic) UIImage *subordinateIcon;
@property (copy, nonatomic) NSString *summaryText;
@property (readonly) Class superclass;
@property (copy, nonatomic) UIImage *thumbnail;
@property (nonatomic, getter=isThumbnailAlignedWithSecondaryText) BOOL thumbnailAlignedWithSecondaryText; // ivar: _thumbnailAlignedWithSecondaryText
@property (copy, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone
@property (readonly, nonatomic, getter=isTruncatingSecondaryText) BOOL truncatingSecondaryText; // ivar: _truncatingSecondaryText


+(id)_preferredFont:(BOOL)arg0 textStyle:(id)arg1 weight:(CGFloat)arg2 additionalTraits:(unsigned int)arg3 ;
-(BOOL)adjustForContentSizeCategoryChange;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)visualStylingProviderForCategory:(NSInteger)arg0 ;
-(struct CGRect )_textFrameForBounds:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureBadgeIconViewIfNecessary;
-(void)_configureCrossfadingContentViewIfNecessary;
-(void)_configureDateLabel;
-(void)_configureDateLabelIfNecessary;
-(void)_configureImportantTextLabelIfNecessary;
-(void)_configureSecondaryLabelIfNecessary;
-(void)_configureSecondaryTextElementIfNecessary;
-(void)_configureSecondaryTextViewIfNecessary;
-(void)_layoutSubviewInBounds:(struct CGRect )arg0 measuringOnly:(struct CGSize *)arg1 ;
-(void)_recycleDateLabel;
-(void)_tearDownDateLabel;
-(void)_updateVisualStylingOfImageView:(id)arg0 ifSymbolImageWithStyle:(NSInteger)arg1 visualStylingProvider:(id)arg2 outgoingProvider:(id)arg3 ;
-(void)_updateVisualStylingOfView:(id)arg0 style:(NSInteger)arg1 visualStylingProvider:(id)arg2 outgoingProvider:(id)arg3 ;
-(void)_visualStylingProviderDidChange:(id)arg0 forCategory:(NSInteger)arg1 outgoingProvider:(id)arg2 ;
-(void)dateLabelDidChange:(id)arg0 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)setVisualStylingProvider:(id)arg0 forCategory:(NSInteger)arg1 ;


@end


#endif
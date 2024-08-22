// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NCDIGESTFEATUREDNOTIFICATIONCONTENTVIEW_H
#define NCDIGESTFEATUREDNOTIFICATIONCONTENTVIEW_H

@class UIView, UILabel, UIImageView, MTVisualStylingProvider, NSStringDrawingContext, NSDate, NSString, BSUIFontProvider, NSAttributedString, UIImageConfiguration, UIImage, NSArray, NSTimeZone;
@protocol NCNotificationContentDisplaying;



@interface NCDigestFeaturedNotificationContentView : UIView <NCNotificationContentDisplaying>

 {
    UIView *_crossfadingContentView;
    UILabel *_primaryTextLabel;
    UILabel *_primarySubtitleTextLabel;
    UILabel *_secondaryTextLabel;
    UILabel *_footerTextLabel;
    UIView *_imageBoundingView;
    UIImageView *_thumbnailImageView;
    UIImageView *_iconImageView;
    MTVisualStylingProvider *_strokeVisualStylingProvider;
    NSStringDrawingContext *_drawingContext;
    BOOL _hasUpdatedContent;
}


@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (copy, nonatomic) NSDate *date;
@property (nonatomic, getter=isDateAllDay) BOOL dateAllDay;
@property (nonatomic) NSInteger dateFormatStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) BSUIFontProvider *fontProvider;
@property (copy, nonatomic) NSString *footerText;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSAttributedString *importantAttributedText;
@property (copy, nonatomic) NSString *importantText;
@property (readonly, copy, nonatomic) UIImageConfiguration *importantTextImageConfiguration;
@property (copy, nonatomic) MTVisualStylingProvider *importantTextVisualStylingProvider;
@property (readonly, nonatomic, getter=isLayoutHorizontal) BOOL layoutHorizontal;
@property (nonatomic) NSUInteger maximumNumberOfSecondaryTextLines; // ivar: _maximumNumberOfSecondaryTextLines
@property (copy, nonatomic) NSString *preferredContentSizeCategory; // ivar: _preferredContentSizeCategory
@property (copy, nonatomic) NSString *primarySubtitleText;
@property (copy, nonatomic) NSString *primaryText;
@property (copy, nonatomic) UIImage *prominentIcon;
@property (copy, nonatomic) UIView *prominentIconView;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (copy, nonatomic) NSString *secondaryText;
@property (copy, nonatomic) UIImage *subordinateIcon;
@property (copy, nonatomic) NSString *summaryText;
@property (readonly) Class superclass;
@property (copy, nonatomic) UIImage *thumbnail;
@property (copy, nonatomic) NSTimeZone *timeZone;


+(id)_preferredFont:(BOOL)arg0 textStyle:(id)arg1 weight:(CGFloat)arg2 additionalTraits:(unsigned int)arg3 ;
-(BOOL)_isAXSize;
-(BOOL)adjustForContentSizeCategoryChange;
-(CGFloat)_imageHeightForBounds:(struct CGRect )arg0 ;
-(NSUInteger)_maximumNumberOfLinesForFooterText;
-(NSUInteger)_maximumNumberOfLinesForPrimarySubtitleText;
-(NSUInteger)_maximumNumberOfLinesForPrimaryText;
-(NSUInteger)_maximumNumberOfLinesForSecondaryText;
-(NSUInteger)_numberOfLinesForFooterTextInFrame:(struct CGRect )arg0 ;
-(NSUInteger)_numberOfLinesForPrimarySubtitleTextInFrame:(struct CGRect )arg0 ;
-(NSUInteger)_numberOfLinesForPrimaryTextInFrame:(struct CGRect )arg0 ;
-(NSUInteger)_numberOfLinesForSecondaryTextInFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)visualStylingProviderForCategory:(NSInteger)arg0 ;
-(struct CGRect )_imageSizingRectForHorizontalLayoutForRect:(struct CGRect )arg0 ;
-(struct CGRect )_labelSizingRectForHorizontalLayoutForRect:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureCrossfadingContentViewIfNecessary;
-(void)_configureImageBoundingViewIfNecessary;
-(void)_layoutFooterTextLabel;
-(void)_layoutIconImageView;
-(void)_layoutImageBoundingView;
-(void)_layoutPrimarySubtitleTextLabel;
-(void)_layoutPrimaryTextLabel;
-(void)_layoutSecondaryTextLabel;
-(void)_layoutSubviews;
-(void)_layoutThumbnailImageView;
-(void)_updateVisualStylingOfImageView:(id)arg0 ifSymbolImageWithStyle:(NSInteger)arg1 visualStylingProvider:(id)arg2 outgoingProvider:(id)arg3 ;
-(void)_updateVisualStylingOfView:(id)arg0 style:(NSInteger)arg1 visualStylingProvider:(id)arg2 outgoingProvider:(id)arg3 ;
-(void)_visualStylingProviderDidChange:(id)arg0 forCategory:(NSInteger)arg1 outgoingProvider:(id)arg2 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)setVisualStylingProvider:(id)arg0 forCategory:(NSInteger)arg1 ;


@end


#endif
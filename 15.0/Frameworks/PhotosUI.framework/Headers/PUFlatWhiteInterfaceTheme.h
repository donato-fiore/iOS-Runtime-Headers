// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUFLATWHITEINTERFACETHEME_H
#define PUFLATWHITEINTERFACETHEME_H

@class UIColor, UIImage, UIFont, NSDictionary, NSString;
@protocol PUInterfaceTheme;

#import <Foundation/Foundation.h>


@interface PUFlatWhiteInterfaceTheme : NSObject <PUInterfaceTheme>



@property (readonly, nonatomic) UIColor *airPlayControllerBackgroundColor;
@property (readonly, nonatomic) UIColor *airPlayVideoPlaceholderBackgroundColor;
@property (readonly, nonatomic) UIImage *airPlayVideoPlaceholderIcon;
@property (readonly, nonatomic) UIColor *airPlayVideoPlaceholderIconTintColor;
@property (readonly, nonatomic) UIFont *airPlayVideoPlaceholderMessageFont;
@property (readonly, nonatomic) UIColor *airPlayVideoPlaceholderMessageTextColor;
@property (readonly, nonatomic) UIFont *airPlayVideoPlaceholderTitleFont;
@property (readonly, nonatomic) UIColor *airPlayVideoPlaceholderTitleTextColor;
@property (readonly, nonatomic) UIColor *albumBadgeInTitleColor;
@property (readonly, nonatomic) UIColor *albumCornersBackgroundColor;
@property (readonly, nonatomic) UIColor *albumListBackgroundColor;
@property (readonly, nonatomic) CGFloat albumListDisabledAlbumStackViewAlpha;
@property (readonly, nonatomic) CGFloat albumListDisabledAlbumTitleAlpha;
@property (readonly, nonatomic) UIFont *albumListSectionTitleLabelFont;
@property (readonly, nonatomic) UIFont *albumListSubtitleLabelFont;
@property (readonly, nonatomic) UIFont *albumListTitleLabelFont;
@property (readonly, nonatomic) UIColor *badgeOverThumbnailColor;
@property (readonly, nonatomic) UIColor *bannerBackgroundColor;
@property (readonly, nonatomic) CGFloat bannerHeight;
@property (readonly, nonatomic) UIColor *cloudFeedBackgroundColor;
@property (readonly, nonatomic) NSDictionary *cloudFeedDefaultTextAttributes;
@property (readonly, nonatomic) NSDictionary *cloudFeedEmphasizedTextAttributes;
@property (readonly, nonatomic) NSDictionary *cloudFeedInteractionLargerTextAttributes;
@property (readonly, nonatomic) NSDictionary *cloudFeedInteractionTextAttributes;
@property (readonly, nonatomic) NSDictionary *cloudFeedInvitationSubtitleTextAttributes;
@property (readonly, nonatomic) NSDictionary *cloudFeedInvitationTitleTextAttributes;
@property (readonly, nonatomic) NSDictionary *cloudFeedLargerDefaultTextAttributes;
@property (readonly, nonatomic) NSDictionary *cloudFeedLargerEmphasizedTextAttributes;
@property (readonly, nonatomic) UIImage *cloudFeedSectionHeaderBackgroundImage;
@property (readonly, nonatomic) UIColor *cloudFeedSeparatorColor;
@property (readonly, nonatomic) CGFloat cloudFeedSeparatorHeight;
@property (readonly, nonatomic) NSDictionary *cloudFeedWhiteDefaultTextAttributes;
@property (readonly, nonatomic) NSDictionary *cloudFeedWhiteEmphasizedTextAttributes;
@property (readonly, nonatomic) UIEdgeInsets commentsButtonTextInset;
@property (readonly, nonatomic) UIImage *compactLoadErrorIcon;
@property (readonly, nonatomic) UIEdgeInsets contentCommentsButtonImageInset;
@property (readonly, nonatomic) UIColor *contentCommentsHiddenButtonImageColor;
@property (readonly, nonatomic) NSDictionary *contentCommentsHiddenButtonTextAttributes;
@property (readonly, nonatomic) UIColor *contentCommentsShownButtonImageColor;
@property (readonly, nonatomic) NSDictionary *contentCommentsShownButtonTextAttributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIColor *folderCellBackgroundColor;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat padAlbumCornerRadius;
@property (readonly, nonatomic) CGFloat phoneAlbumCornerRadius;
@property (readonly, nonatomic) NSInteger photoBrowserBarStyle;
@property (readonly, nonatomic) UIColor *photoBrowserChromeHiddenBackgroundColor;
@property (readonly, nonatomic) UIColor *photoBrowserChromeVisibleBackgroundColor;
@property (readonly, nonatomic) UIFont *photoBrowserPhotoPrimaryTitleFont;
@property (readonly, nonatomic) UIFont *photoBrowserPhotoSubtitleFont;
@property (readonly, nonatomic) UIColor *photoBrowserSpotlightThemeColor;
@property (readonly, nonatomic) NSInteger photoBrowserStatusBarStyle;
@property (readonly, nonatomic) UIFont *photoBrowserTimeTitleFont;
@property (readonly, nonatomic) UIColor *photoBrowserTitleViewTappableTextColor;
@property (readonly, nonatomic) UIColor *photoBrowserTitleViewTextColor;
@property (readonly, nonatomic) CGFloat photoCollectionToolbarIconToTextSpacerWidth;
@property (readonly, nonatomic) CGFloat photoCollectionToolbarTextTitleSpacerWidth;
@property (readonly, nonatomic) UIColor *photoCollectionViewBackgroundColor;
@property (readonly, nonatomic) int photoCollectionViewBackgroundColorValue;
@property (readonly, nonatomic) UIColor *photoEditingActiveFilterTitleColor;
@property (readonly, nonatomic) UIColor *photoEditingAdjustmentsBarBackgroundColor;
@property (readonly, nonatomic) UIColor *photoEditingAdjustmentsBarCurrentPositionMarkerColor;
@property (readonly, nonatomic) UIColor *photoEditingAdjustmentsBarDisabledColor;
@property (readonly, nonatomic) UIColor *photoEditingAdjustmentsBarHighlightColor;
@property (readonly, nonatomic) UIColor *photoEditingAdjustmentsBarMainColor;
@property (readonly, nonatomic) UIColor *photoEditingAdjustmentsBarOriginalPositionMarkerColor;
@property (readonly, nonatomic) UIColor *photoEditingAdjustmentsBarPlayheadColor;
@property (readonly, nonatomic) UIColor *photoEditingAdjustmentsBarSuggestedMarkerColor;
@property (readonly, nonatomic) UIColor *photoEditingAdjustmentsModeLabelColor;
@property (readonly, nonatomic) UIFont *photoEditingAdjustmentsModeLabelFont;
@property (readonly, nonatomic) UIFont *photoEditingAdjustmentsModePickerFont;
@property (readonly, nonatomic) UIColor *photoEditingAdjustmentsModePickerValueColor;
@property (readonly, nonatomic) UIFont *photoEditingAdjustmentsModePickerValueFont;
@property (readonly, nonatomic) UIColor *photoEditingAdjustmentsToolBackgroundColor;
@property (readonly, nonatomic) UIColor *photoEditingAutoEnhanceDisabledColor;
@property (readonly, nonatomic) UIColor *photoEditingAutoEnhanceEnabledColor;
@property (readonly, nonatomic) UIColor *photoEditingBackgroundColor;
@property (readonly, nonatomic) UIColor *photoEditingCropTiltWheelColor;
@property (readonly, nonatomic) UIFont *photoEditingCropTiltWheelFont;
@property (readonly, nonatomic) UIColor *photoEditingCropToggleButtonColor;
@property (readonly, nonatomic) UIFont *photoEditingCropToggleButtonFont;
@property (readonly, nonatomic) UIColor *photoEditingDepthBadgeDisabledColor;
@property (readonly, nonatomic) UIColor *photoEditingDepthBadgeDisabledTextColor;
@property (readonly, nonatomic) UIColor *photoEditingDepthBadgeEnabledColor;
@property (readonly, nonatomic) UIColor *photoEditingDepthBadgeEnabledTextColor;
@property (readonly, nonatomic) UIColor *photoEditingDepthButtonDisabledColor;
@property (readonly, nonatomic) UIColor *photoEditingDepthButtonEnabledColor;
@property (readonly, nonatomic) UIFont *photoEditingFilterTitleFont;
@property (readonly, nonatomic) UIColor *photoEditingInactiveFilterTitleColor;
@property (readonly, nonatomic) UIColor *photoEditingIrisDisabledColor;
@property (readonly, nonatomic) UIColor *photoEditingIrisEnabledColor;
@property (readonly, nonatomic) UIColor *photoEditingKeyPhotoSelectionNormalColor;
@property (readonly, nonatomic) UIColor *photoEditingOverlayBadgeBackgroundColor;
@property (readonly, nonatomic) UIColor *photoEditingOverlayBadgeColor;
@property (readonly, nonatomic) UIFont *photoEditingOverlayBadgeFont;
@property (readonly, nonatomic) UIColor *photoEditingPopoverBackgroundColor;
@property (readonly, nonatomic) UIColor *photoEditingToolButtonColor;
@property (readonly, nonatomic) UIColor *photoEditingToolbarButtonColor;
@property (readonly, nonatomic) UIFont *photoEditingToolbarButtonCompactFont;
@property (readonly, nonatomic) UIFont *photoEditingToolbarButtonNormalFont;
@property (readonly, nonatomic) UIColor *photoEditingToolbarButtonSelectedColor;
@property (readonly, nonatomic) UIColor *photoEditingToolbarDarkGradientEndColor;
@property (readonly, nonatomic) UIColor *photoEditingToolbarDarkGradientStartColor;
@property (readonly, nonatomic) UIColor *photoEditingToolbarDestructiveButtonColor;
@property (readonly, nonatomic) UIColor *photoEditingToolbarLightGradientEndColor;
@property (readonly, nonatomic) UIColor *photoEditingToolbarLightGradientStartColor;
@property (readonly, nonatomic) UIColor *photoEditingToolbarMainButtonColor;
@property (readonly, nonatomic) UIColor *photoEditingToolbarSecondaryButtonColor;
@property (readonly, nonatomic) UIColor *photoEditingToolbarUltralightGradientEndColor;
@property (readonly, nonatomic) UIColor *photoEditingToolbarUltralightGradientStartColor;
@property (readonly, nonatomic) UIColor *photoEditingToolbarUnderlineColor;
@property (readonly, nonatomic) UIColor *photoEditingTooltipColor;
@property (readonly, nonatomic) UIFont *photoEditingTooltipFont;
@property (readonly, nonatomic) UIColor *placeholderCellBackgroundColor;
@property (readonly, nonatomic) UIColor *playbackTimeLabelBackgroundColor;
@property (readonly, nonatomic) UIFont *playbackTimeLabelFont;
@property (readonly, nonatomic) UIColor *playheadBackgroundColor;
@property (readonly, nonatomic) UIColor *playheadColor;
@property (readonly, nonatomic) UIColor *playheadOutlineColor;
@property (readonly, nonatomic) UIImage *regularLoadErrorIcon;
@property (readonly, nonatomic) UIColor *scrubberPlaceholderColor;
@property (readonly, nonatomic) UIFont *searchItalicTitleLabelFont;
@property (readonly, nonatomic) UIFont *searchRecentLabelFont;
@property (readonly, nonatomic) UIColor *searchRecentLabelTextColor;
@property (readonly, nonatomic) UIFont *searchResultCountLabelFont;
@property (readonly, nonatomic) UIColor *searchResultCountTextColor;
@property (readonly, nonatomic) CGFloat searchSingleTitleBottomBaselineDistance;
@property (readonly, nonatomic) CGFloat searchSingleTitleTopBaselineDistance;
@property (readonly, nonatomic) CGFloat searchSubtitleBottomBaselineDistance;
@property (readonly, nonatomic) UIFont *searchSubtitleLabelFont;
@property (readonly, nonatomic) UIColor *searchSubtitleTextColor;
@property (readonly, nonatomic) UIFont *searchTitleLabelFont;
@property (readonly, nonatomic) CGFloat searchTitleSubtitleBaselineDistance;
@property (readonly, nonatomic) CGFloat searchTitleTopBaselineDistance;
@property (readonly, nonatomic) NSDictionary *sectionHeaderNotTappableTextAttributes;
@property (readonly, nonatomic) UIFont *sharedAlbumCommentCardAlbumTitleFont;
@property (readonly, nonatomic) UIFont *sharedAlbumCommentCardButtonFont;
@property (readonly, nonatomic) UIFont *sharedAlbumCommentCardTextFont;
@property (readonly, nonatomic) UIFont *sharedAlbumCommentCardTitleFont;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDictionary *textBlockBelowArtSubTitleTextAttributes;
@property (readonly, nonatomic) NSDictionary *textBlockBelowArtTitleEmphasizedTextAttributes;
@property (readonly, nonatomic) NSDictionary *textBlockBelowArtTitleTextAttributes;
@property (readonly, nonatomic) UIColor *toolbarAirPlayButtonColor;
@property (readonly, nonatomic) UIColor *toolbarCommentsHiddenButtonImageColor;
@property (readonly, nonatomic) NSDictionary *toolbarCommentsHiddenButtonTextAttributes;
@property (readonly, nonatomic) UIColor *toolbarCommentsShownButtonImageColor;
@property (readonly, nonatomic) NSDictionary *toolbarCommentsShownButtonTextAttributes;
@property (readonly, nonatomic) UIColor *topLevelNavigationBarButtonTintColor;
@property (readonly, nonatomic) NSInteger topLevelStatusBarStyle;
@property (readonly, nonatomic) UIColor *topToolbarToolLabelButtonColor;
@property (readonly, nonatomic) UIFont *topToolbarToolLabelFont;
@property (readonly, nonatomic) UIColor *videoEditingBackgroundColor;
@property (readonly, nonatomic) UIFont *videoEditingToolbarButtonNormalFont;
@property (readonly, nonatomic) UIColor *videoEditingToolbarDestructiveButtonColor;
@property (readonly, nonatomic) UIColor *videoEditingToolbarMainButtonColor;
@property (readonly, nonatomic) UIColor *videoEditingToolbarSecondaryButtonColor;
@property (readonly, nonatomic) UIColor *videoEditingToolbarToolButtonColor;
@property (readonly, nonatomic) CGFloat videoPaletteBottomMargin;
@property (readonly, nonatomic) CGFloat videoPaletteSideMargin;
@property (readonly, nonatomic) UIColor *videoScrubberTileBackgroundColor;


-(NSInteger)photoCollectionCloudQuotaBannerTextAlignment;
-(id)_commentsFont;
-(id)_fontDescriptorWithTextStyle:(id)arg0 addingSymbolicTraits:(unsigned int)arg1 ;
-(id)_themeImageWithBaseName:(id)arg0 ;
-(id)attributedStringForCloudFeedGroupHeaderWithText:(id)arg0 ;
-(id)commentsButtonStringForCount:(NSInteger)arg0 ;
-(id)createCloudFeedCommentButton;
-(id)photoCollectionCloudQuotaBannerBackgroundColorHighlighted:(BOOL)arg0 ;
-(id)photoCollectionCloudQuotaBannerFont;
-(id)photoCollectionCloudQuotaBannerLinkTextColorHighlighted:(BOOL)arg0 ;
-(id)photoCollectionCloudQuotaBannerLinkTextFont;
-(id)photoCollectionCloudQuotaBannerTextColorHighlighted:(BOOL)arg0 ;
-(id)searchDefaultAttributes;
-(id)searchDimmedAttributes;
-(id)searchItalicTitleAttributes;
-(id)searchTitleDimmedTextColor;
-(id)searchTitleLabelHighlightedFont;
-(id)searchTitleTextColor;
-(id)themeImagePrefix;
-(id)tintColorForBarStyle:(NSInteger)arg0 ;
-(id)topLevelNavigationBarBackButtonBackgroundImageForState:(NSUInteger)arg0 barMetrics:(NSInteger)arg1 ;
-(id)topLevelNavigationBarButtonBackgroundImageForState:(NSUInteger)arg0 barMetrics:(NSInteger)arg1 ;
-(id)topLevelNavigationBarButtonTitleTextAttributesForState:(NSUInteger)arg0 ;
-(id)topLevelNavigationBarDoneButtonBackgroundImageForState:(NSUInteger)arg0 barMetrics:(NSInteger)arg1 ;
-(id)topLevelNavigationBarDoneButtonTitleTextAttributesForState:(NSUInteger)arg0 ;
-(struct NSDirectionalEdgeInsets )photoCollectionCloudQuotaBannerTextMargins;
-(struct UIOffset )topLevelNavigationBarButtonTitlePositionAdjustmentforBarMetrics:(NSInteger)arg0 ;
-(void)configureAlbumListSectionTitleLabel:(id)arg0 ;
-(void)configureAlbumListStackViewPhonePhotoDecoration:(id)arg0 ;
-(void)configureAlbumListSubtitleLabel:(id)arg0 asOpaque:(BOOL)arg1 ;
-(void)configureAlbumListTitleLabel:(id)arg0 asOpaque:(BOOL)arg1 ;
-(void)configureAlbumListTitleTextField:(id)arg0 asOpaque:(BOOL)arg1 ;
-(void)configureBannerLabel:(id)arg0 ;
-(void)configureBannerStackView:(id)arg0 ;
-(void)configureCloudFeedCommentButton:(id)arg0 withCount:(NSInteger)arg1 ;
-(void)configureCloudFeedGroupHeaderTextCell:(id)arg0 contentInsets:(struct UIEdgeInsets )arg1 withText:(id)arg2 ;
-(void)configureCloudFeedInvitationReplyButton:(id)arg0 ;
-(void)configureCloudFeedSectionHeaderTextCell:(id)arg0 contentInsets:(struct UIEdgeInsets )arg1 descriptionAttributedText:(id)arg2 detailAttributedText:(id)arg3 ;
-(void)configureCloudFeedStackView:(id)arg0 withStackSize:(struct CGSize )arg1 ;
-(void)configureCompactProgressIndicatorMessageLabel:(id)arg0 ;
-(void)configureEditPluginListCellLabel:(id)arg0 ;
-(void)configureEditPluginListNavigationController:(id)arg0 ;
-(void)configureEditPluginNavigationController:(id)arg0 ;
-(void)configureEditPluginUserDefaultsAccessorySwitch:(id)arg0 ;
-(void)configureEditPluginUserDefaultsCell:(id)arg0 withIcon:(id)arg1 title:(id)arg2 ;
-(void)configureEditPluginUserDefaultsTableView:(id)arg0 ;
-(void)configureMapViewAnnotationCountLabel:(id)arg0 ;
-(void)configureProgressIndicatorMessageLabel:(id)arg0 ;
-(void)configureSearchResultCountLabel:(id)arg0 ;
-(void)configureSearchSubtitleLabel:(id)arg0 ;
-(void)configureSearchTitleLabel:(id)arg0 ;


@end


#endif
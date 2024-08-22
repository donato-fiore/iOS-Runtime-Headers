// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNFREGAPPEARANCECONTROLLER_H
#define CNFREGAPPEARANCECONTROLLER_H

@class UIColor, UIImage, UIView, UIFont;

#import <Foundation/Foundation.h>


@interface CNFRegAppearanceController : NSObject

@property (readonly, nonatomic) BOOL actionSheetsUsePopoverStyle;
@property (readonly, nonatomic) UIColor *customBackgroundColor;
@property (readonly, nonatomic) BOOL firstNavigationBarHidden;
@property (readonly, nonatomic) NSInteger keyboardAppearance;
@property (readonly, retain, nonatomic) UIImage *learnMoreArrowImage;
@property (readonly, retain, nonatomic) UIImage *learnMoreArrowImagePressed;
@property (readonly, nonatomic) BOOL learnMoreButtonDrawsUnderline;
@property (readonly, retain, nonatomic) UIColor *learnMoreShadowColor;
@property (readonly, retain, nonatomic) UIColor *learnMoreTextColor;
@property (readonly, retain, nonatomic) UIColor *learnMoreTextColorSelected;
@property (readonly, nonatomic) NSInteger modalPresentationStyle;
@property (readonly, nonatomic) NSInteger navigationBarActivityIndicatorStyle;
@property (readonly, retain, nonatomic) UIImage *navigationBarBackgroundImage;
@property (readonly, nonatomic) BOOL navigationBarHidesShadow;
@property (readonly, nonatomic) BOOL navigationBarHidesTitle;
@property (readonly, nonatomic) BOOL navigationBarIsTranslucent;
@property (readonly, nonatomic) NSInteger navigationBarStyle;
@property (readonly, retain, nonatomic) UIColor *navigationBarTintColor;
@property (readonly, nonatomic) BOOL navigationBarTranslucent;
@property (readonly, nonatomic) UIColor *searchResultsTableSeparatorBottomShadowColor;
@property (readonly, nonatomic) UIColor *searchResultsTableSeparatorColor;
@property (readonly, nonatomic) NSInteger searchResultsTableSeparatorStyle;
@property (readonly, nonatomic) UIColor *searchResultsTableSeparatorTopShadowColor;
@property (readonly, retain, nonatomic) UIColor *splashEntryFieldLabelTextColor;
@property (readonly, retain, nonatomic) UIColor *splashEntryFieldTextColor;
@property (readonly, retain, nonatomic) UIColor *splashEntryPlaceholderTextColor;
@property (readonly, nonatomic) BOOL splashScreenShowsIcon;
@property (readonly, retain, nonatomic) UIColor *splashSignInFieldsBackgroundColor;
@property (readonly, retain, nonatomic) UIColor *splashSignInFieldsBorderColor;
@property (readonly, nonatomic) NSInteger splashSignInProgressIndicatorColor;
@property (readonly, retain, nonatomic) UIColor *splashTitleLabelTextColor;
@property (readonly, nonatomic) BOOL styleUsesCustomAccessoryView;
@property (readonly, nonatomic) BOOL styleUsesCustomSearchResultsStyle;
@property (readonly, nonatomic) BOOL styleUsesCustomSeparatorStyle;
@property (readonly, nonatomic) BOOL styleUsesCustomTableStyle;
@property (readonly, retain, nonatomic) UIColor *tableBackgroundColor;
@property (readonly, retain, nonatomic) UIColor *tableCellBackgroundColor;
@property (readonly, retain, nonatomic) UIImage *tableCellButtonImage;
@property (readonly, retain, nonatomic) UIImage *tableCellButtonImageSelected;
@property (readonly, retain, nonatomic) UIImage *tableCellCheckmarkImage;
@property (readonly, retain, nonatomic) UIImage *tableCellCheckmarkImageDisabled;
@property (readonly, retain, nonatomic) UIImage *tableCellCheckmarkImageSelected;
@property (readonly, retain, nonatomic) UIView *tableCellCustomAccessoryViewDisclosureIndicator;
@property (readonly, retain, nonatomic) UIColor *tableCellDetailLabelBackgroundColor;
@property (readonly, retain, nonatomic) UIColor *tableCellDetailLabelColor;
@property (readonly, retain, nonatomic) UIColor *tableCellEditableInsertionPointColor;
@property (readonly, retain, nonatomic) UIColor *tableCellEditableTextColor;
@property (readonly, retain, nonatomic) UIImage *tableCellEditableTextFieldClearButton;
@property (readonly, retain, nonatomic) UIImage *tableCellEditableTextFieldClearButtonPressed;
@property (readonly, retain, nonatomic) UIColor *tableCellEditableTextPlaceholderColor;
@property (readonly, retain, nonatomic) UIColor *tableCellTextLabelBackgroundColor;
@property (readonly, retain, nonatomic) UIColor *tableCellTextLabelColor;
@property (readonly, retain, nonatomic) UIFont *tableFooterFont;
@property (readonly, nonatomic) NSInteger tableFooterTextAlignment;
@property (readonly, retain, nonatomic) UIColor *tableFooterTextColor;
@property (readonly, retain, nonatomic) UIFont *tableHeaderFont;
@property (readonly, nonatomic) NSInteger tableHeaderTextAlignment;
@property (readonly, retain, nonatomic) UIColor *tableHeaderTextColor;
@property (readonly, retain, nonatomic) UIColor *tableHeaderTextColorSelected;
@property (readonly, retain, nonatomic) UIColor *tableHeaderTextShadowColor;
@property (readonly, nonatomic) CGSize tableHeaderTextShadowOffset;
@property (readonly, retain, nonatomic) UIColor *tableSectionBorderColor;
@property (readonly, retain, nonatomic) UIImage *tableSectionShadowImage;
@property (readonly, nonatomic) UIColor *tableSeparatorBottomShadowColor;
@property (readonly, nonatomic) UIColor *tableSeparatorColor;
@property (readonly, nonatomic) NSInteger tableSeparatorStyle;
@property (readonly, nonatomic) UIColor *tableSeparatorTopShadowColor;
@property (readonly, nonatomic) UIColor *userInteractionColor;
@property (readonly, retain, nonatomic) UIColor *webViewBackgroundColor;
@property (readonly, retain, nonatomic) UIView *webViewBackgroundView;
@property (readonly, nonatomic) BOOL webViewDrawsShadows;
@property (readonly, nonatomic) BOOL webViewIsOpaque;


+(id)appearanceControllerForStyle:(NSInteger)arg0 ;
+(id)defaultAppearanceController;
+(id)globalAppearanceController;
+(id)gradientAppearanceController;
+(id)modernAppearanceController;
+(id)modernTransparentDarkAppearanceController;
+(id)modernTransparentLightAppearanceController;
+(id)stripedAppearanceController;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTLISTSTYLEDEFAUTPROVIDER_H
#define CNCONTACTLISTSTYLEDEFAUTPROVIDER_H

@class UIColor, UIFont;
@protocol CNContactListStyle;

#import <Foundation/Foundation.h>


@interface CNContactListStyleDefautProvider : NSObject <CNContactListStyle>



@property (readonly, nonatomic) UIColor *bannerTitleTextColor;
@property (readonly, nonatomic) UIColor *cellBackgroundColor;
@property (readonly, nonatomic) UIColor *cellBackgroundSelectedColor;
@property (readonly, nonatomic) UIColor *cellBlueSelectionSecondaryTextColor;
@property (readonly, nonatomic) BOOL cellIsOpaque;
@property (readonly, nonatomic) BOOL cellIsVibrant;
@property (readonly, nonatomic) UIColor *cellNameTextColor;
@property (readonly, nonatomic) UIFont *cellNameTextEmphasisedFont;
@property (readonly, nonatomic) UIFont *cellNameTextFont;
@property (readonly, nonatomic) UIColor *cellNameTextHighlightedColor;
@property (readonly, nonatomic) UIColor *cellNameTextHighlightedLightColor;
@property (readonly, nonatomic) UIColor *cellSearchBackgroundColor;
@property (readonly, nonatomic) UIColor *cellSearchResultTextColor;
@property (readonly, nonatomic) UIColor *cellSearchResultTextDisabledColor;
@property (readonly, nonatomic) UIColor *headerBackgroundColor;
@property (readonly, nonatomic) UIColor *headerIndexTextColor;
@property (readonly, nonatomic) BOOL navigationBarIsTranslucent;
@property (readonly, nonatomic) NSInteger navigationBarStyle;
@property (readonly, nonatomic) UIColor *searchBarBackgroundColor;
@property (readonly, nonatomic) BOOL searchBarIsTranslucent;
@property (readonly, nonatomic) NSInteger searchBarKeyboardAppearance;
@property (readonly, nonatomic) UIColor *searchBarPlaceholderTextColor;
@property (readonly, nonatomic) UIColor *searchBarPlaceholderTextDisabledColor;
@property (readonly, nonatomic) NSInteger searchBarStyle;
@property (readonly, nonatomic) UIColor *searchBarTextColor;
@property (readonly, nonatomic) UIColor *searchBarTextDisabledColor;
@property (readonly, nonatomic) UIColor *tableBackgroundColor;
@property (readonly, nonatomic) UIColor *tableBackgroundFilteredColor;
@property (readonly, nonatomic) BOOL tableIsOpaque;
@property (readonly, nonatomic) NSUInteger tableNoContactsAvailableStyle;
@property (readonly, nonatomic) UIColor *tableSectionIndexBackgroundColor;
@property (readonly, nonatomic) UIColor *tableSeparatorColor;
@property (readonly, nonatomic) NSInteger tableSeparatorOverlayBlendMode;
@property (readonly, nonatomic) NSInteger tableSeparatorStyle;
@property (readonly, nonatomic) BOOL usesInsetPlatterStyle;




@end


#endif
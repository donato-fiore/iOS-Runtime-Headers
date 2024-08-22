// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNCONTACTLISTSTYLEWRAPPERPROVIDER_H
#define CNCONTACTLISTSTYLEWRAPPERPROVIDER_H



#import "CNContactListStyleDefautProvider.h"
#import "CNContactStyle.h"

@interface CNContactListStyleWrapperProvider : CNContactListStyleDefautProvider

@property (readonly, nonatomic) CNContactStyle *contactStyle; // ivar: _contactStyle


-(BOOL)cellIsOpaque;
-(BOOL)cellIsVibrant;
-(BOOL)navigationBarIsTranslucent;
-(BOOL)searchBarIsTranslucent;
-(BOOL)tableIsOpaque;
-(BOOL)usesInsetPlatterStyle;
-(NSInteger)navigationBarStyle;
-(NSInteger)searchBarKeyboardAppearance;
-(NSInteger)searchBarStyle;
-(NSInteger)tableSeparatorOverlayBlendMode;
-(NSInteger)tableSeparatorStyle;
-(NSUInteger)tableNoContactsAvailableStyle;
-(id)bannerTitleTextColor;
-(id)cellBackgroundColor;
-(id)cellBackgroundSelectedColor;
-(id)cellBlueSelectionSecondaryTextColor;
-(id)cellNameTextColor;
-(id)cellNameTextEmphasisedFont;
-(id)cellNameTextFont;
-(id)cellNameTextHighlightedColor;
-(id)cellSearchBackgroundColor;
-(id)cellSearchResultTextColor;
-(id)cellSearchResultTextDisabledColor;
-(id)headerBackgroundColor;
-(id)headerIndexTextColor;
-(id)initWithContactStyle:(id)arg0 ;
-(id)searchBarBackgroundColor;
-(id)searchBarPlaceholderTextColor;
-(id)searchBarPlaceholderTextDisabledColor;
-(id)searchBarTextColor;
-(id)searchBarTextDisabledColor;
-(id)tableBackgroundColor;
-(id)tableBackgroundFilteredColor;
-(id)tableSectionIndexBackgroundColor;
-(id)tableSeparatorColor;
-(struct UIEdgeInsets )cellSeparatorInset;


@end


#endif
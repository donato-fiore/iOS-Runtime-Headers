// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCONTACTLISTSTYLEAPPLIER_H
#define CNCONTACTLISTSTYLEAPPLIER_H

@protocol CNContactListStyle;

#import <Foundation/Foundation.h>


@interface CNContactListStyleApplier : NSObject

@property (readonly, nonatomic) CGFloat cellEstimatedHeight;
@property (readonly, nonatomic) NSObject<CNContactListStyle> *contactListStyle; // ivar: _contactListStyle
@property (readonly, nonatomic) NSUInteger tableNoContactsAvailableStyle;
@property (readonly, nonatomic) BOOL usesInsetPlatterStyle;


+(void)applyDefaultStyleToContact:(id)arg0 usingFormatter:(id)arg1 ofCell:(id)arg2 ;
-(id)initWithContactListStyle:(id)arg0 ;
-(void)applyContactListStyleToBannerFootnote:(id)arg0 primaryAppearance:(BOOL)arg1 ;
-(void)applyContactListStyleToBannerTitle:(id)arg0 primaryAppearance:(BOOL)arg1 ;
-(void)applyContactListStyleToCell:(id)arg0 ;
-(void)applyContactListStyleToContact:(id)arg0 usingFormatter:(id)arg1 ofCell:(id)arg2 ;
-(void)applyContactListStyleToEmergencyIcon:(id)arg0 ofCell:(id)arg1 ;
-(void)applyContactListStyleToHeaderFooter:(id)arg0 ;
-(void)applyContactListStyleToMeContactLabel:(id)arg0 ofCell:(id)arg1 ;
-(void)applyContactListStyleToNavigationBar:(id)arg0 ;
-(void)applyContactListStyleToSearchBar:(id)arg0 ;
-(void)applyContactListStyleToSearchCell:(id)arg0 ;
-(void)applyContactListStyleToSearchHeader:(id)arg0 withTitle:(id)arg1 ;
-(void)applyContactListStyleToTableView:(id)arg0 ;
-(void)applyContactListStyleToText:(id)arg0 ofHighlightedCell:(id)arg1 ;
-(void)applyContactListStyleToText:(id)arg0 ofSearchResultCell:(id)arg1 ;
-(void)applyContactListStyleToText:(id)arg0 ofSearchResultCell:(id)arg1 withColor:(id)arg2 highlightColor:(id)arg3 ;
-(void)applyContactListStyleToText:(id)arg0 ofUnhighlightedCell:(id)arg1 ;
-(void)applyDefaultTextColorsToContactListCell:(id)arg0 ;
-(void)applyLightTextColorsToContactListCell:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTLISTSTYLEAPPLIER_H
#define CNCONTACTLISTSTYLEAPPLIER_H

@protocol CNContactListStyle;

#import <Foundation/Foundation.h>


@interface CNContactListStyleApplier : NSObject

@property (readonly, nonatomic) CGFloat cellEstimatedHeight;
@property (readonly, nonatomic) NSObject<CNContactListStyle> *contactListStyle; // ivar: _contactListStyle
@property (readonly, nonatomic) NSUInteger tableNoContactsAvailableStyle;
@property (readonly, nonatomic) BOOL usesInsetPlatterStyle;


+(void)applyDefaultContactListStyleToHeaderFooter:(id)arg0 withTitle:(id)arg1 isRTL:(BOOL)arg2 ;
+(void)applyDefaultStyleToContact:(id)arg0 usingFormatter:(id)arg1 ofCell:(id)arg2 ;
-(id)attributedString:(id)arg0 foregroundColor:(id)arg1 ;
-(id)defaultListContentConfiguration;
-(id)initWithContactListStyle:(id)arg0 ;
-(void)applyCellSeparatorInsetStyleToConfiguration:(id)arg0 superviewDirectionalLayoutMargins:(struct NSDirectionalEdgeInsets )arg1 itemWantsFullLengthBottomSeparator:(BOOL)arg2 ;
-(void)applyContactListDirectionalLayoutMargins:(struct NSDirectionalEdgeInsets )arg0 toLayoutSection:(id)arg1 collectionViewIsShowingIndexBar:(BOOL)arg2 ;
-(void)applyContactListStyleToBannerFootnote:(id)arg0 primaryAppearance:(BOOL)arg1 ;
-(void)applyContactListStyleToBannerTitle:(id)arg0 primaryAppearance:(BOOL)arg1 ;
-(void)applyContactListStyleToCell:(id)arg0 ;
-(void)applyContactListStyleToCollectionLayoutConfiguration:(id)arg0 ;
-(void)applyContactListStyleToCollectionView:(id)arg0 ;
-(void)applyContactListStyleToContact:(id)arg0 usingFormatter:(id)arg1 ofCell:(id)arg2 ;
-(void)applyContactListStyleToContentConfiguration:(id)arg0 usingState:(id)arg1 forCell:(id)arg2 ;
-(void)applyContactListStyleToEmergencyIcon:(id)arg0 ofCell:(id)arg1 ;
-(void)applyContactListStyleToHeaderFooter:(id)arg0 withTitle:(id)arg1 isRTL:(BOOL)arg2 ;
-(void)applyContactListStyleToMeContactLabel:(id)arg0 ofCell:(id)arg1 ;
-(void)applyContactListStyleToNavigationBar:(id)arg0 ;
-(void)applyContactListStyleToSearchBar:(id)arg0 ;
-(void)applyContactListStyleToSearchCell:(id)arg0 ;
-(void)applyContactListStyleToSearchHeader:(id)arg0 withTitle:(id)arg1 ;
-(void)applyContactListStyleToSubtitleText:(id)arg0 ofSearchResultCell:(id)arg1 ;
-(void)applyEditingStateBackgroundConfigurationToCell:(id)arg0 ;
-(void)applySubtitleTextColorsToSearchCellContentConfiguration:(id)arg0 withSubtitleText:(id)arg1 forSelectedState:(BOOL)arg2 ;
-(void)applyTextColorsToContentConfiguration:(id)arg0 usingState:(id)arg1 ;


@end


#endif
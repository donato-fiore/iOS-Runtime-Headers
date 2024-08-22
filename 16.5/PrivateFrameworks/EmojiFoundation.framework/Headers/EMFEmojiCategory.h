// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMFEMOJICATEGORY_H
#define EMFEMOJICATEGORY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface EMFEmojiCategory : NSObject

@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *shortLocalizedName;


+(BOOL)_isBaseHandshakeOrHandshakeWithSkintonesEmoji:(id)arg0 ;
+(BOOL)_isComposedCoupleMultiSkinToneEmoji:(id)arg0 ;
+(BOOL)_isCoupleMultiSkinToneEmoji:(id)arg0 ;
+(BOOL)_isDingbatsVariantEmoji:(id)arg0 ;
+(BOOL)_isFlagEmoji:(id)arg0 ;
+(BOOL)_isGenderEmoji:(id)arg0 ;
+(BOOL)_isHandholdingCoupleEmoji:(id)arg0 ;
+(BOOL)_isMultiPersonFamilySkinToneEmoji:(id)arg0 ;
+(BOOL)_isNoneVariantEmoji:(id)arg0 ;
+(BOOL)_isProfessionEmoji:(id)arg0 ;
+(BOOL)_isSkinToneEmoji:(id)arg0 ;
+(BOOL)_supportsCoupleSkinToneSelection:(id)arg0 ;
+(id)ActivityEmoji;
+(id)CelebrationEmoji;
+(id)CoupleMultiSkinToneEmoji;
+(id)DingbatsVariantEmoji;
+(id)ExtendedCoupleMultiSkinToneEmoji;
+(id)FlagsEmoji;
+(id)FoodAndDrinkEmoji;
+(id)GenderEmoji;
+(id)MultiPersonFamilySkinToneEmoji;
+(id)NatureEmoji;
+(id)NewlyAddedEmoji;
+(id)NoneVariantEmoji;
+(id)ObjectsEmoji;
+(id)PeopleEmoji;
+(id)PrepopulatedEmoji;
+(id)ProfessionEmoji;
+(id)ProfessionWithoutSkinToneEmoji;
+(id)SkinToneEmoji;
+(id)SymbolsEmoji;
+(id)TravelAndPlacesEmoji;
+(id)_baseLocalizationKeyForIdentifier:(id)arg0 ;
+(id)_emojiSetForIdentifier:(id)arg0 ;
+(id)categoryIdentifierList;
+(id)categoryWithIdentifier:(id)arg0 ;
+(id)computeEmojiFlagsSortedByLanguage;
+(id)extraFlagsForCountryCode:(id)arg0 ;
+(id)flagEmojiCountryCodesCommon;
+(id)insertionFlagsForCountryCodes:(id)arg0 inSortedCountryCodes:(id)arg1 ;
+(id)localizedRecentsDescription;
+(id)localizedSkinToneEmojiDescription;
+(id)stringToRegionalIndicatorString:(id)arg0 ;
+(void)insertToSortedCountries:(id)arg0 withAdditionalFlags:(id)arg1 ;
-(id)emojiTokensForLocaleData:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)dealloc;


@end


#endif
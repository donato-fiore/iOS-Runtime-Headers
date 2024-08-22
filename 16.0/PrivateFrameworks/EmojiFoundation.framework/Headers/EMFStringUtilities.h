// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMFSTRINGUTILITIES_H
#define EMFSTRINGUTILITIES_H


#import <Foundation/Foundation.h>


@interface EMFStringUtilities : NSObject



+(BOOL)_emojiString:(id)arg0 containsSubstring:(id)arg1 ;
+(BOOL)_genderEmojiBaseStringNeedVariantSelector:(id)arg0 ;
+(BOOL)_hasSkinToneVariantsForString:(id)arg0 ;
+(NSInteger)multiPersonTypeForString:(id)arg0 ;
+(id)_baseFirstCharacterString:(id)arg0 ;
+(id)_baseStringForEmojiString:(id)arg0 ;
+(id)_coupleSkinToneChooserVariantsForString:(id)arg0 ;
+(id)_coupleStringWithLeftPerson:(id)arg0 leftVariant:(id)arg1 joiningString:(id)arg2 rightPerson:(id)arg3 rightVariant:(id)arg4 ;
+(id)_joiningStringForCoupleString:(id)arg0 ;
+(id)_multiPersonStringForString:(id)arg0 skinToneVariantSpecifier:(id)arg1 ;
+(id)_normalizeMultiPersonGroupToLongFormEncoding:(id)arg0 ;
+(id)_normalizeMultiPersonGroupToShortFormEncoding:(id)arg0 ;
+(id)_preferenceIndexString:(id)arg0 ;
+(id)_skinToneChooserArraysForCoupleType:(NSInteger)arg0 joiner:(id)arg1 ;
+(id)_skinToneChooserVariantsForHandHoldingCoupleType:(NSInteger)arg0 ;
+(id)_skinToneChooserVariantsForString:(id)arg0 ;
+(id)_skinToneChooserVariantsForString:(id)arg0 usesSilhouetteSpecifiers:(BOOL)arg1 ;
+(id)_skinToneSpecifiersForString:(id)arg0 ;
+(id)_skinToneSuffixFromSpecifierType:(id)arg0 ;
+(id)_skinToneVariantsForCouple:(NSInteger)arg0 joiner:(id)arg1 ;
+(id)_skinToneVariantsForMultiPersonType:(NSInteger)arg0 ;
+(id)_skinToneVariantsForString:(id)arg0 ;
+(id)_stringWithUnichar:(unsigned int)arg0 ;
+(id)_tokenizedHandshakeFromString:(id)arg0 ;
+(id)_tokenizedMultiPersonFromString:(id)arg0 ;
+(id)professionSkinToneEmojiBaseKey:(id)arg0 ;
+(id)skinToneSpecifierTypeFromEmojiFitzpatrickModifier:(int)arg0 ;
+(int)_skinToneForString:(id)arg0 ;
+(int)_skinToneModifierFromSpecifierType:(id)arg0 ;
+(unsigned int)_firstLongCharacterOfString:(id)arg0 ;


@end


#endif
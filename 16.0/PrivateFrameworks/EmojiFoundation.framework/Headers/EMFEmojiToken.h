// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMFEMOJITOKEN_H
#define EMFEMOJITOKEN_H

@class NSString, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "EMFEmojiLocaleData.h"

@interface EMFEmojiToken : NSObject <NSCopying, NSSecureCoding>

 {
    BOOL _didFailCEM;
}


@property (readonly, nonatomic) NSString *_baseString;
@property (readonly, nonatomic) unsigned short _emojiIndex;
@property (readonly, nonatomic) BOOL _shouldHighlightEmoji;
@property (readonly, copy, nonatomic) NSArray *_skinToneVariantStrings;
@property (readonly, nonatomic) *__EmojiTokenWrapper emojiTokenRef; // ivar: _emojiTokenRef
@property (readonly, nonatomic) int gender;
@property (readonly, nonatomic) BOOL isCommon;
@property (readonly, nonatomic) BOOL isNewEmoji;
@property (readonly, nonatomic) EMFEmojiLocaleData *localeData;
@property (retain, nonatomic) NSString *localeIdentifier; // ivar: _localeIdentifier
@property (readonly, nonatomic) NSString *longFormEncodedStringVariantForMultiPersonGrouping;
@property (readonly, nonatomic) int presentationStyle;
@property (readonly, nonatomic) NSString *shortFormEncodedStringVariantForMultiPersonGrouping;
@property (readonly, nonatomic) int skinTone;
@property (readonly, nonatomic) NSArray *skinToneChooserVariants;
@property (readonly, nonatomic) NSArray *skinToneSpecifiers;
@property (readonly, copy, nonatomic) NSArray *skinToneVariants;
@property (copy, nonatomic) NSString *string; // ivar: _string
@property (readonly, nonatomic) BOOL supportsSkinToneVariants;


+(BOOL)supportsSecureCoding;
+(id)emojiTokenWithCEMEmojiToken:(struct __EmojiTokenWrapper *)arg0 ;
+(id)emojiTokenWithLongCharacter:(unsigned int)arg0 localeData:(id)arg1 ;
+(id)emojiTokenWithString:(id)arg0 localeData:(id)arg1 ;
+(id)emojiTokensForCEMEmojiTokens:(struct __CFArray *)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualIgnoringModifiers:(id)arg0 ;
-(BOOL)supportsPresentationStyle:(int)arg0 ;
-(NSUInteger)hash;
-(id)copyWithPresentationStyle:(int)arg0 ;
-(id)copyWithSkinToneVariant:(int)arg0 ;
-(id)copyWithSkinToneVariantSpecifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyWithoutModifiers;
-(id)description;
-(id)initWithCEMEmojiToken:(struct __EmojiTokenWrapper *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithString:(id)arg0 localeIdentifier:(id)arg1 ;
-(id)nameForType:(int)arg0 ;
-(id)relatedEmojiTokens:(NSUInteger)arg0 ;
-(void)_createEmojiTokenRefIfNecessary;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
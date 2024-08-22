// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIINPUTMODE_H
#define TIINPUTMODE_H

@class NSString, NSLocale, NSArray, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TIInputMode : NSObject <NSCopying>

 {
    NSString *_languageWithRegion;
    NSString *_variant;
    NSLocale *_locale;
    Class _inputManagerClass;
    Class _keyboardFeatureSpecializationClass;
    Class _multilingualInputManagerClass;
}


@property (readonly, nonatomic) NSArray *allAccentKeyStrings;
@property (readonly, nonatomic) NSDictionary *compositionMap;
@property (readonly, nonatomic) BOOL doesComposeText;
@property (readonly, nonatomic) Class inputManagerClass;
@property (readonly, nonatomic) Class keyboardFeatureSpecializationClass;
@property (readonly, nonatomic) NSString *languageWithRegion;
@property (readonly, nonatomic) NSDictionary *layoutTags;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) Class multilingualInputManagerClass;
@property (readonly, nonatomic) NSString *nonstopPunctuationCharacters;
@property (readonly, nonatomic) NSString *normalizedIdentifier; // ivar: _normalizedIdentifier
@property (readonly, nonatomic) NSString *replacementForDoubleSpace;
@property (readonly, nonatomic) NSDictionary *reverseCompositionMap;
@property (readonly, nonatomic) NSString *sentenceDelimitingCharacters;
@property (readonly, nonatomic) NSString *sentencePrefixingCharacters;
@property (readonly, nonatomic) NSString *sentenceTrailingCharacters;
@property (readonly, nonatomic) BOOL spaceAutocorrectionEnabled;
@property (readonly, nonatomic) BOOL supportsMultilingualKeyboard;
@property (readonly, nonatomic) BOOL supportsPrediction;
@property (readonly, nonatomic) NSString *variant;


+(id)inputModeWithIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithNormalizedIdentifier:(id)arg0 ;


@end


#endif
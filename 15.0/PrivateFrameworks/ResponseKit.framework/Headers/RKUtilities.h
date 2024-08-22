// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RKUTILITIES_H
#define RKUTILITIES_H


#import <Foundation/Foundation.h>


@interface RKUtilities : NSObject



+(BOOL)RKRepairStringNeeded:(id)arg0 ;
+(BOOL)isDeviceSupportedForLSTMBasedLanguageIdentification:(id)arg0 ;
+(BOOL)isLanguageSupportedByNSLinguisticTaggerForLanguageIdentification:(id)arg0 ;
+(BOOL)isLanguageSupportedBySmartPunctuation:(id)arg0 ;
+(BOOL)isLanguageSupportedForLemmatization:(id)arg0 ;
+(BOOL)isLanguageSupportedForPartOfSpeech:(id)arg0 ;
+(BOOL)prefixInArray:(id)arg0 withArray:(id)arg1 ;
+(BOOL)suffixInArray:(id)arg0 withArray:(id)arg1 ;
+(BOOL)tokenInArray:(id)arg0 withArray:(id)arg1 ;
+(id)addLikelySubtagsForLocaleIdentifier:(id)arg0 ;
+(id)canonicalLanguageAndScriptCodeIdentifierForIdentifier:(id)arg0 ;
+(id)getDeviceModel;
+(id)normalizeForPersonalization:(id)arg0 ;
+(id)removeEmoji:(id)arg0 ;
+(id)removeMultipleWhitespaces:(id)arg0 ;
+(id)stripDiacritics:(id)arg0 ;
+(id)stripEmojiSkinTones:(id)arg0 ;
+(id)stripPunctuations:(id)arg0 ;


@end


#endif
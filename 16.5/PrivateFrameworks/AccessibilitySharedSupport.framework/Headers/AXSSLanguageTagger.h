// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXSSLANGUAGETAGGER_H
#define AXSSLANGUAGETAGGER_H


#import <Foundation/Foundation.h>


@interface AXSSLanguageTagger : NSObject



+(*void)_languageTaggerForContent:(id)arg0 ;
+(*void)_scriptTaggerForContent:(id)arg0 ;
+(*void)_taggerForContent:(id)arg0 tagScheme:(id)arg1 ;
+(*void)_tokenTaggerForContent:(id)arg0 ;
+(BOOL)_isNewline:(id)arg0 ;
+(BOOL)isSupportedLanguage:(id)arg0 ;
+(float)_systemLanguageProbabilityForContent:(id)arg0 ;
+(id)_allLangIDs;
+(id)_createTagForContent:(id)arg0 tokenRange:(struct _NSRange )arg1 document:(id)arg2 createdFromNewline:(BOOL)arg3 ;
+(id)_dialectWithHighestProbability:(struct ? *)arg0 ;
+(id)_languageTagForDateIfNecessary:(id)arg0 ;
+(id)_overrideLanguageDetection:(id)arg0 ;
+(id)_secondaryDialects:(struct ? *)arg0 ;
+(id)langCodeForlangId:(int)arg0 ;
+(id)languageTagsForContent:(id)arg0 ;
+(id)markupLanguageTagForAttributedString:(id)arg0 ;
+(id)primaryLanguageForContent:(id)arg0 ;
+(int)langIDforLangCode:(id)arg0 ;
+(struct ? *)_createLanguageHintsEvenlyDistributedWithProbability:(float)arg0 excludingHints:(id)arg1 ;
+(struct ? *)_createLanguageHintsForContent:(id)arg0 ;
+(struct _NSRange )_extendRange:(struct _NSRange )arg0 forContent:(id)arg1 withRange:(struct _NSRange )arg2 ;
+(struct _NSRange )_manuallyProcessContent:(id)arg0 tokenRange:(struct _NSRange )arg1 currentRange:(struct _NSRange )arg2 ;
+(void)_hypothesesForContent:(id)arg0 withHints:(struct ? *)arg1 guesses:(struct ? *)arg2 ;
+(void)_tagRange:(struct _NSRange )arg0 document:(id)arg1 tags:(id)arg2 createdFromNewline:(BOOL)arg3 ;


@end


#endif
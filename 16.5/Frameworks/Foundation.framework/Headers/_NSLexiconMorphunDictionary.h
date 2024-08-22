// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NSLEXICONMORPHUNDICTIONARY_H
#define _NSLEXICONMORPHUNDICTIONARY_H

@class NSLocale;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface _NSLexiconMorphunDictionary : NSObject {
    NSLocale *_appropriateLocale;
    *MANAConfigurableAnalyzer _analyzer;
    *MTokenizer _tokenizer;
    *MDDictionaryMetaData _dictionary;
}


@property (readonly, copy, nonatomic) NSString *languageCode; // ivar: _languageCode


-(id)_appropriateCustomEnglishPronounFromPronouns:(id)arg0 ;
// -(id)_replaceLegacyEnglishPronouns:(id)arg0 inSourceStringRange:(struct _NSRange )arg1 lengthLens:(id)arg2 substringInRangeLens:(unk)arg3 enumerateWordSubstringsInRangeLens:(id)arg4 attributes:(unk)arg5 pronouns:(id)arg6  ;
-(id)allPossibleWordAttributesForWord:(id)arg0 ;
-(id)initWithLanguage:(id)arg0 ;
-(void)_iterateAllPossibleWordAttributesForWord:(id)arg0 usingBlock:(id)arg1 ;
-(void)_iterateFormsOfWord:(id)arg0 usingBlock:(id)arg1 ;
-(void)dealloc;


@end


#endif
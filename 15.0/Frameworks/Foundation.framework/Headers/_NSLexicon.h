// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NSLEXICON_H
#define _NSLEXICON_H

@class NSData, NSLocale;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface _NSLexicon : NSObject {
    NSData *_legacyData;
    *void _languageModel;
    NSLocale *_appropriateLocale;
    NSUInteger _enabledTransforms;
}


@property (readonly, copy, nonatomic) NSString *languageCode; // ivar: _languageCode


+(id)systemLexiconForLanguageCode:(id)arg0 ;
-(id)allPossibleWordAttributesForWord:(id)arg0 ;
-(id)initWithContentsOfURL:(id)arg0 languageCode:(id)arg1 error:(*id)arg2 ;
-(id)initWithLegacyTrieContentsOfURL:(id)arg0 languageCode:(id)arg1 error:(*id)arg2 ;
-(id)lemmasForWord:(id)arg0 ;
// -(id)replacementWordForWord:(id)arg0 inSameLemmaMatchingAttributes:(struct ? )arg1 inLargerStringRange:(struct _NSRange )arg2 lengthLens:(id)arg3 substringInRangeLens:(unk)arg4 enumerateWordSubstringsInRangeLens:(id)arg5 disambiguationHints:(unk)arg6 pronouns:(id)arg7  ;
-(void)dealloc;


@end


#endif
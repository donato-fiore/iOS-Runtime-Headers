// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PASLANGUAGEDETECTION_H
#define _PASLANGUAGEDETECTION_H


#import <Foundation/Foundation.h>


@interface _PASLanguageDetection : NSObject



+(id)defaultLanguage;
+(id)detectLanguageFromLanguageTags:(id)arg0 ;
+(id)detectLanguageFromText:(id)arg0 ;
+(id)detectLanguageFromTextHeuristically:(id)arg0 ;
+(id)detectLanguageFromTextHeuristicallyWithLanguages:(id)arg0 languages:(id)arg1 defaultLanguage:(id)arg2 ;
+(id)detectLanguageFromTextIfMultilingual:(id)arg0 ;
+(id)detectLanguageFromTextWithMaxLength:(id)arg0 maxLength:(NSUInteger)arg1 minimumProbability:(CGFloat)arg2 ;
+(id)dominantLanguageTagFromLanguageTags:(id)arg0 ;
+(id)dominantLanguageTagFromText:(id)arg0 ;
+(id)languageForLocaleIdentifier:(id)arg0 ;
+(id)userLanguages;
+(int)languageIdForLanguageString:(id)arg0 ;


@end


#endif
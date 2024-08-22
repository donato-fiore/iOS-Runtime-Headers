// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IPFEATURESENTENCE_H
#define IPFEATURESENTENCE_H

@class NSString, NSArray, RKText;


#import "IPFeature.h"

@interface IPFeatureSentence : IPFeature {
    BOOL _hasCheckedEventVocabularyKeyword;
    BOOL _hasCheckedEventVocabularyIgnoreDateKeyword;
}


@property (readonly) NSUInteger clusterType;
@property (readonly, copy) NSString *eventVocabularyIgnoreDateKeyword;
@property (readonly, copy) NSString *eventVocabularyRejectionKeyword;
@property (copy) NSArray *fragments; // ivar: _fragments
@property (copy) NSString *languageID; // ivar: _languageID
@property (readonly) NSUInteger polarity;
@property (readonly, getter=isQuoteAttributionLine) BOOL quoteAttributionLine;
@property (retain) RKText *responseKitSentence; // ivar: _responseKitSentence
@property (copy) NSString *storedEventVocabularyIgnoreDateKeyword; // ivar: _storedEventVocabularyIgnoreDateKeyword
@property (copy) NSString *storedEventVocabularyRejectionKeyword; // ivar: _storedEventVocabularyRejectionKeyword
@property NSUInteger storedPolarity; // ivar: _storedPolarity


+(NSUInteger)numberOfMatchesForEventVocabularySubjectTitleInString:(id)arg0 languageID:(id)arg1 ;
+(id)_substringWithRange:(struct _NSRange )arg0 ofString:(id)arg1 removingCharactersFromSet:(id)arg2 ;
+(id)bestLanguageIDFromText:(id)arg0 ;
+(id)bestLanguageIDFromText:(id)arg0 linesElided:(NSUInteger)arg1 ;
+(id)buildRegexForType:(id)arg0 languageID:(id)arg1 ;
+(id)eventVocabularyIgnoreDateKeywordInString:(id)arg0 languageID:(id)arg1 ;
+(id)eventVocabularyIgnoreDateRegexForLanguageID:(id)arg0 ;
+(id)eventVocabularyPositiveRegexForLanguageID:(id)arg0 ;
+(id)eventVocabularyRegexForType:(id)arg0 languageID:(id)arg1 ;
+(id)eventVocabularyRejectionKeywordInString:(id)arg0 languageID:(id)arg1 ;
+(id)eventVocabularyRejectionRegexForLanguageID:(id)arg0 ;
+(id)eventVocabularySubjectTitleInString:(id)arg0 languageID:(id)arg1 ;
+(id)eventVocabularySubjectTitleRegexForLanguageID:(id)arg0 ;
+(id)humanReadableFeaturePolarity:(NSUInteger)arg0 ;
+(id)regexArrayForType:(id)arg0 languageID:(id)arg1 ;
+(struct _NSRange )_rangeExcludingLeadingAndTrailingCharacters:(id)arg0 inRange:(struct _NSRange )arg1 ofString:(id)arg2 ;
-(NSUInteger)polarityForRange:(struct _NSRange )arg0 ;
-(NSUInteger)polarityForRange:(struct _NSRange )arg0 confidence:(*CGFloat)arg1 ;
-(id)description;
-(id)descriptionForFragment:(id)arg0 ;
-(id)descriptionForFragmentAtIndex:(NSUInteger)arg0 ;
-(id)initWithLanguageID:(id)arg0 responseKitSentence:(id)arg1 ;
-(void)addFragment:(id)arg0 ;
-(void)checkEventVocabularyKeywordsIfNeeded;


@end


#endif
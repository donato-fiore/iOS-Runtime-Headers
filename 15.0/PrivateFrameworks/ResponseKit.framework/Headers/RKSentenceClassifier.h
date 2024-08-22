// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RKSENTENCECLASSIFIER_H
#define RKSENTENCECLASSIFIER_H

@class NSString, NSArray, NSMutableDictionary, NSValue;

#import <Foundation/Foundation.h>


@interface RKSentenceClassifier : NSObject

@property (retain) NSString *RKLinguisticTagDataDetected; // ivar: _RKLinguisticTagDataDetected
@property (readonly) NSArray *alternativeConjunctions;
@property (retain) NSArray *alternatives; // ivar: _alternatives
@property (retain) NSArray *appreciations; // ivar: _appreciations
@property (retain) NSArray *choiceDelimiters; // ivar: _choiceDelimiters
@property (retain) NSArray *dataDetected; // ivar: _dataDetected
@property (retain) NSArray *interrogatives; // ivar: _interrogatives
@property (retain) NSArray *inversions; // ivar: _inversions
@property (readonly) NSString *languageIdentifier; // ivar: _languageIdentifier
@property (retain) NSMutableDictionary *lemmaAvailabilityByLanguage; // ivar: _lemmaAvailabilityByLanguage
@property (retain) NSArray *matchedRanges; // ivar: _matchedRanges
@property (retain) NSMutableDictionary *partofSpeechAvailabilityByLanguage; // ivar: _partofSpeechAvailabilityByLanguage
@property (retain) NSArray *sentenceEntities; // ivar: _sentenceEntities
@property BOOL sentenceHasAlternativeConjunction; // ivar: _sentenceHasAlternativeConjunction
@property BOOL sentenceHasQuestionTerminator; // ivar: _sentenceHasQuestionTerminator
@property BOOL sentenceIsAllSymbols; // ivar: _sentenceIsAllSymbols
@property BOOL sentenceIsTerminated; // ivar: _sentenceIsTerminated
@property (retain) NSString *sentenceString; // ivar: _sentenceString
@property (retain) NSString *sentenceStringOriginal; // ivar: _sentenceStringOriginal
@property (retain) NSValue *sentenceTag; // ivar: _sentenceTag


+(BOOL)canClassifyLanguageIdentifier:(id)arg0 ;
+(Class)subclassForLanguageIdentifier:(id)arg0 ;
+(Class)subclassForLocale:(id)arg0 ;
+(id)alternativeInversionsForLanguage:(id)arg0 ;
+(id)appreciationKeywordsForLanguage:(id)arg0 ;
+(id)categoryKeywordMapForLanguage:(id)arg0 ;
+(id)polarTagRegularExpressionForLanguage:(id)arg0 ;
+(id)preProcessTextMessageForLinguisticTagger:(id)arg0 withLocale:(id)arg1 ;
+(id)sensitiveSubjectRegularExpressionForLanguage:(id)arg0 ;
+(id)sentenceClassification:(id)arg0 withLanguageIdentifier:(id)arg1 options:(NSUInteger)arg2 ;
+(id)stringFromLexicalEntities:(id)arg0 ;
-(id)addSentenceTerminatorQuestion:(id)arg0 ;
-(id)classifySentence;
-(id)init;
-(id)lexicalEntitiesFromString:(id)arg0 ;
-(id)sentenceClassification:(id)arg0 options:(NSUInteger)arg1 ;
-(void)analyzeSentence;


@end


#endif
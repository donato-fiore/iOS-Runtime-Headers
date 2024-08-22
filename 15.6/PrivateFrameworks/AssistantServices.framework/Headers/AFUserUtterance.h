// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFUSERUTTERANCE_H
#define AFUSERUTTERANCE_H

@class NSMutableArray, NSString, NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface AFUserUtterance : NSObject {
    NSMutableArray *_phrases;
    NSMutableArray *_tokens;
    NSString *_text;
    NSInteger _sentenceConfidence;
    NSMutableArray *_utterances;
}


@property (readonly, nonatomic) NSArray *allPhrases;
@property (readonly, nonatomic) NSDictionary *correctionIdentifier; // ivar: _correctionIdentifier
@property (readonly, nonatomic) NSArray *dictationResult;


-(NSInteger)numberOfAlternativeUtterances;
-(id)allRecognitionStringsAndScores;
-(id)bestTextInterpretation;
-(id)description;
-(id)initWithPhrases:(id)arg0 correctionIdentifier:(id)arg1 ;
-(id)initWithPhrases:(id)arg0 sentenceConfidence:(NSInteger)arg1 utterances:(id)arg2 correctionIdentifier:(id)arg3 ;
-(id)initWithPhrases:(id)arg0 utterances:(id)arg1 ;
-(id)initWithString:(id)arg0 correctionIdentifier:(id)arg1 ;
-(id)initWithTokens:(id)arg0 correctionIdentifier:(id)arg1 ;
-(id)interpretationOfUtteranceAtIndex:(NSUInteger)arg0 ;
-(id)longestCommonSubsequenceBetweenList:(id)arg0 andList:(id)arg1 ;
-(id)rangeListOfDifferingTextFromSpeechInterpretation:(id)arg0 comparedToBaseTokenList:(id)arg1 ;
-(id)rangeListOfDifferingTextFromSpeechInterpretation:(id)arg0 comparedToBaseUtteranceAtIndex:(NSUInteger)arg1 ;
-(id)rangeListOfDifferingTextFromTargetTokenList:(id)arg0 comparedToBaseTokenList:(id)arg1 ;
-(id)rangeListOfDifferingTextFromUtteranceAtIndex:(NSUInteger)arg0 comparedToBaseUtteranceAtIndex:(NSUInteger)arg1 ;
-(id)speechTokensForUtteranceAtIndex:(NSUInteger)arg0 ;
-(id)streamingTokens;
-(id)textOfUtteranceAtIndex:(NSUInteger)arg0 ;
-(id)updateDictationResult:(id)arg0 withAlternativeUtteranceAtIndex:(NSUInteger)arg1 ;
-(void)_updatePhraseswithSwapIndices:(id)arg0 ;
-(void)_updateUtteranceswithAlternativeUtteranceAtIndex:(NSUInteger)arg0 swapIndices:(id)arg1 ;


@end


#endif
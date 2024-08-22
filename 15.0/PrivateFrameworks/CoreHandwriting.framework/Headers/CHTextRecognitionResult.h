// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHTEXTRECOGNITIONRESULT_H
#define CHTEXTRECOGNITIONRESULT_H

@class NSIndexSet, NSString, NSArray;


#import "CHRecognitionResult.h"

@interface CHTextRecognitionResult : CHRecognitionResult

@property (readonly) NSIndexSet *inappropriateWordIndexes; // ivar: _inappropriateWordIndexes
@property (readonly) BOOL isTextReplacement; // ivar: _isTextReplacement
@property (readonly) NSIndexSet *rareWordIndexes; // ivar: _rareWordIndexes
@property (readonly) NSString *string; // ivar: _string
@property (readonly) NSArray *wordCombinedScores; // ivar: _wordCombinedScores
@property (readonly) NSArray *wordIDs; // ivar: _wordIDs
@property (readonly) NSArray *wordLexicalEntries; // ivar: _wordLexicalEntries
@property (readonly) NSArray *wordPatternEntries; // ivar: _wordPatternEntries
@property (readonly) NSArray *wordRanges; // ivar: _wordRanges
@property (readonly) NSArray *wordRecognitionScores; // ivar: _wordRecognitionScores
@property (readonly) NSArray *wordStrokeSets; // ivar: _wordStrokeSets


-(id)initWithString:(id)arg0 score:(CGFloat)arg1 wordRanges:(id)arg2 wordIDs:(id)arg3 wordRecognitionScores:(id)arg4 wordCombinedScores:(id)arg5 wordStrokeSets:(id)arg6 wordLexicalEntries:(id)arg7 wordPatternEntries:(id)arg8 rareWordIndexes:(id)arg9 inappropriateWordIndexes:(id)arg10 isTextReplacement:(BOOL)arg11 ;
-(id)mecabraCandidate;
-(void)dealloc;


@end


#endif
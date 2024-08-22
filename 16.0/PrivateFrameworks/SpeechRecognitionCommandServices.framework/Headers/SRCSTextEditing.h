// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SRCSTEXTEDITING_H
#define SRCSTEXTEDITING_H

@protocol SRCSTextEditingProviderProtocol;

#import <Foundation/Foundation.h>


@interface SRCSTextEditing : NSObject

@property CGFloat delayAfterSelectionBeforeExecutingAction; // ivar: _delayAfterSelectionBeforeExecutingAction
@property (weak) NSObject<SRCSTextEditingProviderProtocol> *provider; // ivar: _provider


+(NSInteger)doesArrayOfWords:(id)arg0 containArrayOfArrayWords:(id)arg1 ;
+(id)wordsFromString:(id)arg0 ;
-(BOOL)_range:(struct _NSRange )arg0 includesRange:(struct _NSRange )arg1 ;
-(NSInteger)_indexOfFirstPhraseMatchResultPairBeforeInsertion:(BOOL)arg0 fromArray:(id)arg1 ;
-(NSUInteger)characterLengthOfTextMarkerRange:(id)arg0 ;
-(id)_capitalizedStringFromString:(id)arg0 ;
-(id)_prunedStringsFromCandidateStrings:(id)arg0 ;
-(id)_strippedPhraseStringsFromStrings:(id)arg0 ;
-(id)actOnStrings:(id)arg0 ambiguityResolution:(id)arg1 substringSearchGranularity:(int)arg2 alwaysCallActionOnClosestMatch:(BOOL)arg3 options:(id)arg4 actionBlock:(id)arg5 ;
-(id)init;
-(id)markerRangeForEnumerationType:(NSInteger)arg0 desiredBlock:(int)arg1 count:(NSUInteger)arg2 options:(int)arg3 ;
-(id)markerRangeForLineInDesiredBlock:(int)arg0 count:(NSUInteger)arg1 options:(int)arg2 ;
-(id)orderedPhraseMatchesFromStrings:(id)arg0 forwardDirection:(BOOL)arg1 referenceLocation:(NSInteger)arg2 substringSearchGranularity:(int)arg3 ;
-(id)visiblePhraseMatchesFromStrings:(id)arg0 substringSearchGranularity:(int)arg1 ;
-(struct _NSRange )_findRangeForEnumerationType:(NSInteger)arg0 atRelativeIncrement:(NSInteger)arg1 fromPosition:(id)arg2 options:(NSUInteger)arg3 ;
-(struct _NSRange )_rangeOfWordBasedSearchString:(id)arg0 inString:(id)arg1 withRange:(struct _NSRange )arg2 forwardSearchDirection:(BOOL)arg3 ;
-(struct _NSRange )rangeOfStrings:(id)arg0 referenceRange:(struct _NSRange )arg1 ambiguityResolution:(id)arg2 substringSearchGranularity:(int)arg3 foundStringRef:(*id)arg4 ;
-(void)applyFormatWithCommandIdentifier:(id)arg0 ;
-(void)correctSelection;
-(void)deleteAll;
-(void)deleteCurrentCharacter;
-(void)deleteCurrentLine;
-(void)deleteCurrentParagraph;
-(void)deleteCurrentSentence;
-(void)deleteCurrentWord;
-(void)deleteNextCharacterWithCount:(NSInteger)arg0 ;
-(void)deleteNextLineWithCount:(NSInteger)arg0 ;
-(void)deleteNextParagraphWithCount:(NSInteger)arg0 ;
-(void)deleteNextSentenceWithCount:(NSInteger)arg0 ;
-(void)deleteNextWordWithCount:(NSInteger)arg0 ;
-(void)deletePreviousCharacterWithCount:(NSInteger)arg0 ;
-(void)deletePreviousLineWithCount:(NSInteger)arg0 ;
-(void)deletePreviousParagraphWithCount:(NSInteger)arg0 ;
-(void)deletePreviousSentenceWithCount:(NSInteger)arg0 ;
-(void)deletePreviousWordWithCount:(NSInteger)arg0 ;
-(void)deleteSelection;
-(void)extendSelectionBackwardCharactersWithCount:(NSInteger)arg0 ;
-(void)extendSelectionBackwardLinesWithCount:(NSInteger)arg0 ;
-(void)extendSelectionBackwardParagraphsWithCount:(NSInteger)arg0 ;
-(void)extendSelectionBackwardSentencesWithCount:(NSInteger)arg0 ;
-(void)extendSelectionBackwardWordsWithCount:(NSInteger)arg0 ;
-(void)extendSelectionForwardCharactersWithCount:(NSInteger)arg0 ;
-(void)extendSelectionForwardLinesWithCount:(NSInteger)arg0 ;
-(void)extendSelectionForwardParagraphsWithCount:(NSInteger)arg0 ;
-(void)extendSelectionForwardSentencesWithCount:(NSInteger)arg0 ;
-(void)extendSelectionForwardWordsWithCount:(NSInteger)arg0 ;
-(void)extendSelectionToBeginning;
-(void)extendSelectionToEnd;
-(void)moveBackwardCharactersWithCount:(NSInteger)arg0 ;
-(void)moveBackwardLinesWithCount:(NSInteger)arg0 ;
-(void)moveBackwardParagraphsWithCount:(NSInteger)arg0 ;
-(void)moveBackwardSentencesWithCount:(NSInteger)arg0 ;
-(void)moveBackwardWordsWithCount:(NSInteger)arg0 ;
-(void)moveForwardCharactersWithCount:(NSInteger)arg0 ;
-(void)moveForwardLinesWithCount:(NSInteger)arg0 ;
-(void)moveForwardParagraphsWithCount:(NSInteger)arg0 ;
-(void)moveForwardSentencesWithCount:(NSInteger)arg0 ;
-(void)moveForwardWordsWithCount:(NSInteger)arg0 ;
-(void)moveToEndOfLineWithCount:(NSInteger)arg0 ;
-(void)moveToEndOfParagraphWithCount:(NSInteger)arg0 ;
-(void)moveToEndOfSelection;
-(void)moveToEndOfSentenceWithCount:(NSInteger)arg0 ;
-(void)moveToEndOfTextArea;
-(void)moveToEndOfWordWithCount:(NSInteger)arg0 ;
-(void)moveToStartOfLineWithCount:(NSInteger)arg0 ;
-(void)moveToStartOfParagraphWithCount:(NSInteger)arg0 ;
-(void)moveToStartOfSelection;
-(void)moveToStartOfSentenceWithCount:(NSInteger)arg0 ;
-(void)moveToStartOfTextArea;
-(void)moveToStartOfWordWithCount:(NSInteger)arg0 ;
-(void)pasteboardCopy;
-(void)pasteboardCut;
-(void)pasteboardPaste;
-(void)selectAll;
-(void)selectCurrentCharacter;
-(void)selectCurrentLine;
-(void)selectCurrentParagraph;
-(void)selectCurrentSentence;
-(void)selectCurrentWord;
-(void)selectFromPhraseVariants:(id)arg0 insertionString:(id)arg1 commandIdentifer:(id)arg2 ;
-(void)selectFromPhraseVariants:(id)arg0 insertionString:(id)arg1 recognizedParameters:(id)arg2 commandIdentifer:(id)arg3 ;
-(void)selectFromPhraseVariants:(id)arg0 throughPhraseVariants:(id)arg1 commandIdentifer:(id)arg2 ;
-(void)selectFromPhraseVariants:(id)arg0 throughPhraseVariants:(id)arg1 recognizedParameters:(id)arg2 commandIdentifer:(id)arg3 ;
-(void)selectNextCharacterWithCount:(NSInteger)arg0 ;
-(void)selectNextLineWithCount:(NSInteger)arg0 ;
-(void)selectNextParagraphWithCount:(NSInteger)arg0 ;
-(void)selectNextSentenceWithCount:(NSInteger)arg0 ;
-(void)selectNextWordWithCount:(NSInteger)arg0 ;
-(void)selectPreviousCharacterWithCount:(NSInteger)arg0 ;
-(void)selectPreviousLineWithCount:(NSInteger)arg0 ;
-(void)selectPreviousParagraphWithCount:(NSInteger)arg0 ;
-(void)selectPreviousSentenceWithCount:(NSInteger)arg0 ;
-(void)selectPreviousTextInsertion;
-(void)selectPreviousWordWithCount:(NSInteger)arg0 ;
-(void)unselect;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PRPINYINCONTEXT_H
#define PRPINYINCONTEXT_H

@class NSMutableArray;


#import "PRAutocorrectionContext.h"

@interface PRPinyinContext : PRAutocorrectionContext {
    NSMutableArray *_modifications;
    NSMutableArray *_addedModifications;
    NSMutableArray *_removedModifications;
    NSMutableArray *_addedRemovedModifications;
    NSMutableArray *_prefixes;
    NSMutableArray *_guesses;
    NSMutableArray *_completions;
    NSMutableArray *_corrections;
    char * _buffer;
    char * _altBuffer;
    char * _altBufferScores;
    NSMutableArray *_geometryDataArray;
    *NSUInteger _syllableLengthArray;
    *void _connection;
    NSUInteger _length;
    NSUInteger _lengthBeforeApostrophes;
    NSUInteger _startingPoint;
    NSUInteger _lastIndexes;
    NSUInteger _nextIndexes;
    NSUInteger _startIndex;
    NSUInteger _endIndex;
    NSUInteger _abbreviatedSyllableCount;
    NSUInteger _previouslyAnalyzedLength;
    CGFloat _validSequenceCorrectionThreshold;
    BOOL _lastSyllableIsPartial;
}




-(BOOL)_addEnglishWordForRange:(struct _NSRange )arg0 quickly:(BOOL)arg1 ;
-(BOOL)_addEnglishWordsEndingAtIndex:(NSUInteger)arg0 quickly:(BOOL)arg1 ;
-(CGFloat)validSequenceCorrectionThreshold;
-(id)addedModifications;
-(id)completions;
-(id)correction;
-(id)currentModifications;
-(id)description;
-(id)guesses;
-(id)init;
-(id)prefixes;
-(id)removedModifications;
-(void)_addDeletions;
-(void)_addEnglishWordsQuickly:(BOOL)arg0 ;
-(void)_addInsertions;
-(void)_addPrefixes;
-(void)_addReplacements;
-(void)_addSpecialEnglishWords;
-(void)_addTranspositions;
-(void)_addValidSequenceReplacements;
-(void)_advanceIndexes;
-(void)_filterModifications;
-(void)_removeModificationsAndMoveStartingPoint;
-(void)_removePrefixes;
-(void)addInputCharacter:(unsigned short)arg0 geometryModel:(*void)arg1 geometryData:(id)arg2 ;
-(void)dealloc;
-(void)removeNumberOfInputCharacters:(NSUInteger)arg0 ;
-(void)reset;
-(void)setValidSequenceCorrectionThreshold:(CGFloat)arg0 ;


@end


#endif
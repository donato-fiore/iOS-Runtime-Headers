// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PRZHUYINCONTEXT_H
#define PRZHUYINCONTEXT_H

@class NSMutableArray;


#import "PRAutocorrectionContext.h"

@interface PRZhuyinContext : PRAutocorrectionContext {
    NSMutableArray *_modifications;
    NSMutableArray *_addedModifications;
    NSMutableArray *_removedModifications;
    NSMutableArray *_addedRemovedModifications;
    NSMutableArray *_prefixes;
    char * _buffer;
    *NSUInteger _syllableLengthArray;
    *void _connection;
    NSUInteger _length;
    NSUInteger _lengthBeforeApostrophes;
    NSUInteger _startingPoint;
    NSUInteger _lastIndexes;
    NSUInteger _nextIndexes;
    NSUInteger _startIndex;
    NSUInteger _endIndex;
    BOOL _lastSyllableIsPartial;
}




-(id)addedModifications;
-(id)currentModifications;
-(id)description;
-(id)init;
-(id)removedModifications;
-(void)_addDeletions;
-(void)_addInsertions;
-(void)_addReplacements;
-(void)_addTranspositions;
-(void)_advanceIndexes;
-(void)_filterModifications;
-(void)_removeModificationsAndMoveStartingPoint;
-(void)addInputCharacter:(unsigned short)arg0 geometryModel:(*void)arg1 geometryData:(id)arg2 ;
-(void)dealloc;
-(void)removeNumberOfInputCharacters:(NSUInteger)arg0 ;
-(void)reset;


@end


#endif
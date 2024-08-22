// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TTMERGEABLESTRING_H
#define TTMERGEABLESTRING_H

@class NSMutableAttributedString, NSString, NSHashTable, NSUUID;
@protocol CRDataType, TTMergeableStringDelegate;

#import <Foundation/Foundation.h>

#import "CRTTCompatibleDocument.h"
#import "TTVectorMultiTimestamp.h"

@interface TTMergeableString : NSObject <CRDataType>

 {
    vector<TopoSubstring *, std::allocator<TopoSubstring *>> _startNodes;
    vector<TopoSubstring *, std::allocator<TopoSubstring *>> _endNodes;
    vector<TopoSubstring *, std::allocator<TopoSubstring *>> _orderedSubstrings;
    unsigned int _unserializedClock;
    NSUInteger _editCount;
    BOOL _cacheInvalid;
    id *_updateRangeBlock;
}


@property (retain, nonatomic) NSMutableAttributedString *attributedString; // ivar: _attributedString
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TTMergeableStringDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) CRTTCompatibleDocument *document;
@property (nonatomic) BOOL hasLocalChanges; // ivar: _hasLocalChanges
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSHashTable *objectsNeedingUpdatedRanges; // ivar: _objectsNeedingUpdatedRanges
@property (readonly, nonatomic) NSUInteger replicaStyleClock; // ivar: _replicaStyleClock
@property (readonly, nonatomic) NSUInteger replicaTextClock; // ivar: _replicaTextClock
@property (retain, nonatomic) NSUUID *replicaUUID; // ivar: _replicaUUID
@property (readonly) Class superclass;
@property (retain, nonatomic) TTVectorMultiTimestamp *timestamp; // ivar: _timestamp


-(*void)endNodes;
-(*void)getSubstringBeforeTopoID:(struct TopoID )arg0 ;
-(*void)orderedSubstrings;
-(*void)splitTopoSubstring:(*void)arg0 atIndex:(unsigned int)arg1 ;
-(*void)startNodes;
-(BOOL)canMergeString:(id)arg0 ;
-(BOOL)check:(*id)arg0 ;
-(BOOL)graphIsEqual:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFragment;
-(BOOL)selection:(id)arg0 wasModifiedAfter:(id)arg1 ;
-(BOOL)textEitherSideOfSelectionAnchor:(struct TopoID )arg0 wasModifiedAfter:(id)arg1 ;
-(NSInteger)substring:(*void)arg0 modifiedAfter:(id)arg1 ;
-(NSInteger)substring:(*void)arg0 modifiedAfter:(id)arg1 includeAttributes:(BOOL)arg2 replicaID:(*id)arg3 ;
-(NSUInteger)getCharacterIndexForCharID:(struct TopoID )arg0 ;
-(NSUInteger)length;
-(NSUInteger)mergeWithString:(id)arg0 ;
-(NSUInteger)mergeWithString:(id)arg0 mergeTimestamps:(BOOL)arg1 ;
-(id)characterRangesForSelection:(id)arg0 ;
-(id)characterRangesForSelection:(id)arg0 selectedSubstringsBlock:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deltaSince:(id)arg0 in:(id)arg1 ;
-(id)dotDescription:(NSUInteger)arg0 ;
-(id)i_saveDeltasSinceTimestamp:(id)arg0 toArchive:(*void)arg1 ;
-(id)initWithArchive:(*void)arg0 replicaID:(id)arg1 ;
-(id)initWithArchive:(*void)arg0 replicaID:(id)arg1 orderedSubstrings:(*void)arg2 ;
-(id)initWithArchive:(*void)arg0 replicaID:(id)arg1 orderedSubstrings:(*void)arg2 timestamp:(id)arg3 ;
-(id)initWithArchive:(*void)arg0 replicaID:(id)arg1 timestamp:(id)arg2 ;
-(id)initWithData:(id)arg0 replicaID:(id)arg1 ;
-(id)initWithReplicaID:(id)arg0 ;
-(id)initWithReplicaID:(id)arg0 asFragment:(BOOL)arg1 ;
-(id)selectionForCharacterRanges:(id)arg0 ;
-(id)selectionForCharacterRanges:(id)arg0 selectionAffinity:(NSUInteger)arg1 ;
-(id)serialize;
-(id)serializeDeltaSinceTimestamp:(id)arg0 ;
-(id)string;
-(id)tombstone;
-(struct TopoIDRange )insertAttributedString:(id)arg0 after:(*void)arg1 before:(*void)arg2 ;
-(void)_testSetTextTimestamp:(NSUInteger)arg0 ;
-(void)beginEditing;
-(void)checkTimestampLogStyleErrors:(BOOL)arg0 ;
-(void)cleanupObjectsNeedingUpdatedRanges;
-(void)coalesce;
-(void)dealloc;
-(void)deleteCharactersInRange:(struct _NSRange )arg0 ;
-(void)deleteSubstrings:(*void)arg0 withCharacterRanges:(*void)arg1 ;
-(void)dumpData;
-(void)dumpMergeData:(id)arg0 ;
-(void)endEditing;
-(void)enumerateHighlightableRangesModifiedAfter:(id)arg0 includingAttributes:(BOOL)arg1 usingBlock:(id)arg2 ;
-(void)enumerateSubstrings:(id)arg0 ;
-(void)generateIdsForLocalChanges;
-(void)generateIdsForLocalChangesSafeForSharedTimestamp:(BOOL)arg0 ;
-(void)getCharacterRanges:(*void)arg0 forSubstrings:(*void)arg1 ;
-(void)getSubstrings:(*void)arg0 forCharacterRange:(struct _NSRange )arg1 ;
-(void)getSubstrings:(*void)arg0 forTopoIDRange:(struct TopoIDRange )arg1 ;
-(void)getSubstrings:(*void)arg0 inOrderedSubstrings:(*void)arg1 forCharacterRange:(struct _NSRange )arg2 ;
-(void)insertAttributedString:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)insertString:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)invalidateCache;
-(void)mergeWith:(id)arg0 ;
-(void)moveRange:(struct _NSRange )arg0 toIndex:(NSUInteger)arg1 ;
-(void)realizeLocalChangesIn:(id)arg0 ;
-(void)replaceCharactersInRange:(struct _NSRange )arg0 withAttributedString:(id)arg1 ;
-(void)replaceCharactersInRange:(struct _NSRange )arg0 withString:(id)arg1 ;
-(void)resetLocalReplicaClocksToTimestampValues;
-(void)saveDeltaSinceTimestamp:(id)arg0 toArchive:(*void)arg1 ;
-(void)saveSubstrings:(*void)arg0 archiveSet:(*void)arg1 linkSet:(*void)arg2 archivedString:(*id)arg3 toArchive:(*void)arg4 ;
-(void)saveToArchive:(*void)arg0 ;
-(void)sortSplitNodes;
-(void)traverseUnordered:(id)arg0 ;
-(void)updateAttributedStringAfterMerge;
-(void)updateCache;
-(void)updateClock;
-(void)updateSubstringIndexes;
-(void)updateTimestampsInRange:(struct _NSRange )arg0 ;
-(void)updateTopoIDRange:(struct TopoIDRange )arg0 toNewRangeID:(struct TopoIDRange )arg1 ;
-(void)walkGraph:(id)arg0 ;


@end


#endif
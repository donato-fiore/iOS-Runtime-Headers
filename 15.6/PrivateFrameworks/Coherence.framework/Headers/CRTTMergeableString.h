// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRTTMERGEABLESTRING_H
#define CRTTMERGEABLESTRING_H

@class NSUUID;

#import <Foundation/Foundation.h>

#import "CRTTMergeableString.h"
#import "ObjCReplica.h"
#import "ObjCVersion.h"
#import "CRContext.h"

@interface CRTTMergeableString : NSObject {
    vector<TopoSubstring *, std::allocator<TopoSubstring *>> _startNodes;
    vector<TopoSubstring *, std::allocator<TopoSubstring *>> _endNodes;
    vector<TopoSubstring *, std::allocator<TopoSubstring *>> _orderedSubstrings;
    NSUInteger _editCount;
    BOOL _cacheInvalid;
    CRTTMergeableString *_renamedString;
}


@property (nonatomic) NSInteger addedByLocalCounter; // ivar: _addedByLocalCounter
@property (readonly, nonatomic) ObjCReplica *addedByReplica; // ivar: _addedByReplica
@property (retain, nonatomic) ObjCVersion *addedByVersion; // ivar: _addedByVersion
@property (retain, nonatomic) id *attributedString; // ivar: _attributedString
@property (readonly, nonatomic) NSObject *context; // ivar: _context
@property (readonly, nonatomic) CRContext *crcontext;
@property (nonatomic) BOOL hasLocalChanges; // ivar: _hasLocalChanges
@property (nonatomic) NSInteger localCounter; // ivar: _localCounter
@property (nonatomic) NSInteger renameGeneration; // ivar: _renameGeneration
@property (readonly, nonatomic) TopoReplica replica; // ivar: _replica
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (retain, nonatomic) ObjCVersion *version; // ivar: _version


-(*void)endNodes;
-(*void)getSubstringBeforeTopoID:(struct TopoID )arg0 ;
-(*void)orderedSubstrings;
-(*void)splitTopoSubstring:(*void)arg0 atIndex:(unsigned int)arg1 ;
-(*void)startNodes;
-(BOOL)canMergeString:(id)arg0 ;
-(BOOL)check:(*id)arg0 ;
-(BOOL)graphIsEqual:(id)arg0 ;
-(BOOL)hasDeltaTo:(id)arg0 compareElements:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFragment;
-(BOOL)needToFinalizeTimestamps;
-(NSInteger)substringCount;
-(NSUInteger)characterIndexForIndex:(id)arg0 ;
-(NSUInteger)length;
-(NSUInteger)mergeWithString:(id)arg0 ;
-(id)characterRangesForSelection:(id)arg0 ;
-(id)characterRangesForSelection:(id)arg0 selectedSubstringsBlock:(id)arg1 ;
-(id)copyRenamedIfAvailable:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dotDescription:(NSUInteger)arg0 ;
-(id)fullyRenamed;
-(id)initAsFragment:(BOOL)arg0 storage:(id)arg1 uuid:(id)arg2 context:(id)arg3 ;
-(id)initWithDecoder:(id)arg0 error:(*id)arg1 ;
-(id)mergeableIndexForCharacterIndex:(NSInteger)arg0 affinity:(NSUInteger)arg1 ;
-(id)objcReplica;
-(id)renamed:(id)arg0 ;
-(id)renamedIfAvailable;
-(id)replicaUUIDForCharacterAtIndex:(NSUInteger)arg0 ;
-(id)selectionForCharacterRanges:(id)arg0 ;
-(id)selectionForCharacterRanges:(id)arg0 selectionAffinity:(NSUInteger)arg1 ;
-(id)temporaryConcurrentNames;
-(id)temporaryNamesExcludingSelf:(BOOL)arg0 ;
-(id)undoCommandToChangeTo:(id)arg0 ;
-(void)_apply:(id)arg0 ;
// -(void)_deltaTo:(id)arg0 added:(id)arg1 deleted:(unk)arg2  ;
-(void)_updateCache;
-(void)addNewAddedByFor:(*void)arg0 ;
-(void)apply:(id)arg0 skipRetain:(BOOL)arg1 ;
-(void)applyRenamesAndRetainOrRelease:(id)arg0 ;
-(void)applyTimestampRenames:(id)arg0 ;
-(void)beginEditing;
-(void)coalesce;
-(void)dealloc;
-(void)deleteAllSubstrings;
-(void)deleteSubstrings:(*void)arg0 withCharacterRanges:(*void)arg1 ;
// -(void)deltaTo:(id)arg0 added:(id)arg1 deleted:(unk)arg2  ;
-(void)deltaTo:(id)arg0 edited:(id)arg1 ;
-(void)dumpMergeData:(id)arg0 ;
-(void)endEditing;
-(void)enumerateIndexes:(id)arg0 ;
-(void)enumerateSubstrings:(id)arg0 ;
-(void)finalizeTimestamps;
-(void)getCharacterRanges:(*void)arg0 forSubstrings:(*void)arg1 ;
-(void)getSubstrings:(*void)arg0 forCharacterRange:(struct _NSRange )arg1 ;
-(void)getSubstrings:(*void)arg0 forTopoIDRange:(struct TopoIDRange )arg1 ;
-(void)getSubstrings:(*void)arg0 inOrderedSubstrings:(*void)arg1 forCharacterRange:(struct _NSRange )arg2 ;
-(void)insertAtIndex:(NSInteger)arg0 length:(NSInteger)arg1 getStorage:(id)arg2 ;
-(void)insertStorageLength:(NSInteger)arg0 after:(*void)arg1 before:(*void)arg2 getStorage:(id)arg3 ;
-(void)invalidateCache;
-(void)removeAll;
-(void)removeObjectsInRange:(struct _NSRange )arg0 ;
-(void)replaceStorageInRange:(struct _NSRange )arg0 withStorage:(id)arg1 ;
-(void)saveSubstrings:(*void)arg0 encoder:(id)arg1 ;
-(void)saveToEncoder:(id)arg0 ;
-(void)sortSplitNodes;
-(void)traverseUnordered:(id)arg0 ;
-(void)undeleteSubstrings:(*void)arg0 ;
-(void)updateAttributedStringAfterMerge;
-(void)updateSubstringIndexes;
-(void)useRenameIfAvailable;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRTOMBSTONEORDEREDSET_H
#define CRTOMBSTONEORDEREDSET_H

@class NSMutableOrderedSet, NSMapTable, NSString;
@protocol CRCoding, CRUndoDelegate, CRDataType;

#import <Foundation/Foundation.h>

#import "CRDocument.h"
#import "CRSet.h"
#import "CRArray.h"

@interface CRTombstoneOrderedSet : NSObject <CRCoding, CRUndoDelegate, CRDataType>



@property (readonly, nonatomic) NSMutableOrderedSet *cachedIdentifierSet; // ivar: _cachedIdentifierSet
@property (readonly, nonatomic) NSMapTable *cachedIndexMapping; // ivar: _cachedIndexMapping
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CRUndoDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) CRDocument *document; // ivar: _document
@property (retain, nonatomic) CRSet *elements; // ivar: _elements
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CRArray *ordering; // ivar: _ordering
@property (readonly) Class superclass;
@property (readonly) Class superclass;


-(BOOL)containsObjectEqualTo:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)wantsUndoCommands;
-(NSUInteger)indexOfEqualObject:(id)arg0 ;
-(id)deltaSince:(id)arg0 in:(id)arg1 ;
-(id)generateNSOrderedIdentifierSetWithIndexMapping:(id)arg0 ;
-(id)identifierForObjectInCachedSet:(id)arg0 ;
-(id)init;
-(id)initWithCRCoder:(id)arg0 ;
-(id)initWithCRCoder:(id)arg0 orderedSet:(*void)arg1 ;
-(id)initWithDocument:(id)arg0 ;
-(id)initWithOrdering:(id)arg0 elements:(id)arg1 document:(id)arg2 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(id)objectForIdentifier:(id)arg0 ;
-(id)tombstone;
-(void)_removeObjectsFromOrderingAtIndices:(id)arg0 ;
-(void)addObject:(id)arg0 ;
-(void)addUndoCommandsForObject:(id)arg0 block:(id)arg1 ;
-(void)encodeWithCRCoder:(id)arg0 ;
-(void)encodeWithCRCoder:(id)arg0 orderedSet:(*void)arg1 ;
-(void)enumerateObjectsUsingBlock:(id)arg0 ;
-(void)insertObject:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)mergeWith:(id)arg0 ;
-(void)moveClock;
-(void)moveObjectFromIndex:(NSUInteger)arg0 toIndex:(NSUInteger)arg1 ;
-(void)moveObjectFromIndex:(NSUInteger)arg0 toIndex:(NSUInteger)arg1 mutableSafe:(BOOL)arg2 ;
-(void)realizeElementMutations;
-(void)realizeLocalChangesIn:(id)arg0 ;
-(void)regenerateNSOrderedIdentifierSetAndIndexMapping;
-(void)reinsertIdentifier:(id)arg0 withMaskedIdentifiers:(id)arg1 atIndex:(NSUInteger)arg2 forObjectToMove:(id)arg3 ;
-(void)removeObjectAtIndex:(NSUInteger)arg0 ;
-(void)safeMoveObjectFromIndex:(NSUInteger)arg0 toIndex:(NSUInteger)arg1 ;
-(void)shiftCachedIndicesStartingAtIndex:(NSUInteger)arg0 by:(NSInteger)arg1 ;
-(void)undoablyInsertObjectIdentifiersIntoElements:(id)arg0 ;
-(void)undoablyRemoveObjectIdentifiersFromElements:(id)arg0 ;
-(void)walkGraph:(id)arg0 ;
-(void)wipeoutCaches;


@end


#endif
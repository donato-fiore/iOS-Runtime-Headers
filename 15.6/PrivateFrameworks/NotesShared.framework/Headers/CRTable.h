// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRTABLE_H
#define CRTABLE_H

@class NSString;
@protocol CRUndoDelegate;


#import "CRObject.h"
#import "CRDictionary.h"
#import "CRTombstoneOrderedSet.h"
#import "CRDocument.h"

@interface CRTable : CRObject <CRUndoDelegate>



@property (readonly, nonatomic) CRDictionary *cellColumns;
@property (readonly, nonatomic) NSUInteger columnCount;
@property (retain, nonatomic) NSString *columnDirection;
@property (readonly, nonatomic) CRTombstoneOrderedSet *crColumns;
@property (readonly, nonatomic) CRTombstoneOrderedSet *crRows;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CRUndoDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) CRDocument *document; // ivar: _document
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isLeftToRight;
@property (readonly, nonatomic) BOOL isRightToLeft;
@property (readonly, nonatomic) NSUInteger rowCount;
@property (readonly) Class superclass;


+(id)CRProperties;
+(void)registerWithCRCoder;
-(BOOL)containsColumn:(id)arg0 ;
-(BOOL)containsRow:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)wantsUndoCommands;
-(NSUInteger)columnIndexForIdentifier:(id)arg0 ;
-(NSUInteger)countOfPopulatedCells;
-(NSUInteger)rowIndexForIdentifier:(id)arg0 ;
-(id)columnIndexesForIdentifiers:(id)arg0 ;
-(id)columnsIntersectingWithColumns:(id)arg0 ;
-(id)crTableColumnDirection;
-(id)identifierForColumnAtIndex:(NSUInteger)arg0 ;
-(id)identifierForRowAtIndex:(NSUInteger)arg0 ;
-(id)identifiersForColumnIndexes:(id)arg0 ;
-(id)identifiersForRowIndexes:(id)arg0 ;
-(id)identity;
-(id)initWithDocument:(id)arg0 ;
-(id)initWithDocument:(id)arg0 columnDirection:(id)arg1 ;
-(id)initWithDocument:(id)arg0 columnDirection:(id)arg1 crColumns:(id)arg2 crRows:(id)arg3 cellColumns:(id)arg4 ;
-(id)initWithDocument:(id)arg0 isRightToLeft:(BOOL)arg1 ;
-(id)initWithIdentity:(id)arg0 fields:(id)arg1 ;
-(id)insertColumnAtIndex:(NSUInteger)arg0 ;
-(id)insertColumns:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(id)insertRowAtIndex:(NSUInteger)arg0 ;
-(id)insertRows:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(id)objectForColumnID:(id)arg0 rowID:(id)arg1 ;
-(id)objectForColumnIndex:(NSUInteger)arg0 rowIndex:(NSUInteger)arg1 ;
-(id)rowIndexesForIdentifiers:(id)arg0 ;
-(id)rowsIntersectingWithRows:(id)arg0 ;
-(id)subtableWithDocument:(id)arg0 forSelectionContainingColumnIndices:(id)arg1 rowIndices:(id)arg2 ;
-(void)addUndoCommandsForObject:(id)arg0 block:(id)arg1 ;
-(void)enumerateCellObjectsInCellSelectionContainingColumnIndices:(id)arg0 rowIndices:(id)arg1 copyItems:(BOOL)arg2 usingBlock:(id)arg3 ;
-(void)enumerateColumnsWithBlock:(id)arg0 ;
-(void)enumerateRowsWithBlock:(id)arg0 ;
-(void)moveColumnAtIndex:(NSUInteger)arg0 toIndex:(NSUInteger)arg1 ;
-(void)moveRowAtIndex:(NSUInteger)arg0 toIndex:(NSUInteger)arg1 ;
-(void)removeColumnAtIndex:(NSUInteger)arg0 ;
-(void)removeRowAtIndex:(NSUInteger)arg0 ;
-(void)reverseColumnDirection;
-(void)setObject:(id)arg0 columnID:(id)arg1 rowID:(id)arg2 ;
-(void)setObject:(id)arg0 columnIndex:(NSUInteger)arg1 rowIndex:(NSUInteger)arg2 ;
-(void)undoablyInsertContents:(id)arg0 atColumn:(id)arg1 ;
-(void)undoablyInsertContents:(id)arg0 atRow:(id)arg1 ;
-(void)undoablyRemoveContentsOfColumn:(id)arg0 ;
-(void)undoablyRemoveContentsOfRow:(id)arg0 ;


@end


#endif
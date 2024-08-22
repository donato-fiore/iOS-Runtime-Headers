// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICTABLECOLUMNTEXTSTORAGE_H
#define ICTABLECOLUMNTEXTSTORAGE_H

@class NSUUID, NSString, NSMutableDictionary, NSArray, NSMutableIndexSet, NSMutableArray, ICTable;
@protocol ICTableCellMergeableStringObserving, ICTableUndoHelping;


#import "ICTableTextStorage.h"

@interface ICTableColumnTextStorage : ICTableTextStorage <ICTableCellMergeableStringObserving>



@property (readonly) NSUUID *columnID; // ivar: _columnID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *mergeableStringDelegates; // ivar: _mergeableStringDelegates
@property (readonly, nonatomic) NSArray *populatedRows;
@property (readonly, nonatomic) BOOL preventEditingUpdates;
@property (nonatomic) NSUInteger preventEditingUpdatesCount; // ivar: _preventEditingUpdatesCount
@property (readonly, nonatomic) NSMutableIndexSet *rowStartIndexes; // ivar: _rowStartIndexes
@property (readonly, nonatomic) NSMutableArray *rows; // ivar: _rows
@property (nonatomic) BOOL shouldPreventUndoCommands; // ivar: _shouldPreventUndoCommands
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) ICTable *table; // ivar: _table
@property (weak, nonatomic) NSObject<ICTableUndoHelping> *undoHelper; // ivar: _undoHelper


-(BOOL)wantsTimestampUpdates;
-(BOOL)wantsUndoCommands;
-(NSUInteger)indexOfRow:(id)arg0 ;
-(NSUInteger)indexOfRowAtLocation:(NSUInteger)arg0 ;
-(NSUInteger)insertionIndexForRow:(id)arg0 ;
-(NSUInteger)nextLocationAfterRowLocation:(NSUInteger)arg0 ;
-(NSUInteger)rowLocationForRowID:(id)arg0 ;
-(NSUInteger)rowLocationForRowIndex:(NSUInteger)arg0 ;
-(id)editAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithTable:(id)arg0 columnID:(id)arg1 replicaID:(id)arg2 ;
-(id)mergeableStringForRowID:(id)arg0 ;
-(id)rowAtIndex:(NSUInteger)arg0 rowRange:(struct _NSRange *)arg1 ;
-(id)savedSelectionWithSelectionAffinity:(NSUInteger)arg0 ;
-(struct _NSRange )characterRangeForRowID:(id)arg0 ;
-(struct _NSRange )logicalRangeForLocation:(NSUInteger)arg0 ;
-(void)beginPreventEditingUpdates;
-(void)breakUndoCoalescing;
-(void)closeUndoGroups;
-(void)edited:(NSUInteger)arg0 range:(struct _NSRange )arg1 changeInLength:(NSInteger)arg2 ;
-(void)endPreventEditingUpdates;
-(void)enumerateEditsInRange:(struct _NSRange )arg0 usingBlock:(id)arg1 ;
-(void)removeRow:(id)arg0 ;
-(void)removeTextForRow:(id)arg0 ;
-(void)resetUndoManager;
-(void)restoreSelection:(id)arg0 ;
-(void)tableCellWasEditedAtColumnID:(id)arg0 rowID:(id)arg1 edited:(NSUInteger)arg2 range:(struct _NSRange )arg3 changeInLength:(NSInteger)arg4 ;
-(void)textStorage:(id)arg0 didProcessEditing:(NSUInteger)arg1 range:(struct _NSRange )arg2 changeInLength:(NSInteger)arg3 ;
-(void)updateStorageForMovedRow:(id)arg0 ;


@end


#endif
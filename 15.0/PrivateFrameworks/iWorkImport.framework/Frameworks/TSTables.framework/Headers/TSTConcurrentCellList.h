// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTCONCURRENTCELLLIST_H
#define TSTCONCURRENTCELLLIST_H

@class TSPObject, NSMutableDictionary, NSArray, NSMutableArray;
@protocol NSCopying;



@interface TSTConcurrentCellList : TSPObject <NSCopying>

 {
    ? _cellUIDRange;
    vector<TSTCell *, std::allocator<TSTCell *>> _cells;
    vector<TSUModelRowIndex, std::allocator<TSUModelRowIndex>> _baseRows;
    vector<TSUModelColumnIndex, std::allocator<TSUModelColumnIndex>> _baseColumns;
    vector<TSUViewRowIndex, std::allocator<TSUViewRowIndex>> _viewRows;
    vector<TSUViewColumnIndex, std::allocator<TSUViewColumnIndex>> _viewColumns;
    vector<long, std::allocator<long>> _cellCountDiffsPerRow;
    vector<long, std::allocator<long>> _cellCountDiffsPerColumn;
    vector<TSTNineKeyStructPreBNC, std::allocator<TSTNineKeyStructPreBNC>> _preBNCKeysList;
    vector<TSTCell *, std::allocator<TSTCell *>> _oldCells;
}


@property (readonly, nonatomic) NSUInteger cellCount;
@property ? cellUIDRange;
@property (readonly, nonatomic) BOOL containsCellBorderChanges; // ivar: _containsCellBorderChanges
@property (retain, nonatomic) NSMutableDictionary *formatsAdded; // ivar: _formatsAdded
@property (retain, nonatomic) NSMutableDictionary *formatsRemoved; // ivar: _formatsRemoved
@property (readonly, nonatomic) BOOL hasCells;
@property (retain, nonatomic) NSArray *interestingCells; // ivar: _interestingCells
@property (retain, nonatomic) NSMutableArray *rowInfosPerRow; // ivar: _rowInfosPerRow
@property (retain, nonatomic) NSMutableArray *tilesPerRow; // ivar: _tilesPerRow
@property (readonly, nonatomic, getter=isUIDBased) BOOL uidBased; // ivar: _uidBased
@property (nonatomic) TSUViewCellRect viewCellRect; // ivar: _viewCellRect


-(?)initWithContext:(?)arg0 viewCellRectcellUIDRange;
-(?)initWithContextcellUIDRange;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithContext:(id)arg0 viewCellRect:(struct TSUViewCellRect )arg1 ;
-(void)addCell:(id)arg0 atViewCellCoord:(struct TSUViewCellCoord )arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)p_accumulateCurrentCellsConcurrentlyUsingBlock:(id)arg0 ;
-(void)p_convertToUuidBasedCellListUsingTableInfo:(id)arg0 pruneCategorizedCells:(BOOL)arg1 ;
-(void)p_enumerateCellsAddedAndRemovedForFormatsUsingBlock:(id)arg0 ;
-(void)p_enumerateCellsAddedAndRemovedOfType:(NSInteger)arg0 usingBlock:(id)arg1 ;
-(void)p_enumerateColumnCellCountDiffUsingBlock:(id)arg0 ;
-(void)p_enumerateCustomFormatsBeingAddedUsingReplacementBlock:(id)arg0 ;
-(void)p_enumerateNewAndOldCellsSeriallyUsingBlock:(id)arg0 ;
-(void)p_enumerateNewAndOldCellsSeriallyUsingPreBNCBlock:(id)arg0 ;
-(void)p_enumerateRowCellCountDiffUsingBlock:(id)arg0 ;
-(void)p_enumerateRowsOfCellsConcurrentlyUsingBlock:(id)arg0 ;
-(void)p_gatherRowState:(id)arg0 ;
-(void)p_invokeBlock:(id)arg0 ;
-(void)p_pruneCellsAtColumn:(NSUInteger)arg0 rowsSize:(NSUInteger)arg1 columnsSize:(NSUInteger)arg2 ;
-(void)p_pruneCellsAtRow:(NSUInteger)arg0 rowsSize:(NSUInteger)arg1 columnsSize:(NSUInteger)arg2 ;
-(void)p_pruneToBaseWithTableInfo:(id)arg0 ;
-(void)p_simpleInvokeBlock:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif
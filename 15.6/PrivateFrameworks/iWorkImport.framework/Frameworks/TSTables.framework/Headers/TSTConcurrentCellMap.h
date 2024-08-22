// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTCONCURRENTCELLMAP_H
#define TSTCONCURRENTCELLMAP_H

@class TSPObject, NSMutableArray;
@protocol NSCopying, TSTCellMapChangeDescriptorDelivering;



@interface TSTConcurrentCellMap : TSPObject <NSCopying, TSTCellMapChangeDescriptorDelivering>

 {
    ? _cachedRowUIDs;
    ? _cachedColumnUIDs;
}


@property (nonatomic) BOOL applyingToTable; // ivar: _applyingToTable
@property ? cachedColumnUIDs;
@property ? cachedRowUIDs;
@property (retain, nonatomic) NSMutableArray *cellLists; // ivar: _cellLists
@property (retain, nonatomic) NSMutableArray *inverseMergeActions; // ivar: _inverseMergeActions
@property (nonatomic) BOOL mayModifyFormulasInCells; // ivar: _mayModifyFormulasInCells
@property (nonatomic) BOOL mayModifyValuesReferencedByFormulas; // ivar: _mayModifyValuesReferencedByFormulas
@property (retain, nonatomic) NSMutableArray *mergeActions; // ivar: _mergeActions
@property (nonatomic, getter=isUIDBased) BOOL uidBased; // ivar: _uidBased


-(id)cellRegionWithTableInfo:(id)arg0 ;
-(id)cellRegionWithTableInfo:(id)arg0 passingTest:(id)arg1 ;
-(id)changeDescriptorsForTable:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 uidBased:(BOOL)arg1 ;
-(void)accumulateCurrentCellsConcurrentlyUsingBlock:(id)arg0 ;
-(void)addMergeAction:(id)arg0 ;
-(void)addMergeActions:(id)arg0 ;
-(void)appendCellList:(id)arg0 ;
-(void)appendCellLists:(id)arg0 ;
-(void)convertToUuidBasedCellMapUsingTableInfo:(id)arg0 pruneCategorizedCells:(BOOL)arg1 ;
-(void)enumerateCellsAddedAndRemovedOfType:(NSInteger)arg0 withOptions:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)enumerateColumnCellCountDiffUsingBlock:(id)arg0 ;
-(void)enumerateCustomFormatsBeingAddedUsingReplacementBlock:(id)arg0 ;
-(void)enumerateRowCellCountDiffUsingBlock:(id)arg0 ;
-(void)enumerateRowsOfCellsConcurrentlyUsingBlock:(id)arg0 ;
-(void)enumerateSeriallyUsingBlock:(id)arg0 ;
-(void)gatherRowState:(id)arg0 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)p_enumerateCellsAddedAndRemovedForFormatsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)p_enumerateNewAndOldCellsSeriallyUsingBlock:(id)arg0 ;
-(void)p_enumerateNewAndOldCellsSeriallyUsingPreBNCBlock:(id)arg0 ;
-(void)pushInverseMergeAction:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;
// -(void)updateDataListsConcurrentlyUsingCommentStorageBlock:(id)arg0 conditionalStyleSetBlock:(unk)arg1 controlCellSpecBlock:(id)arg2 formulaBlock:(unk)arg3 formulaErrorBlock:(id)arg4 importWarningSetBlock:(unk)arg5 richTextBlock:(id)arg6 stringBlock:(unk)arg7 styleBlock:(id)arg8 customFormatBlock:(unk)arg9 formatBlock:(id)arg10 preBNCBlock:(unk)arg11  ;
-(void)willApplyToTable:(id)arg0 ;


@end


#endif
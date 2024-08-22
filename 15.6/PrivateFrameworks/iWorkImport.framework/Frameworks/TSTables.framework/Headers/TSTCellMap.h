// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTCELLMAP_H
#define TSTCELLMAP_H

@class TSPObject, NSMutableArray;
@protocol NSCopying, TSTCellMapChangeDescriptorDelivering;


#import "TSTCellUIDList.h"

@interface TSTCellMap : TSPObject <NSCopying, TSTCellMapChangeDescriptorDelivering>

 {
    vector<TSUCellCoord, std::allocator<TSUCellCoord>> _cellIDs;
    NSMutableArray *_mergeActions;
    unordered_map<TSUCellCoord, TSTCell *, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, std::allocator<std::pair<const TSUCellCoord, TSTCell *>>> _searchableIDMap;
    unordered_map<TSKUIDStructCoord, TSTCell *, std::hash<TSKUIDStructCoord>, std::equal_to<TSKUIDStructCoord>, std::allocator<std::pair<const TSKUIDStructCoord, TSTCell *>>> _searchableUIDMap;
}


@property (retain, nonatomic) NSMutableArray *cellLists; // ivar: _cellLists
@property (retain, nonatomic) TSTCellUIDList *cellUIDs; // ivar: _cellUIDs
@property (nonatomic) BOOL mayModifyFormulasInCells; // ivar: _mayModifyFormulasInCells
@property (nonatomic) BOOL mayModifyValuesReferencedByFormulas; // ivar: _mayModifyValuesReferencedByFormulas
@property (readonly, nonatomic, getter=isOneToMany) BOOL oneToMany; // ivar: _oneToMany
@property (nonatomic) BOOL shallowCopy; // ivar: _shallowCopy
@property (nonatomic, getter=isUIDBased) BOOL uidBased; // ivar: _uidBased


+(id)cellMapWithContext:(id)arg0 ;
+(id)uuidBasedCellMapWithContext:(id)arg0 ;
-(*void)cellIDs;
-(*void)columnUIDs;
-(*void)rowUIDs;
-(BOOL)containsMergeChanges;
-(NSUInteger)count;
-(NSUInteger)p_cellCount;
-(id)cellAtIndex:(NSUInteger)arg0 ;
-(id)cellIDBasedCellMapByTableInfo:(id)arg0 ;
-(id)cellMapMaskedByUIDs:(*void)arg0 inRows:(BOOL)arg1 ;
-(id)changeDescriptorsForTable:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 copyingCells:(BOOL)arg1 ;
-(id)findCellForCellID:(struct TSUCellCoord )arg0 ;
-(id)findCellForCellUID:(struct TSKUIDStructCoord *)arg0 ;
-(id)initShallowMapWithContext:(id)arg0 uidBased:(BOOL)arg1 ;
-(id)initWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 cell:(id)arg1 cellIDList:(*void)arg2 ;
-(id)initWithContext:(id)arg0 cell:(id)arg1 cellUIDList:(id)arg2 ;
-(id)initWithContext:(id)arg0 cell:(id)arg1 cellUIDList:(id)arg2 skipCellUIDListCopy:(BOOL)arg3 ;
-(id)initWithContext:(id)arg0 uidBased:(BOOL)arg1 ;
-(id)iterator;
-(id)mergeActions;
-(id)p_addCell:(id)arg0 ;
-(id)p_cellAtIndex:(NSUInteger)arg0 inCellListArray:(id)arg1 ;
-(id)shallowCopyToCoordFormUsingMap:(id)arg0 ;
-(id)uuidBasedCellMapByTableInfo:(id)arg0 ;
-(struct TSCECellCoordSet )coordinatesForTableInfo:(id)arg0 passingTest:(id)arg1 ;
-(struct TSUCellCoord )cellIDAtIndex:(NSUInteger)arg0 ;
-(void)addCell:(id)arg0 andCellID:(struct TSUCellCoord )arg1 ;
-(void)addCell:(id)arg0 andCellUID:(struct TSKUIDStructCoord *)arg1 ;
-(void)addHeadMergeAction:(id)arg0 ;
-(void)addMergeAction:(id)arg0 ;
-(void)addMergeActions:(id)arg0 ;
-(void)addPrecopiedCells:(*void)arg0 andCellUIDs:(*void)arg1 ;
-(void)appendCellMap:(id)arg0 precopied:(BOOL)arg1 ;
-(void)clearDataListIDs;
-(void)clearMerges;
-(void)enumerateCellsWithIDsUsingBlock:(id)arg0 ;
-(void)enumerateCellsWithUIDsUsingBlock:(id)arg0 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)p_addPrecopiedCells:(*void)arg0 ;
-(void)p_copyCellsAndUUIDsFromCellMap:(id)arg0 convertingToCellIDsWithTableInfo:(id)arg1 ;
-(void)p_resolveCellIDsToUUIDsByTableInfo:(id)arg0 ;
-(void)p_shallowAddCell:(id)arg0 atCellCoord:(struct TSUCellCoord )arg1 ;
-(void)remapUIDsByColumnMap:(*void)arg0 rowMap:(*void)arg1 ownerMap:(*void)arg2 ;
-(void)replaceCellAtIndex0:(id)arg0 ;
-(void)reserve:(NSUInteger)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif
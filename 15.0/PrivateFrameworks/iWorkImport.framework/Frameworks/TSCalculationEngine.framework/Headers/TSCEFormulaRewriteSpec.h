// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCEFORMULAREWRITESPEC_H
#define TSCEFORMULAREWRITESPEC_H

@class NSMutableArray, TSKShuffleMapping;

#import <Foundation/Foundation.h>

#import "TSCECoordMapper.h"
#import "TSCEFormulasForUndo.h"
#import "TSCEGroupByChange.h"
#import "TSCERewriteGroupNodeUIDInfo.h"
#import "TSCEFormulaRewrite_RegionMergedInfo.h"
#import "TSCEFormulaRewrite_MergeOriginMovedInfo.h"
#import "TSCEFormulaRewrite_RegionMovedInfo.h"
#import "TSCEFormulaRewriteSpec.h"
#import "TSCEFormulaRewriteInfo_RowColumnInfo.h"
#import "TSCERewriteTableUIDInfo.h"
#import "TSCETableTransposedInfo.h"

@interface TSCEFormulaRewriteSpec : NSObject {
    TSKUIDStruct _groupByUid;
    TSUCellRect _tableRange;
    unordered_map<TSCECellRef, TSTConditionalStyleSet *, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, std::allocator<std::pair<const TSCECellRef, TSTConditionalStyleSet *>>> _conditionalStylesForUndo;
    NSMutableArray *_nestedRewrites;
    unordered_map<TSCECellRef, TSUCellRect, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, std::allocator<std::pair<const TSCECellRef, TSUCellRect>>> _mergeRangesContainingFormulas;
    os_unfair_lock_s _coordMappersLock;
    unordered_map<TSKUIDStruct, TSCECoordMapper *, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, TSCECoordMapper *>>> _coordMappersByTableUID;
}


@property (nonatomic) BOOL canBeNested; // ivar: _canBeNested
@property (nonatomic) TSKUIDStruct conditionalStyleOwnerUID; // ivar: _conditionalStyleOwnerUID
@property (retain, nonatomic) TSCECoordMapper *coordMapper; // ivar: _coordMapper
@property (readonly, nonatomic) BOOL didModifyWasCalled; // ivar: _didModifyWasCalled
@property (retain, nonatomic) TSCEFormulasForUndo *formulasForUndo; // ivar: _formulasForUndo
@property (nonatomic) TSKUIDStruct fromTableUID; // ivar: _fromTableUID
@property (retain, nonatomic) TSCEGroupByChange *groupByChange; // ivar: _groupByChange
@property (nonatomic) TSKUIDStruct groupByUID; // ivar: _groupByUID
@property (retain, nonatomic) TSCERewriteGroupNodeUIDInfo *groupNodeUIDInfo; // ivar: _groupNodeUIDInfo
@property (nonatomic) TSKUIDStruct insertAtUid;
@property (nonatomic) TSKUIDStruct insertOppositeUid;
@property (nonatomic) BOOL isInverse; // ivar: _isInverse
@property (retain, nonatomic) TSCEFormulaRewrite_RegionMergedInfo *mergeInfo; // ivar: _mergeInfo
@property (retain, nonatomic) TSCEFormulaRewrite_MergeOriginMovedInfo *mergeOriginMovedInfo; // ivar: _mergeOriginMovedInfo
@property (retain, nonatomic) TSCEFormulaRewrite_RegionMovedInfo *regionMovedInfo; // ivar: _regionMovedInfo
@property (retain, nonatomic) TSCEFormulaRewriteSpec *rewriteSpecBaseToChrome; // ivar: _rewriteSpecBaseToChrome
@property (retain, nonatomic) TSCEFormulaRewriteSpec *rewriteSpecChromeToBase; // ivar: _rewriteSpecChromeToBase
@property (readonly, nonatomic) unsigned int rewriteType; // ivar: _rewriteType
@property (retain, nonatomic) TSCEFormulaRewriteInfo_RowColumnInfo *rowColumnInfo; // ivar: _rowColumnInfo
@property (retain, nonatomic) TSKShuffleMapping *shuffleMap; // ivar: _shuffleMap
@property (retain, nonatomic) TSCECoordMapper *srcCoordMapper; // ivar: _srcCoordMapper
@property (nonatomic) TSKUIDStruct tableUID; // ivar: _tableUID
@property (retain, nonatomic) TSCERewriteTableUIDInfo *tableUIDInfo; // ivar: _tableUIDInfo
@property (retain, nonatomic) TSCETableTransposedInfo *transposedInfo; // ivar: _transposedInfo
@property (retain, nonatomic) id *warningSetsForUndo; // ivar: _warningSetsForUndo
@property (readonly, nonatomic) BOOL willModifyWasCalled; // ivar: _willModifyWasCalled


+(BOOL)rewriteTypeUsesAmendRewriteSpec:(unsigned int)arg0 ;
-(*void)conditionalStylesForUndo;
-(?)expandedRowColumnUuids;
-(BOOL)adjustViewTractRef:(id)arg0 calcEngine:(id)arg1 containingCellRef:(struct TSCECellRef *)arg2 undoTractList:(*id)arg3 ;
-(BOOL)isForTable:(struct TSKUIDStruct *)arg0 ;
-(id)amendRewriteWithCalcEngine:(id)arg0 ;
-(id)coordMapperForTableUID:(struct TSKUIDStruct *)arg0 calcEngine:(id)arg1 ;
-(id)description;
-(id)initWithRewriteType:(unsigned int)arg0 ;
-(id)miniDescription;
-(id)nestedRewrites;
-(id)prepareToRewriteWithCalcEngine:(id)arg0 ;
-(id)restoreViewTractRefFromUndoTractList:(id)arg0 calcEngine:(id)arg1 containingCellRef:(struct TSCECellRef *)arg2 ;
-(struct TSCECellRef )flattenedCellRefForCategoryRef:(id)arg0 calcEngine:(id)arg1 ;
-(struct TSCECellRef )originalCellRefForUpdatedCellRef:(struct TSCECellRef *)arg0 ;
-(struct TSCECellRef )updatedCellRefForOriginalCellRef:(struct TSCECellRef *)arg0 ;
-(struct TSCERangeCoordinate )affectedRange;
-(struct TSKUIDStruct )affectedConditionalStyleOwnerUID;
-(struct TSKUIDStruct )affectedOwnerUID;
-(struct TSUCellRect )mergeRangeAtOriginalCellRef:(struct TSCECellRef *)arg0 ;
-(struct TSUCellRect )tableRangeForTable:(struct TSKUIDStruct *)arg0 calcEngine:(id)arg1 ;
-(struct unordered_set<TSKUIDStruct, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<TSKUIDStruct>> )affectedOwnerUIDs;
-(void)addCoordMapper:(id)arg0 ;
-(void)addNestedRewrite:(id)arg0 ;
-(void)clearTableIndexes;
-(void)didModifySrcTable:(id)arg0 dstTable:(id)arg1 ;
-(void)didModifyTable:(id)arg0 ;
-(void)didModifyTable:(id)arg0 calcEngine:(id)arg1 ;
-(void)loadMergeRangesContainingFormulasInTable:(id)arg0 calcEngine:(id)arg1 ;
-(void)willModifySrcTable:(id)arg0 srcUidResolver:(id)arg1 dstTable:(id)arg2 dstUidResolver:(id)arg3 ;
-(void)willModifyTable:(id)arg0 uidResolver:(id)arg1 calcEngine:(id)arg2 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTCATEGORYOWNER_H
#define TSTCATEGORYOWNER_H

@class TSPObject, NSMutableArray, NSArray;
@protocol TSTCellWillChangeProtocol, TSTMergeChangeProtocol, TSCEFormulaReplacing;


#import "TSCECalculationEngine.h"
#import "TSTTableModel.h"

@interface TSTCategoryOwner : TSPObject <TSTCellWillChangeProtocol, TSTMergeChangeProtocol>

 {
    TSCECalculationEngine *_calcEngine;
    os_unfair_lock_s _lock;
    NSMutableArray *_groupBys;
}


@property (readonly, nonatomic) BOOL allowRegistrationOfAggFormulas;
@property (readonly, nonatomic) BOOL backwardCompatibleToPrePivot;
@property (nonatomic) TSKUIDStruct baseTableUID; // ivar: _baseTableUID
@property (readonly, nonatomic) NSArray *groupBys;
@property (readonly, nonatomic) BOOL isRegisteredWithCalcEngine; // ivar: _isRegisteredWithCalcEngine
@property (retain, nonatomic) NSObject<TSCEFormulaReplacing> *minion; // ivar: _minion
@property (weak, nonatomic) TSTTableModel *tableModel; // ivar: _tableModel


+(NSInteger)p_compareGroupByViaOwnerIndexes:(id)arg0 otherGroupBy:(id)arg1 ;
-(BOOL)hasEnabledGroupBys;
-(BOOL)verifyConnectionsWithPivotDataModel:(id)arg0 ;
-(BOOL)verifySubOwnerUIDsUsed:(struct TSKUIDStruct *)arg0 ;
-(id)calcEngine;
-(id)description;
-(id)groupByByUid:(struct TSKUIDStruct *)arg0 ;
-(id)groupByForOwnerIndex:(unsigned short)arg0 ;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 forBaseTable:(id)arg2 ;
-(id)initWithBaseTableModel:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)registerGroupByForColumns:(id)arg0 ownerIndex:(unsigned short)arg1 hiddenStates:(id)arg2 groupBySet:(id)arg3 ;
-(int)registerWithCalcEngine:(id)arg0 baseOwnerUID:(struct TSKUIDStruct *)arg1 ;
-(struct TSKUIDStruct )p_willApplyCell:(id)arg0 baseCellCoord:(struct TSUModelCellCoord )arg1 refreshCategoryInfo:(BOOL)arg2 ;
-(void)addGroupByInSortedOrder:(id)arg0 ;
-(void)dealloc;
-(void)didAddRows:(*void)arg0 ;
-(void)didMergeRange:(struct TSUModelCellRect )arg0 ;
-(void)didUnmergeRange:(struct TSUModelCellRect )arg0 ;
-(void)linkGroupBy:(id)arg0 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)registerWithDistributors;
-(void)remapTableUIDsInFormulasWithMap:(*void)arg0 calcEngine:(id)arg1 ;
-(void)resetAllGroupings;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)setCalcEngine:(id)arg0 ;
-(void)setFormulaOwnerUIDsWithMap:(id)arg0 ;
-(void)sortGroupBys;
-(void)teardown;
-(void)unpackAfterUnarchive:(id)arg0 ;
-(void)unregisterFromCalcEngine;
-(void)unregisterFromDistributors;
-(void)unregisterGroupBy:(id)arg0 ;
-(void)updateWithDocumentRoot:(id)arg0 ;
-(void)willApplyBaseCellMap:(id)arg0 tableUID:(struct TSKUIDStruct *)arg1 ;
-(void)willApplyCell:(id)arg0 baseCellCoord:(struct TSUModelCellCoord )arg1 tableUID:(struct TSKUIDStruct *)arg2 ;
-(void)willApplyConcurrentCellMap:(id)arg0 tableUID:(struct TSKUIDStruct *)arg1 ;
-(void)willModify;
-(void)willRemoveRows:(*void)arg0 tableUID:(struct TSKUIDStruct *)arg1 ;


@end


#endif
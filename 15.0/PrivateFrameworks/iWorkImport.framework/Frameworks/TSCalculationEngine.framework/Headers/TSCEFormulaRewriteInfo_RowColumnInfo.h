// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCEFORMULAREWRITEINFO_ROWCOLUMNINFO_H
#define TSCEFORMULAREWRITEINFO_ROWCOLUMNINFO_H

@class NSArray, NSIndexSet;

#import <Foundation/Foundation.h>

#import "TSCEFormulaRewriteInfo_RowColumnInfo.h"
#import "TSCEUIDSet.h"
#import "TSCEFormulaRewrite_Uids.h"

@interface TSCEFormulaRewriteInfo_RowColumnInfo : NSObject {
    NSArray *_rangeEntries;
    TSCERangeCoordinate _tableRange;
}


@property (retain, nonatomic) TSCEFormulaRewriteInfo_RowColumnInfo *auxRowColumnInfo; // ivar: _auxRowColumnInfo
@property (readonly, nonatomic) *TSKUIDStruct conditionalStyleOwnerUID; // ivar: _conditionalStyleOwnerUID
@property (readonly, nonatomic) TSCEUIDSet *expandedRowColumnUuids; // ivar: _expandedRowColumnUuids
@property (readonly, nonatomic) *TSKUIDStruct groupByUID; // ivar: _groupByUID
@property (nonatomic) TSKUIDStruct insertAtUid; // ivar: _insertAtUid
@property (nonatomic) TSKUIDStruct insertOppositeUid; // ivar: _insertOppositeUid
@property (readonly, nonatomic) BOOL isColumns;
@property (readonly, nonatomic) BOOL isRows; // ivar: _isRows
@property (readonly, nonatomic) NSIndexSet *rowOrColumnIndices;
@property (readonly, nonatomic) TSCEFormulaRewrite_Uids *rowOrColumnUids; // ivar: _rowOrColumnUids
@property (readonly, nonatomic) *void rowOrColumnUuids; // ivar: _rowOrColumnUuids
@property (readonly, nonatomic) *TSKUIDStruct tableUID; // ivar: _tableUID
@property (nonatomic) BOOL useWholeTableForInsertionDependencies; // ivar: _useWholeTableForInsertionDependencies


-(?)orderedUuidsForRange:(?)arg0 inTable:(?)arg1 areRowsshuffleMap;
-(?)uuidsForIndexes;
-(?)uuidsInRange;
-(BOOL)indexIsAffected:(unsigned int)arg0 ;
-(BOOL)isForTable:(struct TSKUIDStruct *)arg0 ;
-(id)description;
-(id)initFromMessage:(*void)arg0 ;
-(id)initWithFormulaOwnerUID:(struct TSKUIDStruct *)arg0 uuids:(*void)arg1 areRows:(BOOL)arg2 ;
-(id)initWithTableUID:(struct TSKUIDStruct *)arg0 condStyleOwnerUID:(struct TSKUIDStruct *)arg1 groupByUID:(struct TSKUIDStruct *)arg2 uuids:(*void)arg3 atIndexes:(*void)arg4 areRows:(BOOL)arg5 ;
-(struct TSCECellRef )originalCellRefForRewriteType:(unsigned int)arg0 updatedCellRef:(struct TSCECellRef *)arg1 ;
-(struct TSCECellRef )updatedCellRefForRewriteType:(unsigned int)arg0 originalCellRef:(struct TSCECellRef *)arg1 ;
-(struct TSCERangeCoordinate )affectedRangeForInsertRows;
-(struct TSCERangeCoordinate )affectedRangeForMoveRows;
-(struct TSCERangeCoordinate )affectedRangeForRemoveRows;
-(struct TSCERangeCoordinate )tableRange;
-(struct TSKUIDStruct )uuidForIndex:(unsigned int)arg0 ;
-(struct vector<TSCERangeCoordinate, std::allocator<TSCERangeCoordinate>> )coordRangesForInsertRemove;
-(unsigned int)offsetForRowIndex:(unsigned int)arg0 ;
-(unsigned int)offsetForUpdatedRowIndex:(unsigned int)arg0 isRemoveRows:(BOOL)arg1 ;
-(unsigned int)rowIndexForUuid:(struct TSKUIDStruct *)arg0 ;
-(unsigned short)columnIndexForUuid:(struct TSKUIDStruct *)arg0 ;
-(void)createAuxRowColumnInfoForMove;
-(void)loadIndexesForTable:(id)arg0 uidResolver:(id)arg1 forRemoveRows:(BOOL)arg2 shuffleMap:(id)arg3 ;
-(void)saveToMessage:(*void)arg0 ;
-(void)unloadIndexes;


@end


#endif
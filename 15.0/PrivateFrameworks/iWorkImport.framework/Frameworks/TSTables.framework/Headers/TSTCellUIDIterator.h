// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTCELLUIDITERATOR_H
#define TSTCELLUIDITERATOR_H


#import <Foundation/Foundation.h>

#import "TSTCellUIDList.h"

@interface TSTCellUIDIterator : NSObject {
    deque<TSKUIDStruct, std::allocator<TSKUIDStruct>> _recentRowResults;
    deque<TSKUIDStruct, std::allocator<TSKUIDStruct>> _recentColumnResults;
}


@property (nonatomic) TSKUIDStructCoord cellUID; // ivar: _cellUID
@property (retain, nonatomic) TSTCellUIDList *cellUIDList; // ivar: _cellUIDList
@property (nonatomic) NSUInteger columnIndex; // ivar: _columnIndex
@property (nonatomic) NSUInteger columnRemainDup; // ivar: _columnRemainDup
@property (nonatomic) NSUInteger index; // ivar: _index
@property (nonatomic) NSUInteger lastColumnDiffPos; // ivar: _lastColumnDiffPos
@property (nonatomic) NSUInteger lastRowDiffPos; // ivar: _lastRowDiffPos
@property (nonatomic) NSUInteger rowIndex; // ivar: _rowIndex
@property (nonatomic) NSUInteger rowRemainDup; // ivar: _rowRemainDup


-(BOOL)nextCellUIDsBatch:(*void)arg0 batchSize:(NSUInteger)arg1 ;
-(id)initWithCellUIDList:(id)arg0 ;
-(struct TSKUIDStruct )p_nextCellRefIdWithUIDIndexList:(*void)arg0 UIDs:(*void)arg1 index:(*NSUInteger)arg2 remainDup:(*NSUInteger)arg3 lastDiffPos:(*NSUInteger)arg4 recentResults:(*void)arg5 ;
-(struct TSKUIDStructCoord )_nextCellUID_NoDispatch;
-(struct TSKUIDStructCoord )nextCellUID;


@end


#endif
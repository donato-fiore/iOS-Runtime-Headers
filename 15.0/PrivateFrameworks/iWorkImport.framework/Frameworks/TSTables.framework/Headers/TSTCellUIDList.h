// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTCELLUIDLIST_H
#define TSTCELLUIDLIST_H

@protocol NSCopying, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TSTCellUIDLookupListWrapper.h"

@interface TSTCellUIDList : NSObject <NSCopying>

 {
    ? _rowIdList;
    ? _columnIdList;
    vector<int, std::allocator<int>> _rowUIDIndexList;
    vector<int, std::allocator<int>> _columnUIDIndexList;
    TSTCellUIDLookupListWrapper *_uncompressedCellUIDs;
}


@property (readonly, nonatomic) NSUInteger compressedSize; // ivar: _compressedSize
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)cellUIDList;
+(id)cellUIDListFromRange:(*void)arg0 ;
-(*void)columnUIDs;
-(*void)compressedColumnIndexes;
-(*void)compressedColumnUIDs;
-(*void)compressedRowIndexes;
-(*void)compressedRowUIDs;
-(*void)rowUIDs;
-(NSUInteger)computeValidCount;
-(NSUInteger)count;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initFromMessage:(*void)arg0 unarchiver:(id)arg1 ;
-(id)iterator;
-(id)pruneCellUIDListAgainstTable:(id)arg0 behavior:(NSUInteger)arg1 ;
-(id)pruneCellUIDListAgainstTable:(id)arg0 behavior:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(id)uncompressedCellUIDs;
-(void)addCellRegion:(id)arg0 withColumnUIDs:(*void)arg1 rowUIDs:(*void)arg2 ;
-(void)addCellUID:(struct TSKUIDStructCoord *)arg0 ;
-(void)addCellUIDRanges:(*void)arg0 ;
-(void)addCellUIDs:(*void)arg0 ;
-(void)compress;
-(void)compressUIDIndexListFrom:(*void)arg0 withUIDCount:(NSUInteger)arg1 to:(*void)arg2 ;
-(void)enumerateCellUIDsUsingBlock:(id)arg0 ;
-(void)p_compressUID:(struct TSKUIDStruct *)arg0 index:(NSUInteger)arg1 UIDtoIndexMap:(*void)arg2 UIDs:(*void)arg3 compressedIndexes:(*void)arg4 lastSameUIDIndex:(*void)arg5 ;
-(void)reserve:(NSUInteger)arg0 ;
-(void)saveToMessage:(*void)arg0 archiver:(id)arg1 ;
-(void)setCompressedColumnIndexes:(*void)arg0 ;


@end


#endif
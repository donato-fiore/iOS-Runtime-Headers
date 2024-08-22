// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTIMMUTABLECOLUMNROWUIDMAP_H
#define TSTIMMUTABLECOLUMNROWUIDMAP_H

@protocol TSCEColumnRowUIDMapping;

#import <Foundation/Foundation.h>

#import "TSTColumnRowUIDMap.h"

@interface TSTImmutableColumnRowUIDMap : NSObject <TSCEColumnRowUIDMapping>

 {
    TSTColumnRowUIDMap *_originalMap;
}


@property (readonly, nonatomic) unsigned short numberOfColumns;
@property (readonly, nonatomic) unsigned int numberOfRows;
@property (readonly, nonatomic) NSUInteger versionCounter;


-(*void)columnUIDs;
-(*void)rowUIDs;
-(?)columnUIDsForColumnIndexes;
-(?)columnUIDsForColumnRange;
-(?)orderedColumnUidsFromUids;
-(?)orderedRowUidsFromUids;
-(?)prunedColumnUIDsFromColumnUIDs;
-(?)prunedRowUIDsFromRowUIDs;
-(?)rowUIDsForRowIndexes;
-(?)rowUIDsForRowRange;
-(id)UIDSetForIndexes:(id)arg0 isRows:(BOOL)arg1 ;
-(id)columnIndexesForUIDs:(*void)arg0 ;
-(id)columnUuids;
-(id)initWithColumnRowUIDMap:(id)arg0 ;
-(id)mutableColumnIndexesForUIDs:(*void)arg0 ;
-(id)mutableIndexesForUIDSet:(id)arg0 isRows:(BOOL)arg1 ;
-(id)mutableIndexesForUIDSet:(id)arg0 isRows:(BOOL)arg1 notFoundUIDs:(id)arg2 ;
-(id)mutableRowIndexesForUIDs:(*void)arg0 ;
-(id)rowIndexesForUIDs:(*void)arg0 ;
-(id)rowUuids;
-(struct TSCERangeCoordinate )tableRangeCoordinate;
-(struct TSKUIDStruct )columnUIDForColumnIndex:(unsigned short)arg0 ;
-(struct TSKUIDStruct )firstUidFromUIDSet:(id)arg0 isRows:(BOOL)arg1 ;
-(struct TSKUIDStruct )rowUIDForRowIndex:(unsigned int)arg0 ;
-(struct TSKUIDStructTract )cellUIDRangeForCellRange:(struct TSUCellRect )arg0 ;
-(struct TSUCellRect )cellRangeForUIDRange:(*void)arg0 ;
-(struct TSUCellRect )range;
-(struct _NSRange )columnRangeForUIDs:(*void)arg0 ;
-(struct _NSRange )rowRangeForUIDs:(*void)arg0 ;
-(unsigned int)rowIndexForRowUID:(struct TSKUIDStruct )arg0 ;
-(unsigned int)rowIndexForUUIDBytes:(unsigned char)arg0 ;
-(unsigned short)columnIndexForColumnUID:(struct TSKUIDStruct )arg0 ;
-(unsigned short)columnIndexForUUIDBytes:(unsigned char)arg0 ;
-(void)assertCollaborationConvergence;
-(void)getUUIDBytes:(unsigned char)arg0 forColumnIndex:(unsigned short)arg1 ;
-(void)getUUIDBytes:(unsigned char)arg0 forRowIndex:(unsigned int)arg1 ;


@end


#endif
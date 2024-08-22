// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTPASTEMAP_H
#define TSTPASTEMAP_H


#import <Foundation/Foundation.h>


@interface TSTPasteMap : NSObject {
    set<TSTColumnOrRowMap, TSTColumnOrRowMapTgtLess, std::allocator<TSTColumnOrRowMap>> _rowTgtToPbMaps;
    set<TSTColumnOrRowMap, TSTColumnOrRowMapTgtLess, std::allocator<TSTColumnOrRowMap>> _columnTgtToPbMaps;
}




-(*void)p_tgtRangesForPbRange:(struct TSUCellRect )arg0 givenColumnMaps:(*void)arg1 rowMaps:(*void)arg2 ;
-(?)createTgtMergeMapFromPbMergeMap:(?)arg0 andTgtRegionandTgtBodyRange;
-(id)createTgtRegionByIntersectingPbRegion:(id)arg0 andTgtRegion:(id)arg1 ;
-(id)createTgtRegionFromPbRegion:(id)arg0 ;
-(id)initWithPbRange:(struct TSUCellRect )arg0 tgtRange:(struct TSUCellRect )arg1 ;
-(id)initWithPbTable:(id)arg0 pbRange:(struct TSUCellRect )arg1 tgtTable:(id)arg2 tgtRange:(struct TSUCellRect )arg3 flag:(int)arg4 ;
-(struct TSUCellCoord )p_tgtCellIDForPbCellID:(struct TSUCellCoord )arg0 givenColumnMaps:(*void)arg1 rowMaps:(*void)arg2 ;
-(struct TSUCellCoord )pbCellIDForTgtCellID:(struct TSUCellCoord )arg0 ;
-(struct TSUCellRect )p_tgtRangeForPbRange:(struct TSUCellRect )arg0 givenColumnMaps:(*void)arg1 rowMaps:(*void)arg2 ;
-(struct TSUCellRect )pbRangeForTgtRange:(struct TSUCellRect )arg0 ;
-(struct _NSRange )p_tgtRangeFromPbRange:(struct TSTColumnOrRowMap *)arg0 andMap:(*void)arg1 ;
-(unsigned int)p_indexForTgtToPbMaps:(*void)arg0 andMap:(struct TSTColumnOrRowMap *)arg1 ;


@end


#endif
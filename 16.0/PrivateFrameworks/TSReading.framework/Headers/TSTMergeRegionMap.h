// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTMERGEREGIONMAP_H
#define TSTMERGEREGIONMAP_H



#import "TSPObject.h"

@interface TSTMergeRegionMap : TSPObject {
    unordered_map<TSUColumnRowCoordinate, TSUColumnRowCoordinate, TSTCellIDHasher, std::equal_to<TSUColumnRowCoordinate>, std::allocator<std::pair<const TSUColumnRowCoordinate, TSUColumnRowCoordinate>>> mCellIDToMergeRegionTopLeft;
    unordered_map<TSUColumnRowCoordinate, TSUColumnRowSize, TSTCellIDHasher, std::equal_to<TSUColumnRowCoordinate>, std::allocator<std::pair<const TSUColumnRowCoordinate, TSUColumnRowSize>>> mMergeRegionTopLeftToMergeRegionSize;
    ? mUnionedMergeRange;
}




+(id)mergeRegionMapFromMap:(id)arg0 intersectingRange:(struct ? )arg1 ;
-(BOOL)find:(struct ? )arg0 ;
-(BOOL)hasRangeSpanningRows;
-(BOOL)insert:(struct ? )arg0 ;
-(BOOL)partiallyIntersectsCellRange:(struct ? )arg0 ;
-(BOOL)partiallyIntersectsCellRegion:(id)arg0 ;
-(BOOL)remove:(struct ? )arg0 ;
-(NSUInteger)count;
-(id)description;
-(id)initRegionMapFromMap:(id)arg0 intersectingRange:(struct ? )arg1 ;
-(id)initRegionMapFromMap:(id)arg0 rowRemapping:(id)arg1 ;
-(id)initWithContext:(id)arg0 ;
-(id)iterator;
-(id)mergedGridIndicesForDimension:(int)arg0 ;
-(struct ? )mergedRangeForCellID:(struct ? )arg0 ;
-(struct ? )unionedMergeRange;


@end


#endif
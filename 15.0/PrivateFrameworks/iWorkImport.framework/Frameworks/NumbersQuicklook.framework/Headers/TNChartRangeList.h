// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TNCHARTRANGELIST_H
#define TNCHARTRANGELIST_H

@class TSTCellRegion;

#import <Foundation/Foundation.h>


@interface TNChartRangeList : NSObject {
    vector<TSCERangeCoordinate, std::allocator<TSCERangeCoordinate>> _ranges;
    TSCERangeCoordinate _unionRange;
    BOOL _unionRangeValid;
}


@property (readonly, nonatomic) TSTCellRegion *cellRegion;
@property (readonly, nonatomic) TSKUIDStruct tableUID; // ivar: _tableUID


+(id)rangeListWithRangeRef:(struct TSCERangeRef )arg0 ;
+(id)rangeListWithTableUID:(struct TSKUIDStruct *)arg0 ;
+(id)rangeListWithTableUID:(struct TSKUIDStruct *)arg0 range:(struct TSCERangeCoordinate )arg1 ;
-(BOOL)containsCell:(struct TSUCellCoord )arg0 ;
-(BOOL)containsRange:(struct TSCERangeCoordinate )arg0 ;
-(NSUInteger)numberOfRanges;
-(id)description;
-(id)initWithTableUID:(struct TSKUIDStruct *)arg0 ;
-(id)initWithTableUID:(struct TSKUIDStruct *)arg0 range:(struct TSCERangeCoordinate )arg1 ;
-(struct ? )chartableSizeByDirection:(int)arg0 ;
-(struct TSCERangeCoordinate )rangeAtIndex:(NSUInteger)arg0 ;
-(struct TSCERangeCoordinate )rangeStartingAfterCell:(struct TSUCellCoord )arg0 direction:(int)arg1 ;
-(struct TSCERangeCoordinate )rangeStartingAtCell:(struct TSUCellCoord )arg0 direction:(int)arg1 ;
-(struct TSCERangeCoordinate )unionRange;
-(void)addRange:(struct TSCERangeCoordinate )arg0 coalesceFlags:(int)arg1 ;
-(void)enumerateRangesUsingBlock:(id)arg0 ;
-(void)removeAllRanges;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTCELLREGIONROWMAJORITERATOR_H
#define TSTCELLREGIONROWMAJORITERATOR_H

@class NSString;
@protocol TSTCellRegionIterating;

#import <Foundation/Foundation.h>


@interface TSTCellRegionRowMajorIterator : NSObject <TSTCellRegionIterating>

 {
    set<TSUCellRect, TSTCellRangeRowMajorLess, std::allocator<TSUCellRect>> mCellRangeSet;
    TSUCellCoord mCellID;
    TSUCellRect mBoundingCellRange;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithCellRegion:(id)arg0 ;
-(struct TSUCellCoord )advanceToCellID:(struct TSUCellCoord )arg0 ;
-(struct TSUCellCoord )getNext;
-(void)terminate;


@end


#endif
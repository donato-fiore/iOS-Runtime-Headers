// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTCELLREGIONROWMAJORREVERSEITERATOR_H
#define TSTCELLREGIONROWMAJORREVERSEITERATOR_H



#import "TSTCellRegionRowMajorIterator.h"

@interface TSTCellRegionRowMajorReverseIterator : TSTCellRegionRowMajorIterator



-(id)initWithCellRegion:(id)arg0 ;
-(struct TSUCellCoord )advanceToCellID:(struct TSUCellCoord )arg0 ;
-(struct TSUCellCoord )getNext;


@end


#endif
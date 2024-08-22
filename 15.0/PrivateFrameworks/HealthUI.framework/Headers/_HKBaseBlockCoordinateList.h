// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKBASEBLOCKCOORDINATELIST_H
#define _HKBASEBLOCKCOORDINATELIST_H

@class NSArray;


#import "HKGraphSeriesBlockCoordinateList.h"

@interface _HKBaseBlockCoordinateList : HKGraphSeriesBlockCoordinateList {
    NSArray *_coordinates;
    ? _blockPath;
}




-(NSInteger)_numCoordinatesInChartableRange:(id)arg0 ;
-(NSInteger)numCoordinates;
-(id)_coordinatesInChartableRange:(id)arg0 ;
-(id)coordinates;
-(id)firstCoordinateWithTransform:(struct CGAffineTransform )arg0 roundToViewScale:(BOOL)arg1 ;
-(id)initWithCoordinates:(id)arg0 blockPath:(struct ? )arg1 ;
-(id)lastCoordinateWithTransform:(struct CGAffineTransform )arg0 roundToViewScale:(BOOL)arg1 ;
-(struct ? )blockPathEnd;
-(struct ? )blockPathStart;
-(void)_enumerateCoordinatesWithTransform:(struct CGAffineTransform )arg0 chartableValueRange:(id)arg1 roundToViewScale:(BOOL)arg2 block:(id)arg3 ;


@end


#endif
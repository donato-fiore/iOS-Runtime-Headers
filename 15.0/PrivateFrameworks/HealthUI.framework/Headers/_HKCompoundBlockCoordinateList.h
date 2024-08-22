// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKCOMPOUNDBLOCKCOORDINATELIST_H
#define _HKCOMPOUNDBLOCKCOORDINATELIST_H

@class NSArray;


#import "HKGraphSeriesBlockCoordinateList.h"
#import "HKValueRange.h"

@interface _HKCompoundBlockCoordinateList : HKGraphSeriesBlockCoordinateList {
    NSArray *_subCoordinates;
    HKValueRange *_chartableValueRange;
}




-(NSInteger)_numCoordinatesInChartableRange:(id)arg0 ;
-(NSInteger)numCoordinates;
-(id)_coordinatesInChartableRange:(id)arg0 ;
-(id)coordinates;
-(id)firstCoordinateWithTransform:(struct CGAffineTransform )arg0 roundToViewScale:(BOOL)arg1 ;
-(id)initWithSubCoordinates:(id)arg0 chartableValueRange:(id)arg1 ;
-(id)lastCoordinateWithTransform:(struct CGAffineTransform )arg0 roundToViewScale:(BOOL)arg1 ;
-(struct ? )blockPathEnd;
-(struct ? )blockPathStart;
-(void)_enumerateCoordinatesWithTransform:(struct CGAffineTransform )arg0 chartableValueRange:(id)arg1 roundToViewScale:(BOOL)arg2 block:(id)arg3 ;
-(void)enumerateCoordinatesWithTransform:(struct CGAffineTransform )arg0 roundToViewScale:(BOOL)arg1 block:(id)arg2 ;


@end


#endif
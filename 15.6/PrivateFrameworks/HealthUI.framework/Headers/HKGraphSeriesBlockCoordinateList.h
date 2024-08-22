// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKGRAPHSERIESBLOCKCOORDINATELIST_H
#define HKGRAPHSERIESBLOCKCOORDINATELIST_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface HKGraphSeriesBlockCoordinateList : NSObject

@property (readonly, nonatomic) ? blockPathEnd;
@property (readonly, nonatomic) ? blockPathStart;
@property (readonly, nonatomic) NSArray *coordinates;
@property (readonly, nonatomic) NSInteger numCoordinates;


+(id)coordinateListByCombiningSubCoordinates:(id)arg0 chartableValueRange:(id)arg1 ;
+(id)coordinateListWithCoordinates:(id)arg0 blockPath:(struct ? )arg1 ;
-(NSInteger)_numCoordinatesInChartableRange:(id)arg0 ;
-(id)_coordinatesInChartableRange:(id)arg0 ;
-(id)firstCoordinateWithTransform:(struct CGAffineTransform )arg0 roundToViewScale:(BOOL)arg1 ;
-(id)lastCoordinateWithTransform:(struct CGAffineTransform )arg0 roundToViewScale:(BOOL)arg1 ;
-(void)_enumerateCoordinatesWithTransform:(struct CGAffineTransform )arg0 chartableValueRange:(id)arg1 roundToViewScale:(BOOL)arg2 block:(id)arg3 ;
-(void)enumerateCoordinatesWithTransform:(struct CGAffineTransform )arg0 roundToViewScale:(BOOL)arg1 block:(id)arg2 ;


@end


#endif
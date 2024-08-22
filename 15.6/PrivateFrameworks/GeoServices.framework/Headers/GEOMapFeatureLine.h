// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOMAPFEATURELINE_H
#define GEOMAPFEATURELINE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface GEOMapFeatureLine : NSObject <NSCopying>

 {
    *? _tempCoordinates2d;
    *? _coordinates3d;
    NSUInteger _coordinateCount;
    CGFloat _length;
    BOOL _isFlipped;
}


@property (readonly, nonatomic) NSUInteger coordinateCount;
@property (readonly, nonatomic) *? coordinates;
@property (readonly, nonatomic) *? coordinates3d;
@property (readonly, nonatomic) CGFloat length;


-(*float)_elevationsForSection:(NSUInteger)arg0 outCount:(*NSUInteger)arg1 ;
-(CGFloat)closestDistance2DFromCoordinate:(struct ? )arg0 ;
-(id)_containingTile;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(struct GeoCodecsVectorTilePoint *)_tilePointsForSection:(NSUInteger)arg0 outCount:(*NSUInteger)arg1 ;
-(void)dealloc;


@end


#endif
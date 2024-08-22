// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOMAPFEATURETRANSITLINK_H
#define GEOMAPFEATURETRANSITLINK_H

@class NSString;
@protocol NSCopying;


#import "GEOMapFeatureLine.h"
#import "GEOTransitLink.h"

@interface GEOMapFeatureTransitLink : GEOMapFeatureLine <NSCopying>

 {
    GEOTransitLink *_transitLink;
    NSUInteger _lineIndex;
}


@property (readonly, nonatomic) NSString *internalLineName;
@property (readonly, nonatomic) _GEOTileKey tileKey;
@property (readonly, nonatomic) GEOTransitLink *transitLink;


-(*float)_elevationsForSection:(NSUInteger)arg0 outCount:(*NSUInteger)arg1 ;
-(id)_containingTile;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithTransitLink:(id)arg0 lineIndex:(NSUInteger)arg1 ;
-(struct GeoCodecsVectorTilePoint *)_tilePointsForSection:(NSUInteger)arg0 outCount:(*NSUInteger)arg1 ;
-(void)dealloc;


@end


#endif
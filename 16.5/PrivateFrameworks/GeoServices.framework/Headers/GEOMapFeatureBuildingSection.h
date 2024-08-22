// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOMAPFEATUREBUILDINGSECTION_H
#define GEOMAPFEATUREBUILDINGSECTION_H


#import <Foundation/Foundation.h>

#import "GEOVectorTile.h"
#import "GEOBuildingFootprintFeature.h"

@interface GEOMapFeatureBuildingSection : NSObject {
    GEOVectorTile *_tile;
    GeoCodecsDaVinciBuildingSection _section;
    *? _coordinates;
    NSUInteger _coordinateCount;
    GEOBuildingFootprintFeature *_feature;
    NSUInteger _sectionIndex;
}


@property (readonly, nonatomic) CGFloat baseHeight; // ivar: _baseHeight
@property (readonly, nonatomic) NSUInteger coordinateCount;
@property (readonly, nonatomic) *? coordinates;
@property (readonly, nonatomic) CGFloat height; // ivar: _height
@property (readonly, nonatomic) CGFloat terrainElevation;
@property (readonly, nonatomic) CGFloat topHeight;


-(id)initWithDaVinciTile:(id)arg0 sectionIndex:(NSUInteger)arg1 ;
-(id)initWithFeature:(id)arg0 sectionIndex:(NSUInteger)arg1 ;
-(void)dealloc;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOMAPFEATUREBUILDINGSECTION_H
#define GEOMAPFEATUREBUILDINGSECTION_H


#import <Foundation/Foundation.h>

#import "GEOBuildingFootprintFeature.h"
#import "GEOVectorTile.h"

@interface GEOMapFeatureBuildingSection : NSObject {
    *? _coordinates;
    NSUInteger _coordinateCount;
    GEOBuildingFootprintFeature *_feature;
    NSUInteger _sectionIndex;
    GEOVectorTile *_tile;
}


@property (readonly, nonatomic) CGFloat baseHeight; // ivar: _baseHeight
@property (readonly, nonatomic) NSUInteger coordinateCount;
@property (readonly, nonatomic) *? coordinates;
@property (readonly, nonatomic) CGFloat height; // ivar: _height


-(id)initWithFeature:(id)arg0 sectionIndex:(NSUInteger)arg1 ;
-(void)dealloc;


@end


#endif
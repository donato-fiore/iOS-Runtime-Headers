// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOMAPFEATUREBUILDING_H
#define GEOMAPFEATUREBUILDING_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "GEOVectorTile.h"
#import "GEOBuildingFootprintFeature.h"

@interface GEOMapFeatureBuilding : NSObject {
    GEOVectorTile *_tile;
    GEOBuildingFootprintFeature *_feature;
}


@property (readonly, nonatomic) NSUInteger buildingID; // ivar: _buildingID
@property (readonly, nonatomic) NSArray *sections; // ivar: _sections
@property (readonly, nonatomic) int tileSetStyle; // ivar: _tileSetStyle


-(id)initWithDaVinciTile:(id)arg0 buildingOffset:(NSUInteger)arg1 ;
-(id)initWithFeature:(id)arg0 ;
-(void)dealloc;


@end


#endif
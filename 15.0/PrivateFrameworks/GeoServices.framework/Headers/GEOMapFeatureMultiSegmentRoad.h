// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOMAPFEATUREMULTISEGMENTROAD_H
#define GEOMAPFEATUREMULTISEGMENTROAD_H

@class NSArray;


#import "GEOMapFeatureRoad.h"

@interface GEOMapFeatureMultiSegmentRoad : GEOMapFeatureRoad

@property (readonly, nonatomic) NSArray *roadSegments; // ivar: _roadSegments


-(id)_junctionA;
-(id)_junctionB;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)endFeature;
-(id)feature;
-(id)initWithRoadSegments:(id)arg0 ;
-(id)startFeature;
-(struct ? *)coordinates3d;
-(struct _GEOTileKey )tileKey;


@end


#endif
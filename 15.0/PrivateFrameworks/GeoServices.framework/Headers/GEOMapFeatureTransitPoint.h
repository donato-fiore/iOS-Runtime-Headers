// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOMAPFEATURETRANSITPOINT_H
#define GEOMAPFEATURETRANSITPOINT_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "GEOMapFeatureTransitHall.h"
#import "GEOMapFeatureTransitStation.h"
#import "GEOMapFeatureTransitStop.h"

@interface GEOMapFeatureTransitPoint : NSObject {
    *void _feature;
    ? _retainedTile;
}


@property (readonly, nonatomic) CGFloat boundingRadius; // ivar: _boundingRadius
@property (readonly, nonatomic) ? boundingRect; // ivar: _boundingRect
@property (readonly, nonatomic) ? coordinate; // ivar: _coordinate
@property (readonly, nonatomic) *void feature;
@property (readonly, nonatomic) GEOMapFeatureTransitHall *hall;
@property (readonly, nonatomic) NSString *internalName;
@property (readonly, nonatomic) NSArray *internalSystemNames;
@property (readonly, nonatomic) *? polygonPoints; // ivar: _polygonPoints
@property (readonly, nonatomic) NSUInteger polygonPointsCount; // ivar: _polygonPointsCount
@property (readonly, nonatomic) GEOMapFeatureTransitStation *station;
@property (readonly, nonatomic) GEOMapFeatureTransitStop *stop;
@property (readonly, nonatomic) _GEOTileKey tileKey;
@property (readonly, nonatomic) NSUInteger transitID;


-(id)description;
-(id)initWithFeature:(*void)arg0 ;
-(void)dealloc;
-(void)updateWithGeometryFeature:(*void)arg0 ;


@end


#endif
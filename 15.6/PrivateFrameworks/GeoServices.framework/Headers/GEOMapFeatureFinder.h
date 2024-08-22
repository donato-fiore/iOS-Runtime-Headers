// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOMAPFEATUREFINDER_H
#define GEOMAPFEATUREFINDER_H



#import "GEOMapRequest.h"
#import "GEOMapTileFinder.h"
#import "GEOMapAccess.h"

@interface GEOMapFeatureFinder : GEOMapRequest {
    ? _coordinate;
    GEOMapTileFinder *_tileFinder;
}


@property (nonatomic) BOOL ignoreUnnamedFeatures; // ivar: _ignoreUnnamedFeatures
@property (readonly, nonatomic) GEOMapAccess *map;
@property (copy, nonatomic) id *pointHandler; // ivar: _pointHandler
@property (copy, nonatomic) id *polygonHandler; // ivar: _polygonHandler
@property (copy, nonatomic) id *roadHandler; // ivar: _roadHandler


-(id)initWithMap:(id)arg0 center:(struct ? )arg1 ;
-(void)_pickRoadInTile:(id)arg0 tileRect:(struct ? *)arg1 localPoint:(*void)arg2 ;
-(void)cancel;
// -(void)findFeatures:(id)arg0 pointHandler:(unk)arg1 polygonHandler:(id)arg2 completionHandler:(unk)arg3  ;


@end


#endif
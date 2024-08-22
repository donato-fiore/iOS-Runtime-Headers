// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOMAPFEATUREROADFINDER_H
#define GEOMAPFEATUREROADFINDER_H



#import "GEOMapFeatureAccessFinder.h"
#import "GEOTileLoader.h"
#import "GEOMapFeatureIntersectedRoadFinder.h"

@interface GEOMapFeatureRoadFinder : GEOMapFeatureAccessFinder {
    GEOTileLoader *_tileLoader;
    GEOMapFeatureIntersectedRoadFinder *_intersectedRoadFinder;
}


@property (nonatomic) BOOL flipNegativeTravelDirectionRoads; // ivar: _flipNegativeTravelDirectionRoads
@property (nonatomic) BOOL visitDoubleTravelDirectionRoadsTwice; // ivar: _visitDoubleTravelDirectionRoadsTwice


// -(id)findRoadWithID:(NSUInteger)arg0 handler:(id)arg1 completionHandler:(unk)arg2  ;
// -(id)findRoadWithMuid:(NSUInteger)arg0 nearCoordinate:(struct ? )arg1 handler:(id)arg2 completionHandler:(unk)arg3  ;
// -(id)findRoadsNear:(struct ? )arg0 radius:(CGFloat)arg1 handler:(id)arg2 completionHandler:(unk)arg3  ;
-(id)initWithTileLoader:(id)arg0 ;
// -(void)_findConnectedSegmentsFromRoad:(id)arg0 muid:(NSUInteger)arg1 handler:(id)arg2 completionHandler:(unk)arg3  ;
-(void)_recursivelyFindRoadSegmentsWithMuid:(NSUInteger)arg0 segments:(id)arg1 directionality:(NSUInteger)arg2 completionHandler:(id)arg3 ;


@end


#endif
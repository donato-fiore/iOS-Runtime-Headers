// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOMAPFEATUREMULTISEGMENTROADFINDER_H
#define GEOMAPFEATUREMULTISEGMENTROADFINDER_H



#import "GEOMapFeatureIntersectedRoadFinder.h"

@interface GEOMapFeatureMultiSegmentRoadFinder : GEOMapFeatureIntersectedRoadFinder



-(id)_roadForRoadSegments:(id)arg0 ;
// -(id)findConnectedSegmentsForRoad:(id)arg0 directionality:(NSUInteger)arg1 handler:(id)arg2 completionHandler:(unk)arg3  ;
// -(id)findConnectedSegmentsForRoads:(id)arg0 directionality:(NSUInteger)arg1 handler:(id)arg2 completionHandler:(unk)arg3  ;
-(void)_recursivelyFindRoadSegmentsWithMuid:(NSUInteger)arg0 segments:(id)arg1 directionality:(NSUInteger)arg2 completionHandler:(id)arg3 ;


@end


#endif
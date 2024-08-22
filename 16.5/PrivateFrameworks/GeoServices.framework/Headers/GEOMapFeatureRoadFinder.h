// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOMAPFEATUREROADFINDER_H
#define GEOMAPFEATUREROADFINDER_H



#import "GEOMapFeatureAccessFinder.h"
#import "GEOMapFeatureMultiSegmentRoadFinder.h"

@interface GEOMapFeatureRoadFinder : GEOMapFeatureAccessFinder {
    GEOMapFeatureMultiSegmentRoadFinder *_multiSegmentRoadFinder;
}




-(id)_findUnjoinedRoadsNear:(struct ? )arg0 radius:(CGFloat)arg1 handler:(id)arg2 ;
// -(id)_findUnjoinedRoadsNear:(struct ? )arg0 radius:(CGFloat)arg1 handler:(id)arg2 completionHandler:(unk)arg3  ;
-(id)_multiSegmentRoadFinder;
// -(id)findRoadWithID:(NSUInteger)arg0 handler:(id)arg1 completionHandler:(unk)arg2  ;
// -(id)findRoadWithMuid:(NSUInteger)arg0 nearCoordinate:(struct ? )arg1 handler:(id)arg2 completionHandler:(unk)arg3  ;
// -(id)findRoadsNear:(struct ? )arg0 radius:(CGFloat)arg1 handler:(id)arg2 completionHandler:(unk)arg3  ;


@end


#endif
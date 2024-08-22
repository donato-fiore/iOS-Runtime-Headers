// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOMAPACCESSTRANSITLINK_H
#define GEOMAPACCESSTRANSITLINK_H

@class NSString;
@protocol GEOMapTransitLink, GEOMapTransitStop;


#import "GEOMapAccessLine.h"

@interface GEOMapAccessTransitLink : GEOMapAccessLine <GEOMapTransitLink>

 {
    ? _transitEdge;
    vector<GEOLocationCoordinate2D, std::allocator<GEOLocationCoordinate2D>> _coords;
}


@property (readonly, nonatomic) NSUInteger coordinateCount;
@property (readonly, nonatomic) *? coordinates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *internalLineName;
@property (readonly, nonatomic) CGFloat length;
@property (readonly, nonatomic) unsigned int minimumTravelTime;
@property (readonly, nonatomic) NSObject<GEOMapTransitStop> *stopFrom; // ivar: _stopFrom
@property (readonly, nonatomic) NSObject<GEOMapTransitStop> *stopTo; // ivar: _stopTo
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger transitLineID;


-(CGFloat)distanceInMetersFrom:(struct ? )arg0 outClosestCoordinateOnLine:(struct ? *)arg1 ;
-(id)initWithMap:(id)arg0 transitEdge:(struct shared_ptr<geo::MapEdgeTransit> )arg1 ;


@end


#endif
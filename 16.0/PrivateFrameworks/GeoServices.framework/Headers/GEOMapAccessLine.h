// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOMAPACCESSLINE_H
#define GEOMAPACCESSLINE_H

@class NSString;
@protocol GEOMapLine;

#import <Foundation/Foundation.h>

#import "GEOMapAccess.h"

@interface GEOMapAccessLine : NSObject <GEOMapLine>

 {
    GEOMapAccess *_map;
    ? _edge;
    vector<GEOLocationCoordinate2D, std::allocator<GEOLocationCoordinate2D>> _coordinates;
}


@property (readonly, nonatomic) NSUInteger coordinateCount;
@property (readonly, nonatomic) *? coordinates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat length;
@property (readonly) Class superclass;


-(CGFloat)distanceFromCoordinate:(struct ? )arg0 outSegmentCoordinate:(struct PolylineCoordinate *)arg1 ;
-(id)initWithMap:(id)arg0 edge:(struct shared_ptr<geo::MapEdge> )arg1 ;


@end


#endif
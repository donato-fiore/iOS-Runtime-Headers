// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOMAPACCESSTRANSITACCESSPOINT_H
#define GEOMAPACCESSTRANSITACCESSPOINT_H

@class NSString;
@protocol GEOMapTransitAccessPoint, GEOMapTransitStation;

#import <Foundation/Foundation.h>

#import "GEOMapAccess.h"

@interface GEOMapAccessTransitAccessPoint : NSObject <GEOMapTransitAccessPoint>

 {
    GEOMapAccess *_map;
    ? _accessPoint;
    id<GEOMapTransitStation> *_station;
}


@property (readonly, nonatomic) unsigned short accessType;
@property (readonly, nonatomic) CGFloat boundingRadius;
@property (readonly, nonatomic) ? boundingRect;
@property (readonly, nonatomic) ? coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned char entranceExitType;
@property (readonly, nonatomic) CGFloat groundRadius;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *internalName;
@property (readonly, nonatomic) *? polygonPoints;
@property (readonly, nonatomic) NSInteger polygonPointsCount;
@property (readonly, nonatomic) NSUInteger stationID;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger transitID;


-(CGFloat)distanceInMetersFrom:(struct ? )arg0 ;
// -(id)findAccessPoints:(id)arg0 completionHandler:(unk)arg1  ;
-(id)findGeometryWithCompletionHandler:(id)arg0 ;
// -(id)findStation:(id)arg0 completionHandler:(unk)arg1  ;
// -(id)findStops:(id)arg0 completionHandler:(unk)arg1  ;
-(id)initWithMap:(id)arg0 accessPoint:(struct shared_ptr<geo::MapAccessPointFeature> )arg1 ;


@end


#endif
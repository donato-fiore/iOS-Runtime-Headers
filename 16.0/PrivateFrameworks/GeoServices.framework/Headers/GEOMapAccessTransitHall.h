// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOMAPACCESSTRANSITHALL_H
#define GEOMAPACCESSTRANSITHALL_H

@class NSString;
@protocol GEOMapTransitHall, GEOMapTransitStation;


#import "GEOMapAccessTransitNodeBase.h"

@interface GEOMapAccessTransitHall : GEOMapAccessTransitNodeBase <GEOMapTransitHall>

 {
    id<GEOMapTransitStation> *_station;
}


@property (readonly, nonatomic) CGFloat boundingRadius;
@property (readonly, nonatomic) ? boundingRect;
@property (readonly, nonatomic) ? coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *internalName;
@property (readonly, nonatomic) *? polygonPoints;
@property (readonly, nonatomic) NSInteger polygonPointsCount;
@property (readonly, nonatomic) NSUInteger stationID;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger transitID;


// -(id)findStation:(id)arg0 completionHandler:(unk)arg1  ;
// -(id)findStops:(id)arg0 completionHandler:(unk)arg1  ;


@end


#endif
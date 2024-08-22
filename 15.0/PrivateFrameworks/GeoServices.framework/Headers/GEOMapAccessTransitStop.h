// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOMAPACCESSTRANSITSTOP_H
#define GEOMAPACCESSTRANSITSTOP_H

@class NSString;
@protocol GEOMapTransitStop, GEOMapTransitHall;


#import "GEOMapAccessTransitNodeBase.h"

@interface GEOMapAccessTransitStop : GEOMapAccessTransitNodeBase <GEOMapTransitStop>

 {
    id<GEOMapTransitHall> *_hall;
}


@property (readonly, nonatomic) CGFloat boundingRadius;
@property (readonly, nonatomic) ? boundingRect;
@property (readonly, nonatomic) ? coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger hallID;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *internalName;
@property (readonly, nonatomic) *? polygonPoints;
@property (readonly, nonatomic) NSInteger polygonPointsCount;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger transitID;


// -(id)findAccessPoints:(id)arg0 completionHandler:(unk)arg1  ;
// -(id)findHall:(id)arg0 completionHandler:(unk)arg1  ;
// -(id)findLinksIn:(id)arg0 completionHandler:(unk)arg1  ;
// -(id)findLinksOut:(id)arg0 completionHandler:(unk)arg1  ;


@end


#endif
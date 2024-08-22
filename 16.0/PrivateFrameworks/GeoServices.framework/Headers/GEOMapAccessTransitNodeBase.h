// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOMAPACCESSTRANSITNODEBASE_H
#define GEOMAPACCESSTRANSITNODEBASE_H

@class NSString;
@protocol GEOMapTransitPoint;

#import <Foundation/Foundation.h>

#import "GEOMapAccess.h"

@interface GEOMapAccessTransitNodeBase : NSObject <GEOMapTransitPoint>

 {
    GEOMapAccess *_map;
    shared_ptr<geo::MapNodeTransit> _node;
}


@property (readonly, nonatomic) CGFloat boundingRadius; // ivar: _boundingRadius
@property (readonly, nonatomic) ? boundingRect; // ivar: _boundingRect
@property (readonly, nonatomic) ? coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *internalName;
@property (readonly, nonatomic) *? polygonPoints; // ivar: _polygonPoints
@property (readonly, nonatomic) NSInteger polygonPointsCount; // ivar: _polygonPointsCount
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger transitID;


-(CGFloat)distanceInMetersFrom:(struct ? )arg0 ;
// -(id)findAccessPoints:(id)arg0 completionHandler:(unk)arg1  ;
-(id)findGeometryWithCompletionHandler:(id)arg0 ;
-(id)initWithMap:(id)arg0 node:(struct shared_ptr<geo::MapNodeTransit> )arg1 ;
-(void)dealloc;


@end


#endif
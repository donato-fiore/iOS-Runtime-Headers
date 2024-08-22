// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOTRANSITLINK_H
#define GEOTRANSITLINK_H


#import <Foundation/Foundation.h>

#import "GEOVectorTile.h"

@interface GEOTransitLink : NSObject {
    *void _transitLink;
    GEOVectorTile *_containingTile;
}


@property (readonly, nonatomic) *GeoCodecsRange collapsedNodesIDRange;
@property (readonly, nonatomic) *GeoCodecsRange collapsedNodesIndexRange;
@property (readonly, nonatomic) GEOVectorTile *containingTile;
@property (readonly, nonatomic) *GeoCodecsConnectivityJunction fromJunction;
@property (readonly, nonatomic) NSUInteger fromNodeID;
@property (readonly, nonatomic) *GeoCodecsRange originalNodeIDPointerIndexRange;
@property (readonly, nonatomic) unsigned int sectionCount;
@property (readonly, nonatomic) unsigned int sectionOffset;
@property (readonly, nonatomic) *GeoCodecsRange shieldIndexRange;
@property (readonly, nonatomic) *GeoCodecsConnectivityJunction toJunction;
@property (readonly, nonatomic) NSUInteger toNodeID;
@property (readonly, nonatomic) *GeoCodecsRange transitIndexRange;
@property (readonly, nonatomic) *GeoCodecsRange travelTimeIndexRange;


-(*void)get;
-(id)init:(*void)arg0 withVectorTile:(id)arg1 ;


@end


#endif
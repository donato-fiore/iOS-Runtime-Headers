// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOMAPFEATUREACCESSFINDER_H
#define GEOMAPFEATUREACCESSFINDER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface GEOMapFeatureAccessFinder : NSObject

@property (nonatomic) BOOL allowNetwork; // ivar: _allowNetwork
@property (nonatomic) BOOL allowStaleData; // ivar: _allowStaleData
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(BOOL)_boundingCircle:(*void)arg0 intersectsFeature:(id)arg1 ;
-(BOOL)_boundingCircle:(*void)arg0 intersectsPoints:(struct GeoCodecsVectorTilePoint *)arg1 pointCount:(NSUInteger)arg2 ;
-(BOOL)_boundingCircle:(*void)arg0 intersectsTransitLink:(id)arg1 ;
-(BOOL)_featureHasValidGeometry:(id)arg0 ;
-(id)init;
-(struct Sphere<float, 2, std::enable_if<true>> )_boundingCircleWithCenter:(struct ? )arg0 radius:(CGFloat)arg1 inTile:(struct _GEOTileKey )arg2 ;


@end


#endif
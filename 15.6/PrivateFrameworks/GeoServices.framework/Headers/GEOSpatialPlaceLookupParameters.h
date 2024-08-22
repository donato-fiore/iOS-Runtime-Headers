// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOSPATIALPLACELOOKUPPARAMETERS_H
#define GEOSPATIALPLACELOOKUPPARAMETERS_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "GEOMapRegion.h"
#import "GEOPOICategoryFilter.h"

@interface GEOSpatialPlaceLookupParameters : NSObject

@property (readonly, nonatomic) NSArray *categories; // ivar: _categories
@property (readonly, nonatomic) ? coordinate; // ivar: _coordinate
@property (readonly, nonatomic) GEOMapRegion *mapRegion; // ivar: _mapRegion
@property (readonly, nonatomic) int maxResultCount; // ivar: _maxResultCount
@property (readonly, nonatomic) GEOPOICategoryFilter *poiCategoryFilter; // ivar: _poiCategoryFilter
@property (readonly, nonatomic) CGFloat radius; // ivar: _radius


-(id)init;
-(id)initWithCoordinate:(struct ? )arg0 radius:(CGFloat)arg1 categories:(id)arg2 ;
-(id)initWithCoordinate:(struct ? )arg0 radius:(CGFloat)arg1 categories:(id)arg2 maxResultCount:(int)arg3 ;
-(id)initWithCoordinate:(struct ? )arg0 radius:(CGFloat)arg1 poiCategoryFilter:(id)arg2 ;
-(id)initWithMapRegion:(id)arg0 poiCategoryFilter:(id)arg1 ;


@end


#endif
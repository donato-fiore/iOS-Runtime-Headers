// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOMAPITEMADDITIONALPLACEINFO_H
#define GEOMAPITEMADDITIONALPLACEINFO_H

@class NSString;
@protocol GEOMapItem;

#import <Foundation/Foundation.h>

#import "GEOPlace.h"
#import "GEOMapRegion.h"

@interface GEOMapItemAdditionalPlaceInfo : NSObject {
    GEOPlace *_place;
}


@property (readonly, nonatomic) CGFloat areaInMeters;
@property (readonly, nonatomic) ? coordinate;
@property (readonly, nonatomic) NSObject<GEOMapItem> *mapItem; // ivar: _mapItem
@property (readonly, nonatomic) GEOMapRegion *mapRegion;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) int placeType;


-(id)initWithMapItem:(id)arg0 ;
-(id)initWithName:(id)arg0 placeType:(int)arg1 areaInMeters:(CGFloat)arg2 ;
-(id)initWithPlace:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOSPATIALPLACELOOKUPRESULTITEM_H
#define GEOSPATIALPLACELOOKUPRESULTITEM_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "GEOMapRegion.h"

@interface GEOSpatialPlaceLookupResultItem : NSObject

@property (readonly, nonatomic) GEOMapRegion *boundingRegion; // ivar: _boundingRegion
@property (readonly, nonatomic) NSArray *mapItems; // ivar: _mapItems


-(id)initWithMapItems:(id)arg0 boundingRegion:(id)arg1 ;


@end


#endif
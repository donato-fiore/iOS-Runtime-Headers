// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _GEOTRANSITPRELOADBATCH_H
#define _GEOTRANSITPRELOADBATCH_H

@class NSMutableArray, NSMutableSet;
@protocol GEOMapServiceTicket;

#import <Foundation/Foundation.h>

#import "GEOTileKeyList.h"

@interface _GEOTransitPreloadBatch : NSObject {
    NSUInteger status;
    NSUInteger generation;
    NSUInteger errCount;
    NSUInteger bytesLoaded;
    NSUInteger bytesLoadedFromNetwork;
    CGFloat startTime;
    CGFloat endTime;
    vector<GEOLocationCoordinate2D, std::allocator<GEOLocationCoordinate2D>> coords;
    NSMutableArray *_latLngToLoad;
    unsigned int priority;
    id<GEOMapServiceTicket> *placeDataRequestTicketForBatch;
    CGFloat endTimeForScheduleFreshness;
}


@property (retain, nonatomic) NSMutableSet *placeDatasToLoad; // ivar: _placeDatasToLoad
@property (retain, nonatomic) GEOTileKeyList *tilesToLoad; // ivar: _tilesToLoad


-(CGFloat)networkDataRateKB;
-(id)init;


@end


#endif
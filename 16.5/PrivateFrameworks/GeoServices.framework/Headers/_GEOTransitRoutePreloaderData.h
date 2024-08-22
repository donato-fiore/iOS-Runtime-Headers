// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GEOTRANSITROUTEPRELOADERDATA_H
#define _GEOTRANSITROUTEPRELOADERDATA_H

@class NSMutableSet, NSMutableArray;

#import <Foundation/Foundation.h>

#import "_GEOTransitPreloadCamera.h"
#import "GEOTileKeyList.h"

@interface _GEOTransitRoutePreloaderData : NSObject

@property (retain, nonatomic) _GEOTransitPreloadCamera *camera; // ivar: _camera
@property (nonatomic) NSUInteger currentBatchGeneration; // ivar: _currentBatchGeneration
@property (retain, nonatomic) NSMutableSet *placecardsMissed; // ivar: _placecardsMissed
@property (retain, nonatomic) NSMutableSet *placecardsReceived; // ivar: _placecardsReceived
@property (retain, nonatomic) NSMutableArray *preloadBatches; // ivar: _preloadBatches
@property (retain, nonatomic) GEOTileKeyList *tilesLoadingOrLoaded; // ivar: _tilesLoadingOrLoaded
@property (retain, nonatomic) GEOTileKeyList *tilesMissed; // ivar: _tilesMissed
@property (retain, nonatomic) GEOTileKeyList *tilesReceived; // ivar: _tilesReceived


-(id)init;


@end


#endif
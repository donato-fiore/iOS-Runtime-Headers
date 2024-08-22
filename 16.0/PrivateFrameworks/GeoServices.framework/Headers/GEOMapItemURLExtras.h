// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOMAPITEMURLEXTRAS_H
#define GEOMAPITEMURLEXTRAS_H


#import <Foundation/Foundation.h>


@interface GEOMapItemURLExtras : NSObject



+(id)_mapItemsFromDirectionsAction:(id)arg0 currentLocationIndices:(*id)arg1 options:(*id)arg2 ;
+(id)_mapItemsFromDirectionsAction:(id)arg0 hasCurrentLocation:(*BOOL)arg1 currentLocationIndex:(*NSUInteger)arg2 options:(*id)arg3 ;
+(id)_mapItemsFromPresentAction:(id)arg0 currentLocationIndices:(*id)arg1 options:(*id)arg2 ;
+(id)_mapItemsFromPresentAction:(id)arg0 hasCurrentLocation:(*BOOL)arg1 currentLocationIndex:(*NSUInteger)arg2 options:(*id)arg3 ;
+(id)mapItemsFromURL:(id)arg0 currentLocationIndices:(*id)arg1 options:(*id)arg2 ;
+(id)mapItemsFromURL:(id)arg0 hasCurrentLocation:(*BOOL)arg1 currentLocationIndex:(*NSUInteger)arg2 options:(*id)arg3 ;
+(id)urlToPresentAction:(id)arg0 present:(id)arg1 ;
+(id)urlToPresentDirectionsForItems:(id)arg0 options:(id)arg1 ;
+(id)urlToPresentDirectionsFromCurrentLocationToMapItem:(id)arg0 withOptions:(id)arg1 ;


@end


#endif
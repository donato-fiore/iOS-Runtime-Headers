// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKWORLDREGIONUPDATER_H
#define PKWORLDREGIONUPDATER_H

@class PKSearchService, NSMutableArray, NSMutableSet, PKWorldRegion, NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PKWorldRegionUpdater : NSObject {
    PKSearchService *_searchService;
    os_unfair_lock_s _lockRegionsToGeocode;
    NSMutableArray *_regionsToGeocode;
    NSMutableSet *_regionIdentifiersToGeocode;
    NSMutableSet *_regionsFailedToGeocode;
    PKWorldRegion *_currentRegionToGeocode;
    NSHashTable *_observers;
    os_unfair_lock_s _lockObservers;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
}




-(id)initWithSearchService:(id)arg0 ;
-(void)_accessObserversWithHandler:(id)arg0 ;
-(void)_beginReverseGeocodingIfPossible;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)updateCoordinatesForWorldRegionIfNeeded:(id)arg0 ;


@end


#endif
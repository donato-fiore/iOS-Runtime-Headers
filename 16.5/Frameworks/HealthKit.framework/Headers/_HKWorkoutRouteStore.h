// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKWORKOUTROUTESTORE_H
#define _HKWORKOUTROUTESTORE_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HKHealthStore.h"

@interface _HKWorkoutRouteStore : NSObject {
    NSMutableDictionary *_locations;
    NSMutableDictionary *_series;
    NSObject<OS_dispatch_queue> *_locationQueue;
    NSInteger _loadingCount;
    id *_loadingCompletionBlock;
    HKHealthStore *_healthStore;
}




-(BOOL)containsSameValuesAs:(id)arg0 ;
-(id)_queue_locations;
-(id)init;
-(id)initWithHealthStore:(id)arg0 ;
-(id)samples;
-(void)_fetchAllLocationsFromSeriesSample:(id)arg0 ;
-(void)_queue_addWorkoutRoutes:(id)arg0 ;
-(void)_queue_checkAndReturnIfLocationsLoaded;
-(void)_setLocations:(id)arg0 forUUID:(id)arg1 ;
-(void)addWorkoutRoutes:(id)arg0 ;
-(void)fetchAllLocationsWithCompletion:(id)arg0 ;
-(void)setWorkoutRoutes:(id)arg0 ;


@end


#endif
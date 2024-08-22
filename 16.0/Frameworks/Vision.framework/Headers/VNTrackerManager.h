// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNTRACKERMANAGER_H
#define VNTRACKERMANAGER_H

@class NSDictionary, NSMapTable, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VNRPNTrackerEspressoResourcesCache.h"

@interface VNTrackerManager : NSObject {
    NSDictionary *_trackerTypeToClassDictionary;
    NSMapTable *_trackerClassToNameMapTable;
    NSMutableDictionary *_liveTrackerCounter;
    NSObject<OS_dispatch_queue> *_trackingProcessingQueue;
    NSObject<OS_dispatch_queue> *_trackersCollectionManagementQueue;
    NSDictionary *_liveTrackerCounterLimit;
    NSMutableDictionary *_trackers;
    VNRPNTrackerEspressoResourcesCache *_trackerResourceCache;
}




-(NSInteger)_maximumTrackersOfType:(id)arg0 ;
-(id)_createTracker:(id)arg0 type:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(id)_getTracker:(id)arg0 ;
-(id)init;
-(void)_releaseTracker_NO_LOCK_DO_NOT_EXECUTE_DIRECTLY:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNTRACKERMANAGER_H
#define VNTRACKERMANAGER_H

@class NSDictionary, NSMapTable, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VNTrackerManager : NSObject {
    NSDictionary *_trackerTypeToClassDictionary;
    NSMapTable *_trackerClassToNameMapTable;
    NSMutableDictionary *_liveTrackerCounter;
    NSObject<OS_dispatch_queue> *_trackingProcessingQueue;
    NSObject<OS_dispatch_queue> *_trackersCollectionManagementQueue;
    NSDictionary *_liveTrackerCounterLimit;
    NSMutableDictionary *_trackers;
}




+(id)manager;
+(void)releaseAllTrackers;
+(void)releaseManager;
-(NSInteger)_maximumTrackersOfType:(id)arg0 ;
-(id)_createTracker:(id)arg0 type:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(id)_getTracker:(id)arg0 ;
-(id)init;
-(id)trackerWithOptions:(id)arg0 error:(*id)arg1 ;
-(void)releaseTracker:(id)arg0 ;


@end


#endif
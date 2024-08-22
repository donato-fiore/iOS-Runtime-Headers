// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCNETWORKBEHAVIORMONITOR_H
#define FCNETWORKBEHAVIORMONITOR_H

@class NSMutableArray, NSMutableIndexSet, NSHashTable, NSString, NSArray;
@protocol FCNetworkReachabilityObserving, FCOperationThrottlerDelegate, OS_dispatch_queue, FCOperationThrottler;

#import <Foundation/Foundation.h>

#import "FCKeyValueStore.h"

@interface FCNetworkBehaviorMonitor : NSObject <FCNetworkReachabilityObserving, FCOperationThrottlerDelegate>

 {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableArray *_sessions;
    NSMutableIndexSet *_sessionIDsThisLaunch;
    NSMutableArray *_events;
    FCKeyValueStore *_localStore;
    id<FCOperationThrottler> *_saveThrottler;
    NSHashTable *_observers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *networkEvents;
@property (readonly, copy, nonatomic) NSArray *sessions;
@property (readonly) Class superclass;


-(id)init;
-(id)initForLoggingOnly;
-(id)initWithCacheDirectory:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)logNetworkEvent:(id)arg0 ;
-(void)operationThrottlerPerformOperation:(id)arg0 ;
-(void)populateTelemetry:(id)arg0 withNetworkEventsFromDate:(id)arg1 toDate:(id)arg2 ;
-(void)removeObserver:(id)arg0 ;
-(void)wifiReachabilityDidChange:(id)arg0 ;


@end


#endif
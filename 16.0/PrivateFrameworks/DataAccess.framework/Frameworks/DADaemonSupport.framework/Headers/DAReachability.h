// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DAREACHABILITY_H
#define DAREACHABILITY_H

@class NSHashTable, NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DAReachability : NSObject {
    NSHashTable *_networkReachableDelegates;
    NSMutableDictionary *_hostReachableDelegates;
    BOOL _monitoringNetworkReachability;
    NSMutableSet *_hostsMonitoredForReachability;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(BOOL)hostLikelyUnreachable:(id)arg0 ;
+(id)sharedReachability;
+(void)recordError:(id)arg0 forHost:(id)arg1 ;
-(BOOL)_monitoringNetworkReachability;
-(BOOL)_monitoringReachabilityForHost:(id)arg0 ;
-(id)init;
-(void)_hostReachabilityChanged:(id)arg0 ;
-(void)_networkReachabilityChanged:(id)arg0 ;
-(void)_notifyDelegatesHostReachable:(id)arg0 ;
-(void)_notifyDelegatesNetworkReachable;
-(void)_startMonitoringNetworkReachability;
-(void)_startMonitoringReachabilityForHost:(id)arg0 ;
-(void)_startOrStopObservingHostReachabilityAfterUpdatingDelegates;
-(void)_startOrStopObservingNetworkReachabilityAfterUpdatingDelegates;
-(void)_stopMonitoringNetworkReachability;
-(void)_stopMonitoringReachabilityForHost:(id)arg0 ;
-(void)addDelegate:(id)arg0 ;
-(void)muckWithDelegates:(id)arg0 ;
-(void)removeDelegate:(id)arg0 ;


@end


#endif
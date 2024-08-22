// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MNROUTEREFRESHPOLICYSCHEDULER_H
#define MNROUTEREFRESHPOLICYSCHEDULER_H

@class NSMutableDictionary, NSDate, NSString;
@protocol MNTimeballInternalProvider, OS_dispatch_queue, OS_dispatch_source, MNRouteRefreshPolicySchedulerTimedActivity;

#import <Foundation/Foundation.h>

#import "MNTimeballRoutingProvider.h"
#import "MNTimeballCache.h"
#import "MNTimeballLocationManager.h"
#import "MNXPCTransactionCounter.h"
#import "MNObserverHashTable.h"

@interface MNRouteRefreshPolicyScheduler : NSObject <MNTimeballInternalProvider>

 {
    NSMutableDictionary *_refreshPolicyByDestination;
    NSMutableDictionary *_optionsByDestination;
    NSMutableDictionary *_auditTokenByDestination;
    os_unfair_lock_s _lock;
    MNTimeballRoutingProvider *_routingProvider;
    NSDate *_deferredRefreshDate;
    NSObject<OS_dispatch_queue> *_handlerQueue;
    NSObject<OS_dispatch_source> *_deferTimer;
    MNTimeballCache *_cache;
    MNTimeballLocationManager *_locationManager;
    MNXPCTransactionCounter *_transactionCounter;
    MNObserverHashTable *_observers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *refreshCompletion; // ivar: _refreshCompletion
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<MNRouteRefreshPolicySchedulerTimedActivity> *timedActivity; // ivar: _timedActivity
@property (nonatomic) CGFloat tolerance; // ivar: _tolerance


-(CGFloat)_timeIntervalForRefreshOfDestination:(id)arg0 routeUpdate:(id)arg1 atDate:(id)arg2 ;
-(id)_newActivityFromRefreshPolicyRules:(id)arg0 ;
-(id)_refreshPolicyForDestination:(id)arg0 ;
-(id)init;
-(id)initWithRoutingProvider:(id)arg0 cache:(id)arg1 locationManager:(id)arg2 ;
-(void)_deferRefreshForScheduledDestinationsAfter:(id)arg0 ;
-(void)_enterActiveWorkload;
-(void)_handleCompletionOfRefresh;
-(void)_handleRefreshingCacheEntries:(id)arg0 atDate:(id)arg1 ;
-(void)_handleRefreshingCacheEntries:(id)arg0 atDate:(id)arg1 userLocation:(id)arg2 ;
-(void)_handleSchedulingThisDestinationAndRefreshAllDestinations:(id)arg0 nextRefreshDate:(id)arg1 ;
-(void)_handleSchedulingUpdatesForDestination:(id)arg0 options:(NSInteger)arg1 policy:(NSUInteger)arg2 auditToken:(id)arg3 ;
-(void)_leaveActiveWorkload;
-(void)_performDeferredRefresh;
-(void)_refreshAllDestinationsAtDate:(id)arg0 ;
-(void)_scheduleNextRefreshDateForDestination:(id)arg0 routeUpdate:(id)arg1 fromDate:(id)arg2 completion:(id)arg3 ;
-(void)_updateNextRefreshDate:(id)arg0 destination:(id)arg1 completion:(id)arg2 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)refreshScheduledDestinations;
-(void)removeObserver:(id)arg0 ;
-(void)scheduleUpdatesForDestination:(id)arg0 options:(NSInteger)arg1 policy:(NSUInteger)arg2 auditToken:(id)arg3 ;
-(void)unscheduleUpdateForDestination:(id)arg0 ;


@end


#endif
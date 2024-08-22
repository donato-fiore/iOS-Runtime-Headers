// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCFAIRPLAYPERFORMANCECONTROLLER_H
#define MPCFAIRPLAYPERFORMANCECONTROLLER_H

@class NSHashTable, NSMutableSet, NSMutableDictionary, NSString;
@protocol MPCPlaybackAccountManagerObserver, MPServerObjectDatabaseObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MPCFairPlayPerformanceController : NSObject <MPCPlaybackAccountManagerObserver, MPServerObjectDatabaseObserver>

 {
    NSHashTable *_leaseManagers;
    os_unfair_lock_s _lock;
    NSMutableSet *_SAPSignPrewarmingAccounts;
    NSMutableSet *_SAPSignPrewarmedAccounts;
    NSObject<OS_dispatch_queue> *_miniQueue;
    NSMutableSet *_miniSINFEndpointLoadingAccounts;
    NSMutableDictionary *_miniSINFAccounts;
    BOOL _scheduledMiniSINFs;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedController;
-(id)_init;
-(void)_applicationWillEnterForegroundNotification:(id)arg0 ;
-(void)_fetchMiniSINFsWithCompletion:(id)arg0 ;
-(void)_optimisticallyFetchLeaseForAccounts:(id)arg0 ;
-(void)_optimisticallyFetchLeaseWithLeaseManager:(id)arg0 accountEnumerator:(id)arg1 ;
-(void)_prewarmMiniSINFEndpointForAccount:(id)arg0 ;
-(void)_prewarmSAPSigningForAccount:(id)arg0 ;
-(void)accountManager:(id)arg0 didChangeAccounts:(id)arg1 ;
-(void)database:(id)arg0 didFinishImportRequest:(id)arg1 ;
-(void)dealloc;
-(void)registerLeaseManager:(id)arg0 ;
-(void)scheduleMiniSINFFetch;
-(void)unregisterLeaseManager:(id)arg0 ;


@end


#endif
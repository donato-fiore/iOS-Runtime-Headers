// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MNTIMEBALLSERVICELOCALPROXY_H
#define MNTIMEBALLSERVICELOCALPROXY_H

@class NSMutableDictionary, NSString;
@protocol MNTimeballServiceProxyInterface, MNTimeballInternalProvider, MNTimeballInternalObserver, OS_dispatch_queue, MNTimeballServiceProxyDelegate;

#import <Foundation/Foundation.h>

#import "MNObserverHashTable.h"
#import "MNTimeballCache.h"
#import "MNRouteRefreshPolicyScheduler.h"
#import "MNTimeballRoutingProvider.h"
#import "MNTimeballLocationManager.h"
#import "MNXPCTransactionCounter.h"
#import "MNTimeballServicePeer.h"

@interface MNTimeballServiceLocalProxy : NSObject <MNTimeballServiceProxyInterface, MNTimeballInternalProvider, MNTimeballInternalObserver>

 {
    MNObserverHashTable *_observers;
    MNTimeballCache *_cache;
    MNRouteRefreshPolicyScheduler *_scheduler;
    MNTimeballRoutingProvider *_routingProvider;
    MNTimeballLocationManager *_locationManager;
    NSObject<OS_dispatch_queue> *_operationQueue;
    MNXPCTransactionCounter *_xpcTransactionCounter;
    NSMutableDictionary *_destinationOptions;
    BOOL _isLeeching;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<MNTimeballServiceProxyDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MNTimeballServicePeer *peer; // ivar: _peer
@property (readonly) Class superclass;


-(id)initWithPeer:(id)arg0 targetQueue:(id)arg1 cache:(id)arg2 locationManager:(id)arg3 routingProvider:(id)arg4 scheduler:(id)arg5 ;
-(void)_completedUpdateForDelegateHandlerID:(id)arg0 ;
-(void)_enqueOperation:(id)arg0 ;
-(void)_handleResult:(id)arg0 forDestination:(id)arg1 error:(id)arg2 fromNetwork:(BOOL)arg3 requestingClientID:(id)arg4 handlerID:(id)arg5 completed:(BOOL)arg6 ;
-(void)_invokeDelegateHandlerWithID:(id)arg0 forDestination:(id)arg1 update:(id)arg2 error:(id)arg3 ;
-(void)_receivedNetworkError:(id)arg0 forDestination:(id)arg1 ;
-(void)_receivedNetworkUpdate:(id)arg0 forDestination:(id)arg1 ;
-(void)_removeHighMemoryThreshold;
-(void)_requestHighMemoryThreshold:(id)arg0 ;
-(void)_requestOptions:(NSInteger)arg0 forDestinations:(id)arg1 fromLocation:(id)arg2 freshness:(id)arg3 handlerID:(id)arg4 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)provider:(id)arg0 didReceiveError:(id)arg1 forDestination:(id)arg2 ;
-(void)provider:(id)arg0 didReceiveUpdate:(id)arg1 forDestination:(id)arg2 ;
-(void)removeObserver:(id)arg0 ;
-(void)requestRoutingOptions:(NSInteger)arg0 forDestinations:(id)arg1 freshness:(id)arg2 handlerID:(id)arg3 ;
-(void)subscribeToAllDestinations;
-(void)subscribeToDestination:(id)arg0 options:(NSInteger)arg1 refreshPolicy:(NSUInteger)arg2 ;
-(void)unsubscribeFromAllDestinations;
-(void)unsubscribeFromDestination:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDHOMEREMOTEEVENTROUTERCLIENTCONTROLLER_H
#define HMDHOMEREMOTEEVENTROUTERCLIENTCONTROLLER_H

@class NSUUID, NSString, NSMapTable, HMEDelegatingEventRouter;
@protocol HMDRemoteEventRouterClientDataSource, HMEDelegatingEventRouterDataSource, HMESubscriptionProviding, OS_dispatch_queue, HMDHomeRemoteEventRouterClientControllerDataSource, HMDHomeRemoteEventRouterClientFactory;

#import <Foundation/Foundation.h>

#import "HMDUserMessagePolicy.h"
#import "HMDRemoteEventRouterPrimaryResidentClient.h"

@interface HMDHomeRemoteEventRouterClientController : NSObject <HMDRemoteEventRouterClientDataSource, HMEDelegatingEventRouterDataSource, HMESubscriptionProviding>

 {
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSUUID *_messageTargetUUID;
    NSString *_requestMessageName;
    NSString *_updateMessageName;
    id<HMDHomeRemoteEventRouterClientControllerDataSource> *_dataSource;
    HMDUserMessagePolicy *_clientUserMessagePolicy;
    id<HMDHomeRemoteEventRouterClientFactory> *_routerClientFactory;
    HMDRemoteEventRouterPrimaryResidentClient *_remoteEventRouterPrimaryResidentClient;
    NSMapTable *_eventRouterResidentClientToRoutingInfoMapping;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) HMEDelegatingEventRouter *residentDelegatingEventRouter; // ivar: _residentDelegatingEventRouter
@property (readonly) Class superclass;


-(BOOL)isCurrentDevicePrimaryResident;
-(BOOL)isNetworkAvailable;
-(BOOL)routerClientSupportsFragmentMessageForServerIdentifier:(id)arg0 ;
-(id)delegatingRouter:(id)arg0 filteredTopics:(id)arg1 forRouter:(id)arg2 ;
-(id)dumpStateDescription;
-(id)initWithMessageTargetUUID:(id)arg0 workQueue:(id)arg1 dataSource:(id)arg2 requestMessageName:(id)arg3 updateMessageName:(id)arg4 clientUserMessagePolicy:(id)arg5 assertionController:(id)arg6 ;
-(id)initWithMessageTargetUUID:(id)arg0 workQueue:(id)arg1 dataSource:(id)arg2 routerClientFactory:(id)arg3 requestMessageName:(id)arg4 updateMessageName:(id)arg5 clientUserMessagePolicy:(id)arg6 assertionController:(id)arg7 delegatingRouterFactory:(id)arg8 ;
-(id)routerClientMessageDestination:(id)arg0 serverIdentifier:(*id)arg1 ;
-(id)routerClientPrimaryResidentDeviceIdentifier:(id)arg0 ;
-(id)routerClientResidentManager:(id)arg0 ;
-(void)changeRegistrationsForConsumer:(id)arg0 topicFilterAdditions:(id)arg1 topicFilterRemovals:(id)arg2 completion:(id)arg3 ;
-(void)createResidentRouterForAccessoryUUID:(id)arg0 deviceIdentifier:(id)arg1 eventPrefix:(id)arg2 ;
-(void)networkAvailabilityDidChange:(BOOL)arg0 ;
-(void)registerConsumer:(id)arg0 topicFilters:(id)arg1 completion:(id)arg2 ;
-(void)removeResidentRouterForDeviceIdentifier:(id)arg0 ;
-(void)unregisterConsumer:(id)arg0 completion:(id)arg1 ;
-(void)unregisterConsumer:(id)arg0 topicFilters:(id)arg1 completion:(id)arg2 ;


@end


#endif
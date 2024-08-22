// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDHOMEREMOTEEVENTROUTERCLIENTCONTROLLER_H
#define HMDHOMEREMOTEEVENTROUTERCLIENTCONTROLLER_H

@class NSUUID, NSString, NSMutableArray, HMEDelegatingEventRouter;
@protocol HMDRemoteEventRouterClientDataSource, HMEDelegatingEventRouterDataSource, OS_dispatch_queue, HMDHomeRemoteEventRouterClientControllerDataSource, HMDHomeRemoteEventRouterClientFactory;

#import <Foundation/Foundation.h>

#import "HMDUserMessagePolicy.h"
#import "HMDRemoteEventRouterPrimaryResidentClient.h"
#import "HMDHomeManager.h"

@interface HMDHomeRemoteEventRouterClientController : NSObject <HMDRemoteEventRouterClientDataSource, HMEDelegatingEventRouterDataSource>

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
    NSMutableArray *_residentClients;
    NSUUID *_currentAccessoryUUID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) HMDHomeManager *homeManager; // ivar: _homeManager
@property (readonly) NSUUID *homeUUID;
@property (readonly) HMEDelegatingEventRouter *residentDelegatingEventRouter; // ivar: _residentDelegatingEventRouter
@property (readonly) Class superclass;


-(BOOL)isCurrentDevicePrimaryResident;
-(BOOL)isNetworkAvailable;
-(BOOL)routerClientShouldRestrictMessagingToLocalOnly:(id)arg0 ;
-(BOOL)routerClientSupportsFragmentMessageForServerIdentifier:(id)arg0 ;
-(id)client:(id)arg0 forwardingTopicsForTopics:(id)arg1 ;
-(id)delegatingRouter:(id)arg0 filteredTopics:(id)arg1 forRouter:(id)arg2 ;
-(id)delegatingRouter:(id)arg0 upstreamTopicsFor:(id)arg1 ;
-(id)dumpStateDescription;
-(id)initWithMessageTargetUUID:(id)arg0 workQueue:(id)arg1 dataSource:(id)arg2 requestMessageName:(id)arg3 updateMessageName:(id)arg4 clientUserMessagePolicy:(id)arg5 currentAccessoryUUID:(id)arg6 assertionController:(id)arg7 ;
-(id)initWithMessageTargetUUID:(id)arg0 workQueue:(id)arg1 dataSource:(id)arg2 routerClientFactory:(id)arg3 requestMessageName:(id)arg4 updateMessageName:(id)arg5 clientUserMessagePolicy:(id)arg6 currentAccessoryUUID:(id)arg7 assertionController:(id)arg8 delegatingRouterFactory:(id)arg9 ;
-(id)primaryResidentChangeMonitorForRouterClient:(id)arg0 ;
-(id)routerClientMessageDestination:(id)arg0 serverIdentifier:(*id)arg1 ;
-(id)routerClientPrimaryResidentDeviceIdentifier:(id)arg0 ;
-(void)createResidentRouterForAccessoryUUID:(id)arg0 ;
-(void)networkAvailabilityDidChange:(BOOL)arg0 ;
-(void)removeResidentRouterForAccessoryUUID:(id)arg0 ;
-(void)updateCurrentAccessoryUUID:(id)arg0 ;


@end


#endif
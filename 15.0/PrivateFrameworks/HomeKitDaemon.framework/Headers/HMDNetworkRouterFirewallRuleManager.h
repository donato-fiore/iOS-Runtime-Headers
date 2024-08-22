// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDNETWORKROUTERFIREWALLRULEMANAGER_H
#define HMDNETWORKROUTERFIREWALLRULEMANAGER_H

@class HMFObject, NSArray, NSMutableArray, NSString, HMBLocalDatabase, NSNotificationCenter, HMFUnfairLock;
@protocol HMDNetworkRouterFirewallRuleManagerInternal, HMFLogging, HMDNetworkRouterFirewallRuleManager, HMDNetworkRouterFirewallRuleManagerDebug, OS_dispatch_queue, HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator, HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinatorFactory;



@interface HMDNetworkRouterFirewallRuleManager : HMFObject <HMDNetworkRouterFirewallRuleManagerInternal, HMFLogging, HMDNetworkRouterFirewallRuleManager, HMDNetworkRouterFirewallRuleManagerDebug>



@property (readonly, copy, nonatomic) NSArray *activeClients;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (readonly, nonatomic) NSMutableArray *clients; // ivar: _clients
@property (retain, nonatomic) NSObject<HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator> *coordinator; // ivar: _coordinator
@property (readonly, nonatomic) NSObject<HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinatorFactory> *coordinatorFactory; // ivar: _coordinatorFactory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMBLocalDatabase *localDatabase; // ivar: _localDatabase
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (nonatomic) NSUInteger operationsInProgressCount; // ivar: _operationsInProgressCount
@property (readonly, nonatomic) HMFUnfairLock *propertyLock; // ivar: _propertyLock
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(CGFloat)defaultCloudFetchInterval;
+(CGFloat)defaultCloudFetchRetryInterval;
+(id)logCategory;
+(id)sharedInstance;
-(id)init;
-(id)initWithLocalDatabase:(id)arg0 ;
-(id)initWithLocalDatabase:(id)arg0 coordinatorFactory:(id)arg1 ;
-(id)initWithLocalDatabase:(id)arg0 notificationCenter:(id)arg1 workQueue:(id)arg2 coordinatorFactory:(id)arg3 ;
-(void)_fetchCloudChangesIgnoringLastFetchedAccessories:(BOOL)arg0 forceChangeNotifications:(BOOL)arg1 completion:(id)arg2 ;
-(void)addOverrides:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)didCompleteScheduledCloudFetch;
-(void)dumpAllLocalRulesIgnoringOverrides:(BOOL)arg0 rawOutput:(BOOL)arg1 completion:(id)arg2 ;
-(void)dumpCloudRecordsForProductGroup:(id)arg0 productNumber:(id)arg1 rawOutput:(BOOL)arg2 verifySignatures:(BOOL)arg3 completion:(id)arg4 ;
-(void)dumpLocalRulesForProductGroup:(id)arg0 ignoreOverrides:(BOOL)arg1 rawOutput:(BOOL)arg2 completion:(id)arg3 ;
-(void)dumpLocalRulesForProductGroup:(id)arg0 productNumber:(id)arg1 firmwareVersion:(id)arg2 ignoreOverrides:(BOOL)arg3 rawOutput:(BOOL)arg4 completion:(id)arg5 ;
-(void)dumpPairedMetadataForProductGroup:(id)arg0 productNumber:(id)arg1 firmwareVersion:(id)arg2 ignoreOverrides:(BOOL)arg3 rawOutput:(BOOL)arg4 completion:(id)arg5 ;
-(void)fetchCloudChangesWithCompletion:(id)arg0 ;
-(void)fetchPairedMetadataVersionConfigurationsForAccessories:(id)arg0 completion:(id)arg1 ;
-(void)fetchRulesForAccessories:(id)arg0 completion:(id)arg1 ;
-(void)forceFetchCloudChangesAndForceChangeNotifications:(BOOL)arg0 completion:(id)arg1 ;
-(void)listCloudRecordsForProductGroup:(id)arg0 rawOutput:(BOOL)arg1 completion:(id)arg2 ;
-(void)removeAllLocalRulesWithCompletion:(id)arg0 ;
-(void)removeAllOverridesWithCompletion:(id)arg0 ;
-(void)removeOverridesForProductGroup:(id)arg0 productNumber:(id)arg1 completion:(id)arg2 ;
-(void)setOverrides:(id)arg0 completion:(id)arg1 ;
-(void)shutdownForClient:(id)arg0 ;
-(void)startupForClient:(id)arg0 completion:(id)arg1 ;


@end


#endif
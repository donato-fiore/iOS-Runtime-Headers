// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDNETWORKROUTERCLIENTMANAGER_H
#define HMDNETWORKROUTERCLIENTMANAGER_H

@class NSMutableSet, NSString, HMFUnfairLock, NSNotificationCenter;
@protocol HMFLogging, HMDDevicePreferenceDataSource, HMDNetworkRouterFirewallRuleManagerClient, HMDNetworkRouterFirewallRuleManager, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMDHome.h"
#import "HMDHAPAccessory.h"
#import "HMDNetworkRouterController.h"

@interface HMDNetworkRouterClientManager : NSObject <HMFLogging, HMDDevicePreferenceDataSource, HMDNetworkRouterFirewallRuleManagerClient>



@property (readonly) NSMutableSet *accessoriesInReconfiguration; // ivar: _accessoriesInReconfiguration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<HMDNetworkRouterFirewallRuleManager> *firewallRuleManager; // ivar: _firewallRuleManager
@property (readonly) NSUInteger hash;
@property (readonly, weak) HMDHome *home;
@property (readonly) HMFUnfairLock *lock; // ivar: _lock
@property (nonatomic) BOOL managedNetworkEnabled; // ivar: _managedNetworkEnabled
@property (weak) HMDHAPAccessory *networkRouterAccessory; // ivar: _networkRouterAccessory
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly) HMDNetworkRouterController *routerController;
@property (nonatomic) BOOL staleClientIdentifiersResetInProgress; // ivar: _staleClientIdentifiersResetInProgress
@property (nonatomic) BOOL staleClientIdentifiersResetNeeded; // ivar: _staleClientIdentifiersResetNeeded
@property (nonatomic) BOOL startPending; // ivar: _startPending
@property (nonatomic) BOOL started; // ivar: _started
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)assertAirplay2RuleToConfigurationForAccessory:(id)arg0 firewallConfiguration:(id)arg1 ;
+(id)logCategory;
-(BOOL)supportsDeviceWithCapabilities:(id)arg0 ;
-(id)initWithNetworkRouterAccessory:(id)arg0 workQueue:(id)arg1 firewallRuleManager:(id)arg2 notificationCenter:(id)arg3 ;
-(id)watchedAccessoryIdentifiersForFirewallRuleManager:(id)arg0 ;
-(void)__deregisterForNetworkRouterAccessoryReachable:(id)arg0 ;
-(void)__registerForNetworkRouterAccessoryReachable:(id)arg0 ;
-(void)_createClientConfigurationForAccessory:(id)arg0 credential:(id)arg1 clientStatus:(id)arg2 clientReconfigurationAllowed:(BOOL)arg3 ;
-(void)_deregisterForChangesToManagedAccessory:(id)arg0 ;
-(void)_evaluateManagement;
-(void)_fetchFirewallRulesForAccessory:(id)arg0 completion:(id)arg1 ;
-(void)_getNetworkConfigurationForAccessory:(id)arg0 targetProtectionMode:(NSInteger)arg1 completion:(id)arg2 ;
-(void)_handleRouterAccessoryReachable:(id)arg0 ;
-(void)_migrateAccessory:(id)arg0 withConfiguration:(id)arg1 clientStatus:(id)arg2 fromCredentialType:(NSInteger)arg3 toCredentialType:(NSInteger)arg4 rotate:(BOOL)arg5 completion:(id)arg6 ;
-(void)_reconcileClientConfigurationForAccessory:(id)arg0 clientStatus:(id)arg1 networkRouterUUID:(id)arg2 clientReconfigurationAllowed:(BOOL)arg3 ;
-(void)_reconcileClientConfigurationForReachableAccessory:(id)arg0 clientReconfigurationAllowed:(BOOL)arg1 ;
-(void)_registerForChangesToManagedAccessory:(id)arg0 ;
-(void)_registerForNetworkProtectionChangesToGroup:(id)arg0 ;
-(void)_replaceClientConfigurationForAccessory:(id)arg0 credential:(id)arg1 clientStatus:(id)arg2 clientReconfigurationAllowed:(BOOL)arg3 ;
-(void)_replaceNetworkClientIdentifierForAccessory:(id)arg0 networkClientIdentifier:(id)arg1 networkRouterUUID:(id)arg2 clientStatus:(id)arg3 clientReconfigurationAllowed:(BOOL)arg4 ;
-(void)_resetStaleClientIdentifiersBeforeStart;
-(void)_start;
-(void)_startManagingAccessory:(id)arg0 initialHomeSetup:(BOOL)arg1 ;
-(void)_stop;
-(void)_unregisterForNetworkProtectionChangesToGroup:(id)arg0 ;
-(void)_updateClientConfiguration:(id)arg0 forAccessory:(id)arg1 protectionMode:(NSInteger)arg2 clientStatus:(id)arg3 skipIfFingerprintMatches:(BOOL)arg4 clientReconfigurationAllowed:(BOOL)arg5 ;
-(void)_updateClientConfigurationForAllAccessoriesWithClientReconfigurationAllowed:(BOOL)arg0 ;
-(void)_updateExistingClientConfiguration:(id)arg0 forAccessory:(id)arg1 clientStatus:(id)arg2 clientReconfigurationAllowed:(BOOL)arg3 ;
-(void)_updateOrCreateClientConfigurationForAccessory:(id)arg0 preferReconcile:(BOOL)arg1 clientReconfigurationAllowed:(BOOL)arg2 ;
-(void)evaluateManagement;
-(void)handleAccessoryAdded:(id)arg0 ;
-(void)handleAccessoryConnected:(id)arg0 ;
-(void)handleAccessoryFirmwareVersionUpdated:(id)arg0 ;
-(void)handleAccessoryRemoved:(id)arg0 ;
-(void)handleFirewallRulesUpdated:(id)arg0 ;
-(void)handleHomeNetworkProtectionChanged:(id)arg0 ;
-(void)handleNetworkProtectionGroupActivated:(id)arg0 ;
-(void)handleNetworkProtectionGroupDeactivated:(id)arg0 ;
-(void)handleNetworkProtectionGroupProtectionChanged:(id)arg0 ;
-(void)handleRouterAccessoryReachable:(id)arg0 ;
-(void)migrateAccessory:(id)arg0 toCredentialType:(NSInteger)arg1 rotate:(BOOL)arg2 completion:(id)arg3 ;
-(void)replaceActiveNetworkRouterAccessory:(id)arg0 ;
-(void)stop;


@end


#endif
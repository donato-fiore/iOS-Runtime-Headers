// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDNETWORKROUTERFIREWALLRULEMANAGERBACKINGSTORECOORDINATOR_H
#define HMDNETWORKROUTERFIREWALLRULEMANAGERBACKINGSTORECOORDINATOR_H

@class HMFObject, NSString, HMBLocalZone, NSNotificationCenter;
@protocol HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchSchedulerDelegate, HMFLogging, HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator, HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler, HMDNetworkRouterFirewallRuleManagerInternal, HMDNetworkRouterFirewallRuleManagerBackingStoreMirror, OS_dispatch_queue;



@interface HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator : HMFObject <HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchSchedulerDelegate, HMFLogging, HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator>



@property (readonly, nonatomic) NSObject<HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler> *cloudFetchScheduler; // ivar: _cloudFetchScheduler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) NSObject<HMDNetworkRouterFirewallRuleManagerInternal> *firewallRuleManager; // ivar: _firewallRuleManager
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<HMDNetworkRouterFirewallRuleManagerBackingStoreMirror> *mirror; // ivar: _mirror
@property (retain, nonatomic) HMBLocalZone *mirroredLocalZone; // ivar: _mirroredLocalZone
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *ownerQueue; // ivar: _ownerQueue
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly) Class superclass;


+(BOOL)ckUseAnonymousAccount;
+(NSInteger)ckContainerEnvironment;
+(id)__createProcessingOptionsWithLabel:(id)arg0 ;
+(id)__createProcessingOptionsWithLabel:(id)arg0 qualityOfService:(NSInteger)arg1 ;
+(id)__jsonFromDeclarations:(id)arg0 rawOutput:(BOOL)arg1 error:(*id)arg2 ;
+(id)__jsonFromPairedMetadata:(id)arg0 rawOutput:(BOOL)arg1 error:(*id)arg2 ;
+(id)__jsonFromRecords:(id)arg0 validateWithPublicKeys:(id)arg1 rawOutput:(BOOL)arg2 error:(*id)arg3 ;
+(id)__jsonStringFromDictionary:(id)arg0 rawOutput:(BOOL)arg1 error:(*id)arg2 ;
+(id)__jsonValueForCKRecordValue:(id)arg0 ;
+(id)__networkDeclarationDataDictionaryFromOverrideObjectDictionary:(id)arg0 ;
+(id)__networkDeclarationDataDictionaryFromRecordDictionary:(id)arg0 ;
+(id)__networkDeclarationsFromRecord:(id)arg0 recordKey:(id)arg1 identifier:(id)arg2 ;
+(id)__pairedMetadataDataDictionaryFromRecordDictionary:(id)arg0 ;
+(id)__pairedMetadataDictionaryFromOverrideObjectDictionary:(id)arg0 ;
+(id)__pairedMetadataFromRecord:(id)arg0 recordKey:(id)arg1 identifier:(id)arg2 ;
+(id)ckContainerIdentifier;
+(id)logCategory;
-(BOOL)addOverrides:(id)arg0 replace:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)removeAllLocalRulesWithError:(*id)arg0 ;
-(BOOL)removeAllOverridesWithError:(*id)arg0 ;
-(BOOL)removeOverridesForProductGroup:(id)arg0 productNumber:(id)arg1 error:(*id)arg2 ;
-(id)_fetchAllDataForProductGroup:(id)arg0 productNumber:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(id)_fetchAllOverridesForProductGroup:(id)arg0 productNumber:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(id)_fetchNetworkDeclarationsForRecordIDs:(id)arg0 options:(id)arg1 ignoreOverrides:(BOOL)arg2 error:(*id)arg3 ;
-(id)_fetchPairedMetadataForAccessories:(id)arg0 options:(id)arg1 ignoreOverrides:(BOOL)arg2 error:(*id)arg3 ;
-(id)dumpLocalRulesForProductGroup:(id)arg0 productNumber:(id)arg1 firmwareVersion:(id)arg2 ignoreOverrides:(BOOL)arg3 rawOutput:(BOOL)arg4 error:(*id)arg5 ;
-(id)dumpPairedMetadataForProductGroup:(id)arg0 productNumber:(id)arg1 firmwareVersion:(id)arg2 ignoreOverrides:(BOOL)arg3 rawOutput:(BOOL)arg4 error:(*id)arg5 ;
-(id)fetchPairedMetadataVersionConfigurationsForAccessories:(id)arg0 qualityOfService:(NSInteger)arg1 ignoreOverrides:(BOOL)arg2 error:(*id)arg3 ;
-(id)initWithFirewallRuleManager:(id)arg0 notificationCenter:(id)arg1 cloudFetchInterval:(CGFloat)arg2 cloudFetchRetryInterval:(CGFloat)arg3 ownerQueue:(id)arg4 ;
-(id)initWithFirewallRuleManager:(id)arg0 notificationCenter:(id)arg1 cloudFetchScheduler:(id)arg2 ownerQueue:(id)arg3 ;
-(id)initWithFirewallRuleManager:(id)arg0 notificationCenter:(id)arg1 ownerQueue:(id)arg2 ;
-(id)pairedMetadataVersionConfigurationForAccessory:(id)arg0 pairedMetadata:(id)arg1 ;
-(id)ruleConfigurationForAccessory:(id)arg0 declarations:(id)arg1 ;
-(void)__cloudFetchSchedulerFired:(id)arg0 ;
-(void)__maybeStartOrStopCloudFetchScheduler;
-(void)__startupWithMirror:(id)arg0 completion:(id)arg1 ;
-(void)__startupWithMirroredLocalZone:(id)arg0 completion:(id)arg1 ;
-(void)__stopCloudFetchScheduler;
-(void)_dumpCloudRecordsForProductGroup:(id)arg0 productNumber:(id)arg1 rawOutput:(BOOL)arg2 verifySignatures:(BOOL)arg3 completion:(id)arg4 ;
-(void)_fetchCloudChangesIfNeededForRecordIDs:(id)arg0 completion:(id)arg1 ;
-(void)_fetchCloudChangesWithQualityOfService:(NSInteger)arg0 ignoreLastFetchedAccessories:(BOOL)arg1 forceChangeNotifications:(BOOL)arg2 requiredRecordIDs:(id)arg3 schedulerXpcActivity:(id)arg4 completion:(id)arg5 ;
-(void)_listCloudRecordsForProductGroup:(id)arg0 rawOutput:(BOOL)arg1 completion:(id)arg2 ;
-(void)cloudFetchSchedulerFired:(id)arg0 completion:(id)arg1 ;
-(void)dumpCloudRecordsForProductGroup:(id)arg0 productNumber:(id)arg1 rawOutput:(BOOL)arg2 listOnly:(BOOL)arg3 verifySignatures:(BOOL)arg4 completion:(id)arg5 ;
-(void)fetchCloudChangesWithQualityOfService:(NSInteger)arg0 ignoreLastFetchedAccessories:(BOOL)arg1 forceChangeNotifications:(BOOL)arg2 completion:(id)arg3 ;
-(void)fetchRulesForAccessories:(id)arg0 qualityOfService:(NSInteger)arg1 ignoreOverrides:(BOOL)arg2 completion:(id)arg3 ;
-(void)shutdownWithCompletion:(id)arg0 ;
-(void)startupWithLocalDatabase:(id)arg0 completion:(id)arg1 ;


@end


#endif
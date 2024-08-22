// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDNETWORKROUTERFIREWALLRULEMANAGERBACKINGSTOREMIRROR_H
#define HMDNETWORKROUTERFIREWALLRULEMANAGERBACKINGSTOREMIRROR_H

@class HMFObject, HMBCloudDatabase, NSString, NAFuture, HMBLocalDatabase, HMBLocalZone, NAPromise;
@protocol HMFLogging, HMDNetworkRouterFirewallRuleManagerBackingStoreMirror, HMBMirrorProtocol, OS_dispatch_queue, NAScheduler, HMBLocalZoneID;


#import "HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorInternalStateModel.h"

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirror : HMFObject <HMFLogging, HMDNetworkRouterFirewallRuleManagerBackingStoreMirror, HMBMirrorProtocol>



@property (readonly, nonatomic) HMBCloudDatabase *cloudDatabase; // ivar: _cloudDatabase
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorInternalStateModel *internalState; // ivar: _internalState
@property (retain, nonatomic) NAFuture *lastAsyncFuture; // ivar: _lastAsyncFuture
@property (readonly, nonatomic) HMBLocalDatabase *localDatabase; // ivar: _localDatabase
@property (retain, nonatomic) HMBLocalZone *localZone; // ivar: _localZone
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly, nonatomic) NAFuture *shutdownFuture;
@property (readonly, nonatomic) NAPromise *shutdownPromise; // ivar: _shutdownPromise
@property (nonatomic, getter=isShuttingDown) BOOL shuttingDown; // ivar: _shuttingDown
@property (readonly, nonatomic) NAFuture *startUp;
@property (readonly, nonatomic) NAFuture *startupFuture;
@property (readonly, nonatomic) NAPromise *startupPromise; // ivar: _startupPromise
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL useAnonymousRequests; // ivar: _useAnonymousRequests
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue
@property (readonly, nonatomic) NSObject<NAScheduler> *workQueueScheduler; // ivar: _workQueueScheduler
@property (readonly, nonatomic) NSObject<HMBLocalZoneID> *zoneID; // ivar: _zoneID


+(BOOL)__errorIsNotFound:(id)arg0 ;
+(NSUInteger)__maxSizeForCKRecordSignatureVerificationCertificateChain;
+(id)__certificatesRecordID;
+(id)__createSignatureVerificationPolicy;
+(id)__overrideParentModelID;
+(id)__publicKeyFromCertificateRecord:(id)arg0 dataKey:(id)arg1 assetKey:(id)arg2 ;
+(id)__recordKeyCertificatePrefix:(id)arg0 ;
+(id)logCategory;
+(id)publicKeysFromCertificateRecord:(id)arg0 ;
-(BOOL)__addOverrides:(id)arg0 replace:(BOOL)arg1 options:(id)arg2 activity:(id)arg3 error:(*id)arg4 ;
-(BOOL)__canRecoverFromFetchDatabaseChangesError:(id)arg0 fetchInfo:(id)arg1 ;
-(BOOL)__canRecoverFromVerificationCertificatesError:(id)arg0 fetchInfo:(id)arg1 ;
-(BOOL)__createCloudZonesForFetchInfo:(id)arg0 error:(*id)arg1 ;
-(BOOL)__removeAllLocalRulesWithOptions:(id)arg0 activity:(id)arg1 error:(*id)arg2 ;
-(BOOL)__removeAllOverridesWithOptions:(id)arg0 activity:(id)arg1 error:(*id)arg2 ;
-(BOOL)__removeOverridesForRecordIDs:(id)arg0 options:(id)arg1 activity:(id)arg2 error:(*id)arg3 ;
-(BOOL)__removeOverridesForZoneName:(id)arg0 options:(id)arg1 activity:(id)arg2 error:(*id)arg3 ;
-(BOOL)__removeOverridesForZoneName:(id)arg0 recordName:(id)arg1 options:(id)arg2 activity:(id)arg3 error:(*id)arg4 ;
-(BOOL)__shouldFailCloudRecordFetchError:(id)arg0 error:(id)arg1 ;
-(BOOL)_removeOverridesForZoneName:(id)arg0 recordName:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(BOOL)addOverrides:(id)arg0 replace:(BOOL)arg1 options:(id)arg2 error:(*id)arg3 ;
-(BOOL)removeAllLocalRulesWithOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeAllOverridesWithOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeOverridesForRecordIDs:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(BOOL)removeOverridesForZoneName:(id)arg0 recordName:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(id)__asyncFutureWithActivity:(id)arg0 ignoreErrors:(BOOL)arg1 block:(id)arg2 ;
-(id)__createCloudZoneIDForZoneID:(id)arg0 ;
-(id)__fetchAllDataForRecordIDs:(id)arg0 options:(id)arg1 activity:(id)arg2 error:(*id)arg3 ;
-(id)__fetchAllDataForZoneID:(id)arg0 options:(id)arg1 activity:(id)arg2 error:(*id)arg3 ;
-(id)__fetchAllDataForZoneName:(id)arg0 options:(id)arg1 activity:(id)arg2 error:(*id)arg3 ;
-(id)__fetchOverridesForRecordIDs:(id)arg0 options:(id)arg1 activity:(id)arg2 error:(*id)arg3 ;
-(id)__fetchOverridesForZoneName:(id)arg0 options:(id)arg1 activity:(id)arg2 error:(*id)arg3 ;
-(id)__loadOrCreateInternalStateModelWithLocalZone:(id)arg0 activity:(id)arg1 ;
-(id)__localZonesForRecordIDs:(id)arg0 activity:(id)arg1 error:(*id)arg2 ;
-(id)__openLocalZoneForCloudZoneID:(id)arg0 error:(*id)arg1 ;
-(id)_fetchAllDataForZoneName:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)_fetchOverridesForZoneName:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)cloudFetchNeededForRecordIDs:(id)arg0 error:(*id)arg1 ;
-(id)desiredKeys;
-(id)destroy;
-(id)fetchAllDataForRecordIDs:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)fetchAllDataForZoneName:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)fetchAllDataWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)fetchAllOverridesWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)fetchOverridesForRecordIDs:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)fetchOverridesForZoneName:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)flush;
-(id)initWithLocalDatabase:(id)arg0 cloudDatabase:(id)arg1 useAnonymousRequests:(BOOL)arg2 ownerQueue:(id)arg3 ;
-(id)shutdown;
-(id)triggerOutputForOutputRow:(NSUInteger)arg0 options:(id)arg1 ;
-(void)__fetchCloudRecordsWithFetchInfo:(id)arg0 ;
-(void)__fetchDatabaseChangesCompleted:(id)arg0 error:(id)arg1 ;
-(void)__fetchDatabaseChangesWithFetchInfo:(id)arg0 ;
-(void)__fetchRecordByID:(id)arg0 ;
-(void)__fetchRecordsByQuery:(id)arg0 ;
-(void)__fetchVerificationCertificatesCompleted:(id)arg0 record:(id)arg1 error:(id)arg2 ;
-(void)__fetchVerificationCertificatesWithFetchInfo:(id)arg0 ;
-(void)__fetchZoneChangesWithFetchInfo:(id)arg0 ;
-(void)__performCloudZonePullsWithFetchInfo:(id)arg0 ;
-(void)__removeDeletedZonesWithFetchInfo:(id)arg0 ;
-(void)__retryFetchDatabaseChangesWithFetchInfo:(id)arg0 ;
-(void)__retryFetchVerificationCertificatesWithFetchInfo:(id)arg0 ;
-(void)__saveInternalStateWithActivity:(id)arg0 ;
-(void)__shutdownLocalZones:(id)arg0 activity:(id)arg1 ;
-(void)__shutdownWithActivity:(id)arg0 ;
-(void)__startQueryOperation:(id)arg0 operation:(id)arg1 ;
-(void)__startUpCloudZonesWithFetchInfo:(id)arg0 ;
-(void)__startupWithLocalZone:(id)arg0 activity:(id)arg1 ;
-(void)__updateChangeTokenWithFetchInfo:(id)arg0 ;
-(void)_fetchCloudRecordsForZoneID:(id)arg0 recordID:(id)arg1 options:(id)arg2 desiredKeys:(id)arg3 completion:(id)arg4 ;
-(void)fetchCloudChangesForRecordIDs:(id)arg0 options:(id)arg1 ignoreLastSynchronizedRecords:(BOOL)arg2 xpcActivity:(id)arg3 completion:(id)arg4 ;
-(void)fetchCloudRecordIDsForZoneID:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)fetchCloudRecordsForZoneID:(id)arg0 recordID:(id)arg1 options:(id)arg2 completion:(id)arg3 ;
-(void)fetchVerificationCertificatesRecordWithOperationGroup:(id)arg0 completion:(id)arg1 ;
-(void)startUpWithLocalZone:(id)arg0 ;


@end


#endif
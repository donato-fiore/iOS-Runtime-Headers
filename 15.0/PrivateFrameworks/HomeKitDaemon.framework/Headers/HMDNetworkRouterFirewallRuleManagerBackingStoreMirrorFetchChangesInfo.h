// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDNETWORKROUTERFIREWALLRULEMANAGERBACKINGSTOREMIRRORFETCHCHANGESINFO_H
#define HMDNETWORKROUTERFIREWALLRULEMANAGERBACKINGSTOREMIRRORFETCHCHANGESINFO_H

@class CKServerChangeToken, NSMutableSet, NSSet, NSArray, NSDictionary;


#import "HMDNetworkRouterFirewallRuleManagerBackingStoreFetchHelper.h"

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorFetchChangesInfo : HMDNetworkRouterFirewallRuleManagerBackingStoreFetchHelper

@property (retain, nonatomic) CKServerChangeToken *databaseChangeToken; // ivar: _databaseChangeToken
@property (readonly, nonatomic) NSMutableSet *modifiedRecordIDs; // ivar: _modifiedRecordIDs
@property (retain, nonatomic) CKServerChangeToken *originalDatabaseChangeToken; // ivar: _originalDatabaseChangeToken
@property (readonly, nonatomic) NSSet *requestedRecordIDs; // ivar: _requestedRecordIDs
@property (retain, nonatomic) NSArray *signatureVerificationPublicKeys; // ivar: _signatureVerificationPublicKeys
@property (readonly, nonatomic) NSDictionary *zoneInfoMap; // ivar: _zoneInfoMap
@property (readonly, nonatomic) BOOL zonesHaveChanged; // ivar: _zonesHaveChanged
@property (readonly, nonatomic) BOOL zonesWereDeleted; // ivar: _zonesWereDeleted


-(id)initWithActivity:(id)arg0 options:(id)arg1 databaseChangeToken:(id)arg2 promise:(id)arg3 xpcActivity:(id)arg4 database:(id)arg5 useAnonymousRequests:(BOOL)arg6 recordIDs:(id)arg7 lastSynchronizedRecordIDs:(id)arg8 ;
-(void)__cleanupMirroredZones:(id)arg0 cloudZones:(id)arg1 result:(id)arg2 error:(id)arg3 ;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)markZonesChanged;
-(void)markZonesDeleted;


@end


#endif
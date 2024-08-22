// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDNETWORKROUTERFIREWALLRULEMANAGERBACKINGSTOREMIRRORFETCHRECORDSINFO_H
#define HMDNETWORKROUTERFIREWALLRULEMANAGERBACKINGSTOREMIRRORFETCHRECORDSINFO_H

@class NSArray, CKRecordID, NSMutableSet, CKRecordZoneID;


#import "HMDNetworkRouterFirewallRuleManagerBackingStoreFetchHelper.h"

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorFetchRecordsInfo : HMDNetworkRouterFirewallRuleManagerBackingStoreFetchHelper

@property (readonly, nonatomic) NSArray *desiredKeys; // ivar: _desiredKeys
@property (readonly, nonatomic) CKRecordID *recordID; // ivar: _recordID
@property (readonly, nonatomic) NSMutableSet *records; // ivar: _records
@property (readonly, nonatomic) CKRecordZoneID *zoneID; // ivar: _zoneID


-(id)initWithActivity:(id)arg0 options:(id)arg1 promise:(id)arg2 database:(id)arg3 useAnonymousRequests:(BOOL)arg4 zoneID:(id)arg5 recordID:(id)arg6 desiredKeys:(id)arg7 ;


@end


#endif
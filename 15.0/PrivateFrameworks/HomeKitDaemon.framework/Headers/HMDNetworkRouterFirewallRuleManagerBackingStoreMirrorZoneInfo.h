// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDNETWORKROUTERFIREWALLRULEMANAGERBACKINGSTOREMIRRORZONEINFO_H
#define HMDNETWORKROUTERFIREWALLRULEMANAGERBACKINGSTOREMIRRORZONEINFO_H

@class HMFObject, HMBLocalZone, NSMutableSet, CKRecordZoneID;


#import "HMDNetworkRouterFirewallRuleCloudZone.h"

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorZoneInfo : HMFObject

@property (retain, nonatomic) HMDNetworkRouterFirewallRuleCloudZone *cloudZone; // ivar: _cloudZone
@property (readonly, nonatomic) BOOL ignoreChangeToken; // ivar: _ignoreChangeToken
@property (retain, nonatomic) HMBLocalZone *mirroredLocalZone; // ivar: _mirroredLocalZone
@property (readonly, nonatomic) NSMutableSet *recordIDs; // ivar: _recordIDs
@property (readonly, nonatomic) BOOL zoneHasChanged; // ivar: _zoneHasChanged
@property (readonly, nonatomic) CKRecordZoneID *zoneID; // ivar: _zoneID
@property (readonly, nonatomic) BOOL zoneWasDeleted; // ivar: _zoneWasDeleted


-(id)initWithZoneID:(id)arg0 ;
-(void)forceRefresh;
-(void)markChanged;
-(void)markDeleted;


@end


#endif
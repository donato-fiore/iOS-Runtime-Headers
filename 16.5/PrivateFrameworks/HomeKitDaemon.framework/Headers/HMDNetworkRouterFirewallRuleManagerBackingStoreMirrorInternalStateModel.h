// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDNETWORKROUTERFIREWALLRULEMANAGERBACKINGSTOREMIRRORINTERNALSTATEMODEL_H
#define HMDNETWORKROUTERFIREWALLRULEMANAGERBACKINGSTOREMIRRORINTERNALSTATEMODEL_H

@class HMBModel, NSData, NSString, NSSet;
@protocol HMFLogging;



@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorInternalStateModel : HMBModel <HMFLogging>



@property (retain, nonatomic) NSData *archivedLastSynchronizedRecordIDs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSSet *lastSynchronizedRecordIDs; // ivar: _lastSynchronizedRecordIDs
@property (readonly) Class superclass;


+(id)hmbProperties;
+(id)logCategory;
+(id)modelID;
+(id)parentModelID;
-(id)init;


@end


#endif
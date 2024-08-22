// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDNETWORKROUTERFIREWALLRULEMANAGERBACKINGSTORECLOUDACCESSORYMODEL_H
#define HMDNETWORKROUTERFIREWALLRULEMANAGERBACKINGSTORECLOUDACCESSORYMODEL_H

@class HMBModel, NSString, NSData;
@protocol HMFLogging;



@interface HMDNetworkRouterFirewallRuleManagerBackingStoreCloudAccessoryModel : HMBModel <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSData *networkDeclarationsData;
@property (retain, nonatomic) NSData *pairedMetadataData;
@property (readonly) Class superclass;


+(id)hmbProperties;
+(id)logCategory;
+(id)modelIDForRecordID:(id)arg0 ;
+(id)namespaceID;
-(id)initWithCloudZoneID:(id)arg0 recordID:(id)arg1 networkDeclarationsData:(id)arg2 ;
-(id)initWithCloudZoneID:(id)arg0 recordID:(id)arg1 networkDeclarationsData:(id)arg2 pairedMetadataData:(id)arg3 ;
-(id)initWithModelID:(id)arg0 parentModelID:(id)arg1 networkDeclarationsData:(id)arg2 ;
-(id)initWithModelID:(id)arg0 parentModelID:(id)arg1 networkDeclarationsData:(id)arg2 pairedMetadataData:(id)arg3 ;


@end


#endif
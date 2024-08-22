// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDNETWORKROUTERFIREWALLRULEMANAGERBACKINGSTOREMIRRORLOCALZONEID_H
#define HMDNETWORKROUTERFIREWALLRULEMANAGERBACKINGSTOREMIRRORLOCALZONEID_H

@class HMFObject, NSString, NSArray, NSData;
@protocol HMBLocalZoneID;



@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorLocalZoneID : HMFObject <HMBLocalZoneID>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *labels;
@property (readonly, nonatomic) NSString *name;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSData *token; // ivar: _token


+(id)sharedInstance;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithToken:(id)arg0 ;


@end


#endif
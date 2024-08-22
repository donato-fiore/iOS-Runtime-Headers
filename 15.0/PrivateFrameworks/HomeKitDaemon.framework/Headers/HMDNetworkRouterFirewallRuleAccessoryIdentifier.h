// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDNETWORKROUTERFIREWALLRULEACCESSORYIDENTIFIER_H
#define HMDNETWORKROUTERFIREWALLRULEACCESSORYIDENTIFIER_H

@class HMFObject, NSString, HMFVersion;
@protocol NSCopying;



@interface HMDNetworkRouterFirewallRuleAccessoryIdentifier : HMFObject <NSCopying>



@property (readonly, nonatomic) NSString *cloudKitRecordName;
@property (readonly, nonatomic) NSString *cloudKitZoneName;
@property (readonly, nonatomic) HMFVersion *firmwareVersion; // ivar: _firmwareVersion
@property (readonly, nonatomic) NSString *productGroup; // ivar: _productGroup
@property (readonly, nonatomic) NSString *productNumber; // ivar: _productNumber


+(id)createWithProductData:(id)arg0 firmwareVersion:(id)arg1 ;
+(id)identifierFromRecordID:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)cloudKitRecordID;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithProductGroup:(id)arg0 productNumber:(id)arg1 firmwareVersion:(id)arg2 ;


@end


#endif
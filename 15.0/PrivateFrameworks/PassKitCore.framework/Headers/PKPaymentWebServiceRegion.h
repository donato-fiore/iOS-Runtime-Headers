// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTWEBSERVICEREGION_H
#define PKPAYMENTWEBSERVICEREGION_H

@class NSString, NSURL, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKPaymentWebServiceRegion : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSString *accountServicePushTopic; // ivar: _accountServicePushTopic
@property (readonly, nonatomic) NSURL *accountServiceURL; // ivar: _accountServiceURL
@property (readonly, nonatomic) NSString *applyServicePushTopic; // ivar: _applyServicePushTopic
@property (readonly, nonatomic) NSURL *applyServiceURL; // ivar: _applyServiceURL
@property (readonly, nonatomic) NSURL *brokerURL; // ivar: _brokerURL
@property (readonly, nonatomic) NSArray *certificates; // ivar: _certificates
@property (readonly, nonatomic) NSInteger consistencyCheckBackoffLevel; // ivar: _consistencyCheckBackoffLevel
@property (readonly, nonatomic) NSString *deviceCheckInPushTopic; // ivar: _deviceCheckInPushTopic
@property (readonly, nonatomic) BOOL hasAccounts; // ivar: _hasAccounts
@property (readonly, nonatomic) BOOL hasApplications; // ivar: _hasApplications
@property (nonatomic) BOOL hasPeerPaymentAccount; // ivar: _hasPeerPaymentAccount
@property (readonly, nonatomic) NSURL *inAppPaymentServicesURL; // ivar: _inAppPaymentServicesURL
@property (readonly, copy, nonatomic) NSString *lastDeviceCheckInBuildVersion; // ivar: _lastDeviceCheckInBuildVersion
@property (readonly, copy, nonatomic) NSString *lastDeviceUpgradeTaskBuildVersion; // ivar: _lastDeviceUpgradeTaskBuildVersion
@property (readonly, copy, nonatomic) NSString *lastUpdatedTag; // ivar: _lastUpdatedTag
@property (readonly, nonatomic) NSInteger outstandingCheckInAction; // ivar: _outstandingCheckInAction
@property (readonly, copy, nonatomic) NSString *ownershipTokensPushTopic; // ivar: _ownershipTokensPushTopic
@property (readonly, nonatomic) NSURL *partnerServiceURL; // ivar: _partnerServiceURL
@property (readonly, nonatomic) NSURL *paymentServicesMerchantURL; // ivar: _paymentServicesMerchantURL
@property (readonly, nonatomic) NSURL *paymentServicesURL; // ivar: _paymentServicesURL
@property (retain, nonatomic) NSURL *peerPaymentServiceURL; // ivar: _peerPaymentServiceURL
@property (readonly, copy, nonatomic) NSString *productsPushTopic; // ivar: _productsPushTopic
@property (readonly, copy, nonatomic) NSString *provisioningTargetsPushTopic; // ivar: _provisioningTargetsPushTopic
@property (readonly, nonatomic) NSString *regionCode; // ivar: _regionCode
@property (readonly, copy, nonatomic) NSString *transactionZonePushTopic; // ivar: _transactionZonePushTopic
@property (readonly, nonatomic) NSString *trustedServiceManagerPushTopic; // ivar: _trustedServiceManagerPushTopic
@property (readonly, nonatomic) NSURL *trustedServiceManagerURL; // ivar: _trustedServiceManagerURL
@property (readonly, nonatomic) NSString *userNotificationPushTopic; // ivar: _userNotificationPushTopic


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCeritficates:(id)arg0 brokerURL:(id)arg1 trustedServiceManagerURL:(id)arg2 trustedServiceManagerPushTopic:(id)arg3 paymentServicesURL:(id)arg4 inAppPaymentServicesURL:(id)arg5 consistencyCheckBackoffLevel:(NSInteger)arg6 lastUpdatedTag:(id)arg7 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 hasPeerPaymentAccount:(BOOL)arg1 ;
-(id)regionBySettingConsistencyCheckBackoffLevel:(NSInteger)arg0 ;
-(id)regionBySettingLastDeviceCheckInBuildVersion:(id)arg0 ;
-(id)regionBySettingLastDeviceUpgradeTaskBuildVersion:(id)arg0 ;
-(id)regionBySettingLastUpdatedTag:(id)arg0 ;
-(id)regionBySettingOutstandingCheckInAction:(NSInteger)arg0 lastDeviceCheckInBuildVersion:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
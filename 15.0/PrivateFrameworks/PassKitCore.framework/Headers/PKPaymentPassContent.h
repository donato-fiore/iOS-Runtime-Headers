// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTPASSCONTENT_H
#define PKPAYMENTPASSCONTENT_H

@class NSString, NSArray, NSDictionary, NSURL;
@protocol NSSecureCoding;


#import "PKPassContent.h"
#import "PKPassAuxiliaryRegistrationRequirements.h"
#import "PKDynamicLayerConfiguration.h"
#import "PKFidoProfile.h"

@interface PKPaymentPassContent : PKPassContent <NSSecureCoding>



@property (nonatomic) NSInteger accessType; // ivar: _accessType
@property (copy, nonatomic) NSString *appURLScheme; // ivar: _appURLScheme
@property (retain, nonatomic) PKPassAuxiliaryRegistrationRequirements *auxiliaryRegistrationRequirements; // ivar: _auxiliaryRegistrationRequirements
@property (copy, nonatomic) NSArray *availableActions; // ivar: _availableActions
@property (copy, nonatomic) NSString *cobrandName; // ivar: _cobrandName
@property (copy, nonatomic) NSString *customerServiceIdentifier; // ivar: _customerServiceIdentifier
@property (retain, nonatomic) PKDynamicLayerConfiguration *dynamicLayerConfiguration; // ivar: _dynamicLayerConfiguration
@property (retain, nonatomic) PKFidoProfile *fidoProfile; // ivar: _fidoProfile
@property (nonatomic) NSInteger identityType; // ivar: _identityType
@property (copy, nonatomic) NSDictionary *localizedEntitlementDescriptions; // ivar: _localizedEntitlementDescriptions
@property (copy, nonatomic) NSDictionary *localizedSuspendedReasonsByAID; // ivar: _localizedSuspendedReasonsByAID
@property (copy, nonatomic) NSString *messagePushTopic; // ivar: _messagePushTopic
@property (copy, nonatomic) NSURL *messageServiceRegistrationURL; // ivar: _messageServiceRegistrationURL
@property (copy, nonatomic) NSURL *messageServiceURL; // ivar: _messageServiceURL
@property (nonatomic) NSInteger paymentType; // ivar: _paymentType
@property (nonatomic) BOOL supportsTransitOnly; // ivar: _supportsTransitOnly
@property (copy, nonatomic) NSString *transactionPushTopic; // ivar: _transactionPushTopic
@property (copy, nonatomic) NSURL *transactionServiceRegistrationURL; // ivar: _transactionServiceRegistrationURL
@property (copy, nonatomic) NSURL *transactionServiceURL; // ivar: _transactionServiceURL
@property (nonatomic) NSUInteger transitCommutePlanType; // ivar: _transitCommutePlanType
@property (copy, nonatomic) NSArray *transitCommutePlans; // ivar: _transitCommutePlans
@property (copy, nonatomic) NSArray *upgradeRequests; // ivar: _upgradeRequests


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 bundle:(id)arg1 privateBundle:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
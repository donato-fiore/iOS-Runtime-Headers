// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTPASSCONTENT_H
#define PKPAYMENTPASSCONTENT_H

@class NSArray, NSString, NSDictionary, NSURL;
@protocol NSSecureCoding;


#import "PKPassContent.h"
#import "PKPassAuxiliaryRegistrationRequirements.h"
#import "PKDynamicLayerConfiguration.h"
#import "PKSiriIntentsConfiguration.h"

@interface PKPaymentPassContent : PKPassContent <NSSecureCoding>



@property (nonatomic) NSInteger accessType; // ivar: _accessType
@property (copy, nonatomic) NSArray *actionGroups; // ivar: _actionGroups
@property (copy, nonatomic) NSString *appURLScheme; // ivar: _appURLScheme
@property (retain, nonatomic) PKPassAuxiliaryRegistrationRequirements *auxiliaryRegistrationRequirements; // ivar: _auxiliaryRegistrationRequirements
@property (copy, nonatomic) NSArray *availableActions; // ivar: _availableActions
@property (copy, nonatomic) NSString *cobrandName; // ivar: _cobrandName
@property (copy, nonatomic) NSString *customerServiceIdentifier; // ivar: _customerServiceIdentifier
@property (retain, nonatomic) PKDynamicLayerConfiguration *dynamicLayerConfiguration; // ivar: _dynamicLayerConfiguration
@property (nonatomic) NSInteger identityType; // ivar: _identityType
@property (copy, nonatomic) NSDictionary *localizedSuspendedReasonsByAID; // ivar: _localizedSuspendedReasonsByAID
@property (copy, nonatomic) NSString *messagePushTopic; // ivar: _messagePushTopic
@property (copy, nonatomic) NSURL *messageServiceRegistrationURL; // ivar: _messageServiceRegistrationURL
@property (copy, nonatomic) NSURL *messageServiceURL; // ivar: _messageServiceURL
@property (nonatomic) NSInteger paymentType; // ivar: _paymentType
@property (copy, nonatomic) NSString *shippingAddressSeed; // ivar: _shippingAddressSeed
@property (copy, nonatomic) NSString *speakableMake; // ivar: _speakableMake
@property (copy, nonatomic) NSString *speakableModel; // ivar: _speakableModel
@property (copy, nonatomic) PKSiriIntentsConfiguration *supportedSiriIntents; // ivar: _supportedSiriIntents
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
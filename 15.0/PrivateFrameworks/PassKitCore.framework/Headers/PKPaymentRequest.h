// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTREQUEST_H
#define PKPAYMENTREQUEST_H

@class NSString, AKAppleIDAuthenticationContext, NSData, NSArray, NSURL, NSDate, NSTimeZone, PKRecurringPaymentRequest, NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKApplePayTrustSignatureRequest.h"
#import "PKContact.h"
#import "PKPaymentInstallmentConfiguration.h"
#import "PKPaymentMerchantSession.h"
#import "PKPaymentTokenConfiguration.h"

@interface PKPaymentRequest : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger APIType; // ivar: _APIType
@property (retain, nonatomic) NSString *CTDataConnectionServiceType; // ivar: _CTDataConnectionServiceType
@property (readonly) BOOL _isAMPPayment;
@property (readonly) BOOL _isPSD2StyleRequest;
@property (nonatomic) *__SecAccessControl accesssControlRef; // ivar: _accesssControlRef
@property (nonatomic) BOOL accountPaymentSupportsPeerPayment; // ivar: _accountPaymentSupportsPeerPayment
@property (nonatomic) BOOL accountPaymentUsePeerPaymentBalance; // ivar: _accountPaymentUsePeerPaymentBalance
@property (retain, nonatomic) AKAppleIDAuthenticationContext *appleIDAuthenticationContext; // ivar: _appleIDAuthenticationContext
@property (retain, nonatomic) PKApplePayTrustSignatureRequest *applePayTrustSignatureRequest; // ivar: _applePayTrustSignatureRequest
@property (copy, nonatomic) NSData *applicationData; // ivar: _applicationData
@property (retain, nonatomic) NSArray *bankAccounts; // ivar: _bankAccounts
@property (nonatomic) *void billingAddress; // ivar: _billingAddress
@property (copy, nonatomic) NSString *billingAgreement; // ivar: _billingAgreement
@property (retain, nonatomic) PKContact *billingContact; // ivar: _billingContact
@property (copy, nonatomic) NSString *boundInterfaceIdentifier; // ivar: _boundInterfaceIdentifier
@property (nonatomic) CGFloat clientCallbackTimeout; // ivar: _clientCallbackTimeout
@property (nonatomic) NSUInteger confirmationStyle; // ivar: _confirmationStyle
@property (copy, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (copy, nonatomic) NSString *couponCode; // ivar: _couponCode
@property (copy, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (nonatomic) BOOL deviceSupportsPeerPaymentAccountPayment; // ivar: _deviceSupportsPeerPaymentAccountPayment
@property (nonatomic) BOOL expectsMerchantSession; // ivar: _expectsMerchantSession
@property (copy, nonatomic) NSData *externalizedContext; // ivar: _externalizedContext
@property (retain, nonatomic) PKPaymentInstallmentConfiguration *installmentConfiguration; // ivar: _installmentConfiguration
@property (copy, nonatomic) NSString *localizedAuthorizingTitle; // ivar: _localizedAuthorizingTitle
@property (copy, nonatomic) NSString *localizedBiometricConfirmationTitle; // ivar: _localizedBiometricConfirmationTitle
@property (copy, nonatomic) NSString *localizedCallbackErrorMessage; // ivar: _localizedCallbackErrorMessage
@property (copy, nonatomic) NSString *localizedCallbackErrorTitle; // ivar: _localizedCallbackErrorTitle
@property (copy, nonatomic) NSString *localizedConfirmationTitle; // ivar: _localizedConfirmationTitle
@property (copy, nonatomic) NSString *localizedErrorMessage; // ivar: _localizedErrorMessage
@property (copy, nonatomic) NSString *localizedNavigationTitle; // ivar: _localizedNavigationTitle
@property (copy, nonatomic) NSString *localizedPasswordButtonTitle; // ivar: _localizedPasswordButtonTitle
@property (copy, nonatomic) NSString *localizedSummaryItemsTitle; // ivar: _localizedSummaryItemsTitle
@property (nonatomic) NSUInteger merchantCapabilities; // ivar: _merchantCapabilities
@property (copy, nonatomic) NSString *merchantIdentifier; // ivar: _merchantIdentifier
@property (retain, nonatomic) PKPaymentMerchantSession *merchantSession; // ivar: _merchantSession
@property (retain, nonatomic) NSArray *multiTokenContexts; // ivar: _multiTokenContexts
@property (readonly, nonatomic, getter=isMultiTokenRequest) BOOL multiTokenRequest;
@property (retain, nonatomic) NSURL *originatingURL; // ivar: _originatingURL
@property (copy, nonatomic) NSString *passSerialNumber; // ivar: _passSerialNumber
@property (copy, nonatomic) NSString *passTypeIdentifier; // ivar: _passTypeIdentifier
@property (copy, nonatomic) NSArray *paymentContentItems; // ivar: _paymentContentItems
@property (copy, nonatomic) NSDate *paymentDate; // ivar: _paymentDate
@property (nonatomic) NSInteger paymentFrequency; // ivar: _paymentFrequency
@property (copy, nonatomic) NSArray *paymentSummaryItems; // ivar: _paymentSummaryItems
@property (nonatomic, getter=isPaymentSummaryPinned) BOOL paymentSummaryPinned; // ivar: _paymentSummaryPinned
@property (copy, nonatomic) NSTimeZone *paymentTimeZone; // ivar: _paymentTimeZone
@property (retain, nonatomic) PKRecurringPaymentRequest *recurringPaymentRequest; // ivar: _recurringPaymentRequest
@property (nonatomic) NSUInteger requestType; // ivar: _requestType
@property (nonatomic) NSUInteger requestor; // ivar: _requestor
@property (nonatomic) NSUInteger requiredBillingAddressFields;
@property (retain, nonatomic) NSSet *requiredBillingContactFields; // ivar: _requiredBillingContactFields
@property (nonatomic) NSUInteger requiredShippingAddressFields;
@property (retain, nonatomic) NSSet *requiredShippingContactFields; // ivar: _requiredShippingContactFields
@property (nonatomic) BOOL requiresAddressPrecision; // ivar: _requiresAddressPrecision
@property (nonatomic) *void shippingAddress; // ivar: _shippingAddress
@property (retain, nonatomic) PKContact *shippingContact; // ivar: _shippingContact
@property (nonatomic) NSUInteger shippingContactEditingMode; // ivar: _shippingContactEditingMode
@property (nonatomic, getter=isShippingEditable) BOOL shippingEditable;
@property (copy, nonatomic) NSString *shippingEditableMessage; // ivar: _shippingEditableMessage
@property (copy, nonatomic) NSArray *shippingMethods; // ivar: _shippingMethods
@property (nonatomic) NSUInteger shippingType; // ivar: _shippingType
@property (readonly) BOOL shouldUseMerchantSession;
@property (retain, nonatomic) NSString *sourceApplicationBundleIdentifier; // ivar: _sourceApplicationBundleIdentifier
@property (retain, nonatomic) NSString *sourceApplicationSecondaryIdentifier; // ivar: _sourceApplicationSecondaryIdentifier
@property (copy, nonatomic) NSSet *supportedCountries; // ivar: _supportedCountries
@property (copy, nonatomic) NSArray *supportedNetworks; // ivar: _supportedNetworks
@property (nonatomic) BOOL supportsCouponCode; // ivar: _supportsCouponCode
@property (nonatomic) BOOL supportsInstantFundsIn; // ivar: _supportsInstantFundsIn
@property (nonatomic) BOOL suppressTotal; // ivar: _suppressTotal
@property (retain, nonatomic) NSArray *thumbnailURLs; // ivar: _thumbnailURLs
@property (retain, nonatomic) PKPaymentTokenConfiguration *tokenConfiguration; // ivar: _tokenConfiguration


+(BOOL)supportsSecureCoding;
+(NSInteger)version;
+(id)availableNetworks;
+(id)delegatePurchaseRequestWithProtobuf:(id)arg0 ;
+(id)errorFromDictionary:(id)arg0 ;
+(id)paymentBillingAddressInvalidErrorWithKey:(id)arg0 localizedDescription:(id)arg1 ;
+(id)paymentContactInvalidErrorWithContactField:(id)arg0 localizedDescription:(id)arg1 ;
+(id)paymentCouponCodeExpiredErrorWithLocalizedDescription:(id)arg0 ;
+(id)paymentCouponCodeInvalidErrorWithLocalizedDescription:(id)arg0 ;
+(id)paymentShippingAddressInvalidErrorWithKey:(id)arg0 localizedDescription:(id)arg1 ;
+(id)paymentShippingAddressUnserviceableErrorWithLocalizedDescription:(id)arg0 ;
+(id)requestWithProtobuf:(id)arg0 ;
-(BOOL)_shouldUseAmpEnrollmentPinning;
-(BOOL)_shouldUseOsloTNG;
-(BOOL)isDisbursementPaymentRequest;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPaymentRequest:(id)arg0 ;
-(BOOL)isPeerPaymentRequest;
-(BOOL)isServiceProviderPaymentRequest;
-(NSUInteger)_contactFieldsToAddressFields:(id)arg0 ;
-(id)_addressFieldsToContactFields:(NSUInteger)arg0 ;
-(id)_transactionAmount;
-(id)delegatePurchaseProtobuf;
-(id)description;
-(id)disbursementPaymentRequest;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 error:(*id)arg1 ;
-(id)peerPaymentRequest;
-(id)protobuf;
-(id)serviceProviderPaymentRequest;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
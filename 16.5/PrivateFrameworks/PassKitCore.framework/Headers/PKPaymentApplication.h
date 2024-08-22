// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTAPPLICATION_H
#define PKPAYMENTAPPLICATION_H

@class NSString, NSArray, NSDecimalNumber, NSSet, NSNumber;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKFelicaPassProperties.h"
#import "PKTransitPassProperties.h"

@interface PKPaymentApplication : NSObject <NSSecureCoding, NSCopying>

 {
    BOOL _foundVehicleReport;
}


@property (copy, nonatomic, setter=setAPANIdentifier:) NSString *apanIdentifier; // ivar: _apanIdentifier
@property (copy, nonatomic, setter=setAPANSuffix:) NSString *apanSuffix; // ivar: _apanSuffix
@property (copy, nonatomic) NSString *appletCurrencyCode; // ivar: _appletCurrencyCode
@property (copy, nonatomic) NSString *appletDataFormat; // ivar: _appletDataFormat
@property (copy, nonatomic) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (copy, nonatomic) NSArray *automaticSelectionCriteria; // ivar: _automaticSelectionCriteria
@property (nonatomic, getter=isAuxiliary) BOOL auxiliary; // ivar: _auxiliary
@property (nonatomic) NSUInteger auxiliaryPaymentType; // ivar: _auxiliaryPaymentType
@property (nonatomic) NSInteger contactlessPriority; // ivar: _contactlessPriority
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (copy, nonatomic, setter=setDPANIdentifier:) NSString *dpanIdentifier; // ivar: _dpanIdentifier
@property (copy, nonatomic, setter=setDPANSuffix:) NSString *dpanSuffix; // ivar: _dpanSuffix
@property (copy, nonatomic) PKFelicaPassProperties *felicaProperties;
@property (readonly, nonatomic) BOOL generatesLocalTransactions;
@property (nonatomic) BOOL hadMerchantTokens; // ivar: _hadMerchantTokens
@property (nonatomic) BOOL hasMerchantTokens; // ivar: _hasMerchantTokens
@property (nonatomic) BOOL inAppPINRequired; // ivar: _inAppPINRequired
@property (copy, nonatomic) NSDecimalNumber *inAppPINRequiredAmount; // ivar: _inAppPINRequiredAmount
@property (copy, nonatomic) NSString *inAppPINRequiredCurrency; // ivar: _inAppPINRequiredCurrency
@property (nonatomic) NSInteger inAppPriority; // ivar: _inAppPriority
@property (readonly, nonatomic, getter=isParsedTransitApplication) BOOL parsedTransitApplication;
@property (nonatomic) NSInteger paymentNetworkIdentifier; // ivar: _paymentNetworkIdentifier
@property (nonatomic) NSUInteger paymentType; // ivar: _paymentType
@property (nonatomic) BOOL requiresConsentForDataRelease; // ivar: _requiresConsentForDataRelease
@property (nonatomic) BOOL requiresDeferredAuthorization; // ivar: _requiresDeferredAuthorization
@property (copy, nonatomic, setter=setSanitizedDPAN:) NSString *sanitizedDPAN; // ivar: _sanitizedDPAN
@property (copy, nonatomic) NSString *secureElementIdentifier; // ivar: _secureElementIdentifier
@property (nonatomic, getter=isShareable) BOOL shareable; // ivar: _shareable
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly, nonatomic) NSString *stateAsString;
@property (readonly, nonatomic) NSString *stationCodeProvider;
@property (copy, nonatomic) NSSet *subcredentials; // ivar: _subcredentials
@property (copy, nonatomic) NSArray *supportedExpressModes; // ivar: _supportedExpressModes
@property (copy, nonatomic) NSArray *supportedInAppMerchantCountryCodes; // ivar: _supportedInAppMerchantCountryCodes
@property (nonatomic) NSUInteger supportedRadioTechnologies; // ivar: _supportedRadioTechnologies
@property (copy, nonatomic) NSArray *supportedTransitNetworkIdentifiers; // ivar: _supportedTransitNetworkIdentifiers
@property (nonatomic) BOOL supportsBarcodePayment; // ivar: _supportsBarcodePayment
@property (nonatomic) BOOL supportsContactlessPayment; // ivar: _supportsContactlessPayment
@property (nonatomic) BOOL supportsInAppPayment; // ivar: _supportsInAppPayment
@property (nonatomic) BOOL supportsInstantFundsIn; // ivar: _supportsInstantFundsIn
@property (nonatomic) BOOL supportsMerchantTokens; // ivar: _supportsMerchantTokens
@property (retain, nonatomic) NSNumber *supportsMultiTokens; // ivar: _supportsMultiTokens
@property (nonatomic) BOOL supportsOptionalAuthentication; // ivar: _supportsOptionalAuthentication
@property (nonatomic) BOOL supportsServiceMode; // ivar: _supportsServiceMode
@property (readonly, nonatomic) BOOL supportsSuica;
@property (readonly, nonatomic) BOOL supportsTransit;
@property (readonly, nonatomic) BOOL supportsTransitHistory;
@property (retain, nonatomic) NSNumber *supportsVirtualCardNumber; // ivar: _supportsVirtualCardNumber
@property (copy, nonatomic) NSString *suspendedReason; // ivar: _suspendedReason
@property (copy, nonatomic) NSString *transactionSourceIdentifier; // ivar: _transactionSourceIdentifier
@property (copy, nonatomic) PKTransitPassProperties *transitProperties; // ivar: _transitProperties
@property (copy, nonatomic) NSArray *unsupportedInAppMerchantCountryCodes; // ivar: _unsupportedInAppMerchantCountryCodes
@property (copy, nonatomic) NSString *virtualCardIdentifier; // ivar: _virtualCardIdentifier
@property (copy, nonatomic, setter=setVirtualCardSuffix:) NSString *virtualCardSuffix; // ivar: _virtualCardSuffix
@property (nonatomic) NSInteger virtualCardVPANOrigin; // ivar: _virtualCardVPANOrigin


+(BOOL)supportsSecureCoding;
+(id)applicationWithProtobuf:(id)arg0 ;
-(BOOL)acceptedForNonWebPaymentWithSupportedNetworkIdentifiers:(id)arg0 merchantCapabilities:(NSUInteger)arg1 merchantCountryCode:(id)arg2 paymentApplicationStates:(id)arg3 isMultiTokensRequest:(BOOL)arg4 webService:(id)arg5 ;
-(BOOL)acceptedForNonWebPaymentWithSupportedNetworkIdentifiers:(id)arg0 merchantCapabilities:(NSUInteger)arg1 paymentMode:(NSInteger)arg2 ;
-(BOOL)acceptedForWebPaymentWithSupportedNetworkIdentifiers:(id)arg0 merchantCapabilities:(NSUInteger)arg1 merchantCountryCode:(id)arg2 paymentApplicationStates:(id)arg3 webService:(id)arg4 paymentMode:(NSInteger)arg5 isMultiTokensRequest:(BOOL)arg6 ;
-(BOOL)canProcessPayment:(id)arg0 ;
-(BOOL)firstApproachCompleted;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPaymentApplication:(id)arg0 ;
-(BOOL)isRequiredForMerchantInCountry:(id)arg0 ;
-(BOOL)supportsAutomaticSelectionForTCI:(id)arg0 ;
-(BOOL)supportsComboCard;
-(BOOL)supportsDeviceAssessmentAccordingToService:(id)arg0 ;
-(BOOL)supportsExpress;
-(BOOL)supportsExpressForAutomaticSelectionCriteriaPassingTest:(id)arg0 ;
-(BOOL)supportsExpressForAutomaticSelectionTechnologyType:(NSInteger)arg0 ;
-(BOOL)supportsExpressMode:(id)arg0 ;
-(BOOL)supportsMultiTokensWithImplicitlyEnabledNetworks:(id)arg0 ;
-(BOOL)supportsPartnerSpecificIdentifier;
-(BOOL)supportsWebPaymentMode:(NSInteger)arg0 withExclusionList:(id)arg1 ;
-(BOOL)supportsWebPaymentMode:(NSInteger)arg0 withExclusionList:(id)arg1 clientOSVersion:(id)arg2 ;
-(NSUInteger)hash;
-(id)asDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPaymentApplicationDictionary:(id)arg0 auxiliaryApplication:(BOOL)arg1 ;
-(id)networksSupportedAccordingToService:(id)arg0 ;
-(id)paymentApplicationsIncludingAuxiliaryPaymentTypes;
-(id)protobuf;
-(id)torinoFeatureFromService:(id)arg0 ;
-(void)_createAndPopulateAutomaticSelectionCriteriaIfNecessary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
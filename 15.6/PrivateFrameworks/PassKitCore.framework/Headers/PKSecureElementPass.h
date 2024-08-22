// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSECUREELEMENTPASS_H
#define PKSECUREELEMENTPASS_H

@class NSString, NSSet, NSArray, NSURL;
@protocol NSCopying, NSSecureCoding;


#import "PKPass.h"
#import "PKPassAuxiliaryRegistrationRequirements.h"
#import "PKPaymentApplication.h"
#import "PKCurrencyAmount.h"
#import "PKTransitPassProperties.h"

@interface PKSecureElementPass : PKPass <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger accessType;
@property (copy, nonatomic) NSString *appURLScheme; // ivar: _appURLScheme
@property (nonatomic) NSUInteger associatedAccountFeatureIdentifier; // ivar: _associatedAccountFeatureIdentifier
@property (copy, nonatomic) NSString *associatedAccountServiceAccountIdentifier; // ivar: _associatedAccountServiceAccountIdentifier
@property (copy, nonatomic) NSSet *associatedApplicationIdentifiers; // ivar: _associatedApplicationIdentifiers
@property (copy, nonatomic) NSSet *associatedWebDomains; // ivar: _associatedWebDomains
@property (copy, nonatomic) PKPassAuxiliaryRegistrationRequirements *auxiliaryRegistrationRequirements; // ivar: _auxiliaryRegistrationRequirements
@property (copy, nonatomic) NSArray *availableActions; // ivar: _availableActions
@property (nonatomic) NSInteger cardType; // ivar: _cardType
@property (copy, nonatomic) NSString *cobrandName; // ivar: _cobrandName
@property (nonatomic, getter=isCobranded) BOOL cobranded; // ivar: _cobranded
@property (copy, nonatomic) NSString *customerServiceIdentifier; // ivar: _customerServiceIdentifier
@property (readonly) NSString *deviceAccountIdentifier;
@property (readonly) NSString *deviceAccountNumberSuffix;
@property (retain, nonatomic) NSSet *deviceInAppPaymentApplications; // ivar: _deviceInAppPaymentApplications
@property (readonly, copy, nonatomic) NSString *devicePassIdentifier;
@property (copy, nonatomic) NSSet *devicePaymentApplications; // ivar: _devicePaymentApplications
@property (retain, nonatomic) PKPaymentApplication *devicePrimaryBarcodePaymentApplication; // ivar: _devicePrimaryBarcodePaymentApplication
@property (retain, nonatomic) PKPaymentApplication *devicePrimaryContactlessPaymentApplication; // ivar: _devicePrimaryContactlessPaymentApplication
@property (retain, nonatomic) PKPaymentApplication *devicePrimaryInAppPaymentApplication; // ivar: _devicePrimaryInAppPaymentApplication
@property (retain, nonatomic) PKPaymentApplication *devicePrimaryPaymentApplication; // ivar: _devicePrimaryPaymentApplication
@property (nonatomic) BOOL hasAssociatedPeerPaymentAccount; // ivar: _hasAssociatedPeerPaymentAccount
@property (readonly, nonatomic) NSInteger identityType;
@property (copy, nonatomic) NSString *issuerAdministrativeAreaCode; // ivar: _issuerAdministrativeAreaCode
@property (copy, nonatomic) NSString *issuerCountryCode; // ivar: _issuerCountryCode
@property (copy, nonatomic) NSString *localizedSuspendedReason; // ivar: _localizedSuspendedReason
@property (copy, nonatomic) NSString *messagePushTopic; // ivar: _messagePushTopic
@property (copy, nonatomic) NSURL *messageServiceRegistrationURL; // ivar: _messageServiceRegistrationURL
@property (copy, nonatomic) NSURL *messageServiceURL; // ivar: _messageServiceURL
@property (readonly, copy, nonatomic) NSString *pairedTerminalIdentifier;
@property (copy, nonatomic) NSString *partnerAccountIdentifier; // ivar: _partnerAccountIdentifier
@property (readonly, nonatomic) NSInteger passActivationState;
@property (copy, nonatomic) NSSet *paymentApplications; // ivar: _paymentApplications
@property (nonatomic, getter=isPaymentOptionSelectable) BOOL paymentOptionSelectable; // ivar: _paymentOptionSelectable
@property (retain, nonatomic) PKCurrencyAmount *peerPaymentBalance;
@property (copy, nonatomic) NSString *primaryAccountIdentifier; // ivar: _primaryAccountIdentifier
@property (copy, nonatomic) NSString *primaryAccountNumberSuffix; // ivar: _primaryAccountNumberSuffix
@property (readonly, nonatomic, getter=isPrivateLabel) BOOL privateLabel;
@property (nonatomic) BOOL requiresTransferSerialNumberBasedProvisioning; // ivar: _requiresTransferSerialNumberBasedProvisioning
@property (copy, nonatomic) NSString *sanitizedPrimaryAccountName; // ivar: _sanitizedPrimaryAccountName
@property (copy, nonatomic) NSString *sanitizedPrimaryAccountNumber; // ivar: _sanitizedPrimaryAccountNumber
@property (nonatomic, getter=isShellPass) BOOL shellPass; // ivar: _shellPass
@property (copy, nonatomic) NSString *shippingAddressSeed; // ivar: _shippingAddressSeed
@property (readonly, nonatomic) NSUInteger supportedRadioTechnologies;
@property (nonatomic) BOOL supportsDPANNotifications; // ivar: _supportsDPANNotifications
@property (nonatomic) BOOL supportsDefaultCardSelection; // ivar: _supportsDefaultCardSelection
@property (nonatomic) BOOL supportsFPANNotifications; // ivar: _supportsFPANNotifications
@property (readonly, nonatomic) BOOL supportsOnlyTransit;
@property (nonatomic) BOOL supportsPeerPayment; // ivar: _supportsPeerPayment
@property (nonatomic) BOOL supportsSerialNumberBasedProvisioning; // ivar: _supportsSerialNumberBasedProvisioning
@property (copy, nonatomic) NSString *topLeftBackgroundTitle; // ivar: _topLeftBackgroundTitle
@property (copy, nonatomic) NSString *topRightBackgroundTitle; // ivar: _topRightBackgroundTitle
@property (copy, nonatomic) NSString *transactionPushTopic; // ivar: _transactionPushTopic
@property (copy, nonatomic) NSURL *transactionServiceRegistrationURL; // ivar: _transactionServiceRegistrationURL
@property (copy, nonatomic) NSURL *transactionServiceURL; // ivar: _transactionServiceURL
@property (copy, nonatomic) NSString *transactionSourceIdentifier; // ivar: _transactionSourceIdentifier
@property (readonly, copy, nonatomic) PKTransitPassProperties *transitProperties;
@property (readonly, nonatomic) NSArray *upgradeRequests;


+(BOOL)supportsSecureCoding;
+(NSUInteger)defaultSettings;
+(id)displayableErrorForAction:(id)arg0 andReason:(NSUInteger)arg1 ;
+(id)displayableErrorForTransitAction:(id)arg0 andReason:(NSUInteger)arg1 ;
+(id)displayableNoPaymentNetworkErrorMessageForAction:(id)arg0 isTransit:(BOOL)arg1 ;
-(BOOL)areCredentialsStoredInKML;
-(BOOL)availableForAutomaticPresentationUsingBeaconContext;
-(BOOL)availableForAutomaticPresentationUsingInAppOrWebContext;
-(BOOL)availableForAutomaticPresentationUsingVASContext;
-(BOOL)canPerformAction:(id)arg0 unableReason:(*NSUInteger)arg1 displayableError:(*id)arg2 ;
-(BOOL)hasContactlessDevicePaymentApplicationsAvailable;
-(BOOL)hasCredentials;
-(BOOL)hasDeviceTransactionSourceIdentifier:(id)arg0 ;
-(BOOL)hasImmediateAutomaticSelectionCriterion;
-(BOOL)isAccessPass;
-(BOOL)isAppleBalancePass;
-(BOOL)isAppleCardPass;
-(BOOL)isCarKeyPass;
-(BOOL)isChinaTransitCredential;
-(BOOL)isContactlessPaymentSupportedForTransitNetworks:(id)arg0 ;
-(BOOL)isDevicePrimaryPaymentApplicationPersonalized;
-(BOOL)isEMoneyPass;
-(BOOL)isHomeKeyPass;
-(BOOL)isIdentityPass;
-(BOOL)isOctopusPass;
-(BOOL)isPeerPaymentPass;
-(BOOL)isPrepaidPass;
-(BOOL)isStoredValuePass;
-(BOOL)isSuicaPass;
-(BOOL)isTransitPass;
-(BOOL)needsHardcodedReminderOptions;
-(BOOL)requiresFelicaSecureElement;
-(BOOL)shouldDisplayDeviceAssessmentEducationAccordingToService:(id)arg0 ;
-(BOOL)shouldIgnoreTransactionUpdatesSwitch;
-(BOOL)shouldSuppressNoChargeAmount;
-(BOOL)supportsBarcodePayment;
-(BOOL)supportsDeviceAssessmentAccordingToService:(id)arg0 ;
-(BOOL)supportsWebPaymentMode:(NSInteger)arg0 withExclusionList:(id)arg1 ;
-(BOOL)supportsWebPaymentMode:(NSInteger)arg0 withExclusionList:(id)arg1 clientOSVersion:(id)arg2 ;
-(NSInteger)effectiveContactlessPaymentApplicationState;
-(NSInteger)paymentType;
-(NSUInteger)_activationStateForApplicationState:(NSInteger)arg0 ;
-(NSUInteger)contactlessActivationState;
-(NSUInteger)transitCommutePlanType;
-(id)_launchURLForPassAction:(id)arg0 ;
-(id)_localizedSuspendedReasonForAID:(id)arg0 ;
-(id)_passSubcredentialFilesWithPrefix:(id)arg0 extension:(id)arg1 forSecureElementIdentifiers:(id)arg2 ;
-(id)actionGroups;
-(id)addValueURL;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deviceContactlessPaymentApplications;
-(id)deviceTransactionSourceIdentifiers;
-(id)dynamicLayerConfiguration;
-(id)fidoProfile;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 bundle:(id)arg1 ;
-(id)iso18013BlobsForSecureElementIdentifiers:(id)arg0 ;
-(id)iso18013BlobsMetdataForSecureElementIdentifiers:(id)arg0 ;
-(id)notificationCenterTitle;
-(id)paymentApplicationForAID:(id)arg0 ;
-(id)paymentApplicationsForSecureElementIdentifiers:(id)arg0 ;
-(id)primaryPaymentApplicationForSecureElementIdentifiers:(id)arg0 ;
-(id)sanitizedDeviceAccountNumber;
-(id)seBlobsForSecureElementIdentifiers:(id)arg0 ;
-(id)sortedPaymentApplications:(id)arg0 ascending:(BOOL)arg1 ;
-(id)transitCommutePlans;
-(void)encodeWithCoder:(id)arg0 ;
-(void)sanitizePaymentApplications;
-(void)updateDevicePaymentApplicationsWithSecureElementIdentifiers:(id)arg0 ;


@end


#endif
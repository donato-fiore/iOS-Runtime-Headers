// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTAUTHORIZATIONDATAMODEL_H
#define PKPAYMENTAUTHORIZATIONDATAMODEL_H

@class NSMutableArray, NSMutableDictionary, NSArray, NSMapTable, NSString, NSSet, CNContact, NSDecimalNumber;
@protocol PKPaymentValidating;

#import <Foundation/Foundation.h>

#import "PKBankAccountInformation.h"
#import "PKContactFormatValidator.h"
#import "PKPaymentOptionsDefaults.h"
#import "PKDisbursementApplicationInformation.h"
#import "PKRemotePaymentInstrument.h"
#import "PKPaymentInstructions.h"
#import "PKPassLibrary.h"
#import "PKPaymentPass.h"
#import "PKPayment.h"
#import "PKPaymentApplication.h"
#import "PKPaymentRequest.h"
#import "PKPaymentWebService.h"
#import "PKPeerPaymentAccount.h"
#import "PKCurrencyAmount.h"
#import "PKPeerPaymentQuote.h"
#import "PKPeerPaymentService.h"
#import "PKPaymentOptionsRecents.h"
#import "PKRemoteDevice.h"
#import "PKShippingMethod.h"
#import "PKPaymentSummaryItem.h"

@interface PKPaymentAuthorizationDataModel : NSObject <PKPaymentValidating>

 {
    NSMutableArray *_items;
    NSMutableDictionary *_typeToItemMap;
    NSMutableDictionary *_billingAddressForFundingSource;
    NSUInteger _holdPendingUpdatesCount;
    BOOL _ignoreProximity;
    NSArray *_acceptedPasses;
    NSArray *_unavailablePasses;
    NSMapTable *_instrumentToDeviceMap;
    NSMutableDictionary *_remoteDeviceToAcceptedInstruments;
    NSMutableDictionary *_statusForPass;
    NSMutableDictionary *_acceptedApplications;
    NSString *_paymentApplicationIdentifierForErrors;
    NSArray *_clientErrors;
}


@property (readonly, nonatomic) NSArray *acceptedPasses;
@property (readonly, nonatomic) NSSet *allAcceptedRemotePaymentInstruments; // ivar: _allAcceptedRemotePaymentInstruments
@property (readonly, nonatomic) NSArray *allErrors;
@property (readonly, nonatomic) NSArray *allNearbyRemoteDevices;
@property (readonly, nonatomic) NSArray *allRemoteDevices; // ivar: _allRemoteDevices
@property (readonly, nonatomic) NSSet *allUnavailableRemotePaymentInstruments; // ivar: _allUnavailableRemotePaymentInstruments
@property (retain, nonatomic) PKBankAccountInformation *bankAccount; // ivar: _bankAccount
@property (retain, nonatomic) CNContact *billingAddress;
@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain, nonatomic) CNContact *cachedRecentAddress; // ivar: _cachedRecentAddress
@property (nonatomic) BOOL canAddPasses; // ivar: _canAddPasses
@property (retain, nonatomic) PKContactFormatValidator *contactFormatValidator; // ivar: _contactFormatValidator
@property (retain, nonatomic) NSString *couponCode; // ivar: _couponCode
@property (readonly, nonatomic) NSString *currencyCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *defaultPaymentPassUniqueIdentifier;
@property (retain, nonatomic) PKPaymentOptionsDefaults *defaults; // ivar: _defaults
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PKDisbursementApplicationInformation *disbursementApplicationInformation; // ivar: _disbursementApplicationInformation
@property (nonatomic) NSInteger fundingMode; // ivar: _fundingMode
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *hostAppLocalizedName; // ivar: _hostAppLocalizedName
@property (retain, nonatomic) NSString *hostApplicationIdentifier; // ivar: _hostApplicationIdentifier
@property (retain, nonatomic) PKRemotePaymentInstrument *initialRemotePaymentInstrument; // ivar: _initialRemotePaymentInstrument
@property (retain, nonatomic) NSDecimalNumber *installmentAuthorizationAmount; // ivar: _installmentAuthorizationAmount
@property (copy, nonatomic) NSString *installmentBindToken; // ivar: _installmentBindToken
@property (copy, nonatomic) NSString *installmentGroupIdentifier; // ivar: _installmentGroupIdentifier
@property (retain, nonatomic) PKPaymentInstructions *instructions; // ivar: _instructions
@property (readonly, nonatomic) NSArray *items;
@property (retain, nonatomic) PKPassLibrary *library; // ivar: _library
@property (readonly, nonatomic) NSString *merchantName;
@property (readonly, nonatomic) NSInteger mode; // ivar: _mode
@property (nonatomic) NSUInteger numberOfOutstandingCouponCodeUpdates; // ivar: _numberOfOutstandingCouponCodeUpdates
@property (retain, nonatomic) CNContact *originalShippingAddress; // ivar: _originalShippingAddress
@property (retain, nonatomic) PKPaymentPass *pass; // ivar: _pass
@property (retain, nonatomic) PKPayment *payment; // ivar: _payment
@property (retain, nonatomic) PKPaymentApplication *paymentApplication; // ivar: _paymentApplication
@property (readonly, nonatomic) NSArray *paymentContactFormatErrors; // ivar: _paymentContactFormatErrors
@property (retain, nonatomic) NSArray *paymentContentItems; // ivar: _paymentContentItems
@property (retain, nonatomic) NSArray *paymentErrors; // ivar: _paymentErrors
@property (retain, nonatomic) PKPaymentRequest *paymentRequest; // ivar: _paymentRequest
@property (retain, nonatomic) NSArray *paymentSummaryItems;
@property (retain, nonatomic) PKPaymentWebService *paymentWebService; // ivar: _paymentWebService
@property (retain, nonatomic) PKPeerPaymentAccount *peerPaymentAccount; // ivar: _peerPaymentAccount
@property (retain, nonatomic) PKCurrencyAmount *peerPaymentBalanceForAccountPayment; // ivar: _peerPaymentBalanceForAccountPayment
@property (retain, nonatomic) PKPaymentPass *peerPaymentPass; // ivar: _peerPaymentPass
@property (retain, nonatomic) PKPeerPaymentQuote *peerPaymentQuote; // ivar: _peerPaymentQuote
@property (retain, nonatomic) PKPeerPaymentService *peerPaymentService; // ivar: _peerPaymentService
@property (retain, nonatomic) NSArray *pendingTransactions; // ivar: _pendingTransactions
@property (readonly, nonatomic) BOOL pinRequired;
@property (retain, nonatomic) PKPaymentOptionsRecents *recents; // ivar: _recents
@property (retain, nonatomic) NSString *relevantPassUniqueID; // ivar: _relevantPassUniqueID
@property (retain, nonatomic) PKRemoteDevice *remoteDevice; // ivar: _remoteDevice
@property (readonly, nonatomic) NSArray *remoteDevices;
@property (retain, nonatomic) PKRemotePaymentInstrument *remotePaymentInstrument; // ivar: _remotePaymentInstrument
@property (retain, nonatomic) CNContact *shippingAddress; // ivar: _shippingAddress
@property (nonatomic, getter=isShippingEditable) BOOL shippingEditable; // ivar: _shippingEditable
@property (retain, nonatomic) NSString *shippingEditableMessage; // ivar: _shippingEditableMessage
@property (retain, nonatomic) CNContact *shippingEmail; // ivar: _shippingEmail
@property (retain, nonatomic) PKShippingMethod *shippingMethod; // ivar: _shippingMethod
@property (retain, nonatomic) CNContact *shippingName; // ivar: _shippingName
@property (retain, nonatomic) CNContact *shippingPhone; // ivar: _shippingPhone
@property (retain, nonatomic) NSString *shippingType; // ivar: _shippingType
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsPreservePeerPaymentBalance; // ivar: _supportsPreservePeerPaymentBalance
@property (retain, nonatomic) NSString *teamIdentifier; // ivar: _teamIdentifier
@property (readonly, nonatomic) PKPaymentSummaryItem *totalSummaryItem;
@property (readonly, nonatomic) NSDecimalNumber *transactionAmount;
@property (readonly, nonatomic) NSArray *unavailablePasses;
@property (copy, nonatomic) id *updateHandler; // ivar: _updateHandler
@property (nonatomic) BOOL usePeerPaymentBalance; // ivar: _usePeerPaymentBalance
@property (readonly, nonatomic) BOOL wantsInstructions;


-(BOOL)isValidWithError:(*id)arg0 ;
-(BOOL)isValidWithError:(*id)arg0 errorStatus:(*NSInteger)arg1 ;
-(BOOL)shouldShowPeerPaymentBalanceToggle;
-(BOOL)shouldUpdateContactDataItem;
-(NSInteger)_displayOrderForDataType:(NSInteger)arg0 ;
-(NSInteger)_statusForPass:(id)arg0 ;
-(NSInteger)requestedMode;
-(NSUInteger)_insertionIndexForItem:(id)arg0 ;
-(id)_defaultSelectedPaymentApplicationForPaymentApplications:(id)arg0 ;
-(id)_filterAndProcessPaymentApplicationsUsingConfiguration:(id)arg0 withPrimaryPaymentApplication:(id)arg1 ;
-(id)_filterAndProcessPaymentPassesUsingConfiguration:(id)arg0 ;
-(id)_formatAddressContactIfNecessary:(id)arg0 ;
-(id)_inAppPaymentPassesForPaymentRequest:(id)arg0 ;
-(id)_inAppPrivateLabelPaymentPasses;
-(id)acceptedPaymentApplicationsForPass:(id)arg0 ;
-(id)acceptedPaymentApplicationsForRemoteInstrument:(id)arg0 ;
-(id)acceptedRemotePaymentInstrumentsForRemoteDevice:(id)arg0 ;
-(id)automaticallyPresentedPassFromAcceptedPasses:(id)arg0 ;
-(id)defaultSelectedPaymentApplicationForPass:(id)arg0 ;
-(id)defaultSelectedPaymentApplicationForRemoteInstrument:(id)arg0 ;
-(id)init;
-(id)initWithMode:(NSInteger)arg0 ;
-(id)itemForType:(NSInteger)arg0 ;
-(id)paymentErrorsFromLegacyStatus:(NSInteger)arg0 ;
-(id)unavailablePaymentApplicationsForPass:(id)arg0 ;
-(id)unavailablePaymentApplicationsForRemoteInstrument:(id)arg0 ;
-(void)_didSetItemForClass:(Class)arg0 ;
-(void)_ensureItemForClass:(Class)arg0 ;
-(void)_ensureItems;
-(void)_ensurePaymentContentItems;
-(void)_ensurePlaceholderItems;
-(void)_notifyModelChanged;
-(void)_populatePeerPaymentBalanceIfNecessaryForPasses:(id)arg0 ;
-(void)_removeDataItem:(id)arg0 ;
-(void)_setDataItem:(id)arg0 ;
-(void)_setStatus:(NSInteger)arg0 forPass:(id)arg1 ;
-(void)_updatePeerPaymentPromotionAvailability;
-(void)beginUpdates;
-(void)endUpdates;
-(void)refreshBillingAddressErrors;
-(void)refreshPaymentMethods;
-(void)setStatus:(NSInteger)arg0 forItemWithType:(NSInteger)arg1 ;
-(void)setStatus:(NSInteger)arg0 forItemWithType:(NSInteger)arg1 notify:(BOOL)arg2 ;
-(void)showPeerPaymentCardDataItem:(BOOL)arg0 withCardDataItem:(BOOL)arg1 ;
-(void)updateBillingErrors;
-(void)updatePeerPaymentPromotionForPeerPaymentQuote:(BOOL)arg0 ;
-(void)updateRemoteDevices:(id)arg0 ;
-(void)updateRemoteDevices:(id)arg0 ignoreProximity:(BOOL)arg1 ;


@end


#endif
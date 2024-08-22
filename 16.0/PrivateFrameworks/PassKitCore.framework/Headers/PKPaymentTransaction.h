// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTTRANSACTION_H
#define PKPAYMENTTRANSACTION_H

@class NSString, NSDecimalNumber, NSArray, NSSet, NSNumber, NSData, CLLocation, NSDate, NSDictionary, NSURL, NSUUID, NSOrderedSet, NSTimeZone;
@protocol NSSecureCoding, PKCloudStoreCoding;

#import <Foundation/Foundation.h>

#import "PKPayLaterFinancingPlan.h"
#import "PKTransactionAuthenticationContext.h"
#import "PKCurrencyAmount.h"
#import "PKPaymentTransactionFees.h"
#import "PKPaymentTransactionForeignExchangeInformation.h"
#import "PKCreditInstallmentPlanPayment.h"
#import "PKCreditInstallmentPlan.h"
#import "PKMerchant.h"
#import "PKAccountEvent.h"
#import "PKTransactionReleasedData.h"
#import "PKPaymentTransactionRewards.h"

@interface PKPaymentTransaction : NSObject <NSSecureCoding, PKCloudStoreCoding>



@property (retain, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (nonatomic) NSInteger accountType; // ivar: _accountType
@property (nonatomic) NSInteger adjustmentType; // ivar: _adjustmentType
@property (nonatomic) NSInteger adjustmentTypeReason; // ivar: _adjustmentTypeReason
@property (retain, nonatomic) NSString *administrativeArea; // ivar: _administrativeArea
@property (copy, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (copy, nonatomic) NSDecimalNumber *amount; // ivar: _amount
@property (copy, nonatomic) NSDecimalNumber *amountAddedToAuth; // ivar: _amountAddedToAuth
@property (retain, nonatomic) NSArray *amountModifiers; // ivar: _amountModifiers
@property (copy, nonatomic) NSArray *amounts; // ivar: _amounts
@property (readonly, nonatomic) NSSet *answeredQuestionsOnThisDevice;
@property (nonatomic) NSUInteger associatedFeatureIdentifier; // ivar: _associatedFeatureIdentifier
@property (retain, nonatomic) PKPayLaterFinancingPlan *associatedFinancingPlan; // ivar: _associatedFinancingPlan
@property (readonly, nonatomic) NSString *associatedReceiptUniqueID;
@property (copy, nonatomic) NSString *authNetworkData; // ivar: _authNetworkData
@property (retain, nonatomic) PKTransactionAuthenticationContext *authenticationContext; // ivar: _authenticationContext
@property (retain, nonatomic) NSArray *awards; // ivar: _awards
@property (copy, nonatomic) NSString *barcodeIdentifier; // ivar: _barcodeIdentifier
@property (retain, nonatomic) NSString *cardIdentifier; // ivar: _cardIdentifier
@property (retain, nonatomic) NSString *cardNumberSuffix; // ivar: _cardNumberSuffix
@property (nonatomic) NSUInteger cardType; // ivar: _cardType
@property (copy, nonatomic) NSNumber *cityCode; // ivar: _cityCode
@property (copy, nonatomic) NSString *clearingNetworkData; // ivar: _clearingNetworkData
@property (nonatomic, getter=isCoarseLocation) BOOL coarseLocation; // ivar: _coarseLocation
@property (readonly, nonatomic) PKCurrencyAmount *currencyAmount;
@property (copy, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (nonatomic) BOOL deviceScoreIdentifiersRequired; // ivar: _deviceScoreIdentifiersRequired
@property (nonatomic) BOOL deviceScoreIdentifiersSubmitted; // ivar: _deviceScoreIdentifiersSubmitted
@property (readonly, weak, nonatomic) NSString *displayLocation;
@property (readonly, nonatomic) NSUInteger disputeStatus;
@property (readonly, nonatomic) NSUInteger disputeType;
@property (retain, nonatomic, setter=setDPANIdentifier:) NSString *dpanIdentifier; // ivar: _dpanIdentifier
@property (readonly, nonatomic) NSUInteger effectiveTransactionSource;
@property (nonatomic) BOOL enRoute; // ivar: _enRoute
@property (copy, nonatomic) NSString *endStation; // ivar: _endStation
@property (copy, nonatomic) NSData *endStationCode; // ivar: _endStationCode
@property (nonatomic) CGFloat endStationLatitude; // ivar: _endStationLatitude
@property (retain, nonatomic) CLLocation *endStationLocation;
@property (nonatomic) CGFloat endStationLongitude; // ivar: _endStationLongitude
@property (copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic) NSUInteger featureIdentifier;
@property (retain, nonatomic) PKPaymentTransactionFees *fees; // ivar: _fees
@property (retain, nonatomic) PKPaymentTransactionForeignExchangeInformation *foreignExchangeInformation; // ivar: _foreignExchangeInformation
@property (readonly, nonatomic) NSString *formattedBalanceAdjustmentAbsoluteAmount;
@property (readonly, nonatomic) NSString *formattedBalanceAdjustmentAmount;
@property (readonly, nonatomic) NSString *formattedBalanceAdjustmentSubtotalAmount;
@property (readonly, nonatomic) BOOL fullyProcessed;
@property (nonatomic, getter=isFuzzyMatched) BOOL fuzzyMatched; // ivar: _fuzzyMatched
@property (nonatomic) BOOL hasAdditionalOffers; // ivar: _hasAdditionalOffers
@property (nonatomic) BOOL hasAssociatedPaymentApplication; // ivar: _hasAssociatedPaymentApplication
@property (readonly, nonatomic) BOOL hasBackingData;
@property (readonly, nonatomic) BOOL hasEffectiveTransactionSource;
@property (nonatomic) BOOL hasNotificationServiceData; // ivar: _hasNotificationServiceData
@property (readonly, nonatomic) BOOL hasTransactionSource;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL impactsPromotionProgress;
@property (retain, nonatomic) PKCreditInstallmentPlanPayment *installmentPayment; // ivar: _installmentPayment
@property (retain, nonatomic) PKCreditInstallmentPlan *installmentPlan; // ivar: _installmentPlan
@property (nonatomic) BOOL isCloudKitArchived; // ivar: _isCloudKitArchived
@property (retain, nonatomic, setter=setIsMerchantTokenTransaction:) NSNumber *isMerchantTokenTransaction; // ivar: _isMerchantTokenTransaction
@property (copy, nonatomic) NSString *issueReportIdentifier; // ivar: _issueReportIdentifier
@property (retain, nonatomic) NSDate *lastMerchantReprocessingDate; // ivar: _lastMerchantReprocessingDate
@property (copy, nonatomic) NSString *lifecycleIdentifier; // ivar: _lifecycleIdentifier
@property (retain, nonatomic) NSString *locality; // ivar: _locality
@property (retain, nonatomic) CLLocation *location;
@property (nonatomic) CGFloat locationAltitude; // ivar: _locationAltitude
@property (retain, nonatomic) NSDate *locationDate; // ivar: _locationDate
@property (nonatomic) CGFloat locationHorizontalAccuracy; // ivar: _locationHorizontalAccuracy
@property (nonatomic) CGFloat locationLatitude; // ivar: _locationLatitude
@property (nonatomic) CGFloat locationLongitude; // ivar: _locationLongitude
@property (nonatomic) CGFloat locationVerticalAccuracy; // ivar: _locationVerticalAccuracy
@property (retain, nonatomic) PKMerchant *merchant; // ivar: _merchant
@property (copy, nonatomic) NSString *merchantProvidedDescription; // ivar: _merchantProvidedDescription
@property (copy, nonatomic) NSString *merchantProvidedTitle; // ivar: _merchantProvidedTitle
@property (copy, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (copy, nonatomic) NSDecimalNumber *nominalAmount; // ivar: _nominalAmount
@property (readonly, nonatomic) PKCurrencyAmount *nominalCurrencyAmount;
@property (nonatomic) BOOL originatedByDevice; // ivar: _originatedByDevice
@property (retain, nonatomic, setter=setPANIdentifier:) NSString *panIdentifier; // ivar: _panIdentifier
@property (copy, nonatomic) NSString *paymentHash; // ivar: _paymentHash
@property (retain, nonatomic) NSArray *payments; // ivar: _payments
@property (copy, nonatomic) NSString *peerPaymentCounterpartHandle; // ivar: _peerPaymentCounterpartHandle
@property (copy, nonatomic) NSString *peerPaymentMemo; // ivar: _peerPaymentMemo
@property (copy, nonatomic) NSDate *peerPaymentMessageReceivedDate; // ivar: _peerPaymentMessageReceivedDate
@property (nonatomic) NSInteger peerPaymentStatus;
@property (nonatomic) NSInteger peerPaymentType; // ivar: _peerPaymentType
@property (copy, nonatomic) NSArray *plans; // ivar: _plans
@property (readonly, nonatomic) CLLocation *preferredLocation;
@property (copy, nonatomic) NSDecimalNumber *primaryFundingSourceAmount; // ivar: _primaryFundingSourceAmount
@property (readonly, nonatomic) PKCurrencyAmount *primaryFundingSourceCurrencyAmount;
@property (copy, nonatomic) NSString *primaryFundingSourceCurrencyCode; // ivar: _primaryFundingSourceCurrencyCode
@property (copy, nonatomic) NSString *primaryFundingSourceDescription; // ivar: _primaryFundingSourceDescription
@property (nonatomic) BOOL processedForLocation; // ivar: _processedForLocation
@property (nonatomic) BOOL processedForMerchantCleanup; // ivar: _processedForMerchantCleanup
@property (nonatomic) BOOL processedForStations; // ivar: _processedForStations
@property (retain, nonatomic) NSSet *questions; // ivar: _questions
@property (copy, nonatomic) NSString *receiptIdentifier; // ivar: _receiptIdentifier
@property (copy, nonatomic) NSString *receiptProviderIdentifier; // ivar: _receiptProviderIdentifier
@property (retain, nonatomic) NSURL *receiptProviderURL; // ivar: _receiptProviderURL
@property (retain, nonatomic) PKAccountEvent *redemptionEvent; // ivar: _redemptionEvent
@property (nonatomic) NSUInteger redemptionType; // ivar: _redemptionType
@property (copy, nonatomic) NSString *referenceIdentifier; // ivar: _referenceIdentifier
@property (retain, nonatomic) PKTransactionReleasedData *releasedData; // ivar: _releasedData
@property (copy, nonatomic) NSUUID *requestDeviceScoreIdentifier; // ivar: _requestDeviceScoreIdentifier
@property (nonatomic) BOOL requiresLocation; // ivar: _requiresLocation
@property (nonatomic) BOOL requiresMerchantReprocessing; // ivar: _requiresMerchantReprocessing
@property (readonly, nonatomic) BOOL reviewed;
@property (retain, nonatomic) PKPaymentTransactionRewards *rewards; // ivar: _rewards
@property (nonatomic) NSUInteger rewardsEligibilityReason; // ivar: _rewardsEligibilityReason
@property (retain, nonatomic) PKPaymentTransactionRewards *rewardsInProgress; // ivar: _rewardsInProgress
@property (retain, nonatomic) NSDecimalNumber *rewardsTotalAmount; // ivar: _rewardsTotalAmount
@property (readonly, nonatomic) PKCurrencyAmount *rewardsTotalCurrencyAmount;
@property (retain, nonatomic) NSString *rewardsTotalCurrencyCode; // ivar: _rewardsTotalCurrencyCode
@property (copy, nonatomic) NSDecimalNumber *secondaryFundingSourceAmount; // ivar: _secondaryFundingSourceAmount
@property (readonly, nonatomic) PKCurrencyAmount *secondaryFundingSourceCurrencyAmount;
@property (copy, nonatomic) NSString *secondaryFundingSourceCurrencyCode; // ivar: _secondaryFundingSourceCurrencyCode
@property (copy, nonatomic) NSString *secondaryFundingSourceDPANSuffix; // ivar: _secondaryFundingSourceDPANSuffix
@property (copy, nonatomic) NSString *secondaryFundingSourceDescription; // ivar: _secondaryFundingSourceDescription
@property (copy, nonatomic) NSString *secondaryFundingSourceFPANIdentifier; // ivar: _secondaryFundingSourceFPANIdentifier
@property (nonatomic) NSInteger secondaryFundingSourceNetwork; // ivar: _secondaryFundingSourceNetwork
@property (nonatomic) NSInteger secondaryFundingSourceType; // ivar: _secondaryFundingSourceType
@property (copy, nonatomic) NSUUID *sendDeviceScoreIdentifier; // ivar: _sendDeviceScoreIdentifier
@property (copy, nonatomic) NSString *serviceIdentifier; // ivar: _serviceIdentifier
@property (retain, nonatomic) NSOrderedSet *servicingEvents; // ivar: _servicingEvents
@property (nonatomic) BOOL shouldSuppressDate; // ivar: _shouldSuppressDate
@property (copy, nonatomic) NSString *startStation; // ivar: _startStation
@property (copy, nonatomic) NSData *startStationCode; // ivar: _startStationCode
@property (nonatomic) CGFloat startStationLatitude; // ivar: _startStationLatitude
@property (retain, nonatomic) CLLocation *startStationLocation;
@property (nonatomic) CGFloat startStationLongitude; // ivar: _startStationLongitude
@property (copy, nonatomic) NSString *stationCodeProvider; // ivar: _stationCodeProvider
@property (copy, nonatomic) NSDecimalNumber *subtotalAmount; // ivar: _subtotalAmount
@property (readonly, nonatomic) PKCurrencyAmount *subtotalCurrencyAmount;
@property (readonly, nonatomic) BOOL supportsFuzzyMatching;
@property (nonatomic) NSUInteger suppressBehavior; // ivar: _suppressBehavior
@property (nonatomic) BOOL suppressNotifications; // ivar: _suppressNotifications
@property (nonatomic) NSInteger technologyType; // ivar: _technologyType
@property (retain, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone
@property (copy, nonatomic) NSDate *transactionDate; // ivar: _transactionDate
@property (nonatomic) NSInteger transactionDeclinedReason; // ivar: _transactionDeclinedReason
@property (nonatomic) NSUInteger transactionSource; // ivar: _transactionSource
@property (copy, nonatomic) NSString *transactionSourceIdentifier; // ivar: _transactionSourceIdentifier
@property (nonatomic) NSInteger transactionStatus; // ivar: _transactionStatus
@property (copy, nonatomic) NSDate *transactionStatusChangedDate; // ivar: _transactionStatusChangedDate
@property (nonatomic) NSInteger transactionType; // ivar: _transactionType
@property (nonatomic) NSUInteger transitModifiers; // ivar: _transitModifiers
@property (nonatomic) NSInteger transitType; // ivar: _transitType
@property (readonly, nonatomic) NSSet *unansweredQuestions;
@property (readonly, nonatomic) BOOL updateReasonIsInitialDownload;
@property (readonly, nonatomic) NSUInteger updateReasons; // ivar: _updateReasons


+(BOOL)supportsSecureCoding;
+(BOOL)updateReasonIsInitialDownload:(NSUInteger)arg0 ;
+(id)formattedBalanceAdjustmentForAmount:(id)arg0 transactionType:(NSInteger)arg1 adjustmentType:(NSInteger)arg2 peerPaymentType:(NSInteger)arg3 ;
+(id)paymentTransactionFromSource:(NSUInteger)arg0 ;
+(id)paymentTransactionWithSource:(NSUInteger)arg0 ;
+(id)paymentTransactionWithSource:(NSUInteger)arg0 dictionary:(id)arg1 unitDictionary:(id)arg2 balanceLabelDictionary:(id)arg3 planLabelDictionary:(id)arg4 hasNotificationServiceData:(BOOL)arg5 ;
+(id)recordNamePrefix;
+(id)recordTypesAndNamesForCodingType:(NSUInteger)arg0 serviceIdentifier:(id)arg1 ;
+(id)transactionNotificationStatusStringForTransaction:(id)arg0 personContact:(id)arg1 ;
-(BOOL)hasCloudArchivableDeviceData;
-(BOOL)isCloudArchivableDeviceDataEqual:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPaymentTransaction:(id)arg0 ;
-(BOOL)isZeroTransaction;
-(NSUInteger)hash;
-(NSUInteger)itemType;
-(id)_commutePlanInformationForPass:(id)arg0 ;
-(id)_formatBalanceAdjustmentAmount:(id)arg0 ;
-(id)_latestDisputeEvent;
-(id)_preformattedStringForMultipleAmounts;
-(id)_preformattedStringForMultiplePlans;
-(id)_transitSubtypeString;
-(id)description;
-(id)dictionaryOfFormattedMultipleAmountTotalsByRealCurrency;
-(id)dictionaryRepresentation;
-(id)formattedAwards;
-(id)formattedStringForMultipleAmountsForPass:(id)arg0 ;
-(id)formattedTransitTransactionMessageForPass:(id)arg0 suppressNoChargeAmount:(BOOL)arg1 ;
-(id)init;
-(id)initWithCloudStoreCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)primaryIdentifier;
-(id)recordTypesAndNamesForCodingType:(NSUInteger)arg0 ;
-(id)transactionAmountsForMultipleAmounts;
-(void)_encodeDeviceDataWithCloudStoreCoder:(id)arg0 codingType:(NSUInteger)arg1 ;
-(void)_encodeServerDataWithCloudStoreCoder:(id)arg0 codingType:(NSUInteger)arg1 ;
-(void)addUpdateReasons:(NSUInteger)arg0 ;
-(void)answeredQuestion:(NSUInteger)arg0 ;
-(void)applyPropertiesFromCloudStoreRecord:(id)arg0 ;
-(void)encodeWithCloudStoreCoder:(id)arg0 codingType:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
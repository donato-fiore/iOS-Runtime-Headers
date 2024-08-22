// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNT_H
#define PKACCOUNT_H

@class NSURL, NSString, NSSet, NSArray, NSDate;
@protocol NSSecureCoding, NSCopying, PKCloudStoreCoding;

#import <Foundation/Foundation.h>

#import "PKAccountAdditionalPushTopics.h"
#import "PKAppleBalanceAccountDetails.h"
#import "PKCreditAccountDetails.h"
#import "PKAccountDetails.h"
#import "PKAccountFetchPeriods.h"
#import "PKPayLaterAccountDetails.h"
#import "PKSavingsAccountDetails.h"

@interface PKAccount : NSObject <NSSecureCoding, NSCopying, PKCloudStoreCoding>



@property (nonatomic) NSUInteger accessLevel; // ivar: _accessLevel
@property (retain, nonatomic) NSURL *accountBaseURL; // ivar: _accountBaseURL
@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (nonatomic) BOOL accountStateDirty; // ivar: _accountStateDirty
@property (retain, nonatomic) PKAccountAdditionalPushTopics *additionalPushTopics; // ivar: _additionalPushTopics
@property (readonly, nonatomic) NSSet *allAccountIdentifiers;
@property (copy, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (readonly, nonatomic) PKAppleBalanceAccountDetails *appleBalanceDetails;
@property (retain, nonatomic) NSURL *applyServiceURL; // ivar: _applyServiceURL
@property (nonatomic) BOOL blockAllAccountAccess; // ivar: _blockAllAccountAccess
@property (nonatomic) BOOL blockNotifications; // ivar: _blockNotifications
@property (copy, nonatomic) NSArray *cloudStoreZoneNames; // ivar: _cloudStoreZoneNames
@property (nonatomic, getter=isCoOwner) BOOL coOwner; // ivar: _coOwner
@property (readonly, nonatomic) PKCreditAccountDetails *creditDetails;
@property (retain, nonatomic) PKAccountDetails *details; // ivar: _details
@property (nonatomic) NSUInteger feature; // ivar: _feature
@property (retain, nonatomic) PKAccountFetchPeriods *fetchPeriods; // ivar: _fetchPeriods
@property (nonatomic) BOOL isCloudAccount; // ivar: _isCloudAccount
@property (retain, nonatomic) NSDate *lastUpdated; // ivar: _lastUpdated
@property (readonly, nonatomic) PKPayLaterAccountDetails *payLaterDetails;
@property (retain, nonatomic) NSURL *paymentServicesBaseURL; // ivar: _paymentServicesBaseURL
@property (copy, nonatomic) NSSet *previousAccountIdentifiers; // ivar: _previousAccountIdentifiers
@property (readonly, nonatomic) PKSavingsAccountDetails *savingsDetails;
@property (nonatomic, getter=isSharedAccount) BOOL sharedAccount; // ivar: _sharedAccount
@property (nonatomic) NSUInteger state; // ivar: _state
@property (nonatomic) NSUInteger stateReason; // ivar: _stateReason
@property (copy, nonatomic) NSSet *supportedFeatures; // ivar: _supportedFeatures
@property (readonly, nonatomic) BOOL supportsStandaloneTransactions;
@property (copy, nonatomic) NSString *transactionSourceIdentifier; // ivar: _transactionSourceIdentifier
@property (nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)accountIdentifierFromRecordName:(id)arg0 ;
+(id)analyticsAccountTypeForAccount:(id)arg0 ;
+(id)recordNameForAccountIdentifier:(id)arg0 ;
+(id)recordNamePrefix;
-(BOOL)accountUserInvitationAllowed;
-(BOOL)hidePayLaterInPaymentSheet;
-(BOOL)hidePayLaterSetupInWallet;
-(BOOL)isContentEqualToAccount:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)provisioningAllowed;
-(BOOL)showBillPaymentInterest;
-(BOOL)showBillPaymentInterestSummary;
-(BOOL)showCardPromotions;
-(BOOL)showEnhancedMerchants;
-(BOOL)showPaymentSheetRewards;
-(BOOL)showRewardsGraph;
-(BOOL)supportsAddBeneficiaries;
-(BOOL)supportsAddFundingSource;
-(BOOL)supportsDynamicReportIssueTopics;
-(BOOL)supportsDynamicSecurityCodes;
-(BOOL)supportsExportSavingsTransactionData;
-(BOOL)supportsExportTransactionData;
-(BOOL)supportsExtendedFetch;
-(BOOL)supportsOneTimeDeposit;
-(BOOL)supportsOneTimeDepositWithAppleCash;
-(BOOL)supportsOneTimeWithdrawal;
-(BOOL)supportsOneTimeWithdrawalWithAppleCash;
-(BOOL)supportsPhysicalCardActivation;
-(BOOL)supportsRedeemGiftcard;
-(BOOL)supportsRedeemRewards;
-(BOOL)supportsRequestPhysicalCard;
-(BOOL)supportsRequestStatement;
-(BOOL)supportsSchedulePayment;
-(BOOL)supportsScheduleRecurringPayments;
-(BOOL)supportsShowAccountSummary;
-(BOOL)supportsShowNotifications;
-(BOOL)supportsShowSavingsAccountSummary;
-(BOOL)supportsShowVirtualCard;
-(BOOL)supportsTopUp;
-(BOOL)supportsTransactionSyncReporting;
-(BOOL)supportsViewSavingsStatement;
-(BOOL)supportsViewStatement;
-(BOOL)supportsViewTaxDocuments;
-(NSUInteger)hash;
-(NSUInteger)itemType;
-(NSUInteger)oneTimeDepositFundingSourceTypes;
-(NSUInteger)oneTimeWithdrawalFundingSourceTypes;
-(id)_appleBalanceFeatureWithIdentifier:(id)arg0 ;
-(id)_creditFeatureWithIdentifier:(id)arg0 ;
-(id)_featureDescriptorsForFeature:(NSUInteger)arg0 inCloudRecord:(id)arg1 ;
-(id)_featureWithIdentifier:(id)arg0 ;
-(id)_payLaterFeatureWithIdentifier:(id)arg0 ;
-(id)_savingsFeatureWithIdentifier:(id)arg0 ;
-(id)accountUserInvitationAllowedFeatureDescriptor;
-(id)addBeneficiariesFeatureDescriptor;
-(id)addFundingSourceFeatureDescriptor;
-(id)analyticsEventAccountType;
-(id)associatedPassUniqueID;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createdDate;
-(id)description;
-(id)dynamicSecurityCodesFeatureDescriptor;
-(id)exportSavingsTransactionDataFeatureDescriptor;
-(id)exportTransactionDataFeatureDescriptor;
-(id)hidePayLaterInPaymentSheetFeatureDescriptor;
-(id)hidePayLaterSetupInWalletFeatureDescriptor;
-(id)initWithCloudStoreCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 isCloudAccount:(BOOL)arg1 ;
-(id)oneTimeDepositFeatureDescriptor;
-(id)oneTimeDepositWithAppleCashFeatureDescriptor;
-(id)oneTimeWithdrawalFeatureDescriptor;
-(id)oneTimeWithdrawalWithAppleCashFeatureDescriptor;
-(id)physicalCardActivationFeatureDescriptor;
-(id)primaryIdentifier;
-(id)productTimeZone;
-(id)provisioningAllowedFeatureDescriptor;
-(id)recordTypesAndNamesForCodingType:(NSUInteger)arg0 ;
-(id)redeemRewardsFeatureDescriptor;
-(id)requestPhysicalCardFeatureDescriptor;
-(id)requestStatementFeatureDescriptor;
-(id)schedulePaymentFeatureDescriptor;
-(id)scheduleRecurringPaymentsFeatureDescriptor;
-(id)showAccountSummaryFeatureDescriptor;
-(id)showBillPaymentInterestFeatureDescriptor;
-(id)showBillPaymentInterestSummaryFeatureDescriptor;
-(id)showCardPromotionsFeatureDescriptor;
-(id)showEnhancedMerchantsFeatureDescriptor;
-(id)showNotificationsFeatureDescriptor;
-(id)showPaymentSheetRewardsFeatureDescriptor;
-(id)showRewardsGraphFeatureDescriptor;
-(id)showSavingsAccountSummaryFeatureDescriptor;
-(id)showVirtualCardFeatureDescriptor;
-(id)supportsDynamicReportIssueTopicsFeatureDescriptor;
-(id)supportsRedeemGiftcardFeatureDescriptor;
-(id)supportsTopUpFeatureDescriptor;
-(id)transactionSyncReportingFeatureDescriptor;
-(id)updateUserInfoBaseURL;
-(id)viewSavingsStatementFeatureDescriptor;
-(id)viewStatementFeatureDescriptor;
-(id)viewTaxDocumentsFeatureDescriptor;
-(void)_addSupportedFeaturesToEncryptedCloudRecord:(id)arg0 ;
-(void)_insertSupportedFeature:(id)arg0 ;
-(void)_removeSupportedFeatureWithIdentifier:(id)arg0 ;
-(void)applyPropertiesFromCloudStoreRecord:(id)arg0 ;
-(void)encodeWithCloudStoreCoder:(id)arg0 codingType:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
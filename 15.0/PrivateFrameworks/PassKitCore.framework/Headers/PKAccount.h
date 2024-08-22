// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKACCOUNT_H
#define PKACCOUNT_H

@class NSURL, NSString, NSSet, NSArray, NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKAccountAdditionalPushTopics.h"
#import "PKCreditAccountDetails.h"
#import "PKAccountDetails.h"
#import "PKAccountFetchPeriods.h"

@interface PKAccount : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) NSUInteger accessLevel; // ivar: _accessLevel
@property (retain, nonatomic) NSURL *accountBaseURL; // ivar: _accountBaseURL
@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (nonatomic) BOOL accountStateDirty; // ivar: _accountStateDirty
@property (retain, nonatomic) PKAccountAdditionalPushTopics *additionalPushTopics; // ivar: _additionalPushTopics
@property (readonly, nonatomic) NSSet *allAccountIdentifiers;
@property (copy, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (retain, nonatomic) NSURL *applyServiceURL; // ivar: _applyServiceURL
@property (nonatomic) BOOL blockNotifications; // ivar: _blockNotifications
@property (copy, nonatomic) NSArray *cloudStoreZoneNames; // ivar: _cloudStoreZoneNames
@property (nonatomic, getter=isCoOwner) BOOL coOwner; // ivar: _coOwner
@property (readonly, nonatomic) PKCreditAccountDetails *creditDetails;
@property (retain, nonatomic) PKAccountDetails *details; // ivar: _details
@property (nonatomic) NSUInteger feature; // ivar: _feature
@property (retain, nonatomic) PKAccountFetchPeriods *fetchPeriods; // ivar: _fetchPeriods
@property (retain, nonatomic) NSDate *lastUpdated; // ivar: _lastUpdated
@property (copy, nonatomic) NSSet *previousAccountIdentifiers; // ivar: _previousAccountIdentifiers
@property (nonatomic, getter=isSharedAccount) BOOL sharedAccount; // ivar: _sharedAccount
@property (nonatomic) NSUInteger state; // ivar: _state
@property (nonatomic) NSUInteger stateReason; // ivar: _stateReason
@property (copy, nonatomic) NSSet *supportedFeatures; // ivar: _supportedFeatures
@property (nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)analyticsAccountTypeForAccount:(id)arg0 ;
-(BOOL)accountUserInvitationAllowed;
-(BOOL)isContentEqualToAccount:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)provisioningAllowed;
-(BOOL)showBillPaymentInterest;
-(BOOL)supportsAddFundingSource;
-(BOOL)supportsDynamicSecurityCodes;
-(BOOL)supportsExportTransactionData;
-(BOOL)supportsExtendedFetch;
-(BOOL)supportsPhysicalCardActivation;
-(BOOL)supportsRedeemRewards;
-(BOOL)supportsRequestPhysicalCard;
-(BOOL)supportsRequestStatement;
-(BOOL)supportsSchedulePayment;
-(BOOL)supportsScheduleRecurringPayments;
-(BOOL)supportsShowAccountSummary;
-(BOOL)supportsShowNotifications;
-(BOOL)supportsShowVirtualCard;
-(BOOL)supportsViewStatement;
-(NSUInteger)hash;
-(id)_featureWithIdentifier:(id)arg0 ;
-(id)accountUserInvitationAllowedFeatureDescriptor;
-(id)addFundingSourceFeatureDescriptor;
-(id)analyticsEventAccountType;
-(id)associatedPassUniqueID;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dynamicSecurityCodesFeatureDescriptor;
-(id)exportTransactionDataFeatureDescriptor;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)physicalCardActivationFeatureDescriptor;
-(id)provisioningAllowedFeatureDescriptor;
-(id)redeemRewardsFeatureDescriptor;
-(id)requestPhysicalCardFeatureDescriptor;
-(id)requestStatementFeatureDescriptor;
-(id)schedulePaymentFeatureDescriptor;
-(id)scheduleRecurringPaymentsFeatureDescriptor;
-(id)showAccountSummaryFeatureDescriptor;
-(id)showBillPaymentInterestFeatureDescriptor;
-(id)showNotificationsFeatureDescriptor;
-(id)showVirtualCardFeatureDescriptor;
-(id)viewStatementFeatureDescriptor;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPEERPAYMENTACCOUNT_H
#define PKPEERPAYMENTACCOUNT_H

@class NSString, NSURL, NSSet, NSDate, NSArray, NSDecimalNumber, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKPeerPaymentAdditionalPushTopics.h"
#import "PKPeerPaymentAssociatedAccountInformation.h"
#import "PKCurrencyAmount.h"

@interface PKPeerPaymentAccount : NSObject <NSSecureCoding>



@property (nonatomic) CGFloat accountFetchAfterTransactionWaitPeriod; // ivar: _accountFetchAfterTransactionWaitPeriod
@property (nonatomic) CGFloat accountFetchAfterTransactionWaitTolerance; // ivar: _accountFetchAfterTransactionWaitTolerance
@property (nonatomic, getter=isAccountStateDirty) BOOL accountStateDirty; // ivar: _accountStateDirty
@property (retain, nonatomic) PKPeerPaymentAdditionalPushTopics *additionalPushTopics; // ivar: _additionalPushTopics
@property (copy, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (retain, nonatomic) PKPeerPaymentAssociatedAccountInformation *associatedAccountInformation; // ivar: _associatedAccountInformation
@property (copy, nonatomic) NSString *associatedPassSerialNumber; // ivar: _associatedPassSerialNumber
@property (copy, nonatomic) NSString *associatedPassTypeIdentifier; // ivar: _associatedPassTypeIdentifier
@property (copy, nonatomic) NSURL *associatedPassURL; // ivar: _associatedPassURL
@property (copy, nonatomic) NSSet *cloudStoreZoneNames; // ivar: _cloudStoreZoneNames
@property (copy, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (copy, nonatomic) NSDate *createdDate; // ivar: _createdDate
@property (copy, nonatomic) PKCurrencyAmount *currentBalance; // ivar: _currentBalance
@property (readonly, copy, nonatomic) NSArray *defaultSuggestions;
@property (nonatomic) BOOL hasDisplayedAssociatedAccountActiveNotification; // ivar: _hasDisplayedAssociatedAccountActiveNotification
@property (copy, nonatomic) NSDate *identifiedDate; // ivar: _identifiedDate
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL identityVerificationForDisbursementsRequired; // ivar: _identityVerificationForDisbursementsRequired
@property (nonatomic) BOOL identityVerificationRequired; // ivar: _identityVerificationRequired
@property (retain, nonatomic) NSDate *lastUpdated; // ivar: _lastUpdated
@property (copy, nonatomic) NSDecimalNumber *maximumBalance; // ivar: _maximumBalance
@property (readonly, nonatomic) NSDictionary *maximumTransferAmounts;
@property (readonly, nonatomic) NSDictionary *minimumTransferAmounts;
@property (nonatomic) NSInteger pendingPaymentCount; // ivar: _pendingPaymentCount
@property (nonatomic) NSUInteger personToPersonRestrictionType; // ivar: _personToPersonRestrictionType
@property (nonatomic) CGFloat proactiveFetchPeriod; // ivar: _proactiveFetchPeriod
@property (nonatomic) NSUInteger role; // ivar: _role
@property (nonatomic) NSUInteger stage; // ivar: _stage
@property (nonatomic) NSUInteger state; // ivar: _state
@property (nonatomic) NSUInteger stateReason; // ivar: _stateReason
@property (copy, nonatomic) NSSet *supportedFeatureDescriptors; // ivar: _supportedFeatureDescriptors
@property (nonatomic) BOOL termsAcceptanceRequired; // ivar: _termsAcceptanceRequired
@property (copy, nonatomic) NSString *termsIdentifier; // ivar: _termsIdentifier
@property (copy, nonatomic) NSURL *termsURL; // ivar: _termsURL
@property (copy, nonatomic) NSString *transactionSourceIdentifier; // ivar: _transactionSourceIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)areAssociatedAccountsOutOfDate;
-(BOOL)isAccountOutOfDate;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isPariticipantAccountEmbargoRecovery;
-(BOOL)isPariticipantAccountSecurityDowngraded;
-(BOOL)isParticipantAccountLockedByOwner;
-(BOOL)supportsAssociatedAccountStateAction;
-(BOOL)supportsCardBalancePromotion;
-(BOOL)supportsFamilySharing;
-(BOOL)supportsGraduationWhileAssociatedAccountLocked;
-(BOOL)supportsInstantWithdrawal;
-(BOOL)supportsLoadFromCard;
-(BOOL)supportsPreserveCurrentBalance;
-(BOOL)supportsRequestFromUser;
-(BOOL)supportsSendToUser;
-(BOOL)supportsTransferToBank;
-(NSUInteger)hash;
-(id)_featureWithIdentifier:(id)arg0 ;
-(id)accountInvitationWithAltDSID:(id)arg0 ;
-(id)associatedAccountStateActionFeatureDescriptor;
-(id)associatedPassUniqueID;
-(id)cardBalancePromotionFeatureDescriptor;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 lastUpdated:(id)arg1 ;
-(id)instantWithdrawalPromotionFeatureDescriptor;
-(id)loadFromCardFeatureDescriptor;
-(id)peerPaymentAccountWithAltDSID:(id)arg0 ;
-(id)peerPaymentAccountWithIdentifier:(id)arg0 ;
-(id)preserveCurrentBalanceFeatureDescriptor;
-(id)requestFromUserFeatureDescriptor;
-(id)sendToUserFeatureDescriptor;
-(id)supportsFamilySharingFeatureDescriptor;
-(id)supportsGraduationWhileAssociatedAccountLockedFeatureDescriptor;
-(id)transferToBankFeatureDescriptor;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
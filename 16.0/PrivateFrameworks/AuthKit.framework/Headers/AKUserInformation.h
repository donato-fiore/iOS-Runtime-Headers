// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKUSERINFORMATION_H
#define AKUSERINFORMATION_H

@class NSArray, NSString, NSDictionary, NSNumber;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface AKUserInformation : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSArray *accountAliases; // ivar: _accountAliases
@property (copy, nonatomic) NSString *accountName; // ivar: _accountName
@property (copy, nonatomic) NSDictionary *additionalInfo; // ivar: _additionalInfo
@property (copy, nonatomic) NSNumber *ageOfMajority; // ivar: _ageOfMajority
@property (copy, nonatomic) NSString *appleIDCountryCode; // ivar: _appleIDCountryCode
@property (nonatomic) NSUInteger appleIDSecurityLevel; // ivar: _appleIDSecurityLevel
@property (nonatomic) NSUInteger authMode; // ivar: _authMode
@property (copy, nonatomic) NSString *authorizedApplicationsListVersion; // ivar: _authorizedApplicationsListVersion
@property (copy, nonatomic) NSNumber *canBeBeneficiary; // ivar: _canBeBeneficiary
@property (copy, nonatomic) NSNumber *canBeCustodian; // ivar: _canBeCustodian
@property (copy, nonatomic) NSNumber *canHaveBeneficiary; // ivar: _canHaveBeneficiary
@property (copy, nonatomic) NSNumber *canHaveCustodian; // ivar: _canHaveCustodian
@property (copy, nonatomic) NSNumber *custodianEnabled; // ivar: _custodianEnabled
@property (copy, nonatomic) NSNumber *custodianLastModified; // ivar: _custodianLastModified
@property (copy, nonatomic) NSString *familyName; // ivar: _familyName
@property (copy, nonatomic) NSString *forwardingEmail; // ivar: _forwardingEmail
@property (copy, nonatomic) NSString *givenName; // ivar: _givenName
@property (copy, nonatomic) NSNumber *hasMDM; // ivar: _hasMDM
@property (copy, nonatomic) NSNumber *hasUsedAuthorization; // ivar: _hasUsedAuthorization
@property (copy, nonatomic) NSNumber *isLegacyStudent; // ivar: _isLegacyStudent
@property (copy, nonatomic) NSNumber *isNotificationEmailAvailable; // ivar: _isNotificationEmailAvailable
@property (copy, nonatomic) NSNumber *isSenior; // ivar: _isSenior
@property (copy, nonatomic) NSNumber *isUnderage; // ivar: _isUnderage
@property (copy, nonatomic) NSString *managedOrganizationName; // ivar: _managedOrganizationName
@property (copy, nonatomic) NSNumber *managedOrganizationType; // ivar: _managedOrganizationType
@property (copy, nonatomic) NSString *masterKeyID; // ivar: _masterKeyID
@property (copy, nonatomic) NSString *notificationEmail; // ivar: _notificationEmail
@property (copy, nonatomic) NSNumber *phoneAsAppleID; // ivar: _phoneAsAppleID
@property (copy, nonatomic) NSString *previouslySelectedEmail; // ivar: _previouslySelectedEmail
@property (copy, nonatomic) NSNumber *previouslyWantedPrivateEmail; // ivar: _previouslyWantedPrivateEmail
@property (copy, nonatomic) NSString *primaryEmailAddress; // ivar: _primaryEmailAddress
@property (copy, nonatomic) NSNumber *privateAttestationEnabled; // ivar: _privateAttestationEnabled
@property (copy, nonatomic) NSString *privateEmailListVersion; // ivar: _privateEmailListVersion
@property (copy, nonatomic) NSArray *reachableEmails; // ivar: _reachableEmails
@property (nonatomic) NSUInteger repairState; // ivar: _repairState
@property (copy, nonatomic) NSString *selectedEmail; // ivar: _selectedEmail
@property (copy, nonatomic) NSNumber *vettedPrimaryEmail; // ivar: _vettedPrimaryEmail


+(BOOL)supportsSecureCoding;
-(BOOL)isManagedAppleID;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResponseBody:(id)arg0 ;
-(id)sharedEmailForManagedAppleID;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
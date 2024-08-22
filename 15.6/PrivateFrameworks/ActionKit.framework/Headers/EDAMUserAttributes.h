// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDAMUSERATTRIBUTES_H
#define EDAMUSERATTRIBUTES_H

@class NSString, NSNumber, NSArray;


#import "FATObject.h"

@interface EDAMUserAttributes : FATObject

@property (retain, nonatomic) NSString *businessAddress; // ivar: _businessAddress
@property (retain, nonatomic) NSNumber *clipFullPage; // ivar: _clipFullPage
@property (retain, nonatomic) NSString *comments; // ivar: _comments
@property (retain, nonatomic) NSNumber *dailyEmailLimit; // ivar: _dailyEmailLimit
@property (retain, nonatomic) NSNumber *dateAgreedToTermsOfService; // ivar: _dateAgreedToTermsOfService
@property (retain, nonatomic) NSNumber *defaultLatitude; // ivar: _defaultLatitude
@property (retain, nonatomic) NSString *defaultLocationName; // ivar: _defaultLocationName
@property (retain, nonatomic) NSNumber *defaultLongitude; // ivar: _defaultLongitude
@property (retain, nonatomic) NSNumber *educationalDiscount; // ivar: _educationalDiscount
@property (retain, nonatomic) NSNumber *emailAddressLastConfirmed; // ivar: _emailAddressLastConfirmed
@property (retain, nonatomic) NSNumber *emailOptOutDate; // ivar: _emailOptOutDate
@property (retain, nonatomic) NSString *groupName; // ivar: _groupName
@property (retain, nonatomic) NSNumber *hideSponsorBilling; // ivar: _hideSponsorBilling
@property (retain, nonatomic) NSString *incomingEmailAddress; // ivar: _incomingEmailAddress
@property (retain, nonatomic) NSNumber *maxReferrals; // ivar: _maxReferrals
@property (retain, nonatomic) NSNumber *optOutMachineLearning; // ivar: _optOutMachineLearning
@property (retain, nonatomic) NSNumber *partnerEmailOptInDate; // ivar: _partnerEmailOptInDate
@property (retain, nonatomic) NSNumber *passwordUpdated; // ivar: _passwordUpdated
@property (retain, nonatomic) NSNumber *preactivation; // ivar: _preactivation
@property (retain, nonatomic) NSString *preferredCountry; // ivar: _preferredCountry
@property (retain, nonatomic) NSString *preferredLanguage; // ivar: _preferredLanguage
@property (retain, nonatomic) NSArray *recentMailedAddresses; // ivar: _recentMailedAddresses
@property (retain, nonatomic) NSString *recognitionLanguage; // ivar: _recognitionLanguage
@property (retain, nonatomic) NSString *refererCode; // ivar: _refererCode
@property (retain, nonatomic) NSNumber *referralCount; // ivar: _referralCount
@property (retain, nonatomic) NSString *referralProof; // ivar: _referralProof
@property (retain, nonatomic) NSNumber *reminderEmailConfig; // ivar: _reminderEmailConfig
@property (retain, nonatomic) NSNumber *salesforcePushEnabled; // ivar: _salesforcePushEnabled
@property (retain, nonatomic) NSNumber *sentEmailCount; // ivar: _sentEmailCount
@property (retain, nonatomic) NSNumber *sentEmailDate; // ivar: _sentEmailDate
@property (retain, nonatomic) NSNumber *shouldLogClientEvent; // ivar: _shouldLogClientEvent
@property (retain, nonatomic) NSNumber *taxExempt; // ivar: _taxExempt
@property (retain, nonatomic) NSString *twitterId; // ivar: _twitterId
@property (retain, nonatomic) NSString *twitterUserName; // ivar: _twitterUserName
@property (retain, nonatomic) NSNumber *useEmailAutoFiling; // ivar: _useEmailAutoFiling
@property (retain, nonatomic) NSArray *viewedPromotions; // ivar: _viewedPromotions


+(id)structFields;
+(id)structName;


@end


#endif
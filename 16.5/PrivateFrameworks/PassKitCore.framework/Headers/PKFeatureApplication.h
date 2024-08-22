// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKFEATUREAPPLICATION_H
#define PKFEATUREAPPLICATION_H

@class NSString, NSURL, NSData, NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKFeatureApplicationOfferDetails.h"
#import "PKFeatureApplicationDeclineDetails.h"
#import "PKFeatureApplicationInvitationDetails.h"

@interface PKFeatureApplication : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (copy, nonatomic) NSURL *applicationBaseURL; // ivar: _applicationBaseURL
@property (copy, nonatomic) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (retain, nonatomic) PKFeatureApplicationOfferDetails *applicationOfferDetails; // ivar: _applicationOfferDetails
@property (nonatomic) NSUInteger applicationState; // ivar: _applicationState
@property (nonatomic) BOOL applicationStateDirty; // ivar: _applicationStateDirty
@property (nonatomic) NSUInteger applicationStateReason; // ivar: _applicationStateReason
@property (copy, nonatomic) NSString *applicationTermsIdentifier; // ivar: _applicationTermsIdentifier
@property (nonatomic) NSInteger applicationType; // ivar: _applicationType
@property (readonly, nonatomic) NSData *authenticationSignaturePayload;
@property (copy, nonatomic) NSString *businessChatIdentifier; // ivar: _businessChatIdentifier
@property (copy, nonatomic) NSString *coreIDVServiceProviderName; // ivar: _coreIDVServiceProviderName
@property (retain, nonatomic) PKFeatureApplicationDeclineDetails *declineDetails; // ivar: _declineDetails
@property (nonatomic) NSUInteger feature; // ivar: _feature
@property (nonatomic) NSUInteger featureProduct; // ivar: _featureProduct
@property (retain, nonatomic) PKFeatureApplicationInvitationDetails *invitationDetails; // ivar: _invitationDetails
@property (readonly, nonatomic) BOOL isActive;
@property (retain, nonatomic) NSDate *lastUpdated; // ivar: _lastUpdated
@property (copy, nonatomic) NSString *preliminaryAssessmentIdentifier; // ivar: _preliminaryAssessmentIdentifier
@property (copy, nonatomic) NSString *referenceIdentifier; // ivar: _referenceIdentifier
@property (readonly, nonatomic) BOOL supportsAuthentication;
@property (nonatomic) NSInteger updateUserInfoSubType; // ivar: _updateUserInfoSubType


+(BOOL)supportsSecureCoding;
-(BOOL)hasSufficientOTBForInstallmentConfiguration:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
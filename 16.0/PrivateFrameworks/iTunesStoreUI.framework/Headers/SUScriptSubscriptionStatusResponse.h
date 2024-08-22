// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUSCRIPTSUBSCRIPTIONSTATUSRESPONSE_H
#define SUSCRIPTSUBSCRIPTIONSTATUSRESPONSE_H

@class NSNumber, NSString;


#import "SUScriptObject.h"
#import "SUScriptDictionary.h"

@interface SUScriptSubscriptionStatusResponse : SUScriptObject

@property (readonly) NSNumber *acceptedStoreTermsVersion; // ivar: _acceptedStoreTermsVersion
@property (readonly) NSString *accountIdentifier;
@property (readonly) NSString *accountStatus; // ivar: _accountStatus
@property (readonly) NSString *accountStatusNeedsAuthentication;
@property (readonly) NSString *accountStatusNotSubscribed;
@property (readonly) NSString *accountStatusSubscribed;
@property (readonly) NSString *accountStatusUnknown;
@property (readonly) NSNumber *carrierBundlingErrorCode; // ivar: _carrierBundlingErrorCode
@property (readonly) NSString *carrierBundlingStatus; // ivar: _carrierBundlingStatus
@property (readonly, getter=isDiscoveryModeEligible) id *discoveryModeEligible; // ivar: _discoveryModeEligible
@property (readonly) NSString *eligibilityStatus; // ivar: _eligibilityStatus
@property (readonly) NSString *eligibilityStatusEligible;
@property (readonly) NSString *eligibilityStatusNotEligible;
@property (readonly) NSString *eligibilityStatusUnknown;
@property (readonly, getter=isFamilyOrganizer) id *familyOrganizer; // ivar: _familyOrganizer
@property (readonly, getter=isFamilySubscription) id *familySubscription; // ivar: _familySubscription
@property (readonly, getter=isFinal) id *final; // ivar: _final
@property (readonly) id *hasFamily; // ivar: _hasFamily
@property (readonly) id *hasFamilyMembers; // ivar: _hasFamilyMembers
@property (readonly) NSNumber *latestStoreTermsVersion; // ivar: _latestStoreTermsVersion
@property (readonly) SUScriptDictionary *rawResponseData; // ivar: _rawResponseData
@property (readonly) NSString *sessionIdentifier; // ivar: _sessionIdentifier
@property (readonly, getter=isSubscribed) id *subscribed; // ivar: _subscribed


+(id)webScriptNameForKeyName:(id)arg0 ;
+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_className;
-(id)attributeKeys;
-(id)initWithSubscriptionStatus:(id)arg0 isFinal:(BOOL)arg1 ;
-(id)scriptAttributeKeys;


@end


#endif
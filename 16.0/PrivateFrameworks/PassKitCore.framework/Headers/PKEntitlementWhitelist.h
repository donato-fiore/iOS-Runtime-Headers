// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKENTITLEMENTWHITELIST_H
#define PKENTITLEMENTWHITELIST_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface PKEntitlementWhitelist : NSObject {
    int _processIdentifier;
}


@property (readonly) BOOL AMPCardEnrollment; // ivar: _AMPCardEnrollment
@property (readonly) BOOL accessPassProvisioning;
@property (readonly) BOOL allAccess;
@property (readonly) BOOL appleMediaServicesPrivate; // ivar: _appleMediaServicesPrivate
@property (readonly) BOOL applePayTrustAllAccess; // ivar: _applePayTrustAllAccess
@property (readonly, copy) NSString *applicationID; // ivar: _applicationID
@property (readonly) BOOL carKeyPassThroughAccess; // ivar: _carKeyPassThroughAccess
@property (readonly) BOOL cardOnFilePayments; // ivar: _cardOnFilePayments
@property (readonly) BOOL credentialStateAccess; // ivar: _credentialStateAccess
@property (readonly, copy) NSString *developerTeamID; // ivar: _developerTeamID
@property (readonly) BOOL externalizedContextPayments; // ivar: _externalizedContextPayments
@property (readonly) BOOL featuresAllAccess; // ivar: _featuresAllAccess
@property (readonly) BOOL inAppPayments; // ivar: _inAppPayments
@property (readonly) BOOL inAppPaymentsPrivate; // ivar: _inAppPaymentsPrivate
@property (readonly, copy) NSArray *merchantIdentifiers; // ivar: _merchantIdentifiers
@property (readonly) BOOL passPresentationSuppression; // ivar: _passPresentationSuppression
@property (readonly) BOOL passPresentationSuppressionFromBackground; // ivar: _passPresentationSuppressionFromBackground
@property (readonly, copy) NSArray *passTypeIDPrefixes; // ivar: _passTypeIDPrefixes
@property (readonly, copy) NSArray *passTypeIDs; // ivar: _passTypeIDs
@property (readonly) BOOL passesAddSilently; // ivar: _passesAddSilently
@property (readonly) BOOL passesAddUnsigned; // ivar: _passesAddUnsigned
@property (readonly) BOOL passesAllAccess; // ivar: _passesAllAccess
@property (readonly) BOOL passesEntangledAccess; // ivar: _passesEntangledAccess
@property (readonly) BOOL passesOverviewAccess; // ivar: _passesOverviewAccess
@property (readonly) BOOL paymentAllAccess; // ivar: _paymentAllAccess
@property (readonly) BOOL paymentConfiguration; // ivar: _paymentConfiguration
@property (readonly) BOOL paymentPresentation; // ivar: _paymentPresentation
@property (readonly) BOOL peerPaymentAllAccess; // ivar: _peerPaymentAllAccess
@property (readonly) BOOL searchAllAccess; // ivar: _searchAllAccess
@property (readonly) BOOL secureElementPassProvisioning; // ivar: _secureElementPassProvisioning
@property (readonly) BOOL shareableCredentialProvisioning; // ivar: _shareableCredentialProvisioning
@property (readonly) BOOL sharingAllAccess; // ivar: _sharingAllAccess
@property (readonly) BOOL supportsDisbursements; // ivar: _supportsDisbursements
@property (readonly) BOOL supportsWebPayments;
@property (readonly, copy) NSArray *teamIDs; // ivar: _teamIDs
@property (readonly) BOOL trustedDeviceEnrollmentInfo; // ivar: _trustedDeviceEnrollmentInfo
@property (readonly) BOOL webPayments; // ivar: _webPayments
@property (readonly) BOOL winterpegPayments; // ivar: _winterpegPayments


+(BOOL)supportsSecureCoding;
-(*void)_copyValueOfEntitlement:(id)arg0 fromSecTask:(struct __SecTask *)arg1 ;
-(BOOL)_boolValueOfEntitlement:(id)arg0 fromSecTask:(struct __SecTask *)arg1 ;
-(BOOL)_probeEntitlementsWithAuditToken:(struct ? )arg0 ;
-(BOOL)isEntitledForAnyFromUniquePassTypeIDs:(id)arg0 ;
-(BOOL)isEntitledForMerchantSession:(id)arg0 ;
-(BOOL)isEntitledForPassTypeID:(id)arg0 ;
-(BOOL)isEntitledForPaymentRequest:(id)arg0 ;
-(id)_arrayValueOfEntitlement:(id)arg0 fromSecTask:(struct __SecTask *)arg1 ;
-(id)_stringValueOfEntitlement:(id)arg0 fromSecTask:(struct __SecTask *)arg1 ;
-(id)init;
-(id)initWithConnection:(id)arg0 ;
-(id)initWithProcessIdentifier:(int)arg0 auditToken:(struct ? )arg1 ;


@end


#endif
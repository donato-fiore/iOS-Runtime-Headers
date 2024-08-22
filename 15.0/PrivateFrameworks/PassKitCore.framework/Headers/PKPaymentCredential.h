// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTCREDENTIAL_H
#define PKPAYMENTCREDENTIAL_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKPaymentEligibilityResponse.h"
#import "PKPaymentRequirementsResponse.h"

@interface PKPaymentCredential : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger cardType; // ivar: _cardType
@property (nonatomic) NSInteger credentialType; // ivar: _credentialType
@property (nonatomic, getter=isDeletable) BOOL deletable; // ivar: _deletable
@property (retain, nonatomic) PKPaymentEligibilityResponse *eligibilityResponse; // ivar: _eligibilityResponse
@property (copy, nonatomic) NSString *expiration; // ivar: _expiration
@property (copy, nonatomic) NSString *longDescription; // ivar: _longDescription
@property (retain, nonatomic) PKPaymentRequirementsResponse *requirementsResponse; // ivar: _requirementsResponse
@property (copy, nonatomic) NSString *sanitizedPrimaryAccountName; // ivar: _sanitizedPrimaryAccountName
@property (copy, nonatomic) NSString *sanitizedPrimaryAccountNumber; // ivar: _sanitizedPrimaryAccountNumber


+(BOOL)supportsSecureCoding;
+(id)fakeRemoteCredentials;
-(BOOL)_isEqualToCredential:(id)arg0 ;
-(BOOL)isAccountCredential;
-(BOOL)isContactlessProductCredential;
-(BOOL)isDigitalIssuanceProductCredential;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isHomeKeyCredential;
-(BOOL)isIdentityCredential;
-(BOOL)isIssuerProvisioningExtensionCredential;
-(BOOL)isLocalAppletSubcredentialPassCredential;
-(BOOL)isLocalPassCredential;
-(BOOL)isPeerPaymentCredential;
-(BOOL)isPurchasedProductCredential;
-(BOOL)isRemoteCredential;
-(BOOL)isShareableCredential;
-(NSUInteger)hash;
-(id)accountCredential;
-(id)contactlessProductCredential;
-(id)digitalIssuanceProductCredential;
-(id)homeKeyCredential;
-(id)identityCredential;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)issuerProvisioningExtensionCredential;
-(id)localAppletSubcredentialPassCredential;
-(id)localPassCredential;
-(id)peerPaymentCredential;
-(id)purchasedProductCredential;
-(id)remoteCredential;
-(id)shareableCredential;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
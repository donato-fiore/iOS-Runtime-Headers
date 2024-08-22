// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTPROVISIONINGREQUEST_H
#define PKPAYMENTPROVISIONINGREQUEST_H

@class NSNumber, NSArray, NSData, NSString;


#import "PKPaymentWebServiceRequest.h"
#import "PKPaymentDeviceMetadata.h"
#import "PKDSPContext.h"
#import "PKPaymentEligibilityResponse.h"

@interface PKPaymentProvisioningRequest : PKPaymentWebServiceRequest {
    NSNumber *_primaryJSBLSequenceCounter;
    NSArray *_certChain;
    BOOL _devSigned;
    PKPaymentDeviceMetadata *_deviceData;
}


@property (copy, nonatomic) NSData *activationData; // ivar: _activationData
@property (copy, nonatomic) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (copy, nonatomic) NSArray *authorizationKeyAttestation; // ivar: _authorizationKeyAttestation
@property (copy, nonatomic) NSString *cardSecurityCode; // ivar: _cardSecurityCode
@property (copy, nonatomic) NSString *cardholderName; // ivar: _cardholderName
@property (copy, nonatomic) NSData *challengeResponse; // ivar: _challengeResponse
@property (copy, nonatomic) PKDSPContext *context; // ivar: _context
@property (copy, nonatomic) NSData *cryptogram; // ivar: _cryptogram
@property (readonly, nonatomic, getter=isDeviceProvisioningDataExpected) BOOL deviceProvisioningDataExpected;
@property (nonatomic) BOOL disableDeviceScore; // ivar: _disableDeviceScore
@property (retain, nonatomic) PKPaymentEligibilityResponse *eligibilityResponse; // ivar: _eligibilityResponse
@property (copy, nonatomic) NSData *fidoAttestation; // ivar: _fidoAttestation
@property (copy, nonatomic) NSData *fidoKey; // ivar: _fidoKey
@property (copy, nonatomic) NSData *fidoSignedChallenge; // ivar: _fidoSignedChallenge
@property (copy, nonatomic) NSArray *isoDeviceEncryptionAttestation; // ivar: _isoDeviceEncryptionAttestation
@property (copy, nonatomic) NSData *isoDeviceEncryptionAuthorization; // ivar: _isoDeviceEncryptionAuthorization
@property (copy, nonatomic) NSString *nonce; // ivar: _nonce
@property (copy, nonatomic) NSString *referrerIdentifier; // ivar: _referrerIdentifier
@property (copy, nonatomic) NSData *seBlobDeviceEncryptionCertificate; // ivar: _seBlobDeviceEncryptionCertificate
@property (nonatomic) NSInteger style; // ivar: _style
@property (copy, nonatomic) NSString *subCredentialIdentifier; // ivar: _subCredentialIdentifier
@property (copy, nonatomic) NSData *transactionKey; // ivar: _transactionKey
@property (copy, nonatomic) NSData *transactionKeyAttestation; // ivar: _transactionKeyAttestation
@property (copy, nonatomic) NSData *transactionKeyAuthorization; // ivar: _transactionKeyAuthorization
@property (copy, nonatomic) NSArray *transactionKeyCertificateChain; // ivar: _transactionKeyCertificateChain
@property (copy, nonatomic) NSData *transactionKeySignature; // ivar: _transactionKeySignature


+(BOOL)supportsSecureCoding;
-(id)_secureParemters;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEligibilityResponse:(id)arg0 ;
-(id)initWithEligibilityResponse:(id)arg0 addRequestConfiguration:(id)arg1 addRequest:(id)arg2 ;
-(id)initWithEligibilityResponse:(id)arg0 style:(NSInteger)arg1 ;
-(void)_deviceScoreWithCompletion:(id)arg0 ;
-(void)_encryptSecureDictionary:(id)arg0 intoDictionary:(id)arg1 ;
-(void)_requestBodyWithWebService:(id)arg0 completion:(id)arg1 ;
-(void)_updateContextUsingWebService:(id)arg0 completion:(id)arg1 ;
-(void)_updateRequestForRedirect:(id)arg0 overrides:(id)arg1 webService:(id)arg2 withCompletion:(id)arg3 ;
-(void)_updateRequestForRetry:(id)arg0 retryFields:(id)arg1 webService:(id)arg2 withCompletion:(id)arg3 ;
-(void)_urlRequestWithServiceURL:(id)arg0 deviceIdentifier:(id)arg1 appleAccountInformation:(id)arg2 certChain:(id)arg3 devSigned:(BOOL)arg4 deviceData:(id)arg5 webService:(id)arg6 completion:(id)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
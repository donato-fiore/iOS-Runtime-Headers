// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACMECERTREQUEST_H
#define ACMECERTREQUEST_H

@class NSString, NSData, NSArray, NSDictionary;
@protocol OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SecJWSEncoder.h"

@interface AcmeCertRequest : NSObject

@property (retain) NSString *account; // ivar: _account
@property (retain) NSString *acmeNewAccountURL; // ivar: _acmeNewAccountURL
@property (retain) NSString *acmeNewNonceURL; // ivar: _acmeNewNonceURL
@property (retain) NSString *acmeNewOrderURL; // ivar: _acmeNewOrderURL
@property (retain) NSData *attestation; // ivar: _attestation
@property (retain) NSArray *attestationChain; // ivar: _attestationChain
@property (retain) NSArray *attestationOids; // ivar: _attestationOids
@property (retain) NSString *authorizationURL; // ivar: _authorizationURL
@property (retain) NSArray *authorizations; // ivar: _authorizations
@property *__SecCertificate certificate; // ivar: _certificate
@property (retain) NSString *certificateURL; // ivar: _certificateURL
@property (retain) NSString *challengeURL; // ivar: _challengeURL
@property (retain) NSObject<OS_xpc_object> *connection; // ivar: _connection
@property (retain) NSData *csr; // ivar: _csr
@property (retain) SecJWSEncoder *encoder; // ivar: _encoder
@property (retain) NSString *finalizeOrderURL; // ivar: _finalizeOrderURL
@property *__SecIdentity identity; // ivar: _identity
@property (retain) NSDictionary *keyParams; // ivar: _keyParams
@property (retain) NSString *location; // ivar: _location
@property BOOL logAcmeCSR; // ivar: _logAcmeCSR
@property (retain) NSString *nextMessageURL; // ivar: _nextMessageURL
@property (retain) NSString *nonce; // ivar: _nonce
@property (retain) NSString *orderURL; // ivar: _orderURL
@property (retain) NSDictionary *parameters; // ivar: _parameters
@property BOOL permitLocalIssuer; // ivar: _permitLocalIssuer
@property *__SecKey privateKey; // ivar: _privateKey
@property *__SecKey publicKey; // ivar: _publicKey
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property BOOL requireAttestation; // ivar: _requireAttestation
@property NSInteger state; // ivar: _state
@property (retain) NSArray *subject; // ivar: _subject
@property (retain) NSString *timestamp; // ivar: _timestamp
@property (retain) NSString *token; // ivar: _token
@property (retain) NSObject<OS_dispatch_queue> *xpc_queue; // ivar: _xpc_queue


-(BOOL)deviceAttestationSupported;
-(BOOL)valueForBooleanDefault:(id)arg0 ;
-(id)acmeRequest;
-(id)attestationObjectWithCertificates:(id)arg0 ;
-(id)createAttestation;
-(id)createCSR;
-(id)createCertificate;
-(id)createKeyPair;
-(id)executeRequest;
-(id)initWithSubject:(id)arg0 parameters:(id)arg1 ;
-(id)pollForStatus:(id)arg0 until:(id)arg1 ;
-(id)processReply:(id)arg0 ;
-(id)requestAttestationChainWithError:(*id)arg0 ;
-(id)sanitizeParameters;
-(id)sanitizeSubject;
-(id)sendRequestToXPCService:(id)arg0 response:(*id)arg1 ;
-(id)serialNumber;
-(int)errorStatusWithHTTPErrorCode:(int)arg0 ;
-(struct __SecIdentity *)identityWithError:(*id)arg0 ;
-(void)dealloc;


@end


#endif
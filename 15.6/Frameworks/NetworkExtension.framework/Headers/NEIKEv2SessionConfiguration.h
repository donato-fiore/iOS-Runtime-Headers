// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEIKEV2SESSIONCONFIGURATION_H
#define NEIKEV2SESSIONCONFIGURATION_H

@class NSString, NSArray, NSData, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "NEIKEv2ConfigurationMessage.h"
#import "NEIKEv2AuthenticationProtocol.h"
#import "NEIKEv2Identifier.h"

@interface NEIKEv2SessionConfiguration : NSObject <NSCopying>

 {
    NEIKEv2ConfigurationMessage *_configurationRequest;
    NEIKEv2ConfigurationMessage *_configurationReply;
}


@property (retain) NSString *IMEI; // ivar: _IMEI
@property (retain) NSString *IMEISV; // ivar: _IMEISV
@property (retain) NSArray *additionalMOBIKEAddresses; // ivar: _additionalMOBIKEAddresses
@property (retain) NEIKEv2AuthenticationProtocol *authenticationProtocol; // ivar: _authenticationProtocol
@property BOOL blackholeDetectionEnabled; // ivar: _blackholeDetectionEnabled
@property (retain) NEIKEv2ConfigurationMessage *configurationReply;
@property (retain) NEIKEv2ConfigurationMessage *configurationRequest;
@property (retain) NSArray *customIKEAuthPayloads; // ivar: _customIKEAuthPayloads
@property (retain, nonatomic) NSArray *customIKEAuthPrivateNotifies; // ivar: _customIKEAuthPrivateNotifies
@property (retain) NSArray *customIKEAuthVendorPayloads; // ivar: _customIKEAuthVendorPayloads
@property BOOL deadPeerDetectionEnabled; // ivar: _deadPeerDetectionEnabled
@property NSUInteger deadPeerDetectionInterval; // ivar: _deadPeerDetectionInterval
@property unsigned int deadPeerDetectionMaxRetryCount; // ivar: _deadPeerDetectionMaxRetryCount
@property unsigned int deadPeerDetectionMaxRetryCountBeforeReporting; // ivar: _deadPeerDetectionMaxRetryCountBeforeReporting
@property NSUInteger deadPeerDetectionReceiveIntervalTriggerReporting; // ivar: _deadPeerDetectionReceiveIntervalTriggerReporting
@property unsigned int deadPeerDetectionReceiveMaxShortDPDBeforeReporting; // ivar: _deadPeerDetectionReceiveMaxShortDPDBeforeReporting
@property NSUInteger deadPeerDetectionRetryIntervalMilliseconds; // ivar: _deadPeerDetectionRetryIntervalMilliseconds
@property BOOL disableRemoteCertificateValidation; // ivar: _disableRemoteCertificateValidation
@property BOOL enableCertificateRevocationCheck; // ivar: _enableCertificateRevocationCheck
@property BOOL idleTimeoutEnabled; // ivar: _idleTimeoutEnabled
@property NSUInteger idleTimeoutSeconds; // ivar: _idleTimeoutSeconds
@property BOOL initialContactDisabled; // ivar: _initialContactDisabled
@property (retain) NSString *localCertificateName; // ivar: _localCertificateName
@property (retain) NSData *localCertificateReference; // ivar: _localCertificateReference
@property (retain) NSData *localEncryptedEAPIdentity; // ivar: _localEncryptedEAPIdentity
@property (retain) NEIKEv2Identifier *localIdentifier; // ivar: _localIdentifier
@property (retain) NSString *localPrivateEAPIdentity; // ivar: _localPrivateEAPIdentity
@property (retain) NSData *localPrivateKey; // ivar: _localPrivateKey
@property (retain) NSData *localPublicKey; // ivar: _localPublicKey
@property BOOL natTraversalKeepaliveDisabled; // ivar: _natTraversalKeepaliveDisabled
@property BOOL natTraversalKeepaliveEnabled; // ivar: _natTraversalKeepaliveEnabled
@property NSUInteger natTraversalKeepaliveInterval; // ivar: _natTraversalKeepaliveInterval
@property BOOL natTraversalKeepaliveOffloadEnabled; // ivar: _natTraversalKeepaliveOffloadEnabled
@property NSUInteger natTraversalKeepaliveOffloadInterval; // ivar: _natTraversalKeepaliveOffloadInterval
@property BOOL negotiateMOBIKE; // ivar: _negotiateMOBIKE
@property (retain) NSString *password; // ivar: _password
@property (retain) NSData *passwordReference; // ivar: _passwordReference
@property (retain) NSNumber *pduSessionID; // ivar: _pduSessionID
@property (retain) NEIKEv2AuthenticationProtocol *remoteAuthentication; // ivar: _remoteAuthentication
@property (retain) NSData *remoteCertificateAuthorityHash; // ivar: _remoteCertificateAuthorityHash
@property (retain) NSString *remoteCertificateAuthorityName; // ivar: _remoteCertificateAuthorityName
@property (retain) NSArray *remoteCertificateAuthorityReferences; // ivar: _remoteCertificateAuthorityReferences
@property (retain) NSString *remoteCertificateHostname; // ivar: _remoteCertificateHostname
@property (retain) NEIKEv2Identifier *remoteIdentifier; // ivar: _remoteIdentifier
@property (retain) NSData *remotePublicKey; // ivar: _remotePublicKey
@property (retain) NSData *sharedSecret; // ivar: _sharedSecret
@property (retain) NSData *sharedSecretReference; // ivar: _sharedSecretReference
@property BOOL strictCertificateRevocationCheck; // ivar: _strictCertificateRevocationCheck
@property (retain) NSString *tlsMaximumVersion; // ivar: _tlsMaximumVersion
@property (retain) NSString *tlsMinimumVersion; // ivar: _tlsMinimumVersion
@property (retain) NSString *username; // ivar: _username


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)init;


@end


#endif
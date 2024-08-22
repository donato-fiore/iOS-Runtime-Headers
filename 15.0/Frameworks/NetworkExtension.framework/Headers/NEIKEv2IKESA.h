// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEIKEV2IKESA_H
#define NEIKEV2IKESA_H

@class NSData, NSArray, NSMutableData, NSError, NWAddressEndpoint, NSString;
@protocol NEIKEv2ConfigurationDelegate, NEIKEv2PacketDelegate, OS_dispatch_queue, NEIKEv2TransportDelegate;

#import <Foundation/Foundation.h>

#import "NEIKEv2ConfigurationMessage.h"
#import "NEIKEv2AuthenticationProtocol.h"
#import "NEIKEv2IKESAProposal.h"
#import "NEIKEv2IKESAConfiguration.h"
#import "NEIKEv2EAP.h"
#import "NEIKEv2IKESPI.h"
#import "NEIKEv2Identifier.h"
#import "NEIKEv2Transport.h"
#import "NEIKEv2DHProtocol.h"
#import "NEIKEv2SessionConfiguration.h"

@interface NEIKEv2IKESA : NSObject {
    ? _dhECKey;
}


@property (retain) NEIKEv2ConfigurationMessage *activeConfiguration; // ivar: _activeConfiguration
@property (retain, nonatomic) NEIKEv2AuthenticationProtocol *authProtocolFromPacket; // ivar: _authProtocolFromPacket
@property (retain, nonatomic) NSData *authenticationDataFromPacket; // ivar: _authenticationDataFromPacket
@property (readonly, nonatomic) NEIKEv2AuthenticationProtocol *authenticationProtocol;
@property (nonatomic) NSUInteger childSAModeFromPacket; // ivar: _childSAModeFromPacket
@property (retain, nonatomic) NSArray *childSAProposalsFromPacket; // ivar: _childSAProposalsFromPacket
@property (retain) NEIKEv2IKESAProposal *chosenProposal; // ivar: _chosenProposal
@property (retain, nonatomic) NEIKEv2ConfigurationMessage *configMessageFromPacket; // ivar: _configMessageFromPacket
@property (retain) NEIKEv2IKESAConfiguration *configuration; // ivar: _configuration
@property (weak) NSObject<NEIKEv2ConfigurationDelegate> *configurationDelegate; // ivar: _configurationDelegate
@property (retain) NSData *cookie; // ivar: _cookie
@property (readonly) NSData *decryptionKey;
@property BOOL detectedIncomingNAT; // ivar: _detectedIncomingNAT
@property BOOL detectedOutgoingNAT; // ivar: _detectedOutgoingNAT
@property *OpaqueSecDHContext dhContext; // ivar: _dhContext
@property (retain) NSMutableData *dhPublicKey; // ivar: _dhPublicKey
@property NSUInteger dhPublicKeySize; // ivar: _dhPublicKeySize
@property (retain) NSData *dhRemotePublicKey; // ivar: _dhRemotePublicKey
@property (retain) NSMutableData *digitalSignatureLocalPrivateKey; // ivar: _digitalSignatureLocalPrivateKey
@property (retain) NSMutableData *digitalSignatureLocalPublicKey; // ivar: _digitalSignatureLocalPublicKey
@property (retain) NSMutableData *digitalSignatureRemotePublicKey; // ivar: _digitalSignatureRemotePublicKey
@property (retain) NEIKEv2EAP *eapClient; // ivar: _eapClient
@property BOOL eapInProgress; // ivar: _eapInProgress
@property (retain) NSMutableData *encryptCryptoCtx; // ivar: _encryptCryptoCtx
@property (readonly) NSData *encryptionKey;
@property (retain) NSError *error; // ivar: _error
@property (retain) NSMutableData *fetchedPassword; // ivar: _fetchedPassword
@property (retain) NSMutableData *fetchedSharedSecret; // ivar: _fetchedSharedSecret
@property BOOL fragmentationSupported; // ivar: _fragmentationSupported
@property (readonly) BOOL hasTransport;
@property (nonatomic) NSUInteger ikeSAUniqueIndex; // ivar: _ikeSAUniqueIndex
@property (nonatomic) NSUInteger ikeSessionUniqueIndex; // ivar: _ikeSessionUniqueIndex
@property (readonly) NWAddressEndpoint *initiatorAddress;
@property (retain) NSData *initiatorCookie2; // ivar: _initiatorCookie2
@property (retain) NSData *initiatorFirstMessage;
@property (retain) NSData *initiatorNonce;
@property (retain) NEIKEv2IKESPI *initiatorSPI;
@property (retain, nonatomic) NSArray *initiatorTrafficSelectorsFromPacket; // ivar: _initiatorTrafficSelectorsFromPacket
@property (retain) NEIKEv2Identifier *internalRemoteIdentifier; // ivar: _internalRemoteIdentifier
@property BOOL isInitiator; // ivar: _isInitiator
@property BOOL isRekeying; // ivar: _isRekeying
@property CGFloat lastReceivedDPD; // ivar: _lastReceivedDPD
@property (retain) NWAddressEndpoint *localAddress; // ivar: _localAddress
@property (retain) NSMutableData *localCertificateIdentity; // ivar: _localCertificateIdentity
@property (retain) NSData *localFirstMessage; // ivar: _localFirstMessage
@property (readonly, nonatomic) NEIKEv2Identifier *localIdentifier;
@property (retain, nonatomic) NEIKEv2Identifier *localIdentifierFromPacket; // ivar: _localIdentifierFromPacket
@property (readonly) NSData *localIntegrityKey;
@property (retain) NSData *localNonce; // ivar: _localNonce
@property (retain) NEIKEv2IKESPI *localSPI; // ivar: _localSPI
@property BOOL mobikeSupported; // ivar: _mobikeSupported
@property (retain) NEIKEv2Transport *natTransport; // ivar: _natTransport
@property (retain) NSString *outgoingInterfaceName; // ivar: _outgoingInterfaceName
@property (weak) NSObject<NEIKEv2PacketDelegate> *packetDelegate; // ivar: _packetDelegate
@property (readonly) NSMutableData *password;
@property BOOL peerAuthenticated; // ivar: _peerAuthenticated
@property (readonly) NEIKEv2DHProtocol *preferredDHProtocol;
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain) NSData *receivedDestinationHash; // ivar: _receivedDestinationHash
@property (retain) NWAddressEndpoint *remoteAddress; // ivar: _remoteAddress
@property (retain) NSData *remoteFirstMessage; // ivar: _remoteFirstMessage
@property (retain, nonatomic) NEIKEv2Identifier *remoteIdentifier;
@property (retain, nonatomic) NEIKEv2Identifier *remoteIdentifierFromPacket; // ivar: _remoteIdentifierFromPacket
@property (readonly) NSData *remoteIntegrityKey;
@property (retain) NSData *remoteNonce; // ivar: _remoteNonce
@property (retain) NEIKEv2DHProtocol *remotePreferredDHProtocol; // ivar: _remotePreferredDHProtocol
@property (retain) NEIKEv2IKESPI *remoteSPI; // ivar: _remoteSPI
@property BOOL reportShortDPD; // ivar: _reportShortDPD
@property (readonly) NWAddressEndpoint *responderAddress;
@property (retain) NSData *responderCookie2; // ivar: _responderCookie2
@property (retain) NSData *responderFirstMessage;
@property (retain) NSData *responderNonce;
@property (retain) NEIKEv2IKESPI *responderSPI;
@property (retain, nonatomic) NSArray *responderTrafficSelectorsFromPacket; // ivar: _responderTrafficSelectorsFromPacket
@property (retain) NSMutableData *sKeySeed; // ivar: _sKeySeed
@property (retain) NEIKEv2SessionConfiguration *sessionConfiguration; // ivar: _sessionConfiguration
@property (readonly) NSMutableData *sharedSecret;
@property unsigned short shortDPDCounter; // ivar: _shortDPDCounter
@property BOOL shouldSendStateUpdate; // ivar: _shouldSendStateUpdate
@property (retain) NSData *signHashData; // ivar: _signHashData
@property (retain) NSMutableData *skAi; // ivar: _skAi
@property (retain) NSMutableData *skAr; // ivar: _skAr
@property (retain) NSMutableData *skD; // ivar: _skD
@property (retain) NSMutableData *skEi; // ivar: _skEi
@property (retain) NSMutableData *skEr; // ivar: _skEr
@property (retain) NSMutableData *skPi; // ivar: _skPi
@property (retain) NSMutableData *skPr; // ivar: _skPr
@property (copy) id *socketGetBlock; // ivar: _socketGetBlock
@property NSUInteger state; // ivar: _state
@property (retain) NEIKEv2Transport *tcpTransport; // ivar: _tcpTransport
@property (retain) NEIKEv2Transport *transport; // ivar: _transport
@property (weak) NSObject<NEIKEv2TransportDelegate> *transportDelegate; // ivar: _transportDelegate
@property BOOL useNATTraversal; // ivar: _useNATTraversal
@property BOOL useTCPEncapsulation; // ivar: _useTCPEncapsulation
@property BOOL usesPacketDelegate; // ivar: _usesPacketDelegate


+(BOOL)checkValidityOfDigitalSignature:(id)arg0 authenticationProtocol:(id)arg1 sessionConfiguration:(id)arg2 remoteSignedOctets:(id)arg3 ;
+(BOOL)checkValidityOfDigitalSignature:(id)arg0 sessionConfiguration:(id)arg1 remoteSignedOctets:(id)arg2 ;
+(id)copySharedSecretFromConfig:(id)arg0 ;
+(id)createAuthenticationDataForSharedSecret:(id)arg0 octets:(id)arg1 prfProtocol:(id)arg2 ;
-(*unsigned char)dhCurveKeyForDesc:(int)arg0 ;
-(BOOL)calculateSKEYSEEDDerivatives;
-(BOOL)calculateSKEYSEEDForRekey:(id)arg0 ;
-(BOOL)checkNonCertAuthData:(id)arg0 ;
-(BOOL)checkValidityOfCertificates:(id)arg0 signature:(id)arg1 ;
-(BOOL)checkValidityOfDigitalSignature:(id)arg0 ;
-(BOOL)fetchLocalCertificateIdentity;
-(BOOL)generateAllValuesForRekey:(id)arg0 ;
-(BOOL)generateLocalDHValues;
-(BOOL)generateLocalNonce;
-(BOOL)generateLocalValues;
-(BOOL)shouldReceiveWildcard;
-(BOOL)shouldReportShortDPD;
-(BOOL)supportsSignHash:(NSUInteger)arg0 ;
-(BOOL)switchToNATTraversalPorts;
-(BOOL)switchToTCPEncapsulation;
-(NSUInteger)dpdRetryIntervalMilliseconds;
-(id)copyCertSignedData:(id)arg0 ;
-(id)copyChildConfig;
-(id)copyDigitalSignatureSignedData:(id)arg0 ;
-(id)copyForRekey;
-(id)copyInitiatorIdentifier;
-(id)copyLocalCertificateData;
-(id)copyRemoteCertificateAuthorityArray;
-(id)copyRemoteCertificateAuthorityDataArray;
-(id)copyRemoteCertificateAuthorityHashData;
-(id)copyResponderIdentifier;
-(id)copySessionConfig;
-(id)copyTransport;
-(id)copyValidateAuthBlock:(SEL)arg0 ;
-(id)createAuthenticationDataForSharedSecret:(id)arg0 octets:(id)arg1 ;
-(id)createInitiatorAuthenticationData;
-(id)createInitiatorEAPAuthenticationData;
-(id)createInitiatorSignedOctets;
-(id)createLocalSPIForLocalAddress:(id)arg0 remoteAddress:(id)arg1 ;
-(id)createRemoteSignedOctets;
-(id)createResponderAuthenticationData;
-(id)createResponderEAPAuthenticationData;
-(id)createResponderSignedOctets;
-(id)description;
// -(id)initIKESAWithConfiguration:(id)arg0 sessionConfiguration:(id)arg1 queue:(id)arg2 initialTransport:(id)arg3 transportDelegate:(id)arg4 socketGetBlock:(id)arg5 packetDelegate:(unk)arg6 configurationDelegate:(id)arg7 ikeSessionUniqueIndex:(id)arg8  ;
-(struct __SecIdentity *)copyLocalSecIdentity;
-(struct ccec_full_ctx *)dhECPKeyForDesc:(int)arg0 ;
-(void)assignRemoteSPI:(id)arg0 ;
-(void)assignRemoteSPI:(id)arg0 disableWildCard:(BOOL)arg1 ;
-(void)dealloc;
-(void)detachTransportWithShouldInvalidate:(BOOL)arg0 ;
-(void)disableWildcard;
-(void)reset;
-(void)resetShortDPDParameters;
-(void)resyncAddress;
-(void)sentStateUpdate;
-(void)updateConfiguration:(id)arg0 ;


@end


#endif
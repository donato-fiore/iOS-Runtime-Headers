// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEIKEV2IKESA_H
#define NEIKEV2IKESA_H

@class NSError, NWAddressEndpoint, NSData, NSMutableData, NSString, NSArray;
@protocol OS_dispatch_queue, NEIKEv2TransportDelegate, NEIKEv2PacketDelegate, NEIKEv2ConfigurationDelegate;

#import <Foundation/Foundation.h>

#import "NEIKEv2IKESPI.h"
#import "NEIKEv2IKESAConfiguration.h"
#import "NEIKEv2SessionConfiguration.h"
#import "NEIKEv2IKESAProposal.h"
#import "NEIKEv2DHProtocol.h"
#import "NEIKEv2Identifier.h"
#import "NEIKEv2AuthenticationProtocol.h"
#import "NEIKEv2ConfigurationMessage.h"
#import "NEIKEv2EAP.h"
#import "NEIKEv2Transport.h"

@interface NEIKEv2IKESA : NSObject {
    ? _dhECKey;
    BOOL _shouldSendStateUpdate;
    BOOL _isInitiator;
    BOOL _fragmentationSupported;
    BOOL _mobikeSupported;
    BOOL _useNATTraversal;
    BOOL _useTCPEncapsulation;
    BOOL _detectedOutgoingNAT;
    BOOL _detectedIncomingNAT;
    BOOL _isRekeying;
    BOOL _eapInProgress;
    BOOL _peerAuthenticated;
    BOOL _eapAuthenticationSuccess;
    BOOL _reportShortDPD;
    BOOL _usesPacketDelegate;
    unsigned short _shortDPDCounter;
    NEIKEv2IKESPI *_localSPI;
    NEIKEv2IKESPI *_remoteSPI;
    NSUInteger _state;
    NSError *_error;
    NWAddressEndpoint *_localAddress;
    NWAddressEndpoint *_remoteAddress;
    NEIKEv2IKESAConfiguration *_configuration;
    NEIKEv2SessionConfiguration *_sessionConfiguration;
    NEIKEv2IKESAProposal *_chosenProposal;
    CGFloat _lastReceivedDPD;
    NSData *_localNonce;
    NSData *_remoteNonce;
    NSMutableData *_dhPublicKey;
    NSData *_dhRemotePublicKey;
    *OpaqueSecDHContext _dhContext;
    NSUInteger _dhPublicKeySize;
    NEIKEv2DHProtocol *_remotePreferredDHProtocol;
    NSMutableData *_sKeySeed;
    NSMutableData *_skD;
    NSMutableData *_skAi;
    NSMutableData *_skAr;
    NSMutableData *_skEi;
    NSMutableData *_skEr;
    NSMutableData *_skPi;
    NSMutableData *_skPr;
    NSMutableData *_encryptCryptoCtx;
    NSMutableData *_localCertificateIdentity;
    NSMutableData *_digitalSignatureLocalPrivateKey;
    NSMutableData *_digitalSignatureLocalPublicKey;
    NSMutableData *_digitalSignatureRemotePublicKey;
    NSData *_cookie;
    NSData *_responderCookie2;
    NSData *_initiatorCookie2;
    NSData *_signHashData;
    NSString *_outgoingInterfaceName;
    NSData *_localFirstMessage;
    NSData *_remoteFirstMessage;
    NEIKEv2Identifier *_localIdentifierFromPacket;
    NEIKEv2Identifier *_remoteIdentifierFromPacket;
    NSUInteger _childSAModeFromPacket;
    NSArray *_childSAProposalsFromPacket;
    NEIKEv2AuthenticationProtocol *_authProtocolFromPacket;
    NSData *_authenticationDataFromPacket;
    NEIKEv2ConfigurationMessage *_configMessageFromPacket;
    NSArray *_initiatorTrafficSelectorsFromPacket;
    NSArray *_responderTrafficSelectorsFromPacket;
    NEIKEv2EAP *_eapClient;
    NEIKEv2Transport *_transport;
    NEIKEv2Transport *_natTransport;
    NEIKEv2Transport *_tcpTransport;
    NEIKEv2ConfigurationMessage *_activeConfiguration;
    NSData *_receivedDestinationHash;
    NEIKEv2Identifier *_internalRemoteIdentifier;
    NSMutableData *_fetchedPassword;
    NSMutableData *_fetchedSharedSecret;
    NSObject<OS_dispatch_queue> *_queue;
    id<NEIKEv2TransportDelegate> *_transportDelegate;
    id *_socketGetBlock;
    id<NEIKEv2PacketDelegate> *_packetDelegate;
    id<NEIKEv2ConfigurationDelegate> *_configurationDelegate;
    NSUInteger _ikeSessionUniqueIndex;
    NSUInteger _ikeSAUniqueIndex;
}




-(id)description;
-(void)dealloc;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEIKEV2CHILDSA_H
#define NEIKEV2CHILDSA_H

@class NSError, NSArray, NSData, NSMutableData;

#import <Foundation/Foundation.h>

#import "NEIKEv2IKESA.h"
#import "NEIKEv2ChildSAConfiguration.h"
#import "NEIKEv2ChildSAProposal.h"
#import "NEIKEv2DHProtocol.h"
#import "NEIKEv2ESPSPI.h"

@interface NEIKEv2ChildSA : NSObject {
    ? _dhECKey;
    BOOL _shouldSendStateUpdate;
    BOOL _isFirstChild;
    BOOL _isInitiator;
    BOOL _sequencePerTrafficClassSupported;
    unsigned short _incomingDatabaseReqID;
    unsigned short _outgoingDatabaseReqID;
    unsigned int _childID;
    NEIKEv2IKESA *_ikeSA;
    NSUInteger _state;
    NSError *_error;
    NEIKEv2ChildSAConfiguration *_configuration;
    NEIKEv2ChildSAProposal *_chosenProposal;
    NSArray *_localTrafficSelectors;
    NSArray *_remoteTrafficSelectors;
    NSData *_localNonce;
    NSData *_remoteNonce;
    NSMutableData *_dhPublicKey;
    NSData *_dhRemotePublicKey;
    *OpaqueSecDHContext _dhContext;
    NSUInteger _dhPublicKeySize;
    NEIKEv2DHProtocol *_remotePreferredDHProtocol;
    NSMutableData *_incomingEncryptionKey;
    NSMutableData *_incomingIntegrityKey;
    NSMutableData *_outgoingEncryptionKey;
    NSMutableData *_outgoingIntegrityKey;
    NEIKEv2ChildSAProposal *_initiatorRekeyProposal;
    NEIKEv2ChildSAProposal *_initiatorRekeyNonPFSProposal;
    NEIKEv2ChildSAProposal *_responderRekeyProposal;
    NEIKEv2ESPSPI *_rekeyedSPI;
    NEIKEv2ESPSPI *_rekeyedRemoteSPI;
}




-(id)description;
-(void)dealloc;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEIKEV2CHILDSA_H
#define NEIKEV2CHILDSA_H

@class NSArray, NSMutableData, NSData, NSError;

#import <Foundation/Foundation.h>

#import "NEIKEv2ChildSAProposal.h"
#import "NEIKEv2ChildSAConfiguration.h"
#import "NEIKEv2IKESA.h"
#import "NEIKEv2ESPSPI.h"

@interface NEIKEv2ChildSA : NSObject {
    ? _dhECKey;
}


@property unsigned int childID; // ivar: _childID
@property (retain) NEIKEv2ChildSAProposal *chosenProposal; // ivar: _chosenProposal
@property (retain) NEIKEv2ChildSAConfiguration *configuration; // ivar: _configuration
@property (readonly) NSArray *configuredInitiatorTrafficSelectors;
@property (readonly) NSArray *configuredResponderTrafficSelectors;
@property *OpaqueSecDHContext dhContext; // ivar: _dhContext
@property (retain) NSMutableData *dhPublicKey; // ivar: _dhPublicKey
@property NSUInteger dhPublicKeySize; // ivar: _dhPublicKeySize
@property (retain) NSData *dhRemotePublicKey; // ivar: _dhRemotePublicKey
@property (retain) NSError *error; // ivar: _error
@property (weak) NEIKEv2IKESA *ikeSA; // ivar: _ikeSA
@property unsigned short incomingDatabaseReqID; // ivar: _incomingDatabaseReqID
@property (retain) NSMutableData *incomingEncryptionKey; // ivar: _incomingEncryptionKey
@property (retain) NSMutableData *incomingIntegrityKey; // ivar: _incomingIntegrityKey
@property (retain) NSData *initiatorNonce;
@property (retain) NEIKEv2ChildSAProposal *initiatorRekeyNonPFSProposal; // ivar: _initiatorRekeyNonPFSProposal
@property (retain) NEIKEv2ChildSAProposal *initiatorRekeyProposal; // ivar: _initiatorRekeyProposal
@property (retain) NSMutableData *initiatorSendEncryptionKey;
@property (retain) NSMutableData *initiatorSendIntegrityKey;
@property (retain) NSArray *initiatorTrafficSelectors;
@property BOOL isFirstChild; // ivar: _isFirstChild
@property BOOL isInitiator; // ivar: _isInitiator
@property (readonly) BOOL isRekeying;
@property (retain) NSData *localNonce; // ivar: _localNonce
@property (retain) NSArray *localTrafficSelectors; // ivar: _localTrafficSelectors
@property unsigned short outgoingDatabaseReqID; // ivar: _outgoingDatabaseReqID
@property (retain) NSMutableData *outgoingEncryptionKey; // ivar: _outgoingEncryptionKey
@property (retain) NSMutableData *outgoingIntegrityKey; // ivar: _outgoingIntegrityKey
@property (retain) NEIKEv2ESPSPI *rekeyedRemoteSPI; // ivar: _rekeyedRemoteSPI
@property (retain) NEIKEv2ESPSPI *rekeyedSPI; // ivar: _rekeyedSPI
@property (retain) NSData *remoteNonce; // ivar: _remoteNonce
@property (retain) NSArray *remoteTrafficSelectors; // ivar: _remoteTrafficSelectors
@property (retain) NSData *responderNonce;
@property (retain) NEIKEv2ChildSAProposal *responderRekeyProposal; // ivar: _responderRekeyProposal
@property (retain) NSMutableData *responderSendEncryptionKey;
@property (retain) NSMutableData *responderSendIntegrityKey;
@property (retain) NSArray *responderTrafficSelectors;
@property BOOL sequencePerTrafficClassSupported; // ivar: _sequencePerTrafficClassSupported
@property BOOL shouldSendStateUpdate; // ivar: _shouldSendStateUpdate
@property NSUInteger state; // ivar: _state


+(unsigned short)nextDatabaseReqID;
-(*unsigned char)dhCurveKeyForDesc:(int)arg0 ;
-(BOOL)generateAllValues;
-(BOOL)generateLocalDHValues;
-(BOOL)generateLocalNonce;
-(BOOL)generateLocalValues;
-(BOOL)shouldGenerateNewDHKeys;
-(id)description;
-(id)initWithConfiguration:(id)arg0 childID:(unsigned int)arg1 isFirstChild:(BOOL)arg2 ikeSA:(id)arg3 ;
-(struct ccec_full_ctx *)dhECPKeyForDesc:(int)arg0 ;
-(void)dealloc;
-(void)reset;
-(void)resetIKESA:(id)arg0 ;
-(void)sentStateUpdate;


@end


#endif
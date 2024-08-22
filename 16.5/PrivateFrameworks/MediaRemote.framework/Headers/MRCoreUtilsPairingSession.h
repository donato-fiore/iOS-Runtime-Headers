// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRCOREUTILSPAIRINGSESSION_H
#define MRCOREUTILSPAIRINGSESSION_H

@class NSData, NSMutableData, NSMutableDictionary, NSArray, NSString;
@protocol OS_dispatch_queue;


#import "MRCryptoPairingSession.h"
#import "MRPasscodeCredentials.h"
#import "MRDeviceInfo.h"

@interface MRCoreUtilsPairingSession : MRCryptoPairingSession {
    MRPasscodeCredentials *_credentials;
    *PairingSessionPrivate _pairingSession;
    ? _pairingDelegate;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, nonatomic) BOOL hasExchangedMessage; // ivar: _hasExchangedMessage
@property (retain, nonatomic) NSData *inputKey; // ivar: _inputKey
@property (retain, nonatomic) NSMutableData *inputNonce; // ivar: _inputNonce
@property (readonly, nonatomic) NSMutableDictionary *mediaRemotePairedDevices;
@property (retain, nonatomic) NSData *outputKey; // ivar: _outputKey
@property (retain, nonatomic) NSMutableData *outputNonce; // ivar: _outputNonce
@property (readonly, nonatomic) MRDeviceInfo *pairedPeerDevice;
@property (readonly, nonatomic) NSArray *pairedPeerDevices;
@property (nonatomic) unsigned int pairingFlags; // ivar: _pairingFlags
@property (readonly, nonatomic) NSString *peerIdentifier;
@property (readonly, nonatomic) NSUInteger state; // ivar: _state


-(BOOL)deleteIdentityWithError:(*id)arg0 ;
-(BOOL)isPaired;
-(BOOL)isValid;
-(BOOL)shouldAutoRetryPairingExchange:(id)arg0 ;
-(id)addPeer;
-(id)decryptData:(id)arg0 withError:(*id)arg1 ;
-(id)encryptData:(id)arg0 withError:(*id)arg1 ;
-(id)initWithRole:(NSUInteger)arg0 device:(id)arg1 ;
-(id)initializePairingSession:(struct PairingSessionPrivate *)arg0 ;
-(id)pairedDevices;
-(id)removePeer;
-(id)updatePeer;
-(void)close;
-(void)dealloc;
-(void)handlePairingExchangeData:(id)arg0 completion:(id)arg1 ;
-(void)handlePairingFailureWithStatus:(int)arg0 ;
-(void)open;
-(void)openInState:(NSUInteger)arg0 ;


@end


#endif
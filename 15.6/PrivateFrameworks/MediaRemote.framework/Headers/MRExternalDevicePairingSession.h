// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MREXTERNALDEVICEPAIRINGSESSION_H
#define MREXTERNALDEVICEPAIRINGSESSION_H



#import "MRCryptoPairingSession.h"
#import "MRCryptoPairingSessionBlockDelegate.h"
#import "MRCoreUtilsPairingSession.h"

@interface MRExternalDevicePairingSession : MRCryptoPairingSession

@property (readonly, nonatomic) BOOL hasExchangedMessage;
@property (retain, nonatomic) MRCryptoPairingSessionBlockDelegate *pairingDelegate; // ivar: _pairingDelegate
@property (retain, nonatomic) MRCoreUtilsPairingSession *pairingSession; // ivar: _pairingSession
@property (readonly, nonatomic) NSUInteger state;
@property (readonly, nonatomic, getter=isUsingSystemPairing) BOOL usingSystemPairing;


-(BOOL)deleteIdentityWithError:(*id)arg0 ;
-(BOOL)isPaired;
-(BOOL)isValid;
-(id)decryptData:(id)arg0 withError:(*id)arg1 ;
-(id)encryptData:(id)arg0 withError:(*id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)pairedDevices;
-(id)removePeer;
-(id)updatePeer;
-(void)close;
-(void)handlePairingExchangeData:(id)arg0 completion:(id)arg1 ;
-(void)handlePairingFailureWithStatus:(int)arg0 ;
-(void)open;
-(void)setDelegate:(id)arg0 ;


@end


#endif
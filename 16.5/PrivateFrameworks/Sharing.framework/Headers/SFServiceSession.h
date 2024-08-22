// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFSERVICESESSION_H
#define SFSERVICESESSION_H

@class CUPairingSession;


#import "SFSession.h"
#import "SFService.h"

@interface SFServiceSession : SFSession {
    CUPairingSession *_pairSetupSession;
    unsigned int _pairSetupXID;
    CUPairingSession *_pairVerifySession;
}


@property (nonatomic) NSUInteger sendLastTicks; // ivar: _sendLastTicks
@property (retain, nonatomic) SFService *service; // ivar: _service


-(BOOL)pairingContainsACL:(id)arg0 ;
-(id)init;
-(id)pairingDeriveKeyForIdentifier:(id)arg0 keyLength:(NSUInteger)arg1 ;
-(int)_pairSetupCompleted:(int)arg0 ;
-(int)_pairVerifyCompleted:(int)arg0 ;
-(int)setEncryptionReadKey:(char *)arg0 readKeyLen:(NSUInteger)arg1 writeKey:(char *)arg2 writeKeyLen:(NSUInteger)arg3 ;
-(void)_hearbeatTimer;
-(void)_receivedObject:(id)arg0 flags:(unsigned int)arg1 ;
-(void)_receivedRequestID:(id)arg0 object:(id)arg1 flags:(unsigned int)arg2 ;
-(void)_receivedResponseID:(id)arg0 object:(id)arg1 flags:(unsigned int)arg2 ;
-(void)_sendFrameType:(unsigned char)arg0 data:(id)arg1 ;
-(void)_sendFrameType:(unsigned char)arg0 unencryptedObject:(id)arg1 ;
-(void)_sendRequestWithFlags:(unsigned int)arg0 object:(id)arg1 responseHandler:(id)arg2 ;
-(void)_sendWithFlags:(unsigned int)arg0 object:(id)arg1 ;
-(void)activate;
-(void)clearEncryptionInfo;
-(void)dealloc;
-(void)invalidate;
-(void)pairSetup:(id)arg0 start:(BOOL)arg1 ;
-(void)pairSetupWithFlags:(unsigned int)arg0 ;
-(void)pairVerify:(id)arg0 start:(BOOL)arg1 ;
-(void)receivedEncryptedData:(id)arg0 type:(unsigned char)arg1 ;
-(void)receivedStartRequest:(id)arg0 ;
-(void)receivedUnencryptedData:(id)arg0 type:(unsigned char)arg1 ;
-(void)sendEncryptedObject:(id)arg0 ;
-(void)sendFrameType:(unsigned char)arg0 data:(id)arg1 ;
-(void)sendRequestWithFlags:(unsigned int)arg0 object:(id)arg1 responseHandler:(id)arg2 ;
-(void)sendWithFlags:(unsigned int)arg0 object:(id)arg1 ;
-(void)sessionReceivedFrameType:(unsigned char)arg0 data:(id)arg1 ;
-(void)tryPIN:(id)arg0 ;


@end


#endif
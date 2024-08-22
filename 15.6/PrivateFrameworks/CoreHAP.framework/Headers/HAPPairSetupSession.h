// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAPPAIRSETUPSESSION_H
#define HAPPAIRSETUPSESSION_H

@class HMFObject, HMFTimer, NSData, NSString, NSMutableData;
@protocol HMFTimerDelegate, HAPEncryptedSession, OS_dispatch_queue, HAPPairSetupSessionDelegate;



@interface HAPPairSetupSession : HMFObject <HMFTimerDelegate, HAPEncryptedSession>



@property (retain, nonatomic) HMFTimer *backoffTimer; // ivar: _backoffTimer
@property (retain, nonatomic) NSData *certificate; // ivar: _certificate
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak) NSObject<HAPPairSetupSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isHandlingInvalidSetupCode) BOOL handlingInvalidSetupCode; // ivar: _handlingInvalidSetupCode
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger pairSetupType; // ivar: _pairSetupType
@property (readonly, nonatomic) *PairingSessionPrivate pairingSession; // ivar: _pairingSession
@property (readonly, nonatomic) NSInteger role; // ivar: _role
@property (retain, nonatomic) NSData *sessionReadKey; // ivar: _sessionReadKey
@property (retain, nonatomic) NSMutableData *sessionReadNonce; // ivar: _sessionReadNonce
@property (retain, nonatomic) NSData *sessionWriteKey; // ivar: _sessionWriteKey
@property (retain, nonatomic) NSMutableData *sessionWriteNonce; // ivar: _sessionWriteNonce
@property (nonatomic) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;


+(BOOL)isValidSetupCode:(id)arg0 ;
+(void)initialize;
-(BOOL)_initializeSession;
-(BOOL)handleSavePeerRequestWithPeerIdentity:(id)arg0 error:(*id)arg1 ;
-(BOOL)isSecureSession;
-(id)_handleLocalPairingIdentityRequestWithStatus:(*int)arg0 ;
-(id)_showSetupCodeWithError:(*id)arg0 ;
-(id)decryptData:(id)arg0 additionalAuthenticatedData:(id)arg1 error:(*id)arg2 ;
-(id)descriptionWithPointer:(BOOL)arg0 ;
-(id)encryptData:(id)arg0 additionalAuthenticatedData:(id)arg1 error:(*id)arg2 ;
-(id)getCertificate;
-(id)init;
-(id)initWithRole:(NSInteger)arg0 pairSetupType:(NSUInteger)arg1 delegate:(id)arg2 ;
-(id)shortDescription;
-(void)_handleBackoffExpiration;
-(void)_handlePairSetupExchangeComplete;
-(void)_handleProductData:(id)arg0 ;
-(void)_initializeServer;
-(void)_initiateClientPairSetupExchange;
-(void)_invalidate;
-(void)_processSetupCode:(id)arg0 error:(id)arg1 ;
-(void)_processSetupExchangeData:(id)arg0 error:(id)arg1 ;
-(void)_stopWithError:(id)arg0 ;
-(void)dealloc;
-(void)generateSessionKeys;
-(void)handleBackoffRequestWithTimeout:(CGFloat)arg0 ;
-(void)handleInvalidSetupCodeAndRestart:(BOOL)arg0 ;
-(void)handleSetupCodeRequest;
-(void)receivedSetupExchangeData:(id)arg0 error:(id)arg1 ;
-(void)start;
-(void)stop;
-(void)stopWithError:(id)arg0 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAPACCESSORYSERVERRELAY_H
#define HAPACCESSORYSERVERRELAY_H

@class NSOperationQueue, NSString, NSMutableArray, NSMapTable, HMFExponentialBackoffTimer;
@protocol HAPSecuritySessionDelegate, HAPFragmentationStreamDelegate, HMFTimerDelegate, HAPStreamDelegate;


#import "HAPAccessoryServer.h"
#import "HAPFragmentationStream.h"
#import "HAPCharacteristic.h"
#import "HAPSecuritySession.h"
#import "HAPRelayStream.h"

@interface HAPAccessoryServerRelay : HAPAccessoryServer <HAPSecuritySessionDelegate, HAPFragmentationStreamDelegate, HMFTimerDelegate, HAPStreamDelegate>



@property (readonly, nonatomic) NSOperationQueue *clientOperationQueue; // ivar: _clientOperationQueue
@property (nonatomic) NSUInteger configurationNumber; // ivar: _configurationNumber
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=hasDiscovered) BOOL discovered; // ivar: _discovered
@property (readonly, nonatomic) HAPFragmentationStream *fragmentationStream; // ivar: _fragmentationStream
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned short nextRequestTransactionIdentifier; // ivar: _nextRequestTransactionIdentifier
@property (readonly, nonatomic) NSOperationQueue *pairVerifyOperationQueue; // ivar: _pairVerifyOperationQueue
@property (weak, nonatomic) HAPCharacteristic *pairingsCharacteristic; // ivar: _pairingsCharacteristic
@property (readonly, nonatomic) NSMutableArray *pendingRequests; // ivar: _pendingRequests
@property (readonly, nonatomic) NSMapTable *pendingResponses; // ivar: _pendingResponses
@property (retain, nonatomic) HMFExponentialBackoffTimer *reachabilityProbeTimer; // ivar: _reachabilityProbeTimer
@property (readonly, nonatomic) NSOperationQueue *requestOperationQueue; // ivar: _requestOperationQueue
@property (retain, nonatomic) HAPSecuritySession *securitySession; // ivar: _securitySession
@property (nonatomic, getter=isSecuritySessionOpening) BOOL securitySessionOpening; // ivar: _securitySessionOpening
@property (nonatomic) BOOL shouldDiscover; // ivar: _shouldDiscover
@property (readonly, nonatomic) HAPRelayStream *stream; // ivar: _stream
@property (readonly) Class superclass;


-(BOOL)hasPairings;
-(BOOL)isPaired;
-(BOOL)removePairingForCurrentControllerOnQueue:(id)arg0 completion:(id)arg1 ;
-(BOOL)stopPairingWithError:(*id)arg0 ;
-(BOOL)tryPairingPassword:(id)arg0 error:(*id)arg1 ;
-(NSInteger)linkType;
-(id)_decryptData:(id)arg0 error:(*id)arg1 ;
-(id)_encryptData:(id)arg0 error:(*id)arg1 ;
-(id)initWithStream:(id)arg0 name:(id)arg1 identifier:(id)arg2 keyStore:(id)arg3 ;
-(id)securitySession:(id)arg0 didReceiveLocalPairingIdentityRequestWithError:(*id)arg1 ;
-(id)securitySession:(id)arg0 didReceiveRequestForPeerPairingIdentityWithIdentifier:(id)arg1 error:(*id)arg2 ;
-(unsigned short)_nextTransactionIdentifier;
-(void)_cancelAllQueuedOperationsWithError:(id)arg0 ;
-(void)_endReachabilityProbe;
-(void)_enqueueRequest:(id)arg0 ;
-(void)_establishSecuritySession;
-(void)_handleCharacteristicPrepareWriteResponse:(id)arg0 characteristicWriteRequestTuples:(id)arg1 prepareIdentifier:(id)arg2 error:(id)arg3 timeout:(CGFloat)arg4 completionQueue:(id)arg5 completionHandler:(id)arg6 ;
-(void)_handleCharacteristicReadResponse:(id)arg0 characteristics:(id)arg1 error:(id)arg2 completionQueue:(id)arg3 completionHandler:(id)arg4 ;
-(void)_handleCharacteristicWriteResponse:(id)arg0 characteristicWriteRequestTuples:(id)arg1 error:(id)arg2 completionQueue:(id)arg3 completionHandler:(id)arg4 ;
-(void)_handleFragmentedResponse:(id)arg0 transactionIdentifier:(unsigned short)arg1 error:(id)arg2 ;
-(void)_handleNotificationResponse:(id)arg0 ;
-(void)_handleReachabilityProbeFire;
-(void)_handleReceivedMessageData:(id)arg0 withIdentifier:(id)arg1 error:(id)arg2 ;
-(void)_handleSecuritySessionSetupExchangeData:(id)arg0 ;
-(void)_listPairingWithCompletionQueue:(id)arg0 pairingsCharacteristic:(id)arg1 completion:(id)arg2 ;
-(void)_parseAttributeDatabase:(id)arg0 configurationNumber:(id)arg1 ;
-(void)_parseServicesFromPrimaryAccessory:(id)arg0 ;
-(void)_performExecuteWriteValues:(id)arg0 prepareIdentifier:(id)arg1 timeout:(CGFloat)arg2 completionQueue:(id)arg3 completionHandler:(id)arg4 ;
-(void)_performTimedWriteValues:(id)arg0 timeout:(CGFloat)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3 ;
-(void)_performWriteValues:(id)arg0 timeout:(CGFloat)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3 ;
-(void)_readCharacteristicValues:(id)arg0 timeout:(CGFloat)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3 ;
-(void)_removePairingWithIdentifier:(id)arg0 publicKey:(id)arg1 pairingsCharacteristic:(id)arg2 queue:(id)arg3 completion:(id)arg4 ;
-(void)_resumeAllOperations;
-(void)_sendRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)_startAddPairingWithIdentifier:(id)arg0 publicKey:(id)arg1 admin:(BOOL)arg2 pairingsCharacteristic:(id)arg3 queue:(id)arg4 completion:(id)arg5 ;
-(void)_startReachabilityProbe;
-(void)_suspendAllOperations;
-(void)_tearDownSessionWithError:(id)arg0 ;
-(void)_writeCharacteristicValues:(id)arg0 timeout:(CGFloat)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3 ;
-(void)addPairing:(id)arg0 completionQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)continuePairingAfterAuthPrompt;
-(void)dealloc;
-(void)discoverAccessories;
// -(void)enableEvents:(BOOL)arg0 forCharacteristics:(id)arg1 withCompletionHandler:(id)arg2 queue:(unk)arg3  ;
-(void)fragmentationStream:(id)arg0 didCloseWithError:(id)arg1 ;
-(void)fragmentationStream:(id)arg0 didReceiveData:(id)arg1 transactionIdentifier:(unsigned short)arg2 error:(id)arg3 ;
-(void)identifyWithCompletion:(id)arg0 ;
-(void)listPairingsWithCompletionQueue:(id)arg0 completionHandler:(id)arg1 ;
-(void)readCharacteristicValues:(id)arg0 timeout:(CGFloat)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3 ;
-(void)removePairing:(id)arg0 completionQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)securitySession:(id)arg0 didCloseWithError:(id)arg1 ;
-(void)securitySession:(id)arg0 didReceiveSetupExchangeData:(id)arg1 ;
-(void)securitySessionDidOpen:(id)arg0 ;
-(void)securitySessionIsOpening:(id)arg0 ;
-(void)startPairingWithConsentRequired:(BOOL)arg0 config:(id)arg1 ownershipToken:(id)arg2 ;
-(void)stream:(id)arg0 didCloseWithError:(id)arg1 ;
-(void)stream:(id)arg0 didFailToWriteDataWithIdentifier:(id)arg1 error:(id)arg2 ;
-(void)stream:(id)arg0 didReceiveData:(id)arg1 withIdentifier:(id)arg2 ;
-(void)streamDidResume:(id)arg0 ;
-(void)streamDidSuspend:(id)arg0 ;
-(void)timerDidFire:(id)arg0 ;
-(void)writeCharacteristicValues:(id)arg0 timeout:(CGFloat)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSECUREELEMENT_H
#define PKSECUREELEMENT_H

@class NSMutableArray, NSHashTable, NFSecureElement, NSArray, NSString, NSUUID, NSNumber;
@protocol NFHardwareEventListener, NFRemoteAdminEventListener, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PKSecureElement : NSObject <NFHardwareEventListener, NFRemoteAdminEventListener>

 {
    BOOL _deletingAllApplets;
    NSObject<OS_dispatch_source> *_deletingAllAppletsTimer;
    NSObject<OS_dispatch_queue> *_deletingAllAppletsTimerQueue;
    os_unfair_lock_s _deletingAllAppletsPropertyLock;
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    id *_secureElementSessionPrelude;
    id *_secureElementSessionPostlude;
    unsigned char _sessionCounter;
    BOOL _startingSession;
    BOOL _startingPrioritySession;
    BOOL _startingAsyncSession;
    NSMutableArray *_sessionAccessHandlers;
    NSMutableArray *_prioritySessionAccessHandlers;
    NSMutableArray *_asyncSessionAccessHandlers;
    NSHashTable *_observers;
    os_unfair_lock_s _observersLock;
    BOOL _registeredForHardwareUpdates;
    NFSecureElement *_secureElement;
    NSArray *_secureElementArray;
    id *_pairingChangeHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger hardwareVersion;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isDeletingAllApplets;
@property (readonly, nonatomic) BOOL isInRestrictedMode;
@property (readonly, nonatomic) BOOL isOwnable;
@property (readonly, nonatomic) BOOL isProductionSigned;
@property (readonly, nonatomic) NSUUID *ownerUserUUID;
@property (readonly, nonatomic) NSNumber *primaryJSBLSequenceCounter;
@property (readonly, nonatomic) NSString *primaryRegionTopic;
@property (readonly, nonatomic) NSString *primarySecureElementIdentifier;
@property (readonly, nonatomic) NSArray *secureElementIdentifiers;
@property (copy, nonatomic) id *secureElementSessionPostlude;
@property (copy, nonatomic) id *secureElementSessionPrelude;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger supportedTechnologies;


+(BOOL)hardwareSupportsExpressForAutomaticSelectionTechnologyType:(NSInteger)arg0 ;
+(BOOL)hardwareSupportsExpressForAutomaticSelectionTechnologyType:(NSInteger)arg0 outError:(*id)arg1 ;
+(BOOL)hardwareSupportsExpressMode:(id)arg0 ;
+(BOOL)isInFailForward;
+(BOOL)supportsExpressForAutomaticSelectionTechnologyType:(NSInteger)arg0 ;
+(BOOL)supportsExpressForAutomaticSelectionTechnologyType:(NSInteger)arg0 byHardware:(*BOOL)arg1 ;
+(BOOL)supportsExpressForAutomaticSelectionTechnologyType:(NSInteger)arg0 byHardware:(*BOOL)arg1 outError:(*id)arg2 ;
+(BOOL)supportsExpressMode:(id)arg0 ;
+(BOOL)supportsExpressMode:(id)arg0 byHardware:(*BOOL)arg1 ;
+(id)sharedSecureElement;
+(void)accessSecureElementManagerSessionWithSessionExchangeToken:(id)arg0 callbackQueue:(id)arg1 handler:(id)arg2 ;
+(void)accessSecureElementManagerSessionWithSessionExchangeToken:(id)arg0 handler:(id)arg1 ;
-(BOOL)hasRegistrationInformation;
-(BOOL)queueConnectionToServerForAppletIdentifiers:(id)arg0 ;
-(BOOL)queueConnectionToServerWithPushTopic:(id)arg0 ;
-(BOOL)setRegistrationInformation:(id)arg0 primaryRegionTopic:(id)arg1 ;
-(BOOL)supportsExpressModeForExpressPassType:(NSInteger)arg0 ;
-(NSUInteger)ownershipStateForUserUUID:(id)arg0 ;
-(id)_allAppletsWithSession:(id)arg0 ;
-(id)init;
-(void)SEPPairingInfoWithCompletion:(id)arg0 ;
-(void)_executeSecureElementAsyncSessionHandlersWithSession:(id)arg0 completion:(id)arg1 ;
-(void)_executeSecureElementSessionHandlersWithPriority:(BOOL)arg0 session:(id)arg1 ;
-(void)_registerPairingChangeHandler;
-(void)_startSecureElementManagerSessionWithType:(NSInteger)arg0 handler:(id)arg1 ;
-(void)_updateHardwareManagerListener;
-(void)accessAsyncSecureElementManagerSessionWithHandler:(id)arg0 ;
-(void)accessPrioritySecureElementManagerSessionWithHandler:(id)arg0 ;
-(void)accessSecureElementManagerSessionWithHandler:(id)arg0 ;
-(void)allAppletsAndCredentialsWithCompletion:(id)arg0 ;
-(void)allAppletsWithCompletion:(id)arg0 ;
-(void)appletWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)areAnyAppletsSuspendedWithCompletionHandler:(id)arg0 ;
-(void)checkFidoKeyPresenceForRelyingParty:(id)arg0 relyingPartyAccountHash:(id)arg1 fidoKeyHash:(id)arg2 completion:(id)arg3 ;
-(void)connectToServerWithPushTopic:(id)arg0 completion:(id)arg1 ;
-(void)consistencyCheckDeviceCredentialsWithCompletion:(id)arg0 ;
-(void)contactlessPaymentPassesAvailableDidChange;
-(void)createFidoKeyForRelyingParty:(id)arg0 relyingPartyAccountHash:(id)arg1 challenge:(id)arg2 externalizedAuth:(id)arg3 completion:(id)arg4 ;
-(void)dealloc;
-(void)generateSEEncryptionCertificateForSubCredentialId:(id)arg0 completion:(id)arg1 ;
-(void)generateTransactionKeyWithParameters:(id)arg0 withCompletion:(id)arg1 ;
-(void)generateTransactionKeyWithReaderIdentifier:(id)arg0 readerPublicKey:(id)arg1 withCompletion:(id)arg2 ;
-(void)initializeSecureElementQueuingServerConnection:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)markAllAppletsForDeletionWithExternalAuthorization:(id)arg0 completion:(id)arg1 ;
-(void)markAppletWithIdentifierForDeletion:(id)arg0 completion:(id)arg1 ;
-(void)markAppletsWithIdentifiersForDeletion:(id)arg0 completion:(id)arg1 ;
-(void)pairingStateWithCompletion:(id)arg0 ;
-(void)peerPaymentEnrollmentDataWithAlternateDSID:(id)arg0 completion:(id)arg1 ;
-(void)registerObserver:(id)arg0 ;
-(void)remoteAdminCleanupProgress:(CGFloat)arg0 ;
-(void)secureElement:(id)arg0 didChangeRestrictedMode:(BOOL)arg1 ;
-(void)signChallenge:(id)arg0 forPaymentApplication:(id)arg1 withCompletion:(id)arg2 ;
-(void)signChallenge:(id)arg0 signatureEntanglementMode:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)signWithFidoKeyForRelyingParty:(id)arg0 relyingPartyAccountHash:(id)arg1 fidoKeyHash:(id)arg2 challenge:(id)arg3 publicKeyIdentifier:(id)arg4 externalizedAuth:(id)arg5 completion:(id)arg6 ;
-(void)signatureForAuthToken:(id)arg0 completion:(id)arg1 ;
-(void)signedPlatformDataWithCompletion:(id)arg0 ;
-(void)stateInformationWithCompletion:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _IDSSERVICE_H
#define _IDSSERVICE_H

@class NSMutableDictionary, NSSet, NSMapTable, NSMutableSet, NSMutableArray, IDSServiceProperties, NSArray, NSDictionary, NSString, CUTDeferredTaskQueue;
@protocol IDSGroupContextControllerDelegate, IDSAccountControllerDelegate, IDSConnectionDelegatePrivate, IDSDaemonListenerProtocol;

#import <Foundation/Foundation.h>

#import "IDSAccountController.h"
#import "IDSQuickSwitchAcknowledgementTracker.h"
#import "IDSGroupContextController.h"
#import "IDSAccount.h"

@interface _IDSService : NSObject <IDSGroupContextControllerDelegate, IDSAccountControllerDelegate, IDSConnectionDelegatePrivate, IDSDaemonListenerProtocol>

 {
    IDSAccountController *_accountController;
    NSMutableDictionary *_uniqueIDToConnection;
    NSSet *_commands;
    NSMapTable *_delegateToInfo;
    id *_delegateContext;
    NSMutableDictionary *_protobufSelectors;
    NSMutableSet *_lastIsActiveSet;
    NSMutableArray *_linkedDevices;
    NSMutableDictionary *_subServices;
    BOOL _linkedDevicesLoaded;
    BOOL _pretendingToBeFull;
    BOOL _everHadDelegate;
    BOOL _clientIsSandboxed;
    unsigned int _listenerCaps;
    NSMutableDictionary *_uniqueIDToProgress;
    IDSQuickSwitchAcknowledgementTracker *_acknowledgementTracker;
    IDSServiceProperties *_serviceProperties;
    id *_pendingRegisteredIdentitiesBlock;
}


@property (readonly, nonatomic) NSArray *URIs;
@property (readonly, copy, nonatomic) NSSet *accounts;
@property (retain, nonatomic) NSDictionary *cachedPseudonymURIMap; // ivar: _cachedPseudonymURIMap
@property (retain, nonatomic) NSMutableDictionary *completionBlocksByRequestID; // ivar: _completionBlocksByRequestID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSArray *devices;
@property (readonly, retain, nonatomic) IDSGroupContextController *groupContextController; // ivar: _groupContextController
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) IDSAccount *iCloudAccount;
@property (readonly, copy, nonatomic) NSSet *internalAccounts;
@property (nonatomic) BOOL manuallyAckMessages; // ivar: _manuallyAckMessages
@property (readonly, nonatomic) NSInteger maxEffectivePayloadSize;
@property (nonatomic, getter=isPretendingToBeFull) BOOL pretendingToBeFull;
@property (readonly, nonatomic) NSDictionary *pseudonymURIMap;
@property (retain, nonatomic) CUTDeferredTaskQueue *pseudonymUpdateTaskQueue; // ivar: _pseudonymUpdateTaskQueue
@property (readonly, copy, nonatomic) NSString *serviceDomain;
@property (readonly, copy, nonatomic) IDSServiceProperties *serviceProperties;
@property (readonly) Class superclass;
@property (nonatomic) BOOL wantsPseudonymUpdates; // ivar: _wantsPseudonymUpdates


+(id)deviceForFromID:(id)arg0 fromDevices:(id)arg1 ;
+(void)serviceWithIdentifier:(id)arg0 commands:(id)arg1 manuallyAckMessages:(BOOL)arg2 delegateContext:(id)arg3 completion:(id)arg4 ;
-(BOOL)_canAccount:(id)arg0 sendWithFromID:(id)arg1 ;
-(BOOL)_isDroppingMessages;
-(BOOL)canSendMessageWithAccount:(id)arg0 toDestination:(id)arg1 ;
-(BOOL)cancelIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)cancelOpportunisticDataWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)getProgressUpdateForIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)sendAccessoryData:(id)arg0 toAccessoryID:(id)arg1 accessToken:(id)arg2 options:(id)arg3 identifier:(*id)arg4 error:(*id)arg5 ;
-(BOOL)sendAheadGroup:(id)arg0 priority:(NSInteger)arg1 options:(id)arg2 identifier:(*id)arg3 completion:(id)arg4 ;
-(BOOL)sendCertifiedDeliveryReceipt:(id)arg0 ;
-(BOOL)sendData:(id)arg0 fromAccount:(id)arg1 toDestinations:(id)arg2 priority:(NSInteger)arg3 options:(id)arg4 identifier:(*id)arg5 error:(*id)arg6 ;
-(BOOL)sendData:(id)arg0 priority:(NSInteger)arg1 options:(id)arg2 identifier:(*id)arg3 error:(*id)arg4 ;
-(BOOL)sendInvitation:(id)arg0 fromAccount:(id)arg1 toDestination:(id)arg2 options:(id)arg3 identifier:(*id)arg4 error:(*id)arg5 ;
-(BOOL)sendInvitationUpdate:(id)arg0 fromAccount:(id)arg1 toDestination:(id)arg2 options:(id)arg3 identifier:(*id)arg4 error:(*id)arg5 ;
-(BOOL)sendMessage:(id)arg0 fromAccount:(id)arg1 toDestinations:(id)arg2 priority:(NSInteger)arg3 options:(id)arg4 identifier:(*id)arg5 error:(*id)arg6 ;
-(BOOL)sendOpportunisticData:(id)arg0 options:(id)arg1 identifier:(id)arg2 error:(*id)arg3 ;
-(BOOL)sendProtobuf:(id)arg0 fromAccount:(id)arg1 toDestinations:(id)arg2 priority:(NSInteger)arg3 options:(id)arg4 identifier:(*id)arg5 error:(*id)arg6 ;
-(BOOL)sendResourceAtURL:(id)arg0 metadata:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(NSInteger)arg4 options:(id)arg5 identifier:(*id)arg6 error:(*id)arg7 ;
-(BOOL)sendServerMessage:(id)arg0 command:(id)arg1 fromAccount:(id)arg2 ;
-(BOOL)updateSubServices:(id)arg0 forDevice:(id)arg1 ;
-(NSInteger)_messageTypeForCommand:(id)arg0 ;
-(SEL)protobufActionForType:(unsigned short)arg0 isResponse:(BOOL)arg1 ;
-(id)_accountWithURI:(id)arg0 orPseudonym:(id)arg1 ;
-(id)_acknowledgementBlockWithDelegateIdentifier:(SEL)arg0 ;
-(id)_activeDeviceForUniqueID:(id)arg0 ;
-(id)_filteredAccountsFrom:(id)arg0 ;
-(id)_init;
-(id)_initWithDelegateContext:(id)arg0 ;
-(id)_payloadFromDecryptedData:(id)arg0 ;
-(id)_preferredURIForAccount:(id)arg0 ;
-(id)_sendingAccountForAccount:(id)arg0 ;
-(id)_sendingAccountForAccount:(id)arg0 destination:(id)arg1 fromID:(id)arg2 ;
-(id)daemonController;
-(id)daemonListener;
-(id)datagramChannelForSessionDestination:(id)arg0 error:(*id)arg1 ;
-(id)datagramChannelForSocketDescriptor:(int)arg0 error:(*id)arg1 ;
-(id)datagramConnectionForSessionDestination:(id)arg0 error:(*id)arg1 ;
-(id)datagramConnectionForSessionDestination:(id)arg0 uid:(unsigned int)arg1 error:(*id)arg2 ;
-(id)datagramConnectionForSocketDescriptor:(int)arg0 error:(*id)arg1 ;
-(id)deviceForFromID:(id)arg0 ;
-(id)deviceForUniqueID:(id)arg0 ;
-(id)devicesForBTUUID:(id)arg0 ;
-(id)firstRoutableInternetDestinationForSelf;
-(id)groupContextController:(id)arg0 accountsForAlises:(id)arg1 ;
-(id)initWithService:(id)arg0 commands:(id)arg1 manuallyAckMessages:(BOOL)arg2 delegateContext:(id)arg3 ;
-(id)linkedDeviceForFromID:(id)arg0 withRelationship:(NSInteger)arg1 ;
-(id)linkedDevicesWithRelationship:(NSInteger)arg0 ;
-(id)pseudonymForPseudonymURI:(id)arg0 ;
-(id)pseudonymPropertiesWithFeatureID:(id)arg0 scopeID:(id)arg1 expiryDurationInSeconds:(CGFloat)arg2 ;
-(id)pseudonymsForMaskedURI:(id)arg0 ;
-(id)pseudonymsForMaskedURI:(id)arg0 matchingProperties:(id)arg1 ;
-(id)streamConnectionForSessionDestination:(id)arg0 error:(*id)arg1 ;
-(id)streamConnectionForSocketDescriptor:(int)arg0 error:(*id)arg1 ;
-(id)uriForFromID:(id)arg0 ;
-(void)OTRTestCallback:(id)arg0 time:(CGFloat)arg1 error:(id)arg2 ;
-(void)_callDelegatesForDevicesChanged;
// -(void)_callDelegatesRespondingToSelector:(SEL)arg0 withPreCallbacksBlock:(id)arg1 callbackBlock:(unk)arg2 postCallbacksBlock:(id)arg3  ;
// -(void)_callDelegatesRespondingToSelector:(SEL)arg0 withPreCallbacksBlock:(id)arg1 callbackBlock:(unk)arg2 postCallbacksBlock:(id)arg3 group:(unk)arg4  ;
-(void)_callDelegatesWithBlock:(id)arg0 ;
// -(void)_callDelegatesWithBlock:(id)arg0 group:(unk)arg1  ;
-(void)_callIsActiveChanged;
-(void)_callLinkedDevicesChanged;
-(void)_calloutPseudonymsDidUpdate;
-(void)_disableAccount:(id)arg0 ;
-(void)_enableAccount:(id)arg0 ;
-(void)_enforceSandboxPolicy;
-(void)_handlePretendingToBeFullWithIdentifier:(*id)arg0 ;
-(void)_loadCachedLinkedDevices;
-(void)_logConnectionMap;
-(void)_processAccountSet:(id)arg0 ;
-(void)_reloadCachedLinkedDevices;
-(void)_sendMissingMessageMetric:(id)arg0 ;
-(void)_setupNewConnectionForAccount:(id)arg0 ;
-(void)_stopAwaitingQuickSwitchAcknowledgementFromDelegateWithIdentifier:(id)arg0 ;
-(void)_tearDownConnectionForUniqueID:(id)arg0 ;
-(void)_updateLinkedDevicesWithDevicesInfo:(id)arg0 ;
-(void)account:(id)arg0 pseudonymsChanged:(id)arg1 ;
-(void)accountController:(id)arg0 accountAdded:(id)arg1 ;
-(void)accountController:(id)arg0 accountDisabled:(id)arg1 ;
-(void)accountController:(id)arg0 accountEnabled:(id)arg1 ;
-(void)accountController:(id)arg0 accountRemoved:(id)arg1 ;
-(void)addDelegate:(id)arg0 queue:(id)arg1 ;
-(void)connection:(id)arg0 account:(id)arg1 receivedGroupSessionParticipantDataUpdate:(id)arg2 ;
-(void)connection:(id)arg0 account:(id)arg1 receivedGroupSessionParticipantUpdate:(id)arg2 ;
-(void)connection:(id)arg0 account:(id)arg1 sessionInviteReceived:(id)arg2 fromID:(id)arg3 transportType:(id)arg4 options:(id)arg5 context:(id)arg6 messageContext:(id)arg7 ;
-(void)connection:(id)arg0 connectedDevicesChanged:(id)arg1 ;
-(void)connection:(id)arg0 devicesChanged:(id)arg1 ;
-(void)connection:(id)arg0 didFlushCacheForRemoteURI:(id)arg1 fromURI:(id)arg2 guid:(id)arg3 ;
-(void)connection:(id)arg0 didHintCheckingTransportLogWithReason:(NSInteger)arg1 ;
-(void)connection:(id)arg0 didSendOpportunisticDataWithIdentifier:(id)arg1 toIDs:(id)arg2 ;
-(void)connection:(id)arg0 didUpdateDeviceIdentity:(id)arg1 error:(id)arg2 context:(id)arg3 ;
-(void)connection:(id)arg0 identifier:(id)arg1 alternateCallbackID:(id)arg2 willSendToDestinations:(id)arg3 skippedDestinations:(id)arg4 registrationPropertyToDestinations:(id)arg5 ;
-(void)connection:(id)arg0 identifier:(id)arg1 didSendWithSuccess:(BOOL)arg2 error:(id)arg3 context:(id)arg4 ;
-(void)connection:(id)arg0 identifier:(id)arg1 fromID:(id)arg2 hasBeenDeliveredWithContext:(id)arg3 ;
-(void)connection:(id)arg0 incomingAccessoryData:(id)arg1 fromID:(id)arg2 context:(id)arg3 ;
-(void)connection:(id)arg0 incomingAccessoryReportMessage:(id)arg1 accessoryID:(id)arg2 controllerID:(id)arg3 context:(id)arg4 ;
-(void)connection:(id)arg0 incomingData:(id)arg1 fromID:(id)arg2 context:(id)arg3 ;
-(void)connection:(id)arg0 incomingEngramMessage:(id)arg1 fromID:(id)arg2 context:(id)arg3 ;
-(void)connection:(id)arg0 incomingGroupData:(id)arg1 fromID:(id)arg2 context:(id)arg3 ;
-(void)connection:(id)arg0 incomingInvitation:(id)arg1 fromID:(id)arg2 context:(id)arg3 ;
-(void)connection:(id)arg0 incomingInvitationUpdate:(id)arg1 fromID:(id)arg2 context:(id)arg3 ;
-(void)connection:(id)arg0 incomingMessage:(id)arg1 fromID:(id)arg2 context:(id)arg3 ;
-(void)connection:(id)arg0 incomingOpportunisticData:(id)arg1 withIdentifier:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)connection:(id)arg0 incomingPendingMessageFromID:(id)arg1 context:(id)arg2 ;
-(void)connection:(id)arg0 incomingProtobuf:(id)arg1 fromID:(id)arg2 context:(id)arg3 ;
-(void)connection:(id)arg0 incomingTopLevelMessage:(id)arg1 fromID:(id)arg2 messageContext:(id)arg3 ;
-(void)connection:(id)arg0 isActiveChanged:(BOOL)arg1 ;
-(void)connection:(id)arg0 messageIdentifier:(id)arg1 alternateCallbackID:(id)arg2 updatedWithResponseCode:(NSInteger)arg3 error:(id)arg4 lastCall:(BOOL)arg5 messageContext:(id)arg6 ;
-(void)connection:(id)arg0 nearbyDevicesChanged:(id)arg1 ;
-(void)daemonConnected;
-(void)daemonDisconnected;
-(void)dealloc;
-(void)didSwitchActivePairedDevice:(id)arg0 forService:(id)arg1 wasHandled:(*BOOL)arg2 ;
-(void)finishedProvisioningPseudonym:(id)arg0 success:(BOOL)arg1 error:(id)arg2 forRequestUUID:(id)arg3 ;
-(void)finishedRenewingPseudonym:(id)arg0 success:(BOOL)arg1 error:(id)arg2 requestUUID:(id)arg3 ;
-(void)finishedReportingRequestUUID:(id)arg0 withError:(id)arg1 ;
-(void)finishedRevokingPseudonymWithSuccess:(BOOL)arg0 error:(id)arg1 requestUUID:(id)arg2 ;
-(void)groupContextController:(id)arg0 didCreateGroup:(id)arg1 ;
-(void)performGroupTask:(id)arg0 ;
-(void)provisionPseudonymForURI:(id)arg0 withProperties:(id)arg1 requestProperties:(id)arg2 completion:(id)arg3 ;
-(void)provisionPseudonymWithProperties:(id)arg0 requestProperties:(id)arg1 completion:(id)arg2 ;
-(void)removeDelegate:(id)arg0 ;
-(void)renewPseudonym:(id)arg0 forUpdatedExpiryEpoch:(CGFloat)arg1 requestProperties:(id)arg2 completion:(id)arg3 ;
-(void)reportAction:(NSInteger)arg0 ofTempURI:(id)arg1 fromURI:(id)arg2 withCompletion:(id)arg3 ;
-(void)resendSubServicesToDaemonForCurrentDevice;
-(void)revokePseudonym:(id)arg0 requestProperties:(id)arg1 completion:(id)arg2 ;
-(void)scheduleTransactionLogTask:(id)arg0 ;
-(void)sendAckForMessageWithContext:(id)arg0 ;
-(void)service:(id)arg0 linkedDevicesUpdated:(id)arg1 ;
-(void)service:(id)arg0 tinkerDeviceAdded:(id)arg1 ;
-(void)service:(id)arg0 tinkerDeviceRemoved:(id)arg1 ;
-(void)service:(id)arg0 tinkerDeviceUpdated:(id)arg1 ;
-(void)setLinkPreferences:(id)arg0 ;
-(void)setPreferInfraWiFi:(BOOL)arg0 ;
-(void)setProtobufAction:(SEL)arg0 forProtobufType:(unsigned short)arg1 isResponse:(BOOL)arg2 ;
-(void)startOTRTest:(NSInteger)arg0 ;
-(void)testCloudQRConnection;


@end


#endif
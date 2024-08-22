// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUCALLSERVICESINTERFACE_H
#define TUCALLSERVICESINTERFACE_H

@class NSArray, NSString, NSDate, NSMapTable, NSXPCConnection;
@protocol TUCallServicesXPCClient, TUCallServicesProxyCallActions, TUCallServicesClientCapabilitiesActions, TUAudioDeviceControllerActions, TURouteControllerActions, TUCallFilterControllerActions, TUCallServicesXPCServer, TUCallContainerPrivate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TUCallCenter.h"
#import "TUCallNotificationManager.h"
#import "TUCallServicesClientCapabilities.h"
#import "TUFeatureFlags.h"
#import "TURouteController.h"

@interface TUCallServicesInterface : NSObject <TUCallServicesXPCClient, TUCallServicesProxyCallActions, TUCallServicesClientCapabilitiesActions, TUAudioDeviceControllerActions, TURouteControllerActions, TUCallFilterControllerActions>



@property (readonly, nonatomic) NSObject<TUCallServicesXPCServer> *asynchronousServer;
@property (weak, nonatomic) TUCallCenter *callCenter; // ivar: _callCenter
@property (readonly, nonatomic) NSObject<TUCallContainerPrivate> *callContainer;
@property (readonly, nonatomic) TUCallNotificationManager *callNotificationManager; // ivar: _callNotificationManager
@property (readonly, nonatomic) TUCallServicesClientCapabilities *callServicesClientCapabilities; // ivar: _callServicesClientCapabilities
@property (readonly, nonatomic) int connectionRequestNotificationToken; // ivar: _connectionRequestNotificationToken
@property (copy, nonatomic) NSArray *currentCalls; // ivar: _currentCalls
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TUFeatureFlags *featureFlags; // ivar: _featureFlags
@property (nonatomic) BOOL hasReceivedInitialState; // ivar: _hasReceivedInitialState
@property (nonatomic) BOOL hasRequestedInitialState; // ivar: _hasRequestedInitialState
@property (nonatomic) BOOL hasServerLaunched; // ivar: _hasServerLaunched
@property (readonly) NSUInteger hash;
@property (nonatomic) NSDate *lastDaemonConnectTime; // ivar: _lastDaemonConnectTime
@property (copy, nonatomic) NSArray *localProxyCalls; // ivar: _localProxyCalls
@property (retain, nonatomic) TURouteController *localRouteController; // ivar: _localRouteController
@property (retain, nonatomic) TURouteController *pairedHostDeviceRouteController; // ivar: _pairedHostDeviceRouteController
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) *void queueContext;
@property (weak, nonatomic) NSObject<TUCallServicesXPCServer> *server; // ivar: _server
@property (readonly, nonatomic, getter=isServerLocal) BOOL serverLocal;
@property (nonatomic) BOOL shouldHandleServerDisconnect; // ivar: _shouldHandleServerDisconnect
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMapTable *uniqueProxyIdentifierToProxyCall; // ivar: _uniqueProxyIdentifierToProxyCall
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


-(BOOL)containsRestrictedHandle:(id)arg0 forBundleIdentifier:(id)arg1 performSynchronously:(BOOL)arg2 ;
-(BOOL)isUnknownAddress:(id)arg0 normalizedAddress:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(BOOL)shouldRestrictAddresses:(id)arg0 forBundleIdentifier:(id)arg1 performSynchronously:(BOOL)arg2 ;
-(BOOL)willRestrictAddresses:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(NSUInteger)filterStatusForAddresses:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(id)_proxyCallWithCall:(id)arg0 ;
-(id)_proxyCallWithUniqueProxyIdentifier:(id)arg0 ;
-(id)asynchronousServerWithErrorHandler:(id)arg0 ;
-(id)dialWithRequest:(id)arg0 completion:(id)arg1 ;
-(id)init;
-(id)initWithQueue:(id)arg0 callCenter:(id)arg1 ;
-(id)joinConversationWithRequest:(id)arg0 ;
-(id)policyForAddresses:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(id)routesByUniqueIdentifierForRouteController:(id)arg0 ;
-(id)synchronousServerWithErrorHandler:(id)arg0 ;
-(void)_handleCurrentCallsChanged:(id)arg0 callsDisconnected:(id)arg1 ;
-(void)_ignorePendingServerDisconnectionHandlers;
-(void)_registerCall:(id)arg0 ;
-(void)_setUpXPCConnection;
-(void)_tearDownXPCConnection;
-(void)_updateCurrentCalls:(id)arg0 ;
-(void)_updateCurrentCalls:(id)arg0 withNotificationsUsingUpdatedCalls:(id)arg1 ;
-(void)_updateCurrentCallsWithoutNotifications:(id)arg0 ;
-(void)activateInCallUIWithActivityContinuationIdentifier:(id)arg0 ;
-(void)answerCallWithRequest:(id)arg0 ;
-(void)dealloc;
-(void)disconnectAllCalls;
-(void)disconnectCallWithUniqueProxyIdentifier:(id)arg0 ;
-(void)disconnectCurrentCallAndActivateHeld;
-(void)enteredBackgroundForAllCalls;
-(void)enteredForegroundForCallWithUniqueProxyIdentifier:(id)arg0 ;
-(void)fetchCurrentCalls;
-(void)groupCallWithUniqueProxyIdentifier:(id)arg0 withOtherCallWithUniqueProxyIdentifier:(id)arg1 ;
-(void)handleCurrentCallsChanged:(id)arg0 callDisconnected:(id)arg1 ;
-(void)handleFrequencyChangedTo:(id)arg0 inDirection:(int)arg1 forCallsWithUniqueProxyIdentifiers:(id)arg2 ;
-(void)handleLocalRoutesByUniqueIdentifierUpdated:(id)arg0 ;
-(void)handleMeterLevelChangedTo:(float)arg0 inDirection:(int)arg1 forCallsWithUniqueProxyIdentifiers:(id)arg2 ;
-(void)handleNotificationName:(id)arg0 forCallWithUniqueProxyIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(void)handlePairedHostDeviceRoutesByUniqueIdentifierUpdated:(id)arg0 ;
-(void)handleServerDisconnect;
-(void)handleServerDisconnectIfNecessary;
-(void)handleServerReconnect;
-(void)holdCallWithUniqueProxyIdentifier:(id)arg0 ;
-(void)performBlockOnQueue:(id)arg0 ;
// -(void)performBlockOnQueue:(id)arg0 andWait:(unk)arg1  ;
-(void)pickRouteWithUniqueIdentifier:(id)arg0 shouldWaitUntilAvailable:(BOOL)arg1 forRouteController:(id)arg2 ;
-(void)playDTMFToneForCallWithUniqueProxyIdentifier:(id)arg0 key:(unsigned char)arg1 ;
-(void)pullCallFromClientUsingHandoffActivityUserInfo:(id)arg0 completion:(id)arg1 ;
-(void)pullHostedCallsFromPairedHostDevice;
-(void)pullPersistedChannel:(id)arg0 ;
-(void)pullRelayingCallsFromClient;
-(void)pushHostedCallsToDestination:(id)arg0 ;
-(void)pushRelayingCallsToHostWithSourceIdentifier:(id)arg0 ;
-(void)registerCall:(id)arg0 ;
-(void)reportLocalPreviewStoppedForCallWithUniqueProxyIdentifier:(id)arg0 ;
-(void)requestCurrentStateWithCompletionHandler:(id)arg0 ;
// -(void)requestCurrentStateWithCompletionHandler:(id)arg0 handleInitialState:(unk)arg1  ;
-(void)requestVideoUpgradeForCallWithUniqueProxyIdentifier:(id)arg0 ;
-(void)resetCallProvisionalStates;
-(void)sendHardPauseDigitsForCallWithUniqueProxyIdentifier:(id)arg0 ;
-(void)sendMMIOrUSSDCodeWithRequest:(id)arg0 ;
-(void)sendUserScoreToRTCReporting:(id)arg0 withScore:(int)arg1 ;
-(void)setBluetoothAudioFormatForCallWithUniqueProxyIdentifier:(id)arg0 bluetoothAudioFormat:(NSInteger)arg1 ;
-(void)setClientCapabilities:(id)arg0 ;
-(void)setCurrentAudioInputDeviceToDeviceWithUID:(id)arg0 ;
-(void)setCurrentAudioOutputDeviceToDeviceWithUID:(id)arg0 ;
-(void)setDownlinkMuted:(BOOL)arg0 forCallWithUniqueProxyIdentifier:(id)arg1 ;
-(void)setIsSendingVideo:(BOOL)arg0 forCallWithUniqueProxyIdentifier:(id)arg1 ;
-(void)setMixesVoiceWithMedia:(BOOL)arg0 forCallWithUniqueProxyIdentifier:(id)arg1 ;
-(void)setRemoteVideoPresentationSizeForCallWithUniqueProxyIdentifier:(id)arg0 size:(struct CGSize )arg1 ;
-(void)setRemoteVideoPresentationStateForCallWithUniqueProxyIdentifier:(id)arg0 presentationState:(int)arg1 ;
-(void)setScreenShareAttributesForCallWithUniqueProxyIdentifier:(id)arg0 attributes:(id)arg1 ;
-(void)setSharingScreen:(BOOL)arg0 attributes:(id)arg1 forCallWithUniqueProxyIdentifier:(id)arg2 ;
-(void)setSharingScreen:(BOOL)arg0 forCallWithUniqueProxyIdentifier:(id)arg1 ;
-(void)setTTYType:(int)arg0 forCallWithUniqueProxyIdentifier:(id)arg1 ;
-(void)setUplinkMuted:(BOOL)arg0 forCallWithUniqueProxyIdentifier:(id)arg1 ;
-(void)shouldAllowRingingCallStatusIndicator:(BOOL)arg0 ;
-(void)shouldSuppressInCallStatusBar:(BOOL)arg0 ;
-(void)startTransmissionForBargeCall:(id)arg0 sourceIsHandsfreeAccessory:(BOOL)arg1 ;
-(void)stopTransmissionForBargeCall:(id)arg0 sourceIsHandsfreeAccessory:(BOOL)arg1 ;
-(void)swapCalls;
-(void)tearDownXPCConnection;
-(void)ungroupCallWithUniqueProxyIdentifier:(id)arg0 ;
-(void)unholdCallWithUniqueProxyIdentifier:(id)arg0 ;
-(void)updateCallWithProxy:(id)arg0 ;
-(void)waitForInitialStateIfNecessary;
-(void)willEnterBackgroundForAllCalls;


@end


#endif
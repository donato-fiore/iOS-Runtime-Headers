// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBBRIDGECOMPANIONCONTROLLER_H
#define PBBRIDGECOMPANIONCONTROLLER_H

@class NSURLConnection, NSMutableData, NSMutableURLRequest, NSDictionary, NSString, RUIStyle, RUILoader;
@protocol IDSServiceDelegate, NSURLConnectionDelegate, RUILoaderDelegate, PBBridgeCompanionProtocol, OS_dispatch_queue, OS_dispatch_source, PBBridgeConnectionDelegate;


#import "PBBridgeIDSServiceDelegate.h"

@interface PBBridgeCompanionController : PBBridgeIDSServiceDelegate <IDSServiceDelegate, NSURLConnectionDelegate, RUILoaderDelegate, PBBridgeCompanionProtocol>

 {
    *__MKBAssertion _unlockPairingAssertion;
    NSObject<OS_dispatch_queue> *_timeoutTrackerQueue;
}


@property (retain, nonatomic) NSURLConnection *activationConnection; // ivar: _activationConnection
@property (retain, nonatomic) NSMutableData *activationData; // ivar: _activationData
@property (retain, nonatomic) NSMutableURLRequest *activationRequest; // ivar: _activationRequest
@property (nonatomic) int activationRetries; // ivar: _activationRetries
@property (nonatomic) int activationState; // ivar: _activationState
@property (retain, nonatomic) NSObject<OS_dispatch_source> *activationTimeout; // ivar: _activationTimeout
@property (retain, nonatomic) NSDictionary *allHeaders; // ivar: _allHeaders
@property (nonatomic) BOOL allowAnyHTTPSCertificate; // ivar: _allowAnyHTTPSCertificate
@property (copy, nonatomic) id *appViewListImageCompletion; // ivar: _appViewListImageCompletion
@property (nonatomic) BOOL awaitingCustomResponse; // ivar: _awaitingCustomResponse
@property (copy, nonatomic) id *buysOnWatchCredentialsIngestedCompletion; // ivar: _buysOnWatchCredentialsIngestedCompletion
@property (nonatomic) BOOL connectionFailed; // ivar: _connectionFailed
@property (copy, nonatomic) NSString *contentType; // ivar: _contentType
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PBBridgeConnectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned short granularActivationState; // ivar: _granularActivationState
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *initialSyncPrepCompletion; // ivar: _initialSyncPrepCompletion
@property (retain, nonatomic) NSString *internalLastSendMessageID; // ivar: _internalLastSendMessageID
@property (nonatomic) BOOL isEstablishingPairing; // ivar: _isEstablishingPairing
@property (copy, nonatomic) id *languageLocaleCompletion; // ivar: _languageLocaleCompletion
@property (copy, nonatomic) id *lockedOnAnimationCompletion; // ivar: _lockedOnAnimationCompletion
@property (nonatomic) BOOL nonSilentActivation; // ivar: _nonSilentActivation
@property (nonatomic) BOOL passcodeSet; // ivar: _passcodeSet
@property (copy, nonatomic) id *prepareWatchForForcedSUCompletion; // ivar: _prepareWatchForForcedSUCompletion
@property (copy, nonatomic) id *remoteAccountForDeviceCompletion; // ivar: _remoteAccountForDeviceCompletion
@property (copy, nonatomic) NSString *remoteActivationUserAgent; // ivar: _remoteActivationUserAgent
@property (retain, nonatomic) RUIStyle *remoteUIStyle; // ivar: _remoteUIStyle
@property (weak, nonatomic) NSObject<RUILoaderDelegate> *ruiDelegate; // ivar: _ruiDelegate
@property (retain, nonatomic) RUILoader *ruiLoader; // ivar: _ruiLoader
@property (nonatomic) BOOL selectedPairedUnlock; // ivar: _selectedPairedUnlock
@property (nonatomic) BOOL sentActivationRequest; // ivar: _sentActivationRequest
@property (nonatomic) BOOL sentSessionRequest; // ivar: _sentSessionRequest
@property (readonly) Class superclass;
@property (copy, nonatomic) id *tinkerCredentialsIngestedCompletion; // ivar: _tinkerCredentialsIngestedCompletion
@property (copy, nonatomic) id *tinkerWiFiCredentialsIngestedCompletion; // ivar: _tinkerWiFiCredentialsIngestedCompletion


+(id)displayNameWithFirstName:(id)arg0 lastName:(id)arg1 ;
+(void)iCloudFirstName:(*id)arg0 lastName:(*id)arg1 ;
+(void)meCardFirstName:(*id)arg0 lastName:(*id)arg1 ;
-(BOOL)_dumpActivationResquests;
-(BOOL)_sendRemoteCommandWithMessageID:(unsigned short)arg0 withArguments:(id)arg1 ;
-(BOOL)_sendResponseToMessage:(id)arg0 withResponseMessageID:(unsigned short)arg1 withArguments:(id)arg2 ;
-(BOOL)shouldHandleMessageType:(unsigned short)arg0 fromId:(id)arg1 ;
-(CGFloat)offsetEventTime;
-(id)_connectionWithRequest:(id)arg0 ;
-(id)connection:(id)arg0 willSendRequest:(id)arg1 redirectResponse:(id)arg2 ;
-(id)currentNetworks:(BOOL)arg0 ;
-(id)currentWiFiNetworkName;
-(id)customDescriptionOfMessageType:(unsigned short)arg0 ;
-(id)init;
-(id)serviceIdentifier;
-(id)viewControllerForAlertPresentation;
-(unsigned short)_testActivationResponseType;
-(void)_cleanup;
-(void)_processActivationData;
-(void)acknowledgeBuysOnWatchCredentialIngestion:(id)arg0 ;
-(void)activationTimedOut;
-(void)beganWaitingForPresentationOfActivationEvent;
-(void)beganWaitingForUserResponseToActivationEvent;
-(void)beginSetupTransaction;
-(void)connection:(id)arg0 didFailWithError:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveData:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveResponse:(id)arg1 ;
-(void)connectionDidFinishLoading:(id)arg0 ;
-(void)enableSiriForGizmo:(id)arg0 ;
-(void)endSetupTransaction;
-(void)getCompanionLanguage:(id)arg0 ;
-(void)getCompanionRegion:(id)arg0 ;
-(void)getSiriState:(id)arg0 ;
-(void)gizmoActivationFailed:(id)arg0 ;
-(void)gizmoBecameAvailableWantsConfirmation:(id)arg0 ;
-(void)gizmoDidBeginActivating:(id)arg0 ;
-(void)gizmoDidBeginUnlockPairing:(id)arg0 ;
-(void)gizmoDidEndPasscodeChange:(id)arg0 ;
-(void)gizmoDidEndPasscodeCreation:(id)arg0 ;
-(void)gizmoDidEndUnlockPairing:(id)arg0 ;
-(void)gizmoDidFinishActivating:(id)arg0 ;
-(void)gizmoFailedToCreatePasscode:(id)arg0 ;
-(void)handleAppViewListImageResponse:(id)arg0 ;
-(void)handleOfflineTermsResponse:(id)arg0 ;
-(void)handlePerformanceResults:(id)arg0 ;
-(void)handleRemoteActivationDetails:(id)arg0 ;
-(void)handleWarrantySentinelResponse:(id)arg0 ;
-(void)invalidateTimeoutTimerWithNewActivationGranularState:(unsigned short)arg0 ;
-(void)loader:(id)arg0 didFailWithError:(id)arg1 ;
-(void)loader:(id)arg0 didReceiveHTTPResponse:(id)arg1 ;
-(void)loader:(id)arg0 receivedObjectModel:(id)arg1 actionSignal:(NSUInteger)arg2 ;
-(void)objectModel:(id)arg0 pressedButton:(id)arg1 attributes:(id)arg2 ;
-(void)queryGizmoForOfflineTerms;
-(void)queryGizmoForShowWarrantySentinelAndRestoreDeviceName:(id)arg0 ;
-(void)refreshTimeoutTimerWithNewActivationGranularState:(unsigned short)arg0 ;
-(void)requestProxiedDeviceForWatchWithCompletion:(id)arg0 ;
-(void)retrieveAppViewListImageFromGizmo:(struct CGSize )arg0 completion:(id)arg1 ;
-(void)returnedRemoteAccountForDevice:(id)arg0 ;
-(void)sendAllTinkerWirelessCredentials:(BOOL)arg0 ;
-(void)sendBuysOnWatchUsername:(id)arg0 andPassword:(id)arg1 withCompletion:(id)arg2 ;
-(void)sendComputedTimeZoneToGizmo;
-(void)sendDemoWatchWirelessCredentials;
-(void)sendGizmoPasscodeRestrictions;
-(void)sendProxyActivationRequest:(id)arg0 ;
-(void)sendProxyActivationWithCustomRequest:(id)arg0 ;
-(void)sendTinkerAccountCredentialsWithContext:(id)arg0 completion:(id)arg1 ;
-(void)setupServiceMessageSelectorMappings;
-(void)startEstablishingPairing;
-(void)tellGizmoToBeginActivation;
-(void)tellGizmoToDeleteWarrantySentinel;
-(void)tellGizmoToKeepAliveForActivationEvent;
-(void)tellGizmoToPopToControllerType:(NSUInteger)arg0 ;
-(void)tellGizmoToPrepareForInitialSyncWithCompletion:(id)arg0 ;
-(void)tellGizmoToPushControllerType:(NSUInteger)arg0 ;
-(void)tellGizmoToRetryActivation;
-(void)tellGizmoToSetCrownOrientationRight:(BOOL)arg0 ;
-(void)tellGizmoToSetDiagnosticsEnabled:(BOOL)arg0 ;
-(void)tellGizmoToSetFitnessRouteTrackingEnabled:(BOOL)arg0 ;
-(void)tellGizmoToSetLocationEnabled:(BOOL)arg0 ;
-(void)tellGizmoToSetMessagesinCloudEnabled:(BOOL)arg0 ;
-(void)tellGizmoToShowLockedOnAnimationTimeToFlash:(CGFloat)arg0 animationCompletion:(id)arg1 ;
-(void)tellGizmoToUpdateNanoRegistryToNormalState;
-(void)tellGizmoToUpdateSyncProgressTo:(CGFloat)arg0 withState:(NSInteger)arg1 ;
-(void)tellWatchLanguagesAndLocaleSupportingTermOfAddress:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)tellWatchToChangeDeviceNameFor:(id)arg0 ;
-(void)tellWatchToPrepareForForcedSUWithCompletion:(id)arg0 ;
-(void)tellWatchToSetLauncherViewMode:(NSInteger)arg0 ;
-(void)tellWatchToSetSiriEnabled:(BOOL)arg0 ;
-(void)tinkerFinishedHealthSharingOptIn:(id)arg0 ;
-(void)tinkerWatchIngestedCredentials:(id)arg0 ;
-(void)transportBecameReachable;
-(void)transportBecameUnreachable;
-(void)watchDidIngestWirelessCredentials:(id)arg0 ;
-(void)watchDidPrepareForForcedSU:(id)arg0 ;
-(void)watchDidPrepareForInitialSync:(id)arg0 ;
-(void)watchDidRespondWithLanguageAndLocaleStatus:(id)arg0 ;


@end


#endif
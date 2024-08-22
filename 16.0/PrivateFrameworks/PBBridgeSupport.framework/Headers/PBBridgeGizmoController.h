// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBBRIDGEGIZMOCONTROLLER_H
#define PBBRIDGEGIZMOCONTROLLER_H

@class NSTimer, NSString;
@protocol IDSServiceDelegate, PBBridgeGizmoProtocol, PBBridgeConnectionDelegate;


#import "PBBridgeIDSServiceDelegate.h"

@interface PBBridgeGizmoController : PBBridgeIDSServiceDelegate <IDSServiceDelegate, PBBridgeGizmoProtocol>



@property (copy, nonatomic) id *activationCompletion; // ivar: _activationCompletion
@property (nonatomic) unsigned short activationState; // ivar: _activationState
@property (retain, nonatomic) NSTimer *activationTimeout; // ivar: _activationTimeout
@property (readonly, nonatomic) BOOL canBeginActivation; // ivar: _canBeginActivation
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PBBridgeConnectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *enableSiriCompletion; // ivar: _enableSiriCompletion
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *internalLastSendMessageID; // ivar: _internalLastSendMessageID
@property (readonly, nonatomic) NSString *languageIdentifer; // ivar: _languageIdentifer
@property (readonly, nonatomic) BOOL readyToCreatePasscode; // ivar: _readyToCreatePasscode
@property (readonly, nonatomic) NSString *regionIdentifer; // ivar: _regionIdentifer
@property (copy, nonatomic) id *sessionCompletion; // ivar: _sessionCompletion
@property (copy, nonatomic) id *siriStateCompletion; // ivar: _siriStateCompletion
@property (readonly) Class superclass;
@property (copy, nonatomic) id *updateLanguageCompletion; // ivar: _updateLanguageCompletion
@property (copy, nonatomic) id *updateRegionCompletion; // ivar: _updateRegionCompletion


+(id)prepareOfflineTermsResponse:(id)arg0 ;
+(id)warrantyFilePathForLanguageCode:(id)arg0 countryCode:(id)arg1 ;
-(BOOL)_getActivationData:(BOOL)arg0 forRequest:(id)arg1 withCompletion:(id)arg2 ;
-(BOOL)_sendRemoteCommandWithMessageID:(unsigned short)arg0 withArguments:(id)arg1 ;
-(BOOL)_sendResponseToMessage:(id)arg0 withResponseMessageID:(unsigned short)arg1 withArguments:(id)arg2 ;
-(BOOL)getActivationDataAndHeadersForRequest:(id)arg0 withCompletion:(id)arg1 ;
-(BOOL)getActivationDataForRequest:(id)arg0 withCompletion:(id)arg1 ;
-(BOOL)getSessionDataForRequest:(id)arg0 withCompletion:(id)arg1 ;
-(BOOL)reportRemoteActivationFailureError:(id)arg0 ;
-(BOOL)sendCompanionPerformanceResults;
-(BOOL)tellCompanionGizmoBeganActivating;
-(BOOL)tellCompanionGizmoFailedActivating:(id)arg0 ;
-(BOOL)tellCompanionGizmoFinishedActivating;
-(BOOL)tellCompanionGizmoFinishedActivatingAsDeKOTA;
-(BOOL)tellCompanionThatLanguageAndLanguageCompletedWithStatus:(unsigned short)arg0 ;
-(BOOL)updateLanguageIdentifierWithCompletion:(id)arg0 ;
-(BOOL)updateRegionIdentifierWithCompletion:(id)arg0 ;
-(id)customDescriptionOfMessageType:(unsigned short)arg0 ;
-(id)init;
-(id)serviceIdentifier;
-(void)_recordThatWatchFinishedActivating;
-(void)activationTimeout:(id)arg0 ;
-(void)beganAwaitingAbilityToActivate;
-(void)companionBecameAvailableWantsConfirmation:(id)arg0 ;
-(void)companionDidSendLanguageAndLocale:(id)arg0 ;
-(void)companionDidSendTinkerWirelessCredentials:(id)arg0 ;
-(void)companionDidSendWirelessCredentials:(id)arg0 ;
-(void)companionTermsResponse:(id)arg0 ;
-(void)doInitialSyncPrep:(id)arg0 ;
-(void)enableSiriForGizmoWithCompletion:(id)arg0 ;
-(void)enabledSiri:(id)arg0 ;
-(void)endSetupTransaction;
-(void)fetchTermsAndConditions:(id)arg0 ;
-(void)getSiriStateWithCompletion:(id)arg0 ;
-(void)gotSiriState:(id)arg0 ;
-(void)handleActivationData:(id)arg0 ;
-(void)handleBuysOnWatchIngestion:(id)arg0 ;
-(void)handleOfflineTermsRequest:(id)arg0 ;
-(void)handleRenameDeviceRequest:(id)arg0 ;
-(void)handleSetLauncherViewModeForTinker:(id)arg0 ;
-(void)handleWarrantySentinelRequest:(id)arg0 ;
-(void)ingestTinkerCredentials:(id)arg0 ;
-(void)invalidateTimeoutTimer;
-(void)popToControllerType:(id)arg0 ;
-(void)prepareForForcedWatchSU:(id)arg0 ;
-(void)provideAppViewListImage:(id)arg0 ;
-(void)pushControllerType:(id)arg0 ;
-(void)refreshTimeoutTimer;
-(void)remoteRequestToKeepAlive:(id)arg0 ;
-(void)retryActivation:(id)arg0 ;
-(void)returnProxiedDeviceForDeviceWithData:(id)arg0 ;
-(void)setCanBeginActivating:(id)arg0 ;
-(void)setCompanionLanguage:(id)arg0 ;
-(void)setCompanionRegion:(id)arg0 ;
-(void)setComputedTimeZone:(id)arg0 ;
-(void)setCrownOrientationRight:(id)arg0 ;
-(void)setDeviceName:(id)arg0 ;
-(void)setDiagnosticsEnabled:(id)arg0 ;
-(void)setFitnessRouteAuthorizationForTinker:(id)arg0 ;
-(void)setLocationEnabled:(id)arg0 ;
-(void)setMessagesInCloudEnabledForTinker:(id)arg0 ;
-(void)setPasscodeRestrictions:(id)arg0 ;
-(void)setSiriEnabled:(id)arg0 ;
-(void)setupServiceMessageSelectorMappings;
-(void)showLockedOnAnimation:(id)arg0 ;
-(void)tellCompanionGizmoFinishedHealthSharingOptInWithSelection:(BOOL)arg0 ;
-(void)tellCompanionThatGizmoFailedToCreatePasscode:(int)arg0 ;
-(void)tellCompanionThatGizmoFinishedChangingPasscode:(BOOL)arg0 isLong:(BOOL)arg1 ;
-(void)tellCompanionThatGizmoFinishedSettingPasscode:(BOOL)arg0 isLong:(BOOL)arg1 ;
-(void)tellCompanionThatGizmoFinishedUnlockPairing:(BOOL)arg0 ;
-(void)tellCompanionThatGizmoStartedUnlockPairing;
-(void)transportBecameReachable;
-(void)transportBecameUnreachable;
-(void)updateNanoRegistryToNormalState:(id)arg0 ;
-(void)updateSynchProgress:(id)arg0 ;
-(void)waitForDynamicActivationEventPresentation:(id)arg0 ;
-(void)waitForUserResponseToDynamicEventPresentation:(id)arg0 ;


@end


#endif
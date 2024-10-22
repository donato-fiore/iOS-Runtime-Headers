// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUCALLCENTER_H
#define TUCALLCENTER_H

@class NSArray, CNContactStore, NSString;
@protocol TUCallContainer, TUCallContainerPrivate, TUFeatureFlags, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TUCall.h"
#import "TUAudioDeviceController.h"
#import "TUCallFilterController.h"
#import "TUCallServicesInterface.h"
#import "TUConversationManager.h"
#import "TUNeighborhoodActivityConduit.h"
#import "TURouteController.h"
#import "TUCallProviderManager.h"
#import "TUVideoDeviceController.h"

@interface TUCallCenter : NSObject <TUCallContainer>



@property (readonly, nonatomic) os_unfair_lock_s accessorLock; // ivar: _accessorLock
@property (readonly, nonatomic) TUCall *activeVideoCall;
@property (readonly, nonatomic, getter=isAddCallAllowed) BOOL addCallAllowed;
@property (readonly, nonatomic, getter=isAmbiguous) BOOL ambiguous;
@property (readonly, nonatomic) BOOL anyCallIsEndpointOnCurrentDevice;
@property (readonly, nonatomic) BOOL anyCallIsHostedOnCurrentDevice;
@property (retain, nonatomic) TUAudioDeviceController *audioDeviceController; // ivar: _audioDeviceController
@property (readonly, nonatomic) NSObject<TUCallContainerPrivate> *callContainer;
@property (readonly, nonatomic) NSUInteger callCountOnDefaultPairedDevice;
@property (retain, nonatomic) TUCallFilterController *callFilterController; // ivar: _callFilterController
@property (readonly, copy, nonatomic) NSArray *callGroupsOnDefaultPairedDevice;
@property (retain, nonatomic) TUCallServicesInterface *callServicesInterface; // ivar: _callServicesInterface
@property (readonly, copy, nonatomic) NSArray *callsHostedElsewhere;
@property (readonly, copy, nonatomic) NSArray *callsHostedOrAnEndpointElsewhere;
@property (readonly, copy, nonatomic) NSArray *callsOnDefaultPairedDevice;
@property (readonly, copy, nonatomic) NSArray *callsWithAnEndpointElsewhere;
@property (readonly, nonatomic) BOOL canMergeCalls;
@property (readonly, copy, nonatomic) NSArray *conferenceParticipantCalls;
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (retain, nonatomic) TUConversationManager *conversationManager; // ivar: _conversationManager
@property (readonly, nonatomic) NSUInteger currentAudioAndVideoCallCount;
@property (readonly, copy, nonatomic) NSArray *currentAudioAndVideoCallGroups;
@property (readonly, copy, nonatomic) NSArray *currentAudioAndVideoCalls;
@property (readonly, nonatomic) NSUInteger currentCallCount;
@property (readonly, copy, nonatomic) NSArray *currentCallGroups;
@property (readonly, copy, nonatomic) NSArray *currentCalls;
@property (readonly, nonatomic) TUCall *currentVideoCall;
@property (readonly, nonatomic) NSUInteger currentVideoCallCount;
@property (readonly, copy, nonatomic) NSArray *currentVideoCalls;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *disconnectCallPreflight; // ivar: _disconnectCallPreflight
@property (readonly, copy, nonatomic) NSArray *displayedAudioAndVideoCalls;
@property (readonly, copy, nonatomic) NSArray *displayedCalls;
@property (readonly, nonatomic, getter=isEndAndAnswerAllowed) BOOL endAndAnswerAllowed;
@property (readonly, nonatomic) NSObject<TUFeatureFlags> *featureFlags; // ivar: _featureFlags
@property (readonly, nonatomic) BOOL hasCurrentAudioCalls;
@property (readonly, nonatomic) BOOL hasCurrentCalls;
@property (readonly, nonatomic) BOOL hasCurrentVideoCalls;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isHoldAndAnswerAllowed) BOOL holdAndAnswerAllowed;
@property (readonly, nonatomic) TUCall *incomingCall;
@property (readonly, copy, nonatomic) NSArray *incomingCalls;
@property (readonly, nonatomic) TUCall *incomingVideoCall;
@property (copy, nonatomic) id *launchAppForJoinRequestBlock; // ivar: _launchAppForJoinRequestBlock
@property (nonatomic) CGSize localLandscapeAspectRatio; // ivar: _localLandscapeAspectRatio
@property (nonatomic) CGSize localPortraitAspectRatio; // ivar: _localPortraitAspectRatio
@property (retain, nonatomic) TUNeighborhoodActivityConduit *neighborhoodActivityConduit; // ivar: _neighborhoodActivityConduit
@property (retain, nonatomic) TURouteController *pairedHostDeviceRouteController; // ivar: _pairedHostDeviceRouteController
@property (retain, nonatomic) TUCallProviderManager *providerManager; // ivar: _providerManager
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) TURouteController *routeController; // ivar: _routeController
@property (readonly) Class superclass;
@property (retain, nonatomic) TUVideoDeviceController *videoDeviceController; // ivar: _videoDeviceController


+(BOOL)supportsJoiningConversationWithRequest:(id)arg0 ;
+(id)callCenterWithQueue:(id)arg0 ;
+(id)callCenterWithQueue:(id)arg0 server:(id)arg1 shouldRegister:(BOOL)arg2 ;
+(id)sharedContactStore;
+(id)sharedInstance;
+(id)sharedInstanceWithQueue:(id)arg0 server:(id)arg1 shouldRegister:(BOOL)arg2 ;
-(BOOL)_canDialWithRequest:(id)arg0 shouldUseRelay:(*BOOL)arg1 ;
-(BOOL)_existingCallsAllowDialRequest:(id)arg0 allowVoiceWithData:(BOOL)arg1 ;
-(BOOL)_isCallingAvailableOnSecondaryDeviceWithRelayCallingAvailability:(int)arg0 isProviderAvailable:(BOOL)arg1 isRelayAllowed:(BOOL)arg2 isEmergency:(BOOL)arg3 supportsBasebandCalling:(BOOL)arg4 shouldUseRelay:(*BOOL)arg5 ;
-(BOOL)_isEmergencyDialRequest:(id)arg0 ;
-(BOOL)_shouldPreferRelayOverDirectSecondaryCallingForRelayingCallingAvailability:(int)arg0 isRelayCallingSupported:(BOOL)arg1 isEmergencyCallbackPossible:(BOOL)arg2 ;
-(BOOL)allCallsAreOfService:(int)arg0 ;
-(BOOL)allCallsPassTest:(id)arg0 ;
-(BOOL)anyCallPassesTest:(id)arg0 ;
-(BOOL)canDialWithRequest:(id)arg0 ;
-(BOOL)canGroupCall:(id)arg0 withCall:(id)arg1 ;
-(BOOL)existingCallsHaveMultipleProviders;
-(BOOL)isDirectCallingCurrentlyAvailableForProvider:(id)arg0 isVideo:(BOOL)arg1 ;
-(BOOL)isHardPauseAvailable;
-(BOOL)isHoldAllowed;
-(BOOL)isMergeable;
-(BOOL)isRelayCallingSupportedForProvider:(id)arg0 isVideo:(BOOL)arg1 ;
-(BOOL)isSendToVoicemailAllowed;
-(BOOL)isSwappable;
-(BOOL)isTakingCallsPrivateAllowed;
-(BOOL)launchAppForJoinRequest:(id)arg0 ;
-(BOOL)shouldPreferRelayOverDirectSecondaryCallingForProvider:(id)arg0 isVideo:(BOOL)arg1 ;
-(NSUInteger)_callGroupCountForCall:(id)arg0 withCall:(id)arg1 ;
-(NSUInteger)countOfCallsPassingTest:(id)arg0 ;
-(id)_allCalls;
-(id)_dialWithRequest:(id)arg0 completion:(id)arg1 ;
-(id)_splitSessionErrorWithCode:(NSInteger)arg0 underlyingError:(id)arg1 ;
-(id)activeConversationForCall:(id)arg0 ;
-(id)audioAndVideoCallsWithStatus:(int)arg0 ;
-(id)audioOrVideoCallWithStatus:(int)arg0 ;
-(id)callPassingTest:(id)arg0 ;
// -(id)callPassingTest:(id)arg0 sortedUsingComparator:(unk)arg1  ;
-(id)callServicesClientCapabilities;
-(id)callWithCallUUID:(id)arg0 ;
-(id)callWithStatus:(int)arg0 ;
-(id)callWithUniqueProxyIdentifier:(id)arg0 ;
-(id)callsPassingTest:(id)arg0 ;
-(id)callsWithGroupUUID:(id)arg0 ;
-(id)callsWithStatus:(int)arg0 ;
-(id)conferenceCall;
-(id)dialWithRequest:(id)arg0 ;
-(id)displayedCall;
-(id)displayedCallFromCalls:(id)arg0 ;
-(id)frontmostAudioOrVideoCall;
-(id)frontmostCall;
-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(id)initWithQueue:(id)arg0 featureFlags:(id)arg1 ;
-(id)joinConversationWithConversationRequest:(id)arg0 ;
-(id)lastDaemonConnectTime;
-(id)videoCallWithStatus:(int)arg0 ;
-(void)_preflightDisconnectForCalls:(id)arg0 withCompletion:(id)arg1 ;
-(void)activateInCallUIWithActivityContinuationIdentifier:(id)arg0 ;
-(void)answerCall:(id)arg0 ;
-(void)answerCall:(id)arg0 withSourceIdentifier:(id)arg1 ;
-(void)answerCall:(id)arg0 withSourceIdentifier:(id)arg1 wantsHoldMusic:(BOOL)arg2 ;
-(void)answerCallWithHoldMusic:(id)arg0 ;
-(void)answerOrJoinCall:(id)arg0 ;
-(void)answerWithRequest:(id)arg0 ;
-(void)applicationWillLaunchForStartCallInteraction:(id)arg0 ;
-(void)createSplitSessionWithDeviceMediaRouteIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)dialWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)disconnectAllCalls;
-(void)disconnectCall:(id)arg0 ;
-(void)disconnectCall:(id)arg0 withReason:(int)arg1 ;
-(void)disconnectCurrentCallAndActivateHeld;
-(void)disconnectDeviceFromSplitSessionUsingMediaRouteIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)endActiveAndAnswerCall:(id)arg0 ;
-(void)endActiveOrHeldAndAnswerCall:(id)arg0 ;
-(void)endHeldAndAnswerCall:(id)arg0 ;
-(void)enteredBackgroundForAllCalls;
-(void)enteredForegroundForCall:(id)arg0 ;
-(void)fetchCurrentCalls;
-(void)groupCall:(id)arg0 withOtherCall:(id)arg1 ;
-(void)handleActionForWiredHeadsetMiddleButtonLongPress;
-(void)handleActionForWiredHeadsetMiddleButtonPress;
-(void)handleActionForWiredHeadsetMiddleButtonPressWithSourceIdentifier:(id)arg0 allowBluetoothAnswerWithoutDowngrade:(BOOL)arg1 shouldForceDowngradeToAudio:(BOOL)arg2 ;
-(void)handleHeadsetButtonPressForActiveCalls;
-(void)holdActiveAndAnswerCall:(id)arg0 ;
-(void)holdCall:(id)arg0 ;
-(void)joinConversationWithRequest:(id)arg0 ;
-(void)launchAppForDialRequest:(id)arg0 completion:(id)arg1 ;
-(void)pickRouteForRapportDeviceWithMediaSystemIdentifier:(id)arg0 effectiveIdentifier:(id)arg1 ;
-(void)pullCallFromClientUsingHandoffActivityUserInfo:(id)arg0 completion:(id)arg1 ;
-(void)pullHostedCallsFromPairedHostDevice;
-(void)pullRelayingCallsFromClient;
-(void)pushHostedCallsToDestination:(id)arg0 ;
-(void)pushRelayingCallsToHost;
-(void)pushRelayingCallsToHostWithSourceIdentifier:(id)arg0 ;
-(void)registerWithCompletionHandler:(id)arg0 ;
-(void)reportLocalPreviewStoppedForCall:(id)arg0 ;
-(void)requestVideoUpgradeForCall:(id)arg0 ;
-(void)resumeCall:(id)arg0 ;
-(void)sendFieldModeDigits:(id)arg0 forProvider:(id)arg1 ;
-(void)sendUserScoreToRTCReporting:(id)arg0 withScore:(int)arg1 ;
-(void)setTTYType:(int)arg0 forCall:(id)arg1 ;
-(void)shouldAllowRingingCallStatusIndicator:(BOOL)arg0 ;
-(void)shouldSuppressInCallStatusBar:(BOOL)arg0 ;
-(void)swapCalls;
-(void)ungroupCall:(id)arg0 ;
-(void)unholdCall:(id)arg0 ;
-(void)updateCall:(id)arg0 withAnswerRequest:(id)arg1 ;
-(void)willEnterBackgroundForAllCalls;


@end


#endif
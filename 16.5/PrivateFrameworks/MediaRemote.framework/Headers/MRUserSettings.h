// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUSERSETTINGS_H
#define MRUSERSETTINGS_H

@class NSUserDefaults, NSArray, NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface MRUserSettings : NSObject {
    NSUserDefaults *_userDefaults;
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) CGFloat activeSystemEndpointStartupDelayToAllowAllPreviousClientsTimeToInitializeInterval;
@property (readonly, nonatomic) CGFloat airPlayOutputContextInitTimeoutDuration;
@property (readonly, nonatomic) BOOL allowAllClientUIConnections;
@property (readonly, nonatomic) CGFloat bluetoothDeviceResumeDuration;
@property (readonly, nonatomic) CGFloat broadcastCommandWaitDuration;
@property (readonly, nonatomic) BOOL canHostMultiplayerStream;
@property (readonly, nonatomic) NSUInteger checkXPCConnectionStatusDefaultInterval;
@property (readonly, nonatomic) CGFloat checkXPCConnectionStatusDefaultResponseTimeout;
@property (readonly, nonatomic) BOOL computeNowPlayingApplication;
@property (readonly, nonatomic) BOOL connectToAllEndpointsWhenAnyEndpointBeginsPlayback;
@property (readonly, nonatomic) BOOL connectToAllEndpointsWhenInProximityToAnyDevice;
@property (readonly, nonatomic) BOOL connectToEndpointWhenBeginsPlayback;
@property (readonly, nonatomic) BOOL connectToUserSelectedEndpoint;
@property (retain, nonatomic) NSArray *connectedClientAuditTokens;
@property (readonly, nonatomic) NSArray *destinationResolverReconRetryIntervals;
@property (readonly, nonatomic) CGFloat deviceRecentlyUsedInterval;
@property (readonly, nonatomic) BOOL discoverCompanionDevices;
@property (readonly, nonatomic) CGFloat discoverEndpointTimeoutInterval;
@property (readonly, nonatomic) CGFloat endpointRecentlyUserSelectedInterval;
@property (retain, nonatomic) NSArray *expectedClientAuditTokens;
@property (readonly, nonatomic) CGFloat externalDeviceArtificalConnectionDelay;
@property (readonly, nonatomic) CGFloat externalDeviceDisconnectSleepDuration;
@property (readonly, nonatomic) CGFloat externalDeviceDisconnectWaitDuration;
@property (readonly, nonatomic) CGFloat externalDeviceNowPlayingInfoArtworkCoalesceDuration;
@property (readonly, nonatomic) CGFloat externalDeviceNowPlayingInfoCoalesceDuration;
@property (nonatomic, getter=isExternalDevicePairingAllowed) BOOL externalDevicePairingAllowed; // ivar: _externalDevicePairingAllowed
@property (readonly, nonatomic) CGFloat externalDeviceSleepAssertionOnClientConnectDuration;
@property (readonly, nonatomic) NSInteger externalDeviceSocketQOSLevel;
@property (readonly, nonatomic) CGFloat externalDeviceTimeoutDuration;
@property (readonly, nonatomic) CGFloat flipBookUpdateInterval;
@property (readonly, nonatomic) BOOL forceDeviceInfoDiscovery;
@property (readonly, nonatomic) BOOL forceEnableCECVolume;
@property (readonly, nonatomic) BOOL forceFadeForEveryHandoff;
@property (readonly, nonatomic) BOOL hasExternalDeviceSocketQOSLevelSet;
@property (nonatomic) BOOL homepodDemoMode; // ivar: _homepodDemoMode
@property (readonly, nonatomic) BOOL internalUI;
@property (readonly, nonatomic) NSArray *jsonClientUIDs;
@property (retain, nonatomic) NSString *lastBootUUID;
@property (readonly, nonatomic) CGFloat lastPlayingDeviceThresholdInterval;
@property (readonly, nonatomic) CGFloat launchApplicationTimeoutInterval;
@property (readonly, nonatomic) CGFloat lockScreenAPLRatio;
@property (readonly, nonatomic) CGFloat lockScreenAPLTarget;
@property (readonly, nonatomic) NSUInteger maxStreamCapacity;
@property (readonly, nonatomic) NSInteger maxTransactionMemorySize;
@property (readonly, nonatomic) NSUInteger maximumNumberOfMediaSuggestions;
@property (readonly, nonatomic) CGFloat mediaRecentlyPlayedInterval;
@property (readonly, nonatomic, getter=isMultiplayerAware) BOOL multiplayerAware;
@property (readonly, nonatomic) BOOL needNowPlayingForegroundState;
@property (readonly, nonatomic) BOOL notifyDevicesInHomeThatPlaybackStarted;
@property (readonly, nonatomic) CGFloat nowPlayingApplicationTimeout;
@property (readonly, nonatomic) int nowPlayingControllerVersion;
@property (readonly, nonatomic) CGFloat nowPlayingObserverCoalesceInterval;
@property (readonly, nonatomic) CGFloat nowPlayingUIWakingPlayerEventAssertionDuration;
@property (readonly, nonatomic) CGFloat personalDeviceLockScreenTimeout;
@property (retain, nonatomic) NSDictionary *personalDeviceState;
@property (nonatomic) BOOL prefersExpandedLockScreenPlatter;
@property (readonly, nonatomic) float proximitySortingNearbyRadius;
@property (readonly, nonatomic) CGFloat queuedCommandsTimeoutInterval;
@property (readonly, nonatomic) CGFloat quickControlsInactiveTimeout;
@property (readonly, nonatomic) NSArray *remoteControlDiscoveryAllowList;
@property (readonly, nonatomic) NSArray *remoteControlDiscoveryDenyList;
@property (readonly, nonatomic) BOOL remoteDeviceIdleDisconnection;
@property (readonly, nonatomic) CGFloat remoteDeviceIdleDisconnectionInterval;
@property (readonly, nonatomic) BOOL removeLocalDevice;
@property (readonly, nonatomic) BOOL reserveSlotForLocal;
@property (readonly, nonatomic) BOOL sendLastPlayingDeviceToHome;
@property (readonly, nonatomic) CGFloat sendPlaybackSessionUpdateToCompanionCoalesceInterval;
@property (readonly, nonatomic) BOOL sendProactivePFSQAfterBoot;
@property (readonly, nonatomic) BOOL sendProactivePFSQOnProactiveASEChange;
@property (readonly, nonatomic) BOOL sendProactivePFSQOnSiriActivation;
@property (readonly, nonatomic) BOOL sendProactivePFSQOnUserSelectedASEChange;
@property (readonly, nonatomic) BOOL shouldConnectToLocalEndpoint;
@property (readonly, nonatomic) BOOL shouldInitializeGenericBonjourService;
@property (readonly, nonatomic) BOOL shouldInitializeIDSService;
@property (readonly, nonatomic) BOOL shouldInitializeRapportService;
@property (readonly, nonatomic) BOOL shouldInitializeTelevisionBonjourService;
@property (readonly, nonatomic) BOOL shouldLogArtwork;
@property (readonly, nonatomic) BOOL shouldLogPairingSetupCode;
@property (readonly, nonatomic) BOOL shouldWakeDeviceForRemoteControlCommands;
@property (readonly, nonatomic) BOOL showUncommitedDevices;
@property (readonly, nonatomic) BOOL supportCoordinatedVolume;
@property (readonly, nonatomic) BOOL supportExpanseMigration;
@property (readonly, nonatomic) BOOL supportGenericAudioGroup;
@property (readonly, nonatomic) BOOL supportIDSDiscovery;
@property (readonly, nonatomic) BOOL supportLastPlayingDevice;
@property (readonly, nonatomic) BOOL supportLockscreenPlatterDisplayForPersonalDevice;
@property (readonly, nonatomic) BOOL supportMigration;
@property (readonly, nonatomic) BOOL supportMultiplayerHost;
@property (readonly, nonatomic) BOOL supportNanoLinkAgent;
@property (readonly, nonatomic) BOOL supportNewMigrationArchitecture;
@property (readonly, nonatomic) BOOL supportNewMigrationBehaviorForProximity;
@property (readonly, nonatomic) BOOL supportNowPlayingPIP;
@property (readonly, nonatomic) BOOL supportOutOfProcessMigration;
@property (readonly, nonatomic) BOOL supportOutputContextPrewarming;
@property (readonly, nonatomic) BOOL supportOutputContextSync;
@property (readonly, nonatomic) BOOL supportProactiveSuggestion;
@property (readonly, nonatomic) BOOL supportProximityMigration;
@property (readonly, nonatomic) BOOL supportProximityMigrationV2;
@property (readonly, nonatomic) BOOL supportRapportRemoteControlConnection;
@property (readonly, nonatomic) BOOL supportRapportRemoteControlTransport;
@property (readonly, nonatomic) BOOL takelockScreenAssertion;
@property (readonly, nonatomic) CGFloat transactionWaitDurationOnNetworkSend;
@property (readonly, nonatomic) CGFloat transactionWaitDurationOnOutOfMemory;
@property (readonly, nonatomic) CGFloat transactionWaitDurationOnXpcSend;
@property (readonly, nonatomic) BOOL useAPSyncAPI;
@property (readonly, nonatomic) BOOL useClusterDevices;
@property (readonly, nonatomic) BOOL useDebugAVRouteWithoutVolumeControl;
@property (readonly, nonatomic) BOOL useExternalDeviceSystemPairing;
@property (readonly, nonatomic) BOOL useGenericTransportForHostedEndpoints;
@property (readonly, nonatomic) BOOL useNoDelayOptionForExternalDeviceSockets;
@property (readonly, nonatomic) BOOL usePeerToPeerExternalDeviceConnections;
@property (readonly, nonatomic) BOOL useProactiveEndpoint;
@property (readonly, nonatomic) BOOL useProactivePFSQSender;
@property (readonly, nonatomic) BOOL useSystemAudioContextForAirPlayTransport;
@property (readonly, nonatomic) BOOL verboseConnectionMonitorLogging;
@property (readonly, nonatomic) BOOL verboseHostedDiscoverySessionLogging;
@property (readonly, nonatomic) BOOL verboseHostedExternalDeviceClientLogging;
@property (readonly, nonatomic) BOOL verboseMRDMediaRemoteClientLogging;
@property (readonly, nonatomic) BOOL verboseNowPlayingControllerLogging;
@property (readonly, nonatomic) BOOL verboseNowPlayingStateObserver;
@property (readonly, nonatomic) BOOL verboseOriginClientLogging;
@property (readonly, nonatomic) BOOL verboseOriginForwarderLogging;
@property (readonly, nonatomic) BOOL verboseOutputContextDataSourceLogging;
@property (readonly, nonatomic) BOOL verboseOutputContextLogging;
@property (readonly, nonatomic) BOOL verboseProtocolMessageLogging;
@property (readonly, nonatomic) BOOL verboseRemoteControlDiscoveryLogging;
@property (readonly, nonatomic) BOOL visuallyIdentifyProactiveSuggestion;
@property (readonly, nonatomic) CGFloat wakingPlayerPathAssertionDuration;


+(id)currentSettings;
-(id)defaultSupportedCommandsData;
-(id)defaultSupportedCommandsDataForClient:(id)arg0 ;
-(id)init;
-(id)localLastPlayingDate;
-(id)mostRecentlySelectedDeviceUID;
-(id)selectionDateForDeviceUID:(id)arg0 ;
-(unsigned int)localPlaybackState;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setLocalLastPlayingDate:(id)arg0 ;
-(void)setLocalPlaybackState:(unsigned int)arg0 ;
-(void)setSelectionDate:(id)arg0 forDeviceUID:(id)arg1 ;
-(void)updateDefaultSupportedCommandsData:(id)arg0 forClient:(id)arg1 ;


@end


#endif
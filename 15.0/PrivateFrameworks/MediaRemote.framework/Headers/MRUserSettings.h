// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRUSERSETTINGS_H
#define MRUSERSETTINGS_H

@class NSUserDefaults, NSArray, NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface MRUserSettings : NSObject {
    NSUserDefaults *_userDefaults;
}


@property (readonly, nonatomic) CGFloat activeSystemEndpointStartupDelayToAllowAllPreviousClientsTimeToInitializeInterval;
@property (readonly, nonatomic) CGFloat airPlayOutputContextInitTimeoutDuration;
@property (readonly, nonatomic) CGFloat bluetoothDeviceResumeDuration;
@property (readonly, nonatomic) CGFloat broadcastCommandWaitDuration;
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
@property (readonly, nonatomic) BOOL discoverSidekickDevices;
@property (readonly, nonatomic) CGFloat endpointRecentlyUserSelectedInterval;
@property (retain, nonatomic) NSArray *expectedClientAuditTokens;
@property (readonly, nonatomic) CGFloat externalDeviceDisconnectSleepDuration;
@property (readonly, nonatomic) CGFloat externalDeviceDisconnectWaitDuration;
@property (readonly, nonatomic) CGFloat externalDeviceNowPlayingInfoArtworkCoalesceDuration;
@property (readonly, nonatomic) CGFloat externalDeviceNowPlayingInfoCoalesceDuration;
@property (nonatomic, getter=isExternalDevicePairingAllowed) BOOL externalDevicePairingAllowed; // ivar: _externalDevicePairingAllowed
@property (readonly, nonatomic) CGFloat externalDeviceSleepAssertionOnClientConnectDuration;
@property (readonly, nonatomic) NSInteger externalDeviceSocketQOSLevel;
@property (readonly, nonatomic) CGFloat externalDeviceTimeoutDuration;
@property (readonly, nonatomic) BOOL forceEnableCECVolume;
@property (readonly, nonatomic) BOOL forceFadeForEveryHandoff;
@property (readonly, nonatomic) BOOL hasExternalDeviceSocketQOSLevelSet;
@property (readonly, nonatomic) BOOL hostSidekickDevices;
@property (readonly, nonatomic) NSArray *jsonClientUIDs;
@property (retain, nonatomic) NSString *lastBootUUID;
@property (readonly, nonatomic) CGFloat lastPlayingDeviceThresholdInterval;
@property (readonly, nonatomic) CGFloat launchApplicationTimeoutInterval;
@property (readonly, nonatomic) NSInteger maxTransactionMemorySize;
@property (readonly, nonatomic) NSUInteger maximumNumberOfMediaSuggestions;
@property (readonly, nonatomic) CGFloat mediaRecentlyPlayedInterval;
@property (readonly, nonatomic) BOOL needNowPlayingForegroundState;
@property (readonly, nonatomic) BOOL notifyDevicesInHomeThatPlaybackStarted;
@property (readonly, nonatomic) CGFloat nowPlayingApplicationTimeout;
@property (readonly, nonatomic) int nowPlayingControllerVersion;
@property (readonly, nonatomic) CGFloat personalDeviceLockScreenTimeout;
@property (retain, nonatomic) NSDictionary *personalDeviceState;
@property (readonly, nonatomic) CGFloat queuedCommandsTimeoutInterval;
@property (readonly, nonatomic) NSArray *remoteControlDiscoveryAllowList;
@property (readonly, nonatomic) NSArray *remoteControlDiscoveryDenyList;
@property (readonly, nonatomic) BOOL remoteDeviceIdleDisconnection;
@property (readonly, nonatomic) CGFloat remoteDeviceIdleDisconnectionInterval;
@property (readonly, nonatomic) BOOL sendLastPlayingDeviceToHome;
@property (readonly, nonatomic) CGFloat sendPlaybackSessionUpdateToCompanionCoalesceInterval;
@property (readonly, nonatomic) BOOL shouldInitializeGenericBonjourService;
@property (readonly, nonatomic) BOOL shouldInitializeRapportService;
@property (readonly, nonatomic) BOOL shouldInitializeTelevisionBonjourService;
@property (readonly, nonatomic) BOOL shouldLogArtwork;
@property (readonly, nonatomic) BOOL shouldLogPairingSetupCode;
@property (readonly, nonatomic) BOOL shouldWakeDeviceForRemoteControlCommands;
@property (readonly, nonatomic) BOOL supportExpanseMigration;
@property (readonly, nonatomic) BOOL supportLastPlayingDevice;
@property (readonly, nonatomic) BOOL supportLockscreenPlatterDisplayForPersonalDevice;
@property (readonly, nonatomic) BOOL supportMigration;
@property (readonly, nonatomic) BOOL supportMultiplayer;
@property (readonly, nonatomic) BOOL supportNanoLinkAgent;
@property (readonly, nonatomic) BOOL supportNewMigrationArchitecture;
@property (readonly, nonatomic) BOOL supportNewMigrationBehaviorForProximity;
@property (readonly, nonatomic) BOOL supportNowPlayingPIP;
@property (readonly, nonatomic) BOOL supportOutOfProcessMigration;
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
@property (readonly, nonatomic) BOOL useSystemAudioContextForAirPlayTransport;
@property (readonly, nonatomic) BOOL verboseConnectionMonitorLogging;
@property (readonly, nonatomic) BOOL verboseHostedDiscoverySessionLogging;
@property (readonly, nonatomic) BOOL verboseHostedExternalDeviceClientLogging;
@property (readonly, nonatomic) BOOL verboseMRDMediaRemoteClientLogging;
@property (readonly, nonatomic) BOOL verboseNowPlayingControllerLogging;
@property (readonly, nonatomic) BOOL verboseProtocolMessageLogging;
@property (readonly, nonatomic) BOOL visuallyIdentifyProactiveSuggestion;
@property (readonly, nonatomic) CGFloat wakingPlayerPathAssetionDuration;


+(id)currentSettings;
-(id)defaultSupportedCommandsData;
-(id)defaultSupportedCommandsDataForClient:(id)arg0 ;
-(id)init;
-(id)localLastPlayingDate;
-(unsigned int)localPlaybackState;
-(void)setLocalLastPlayingDate:(id)arg0 ;
-(void)setLocalPlaybackState:(unsigned int)arg0 ;
-(void)updateDefaultSupportedCommandsData:(id)arg0 forClient:(id)arg1 ;


@end


#endif
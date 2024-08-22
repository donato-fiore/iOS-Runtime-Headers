// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRTRANSPORTEXTERNALDEVICE_H
#define MRTRANSPORTEXTERNALDEVICE_H

@class NSDate, NSArray, NSString, NSData, NSDictionary;
@protocol MRProtocolClientConnectionDelegate, OS_dispatch_queue;


#import "MRExternalDevice.h"
#import "MROSTransaction.h"
#import "MRExternalClientConnection.h"
#import "MROrigin.h"
#import "MRDeviceInfo.h"
#import "MRContentItem.h"
#import "MRPlayerPath.h"
#import "MRExternalDeviceTransport.h"

@interface MRTransportExternalDevice : MRExternalDevice <MRProtocolClientConnectionDelegate>

 {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    BOOL _wantsNowPlayingNotifications;
    BOOL _wantsNowPlayingArtworkNotifications;
    BOOL _wantsVolumeNotifications;
    BOOL _wantsOutputDeviceNotifications;
    BOOL _wantsSystemEndpointNotifications;
    BOOL _wantsEndpointChangeNotifications;
    BOOL _usingSystemPairing;
    NSDate *_connectionStateTimestamp;
    unsigned int _connectionState;
    unsigned int _connectionOptions;
    NSInteger _cachedServerDisconnectError;
    NSUInteger _reconnectionAttemptCount;
    BOOL _forceReconnectOnConnectionFailure;
    BOOL _disconnecting;
    BOOL _isClientSyncActive;
    MROSTransaction *_transaction;
    NSArray *_subscribedPlayerPaths;
    id *_discoveryOutputDevicesCallback;
    NSInteger _connectionRecoveryBehavior;
}


@property (retain, nonatomic) MRExternalClientConnection *clientConnection; // ivar: _clientConnection
@property (copy, nonatomic) id *connectionStateCallback; // ivar: _connectionStateCallback
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionStateCallbackQueue; // ivar: _connectionStateCallbackQueue
@property (copy, nonatomic) id *customDataCallback; // ivar: _customDataCallback
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *customDataCallbackQueue; // ivar: _customDataCallbackQueue
@property (retain, nonatomic) MROrigin *customOrigin; // ivar: _customOrigin
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) MRDeviceInfo *deviceInfo; // ivar: _deviceInfo
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isCallingClientCallback; // ivar: _isCallingClientCallback
@property (copy, nonatomic) id *nameCallback; // ivar: _nameCallback
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *nameCallbackQueue; // ivar: _nameCallbackQueue
@property (retain, nonatomic) NSData *nowPlayingArtwork; // ivar: _nowPlayingArtwork
@property (retain, nonatomic) NSDictionary *nowPlayingInfo; // ivar: _nowPlayingInfo
@property (retain, nonatomic) MRContentItem *nowPlayingItem; // ivar: _nowPlayingItem
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *outputContextCallbackQueue; // ivar: _outputContextCallbackQueue
@property (copy, nonatomic) id *outputDevicesRemovedCallback; // ivar: _outputDevicesRemovedCallback
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *outputDevicesRemovedCallbackQueue; // ivar: _outputDevicesRemovedCallbackQueue
@property (copy, nonatomic) id *outputDevicesUpdatedCallback; // ivar: _outputDevicesUpdatedCallback
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *outputDevicesUpdatedCallbackQueue; // ivar: _outputDevicesUpdatedCallbackQueue
@property (copy, nonatomic) id *pairingAllowedCallback; // ivar: _pairingAllowedCallback
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *pairingAllowedCallbackQueue; // ivar: _pairingAllowedCallbackQueue
@property (copy, nonatomic) id *pairingCallback; // ivar: _pairingCallback
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *pairingCallbackQueue; // ivar: _pairingCallbackQueue
@property (retain, nonatomic) MRPlayerPath *playerPath; // ivar: _playerPath
@property (readonly) Class superclass;
@property (readonly, nonatomic) MRExternalDeviceTransport *transport; // ivar: _transport
@property (copy, nonatomic) id *volumeCallback; // ivar: _volumeCallback
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *volumeCallbackQueue; // ivar: _volumeCallbackQueue
@property (copy, nonatomic) id *volumeControlCapabilitiesCallback; // ivar: _volumeControlCapabilitiesCallback
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *volumeControlCapabilitiesCallbackQueue; // ivar: _volumeControlCapabilitiesCallbackQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue; // ivar: _workerQueue


-(BOOL)isPaired;
-(BOOL)isUsingSystemPairing;
-(BOOL)isValid;
-(BOOL)wantsEndpointChangeNotifications;
-(BOOL)wantsNowPlayingArtworkNotifications;
-(BOOL)wantsNowPlayingNotifications;
-(BOOL)wantsOutputDeviceNotifications;
-(BOOL)wantsSystemEndpointNotifications;
-(BOOL)wantsVolumeNotifications;
-(NSInteger)connectionRecoveryBehavior;
-(NSInteger)port;
-(id)_createPlaybackQueue:(BOOL)arg0 ;
-(id)_onWorkerQueue_createClientConnectionWithTransport:(id)arg0 ;
-(id)_onWorkerQueue_initializeConnectionWithOptions:(unsigned int)arg0 userInfo:(id)arg1 ;
-(id)_onWorkerQueue_loadDeviceInfoWithUserInfo:(id)arg0 ;
-(id)_onWorkerQueue_openSecuritySessionWithUserInfo:(id)arg0 ;
-(id)_onWorkerQueue_reRegisterCustomOriginWithUserInfo:(id)arg0 ;
-(id)_onWorkerQueue_registerCustomOriginWithUserInfo:(id)arg0 ;
-(id)_onWorkerQueue_syncClientStateWithUserInfo:(id)arg0 ;
-(id)currentClientUpdatesConfigMessage;
-(id)errorForCurrentState;
-(id)hostName;
-(id)initWithTransport:(id)arg0 ;
-(id)name;
-(id)personalOutputDevices;
-(id)subscribedPlayerPaths;
-(id)supportedMessages;
-(id)uid;
-(unsigned int)connectionState;
-(void)_activeSystemEndpointDidChangeNotification:(id)arg0 ;
-(void)_callClientAllowsPairingCallback;
-(void)_callClientConnectionStateCallback:(unsigned int)arg0 previousConnectionState:(unsigned int)arg1 error:(id)arg2 ;
-(void)_callClientCustomDataCallback:(id)arg0 name:(id)arg1 ;
-(void)_callClientNameCallback;
-(void)_callClientPairingCallback:(id)arg0 ;
-(void)_callOutputDevicesRemovedCallbackWithOutputDeviceUIDs:(id)arg0 ;
-(void)_callOutputDevicesUpdatedCallbackWithOutputDevices:(id)arg0 ;
-(void)_callVolumeCallback:(float)arg0 outputDeviceUID:(id)arg1 ;
-(void)_callVolumeControlCapabilitiesCallback:(unsigned int)arg0 outputDeviceUID:(id)arg1 ;
-(void)_cleanUpStreamsWithReason:(NSInteger)arg0 error:(id)arg1 ;
-(void)_cleanUpWithReason:(NSInteger)arg0 error:(id)arg1 ;
-(void)_contentItemUpdatedNotification:(id)arg0 ;
-(void)_handleCryptoPairingMessage:(id)arg0 ;
-(void)_handleDeviceInfoChange:(id)arg0 oldDevice:(id)arg1 ;
-(void)_handleDeviceInfoUpdateMessage:(id)arg0 ;
-(void)_handleDiscoveryUpdateOutputDevicesMessage:(id)arg0 ;
-(void)_handleGenericMessage:(id)arg0 ;
-(void)_handleLegacyPlaybackQueueRequestWithCompletion:(id)arg0 ;
-(void)_handleLegacyVolumeControlCapabilitiesDidChangeMessage:(id)arg0 ;
-(void)_handleNotificationMessage:(id)arg0 ;
-(void)_handleNotificationMessageLegacy:(id)arg0 ;
-(void)_handleNotificationMessageModern:(id)arg0 ;
-(void)_handleOutputDevicesRemovedMessage:(id)arg0 ;
-(void)_handleOutputDevicesUpdatedMessage:(id)arg0 ;
-(void)_handlePlaybackQueueRequest:(*void)arg0 forPlayer:(*void)arg1 completion:(id)arg2 ;
-(void)_handlePlaybackQueueResponse:(id)arg0 completion:(id)arg1 ;
-(void)_handlePlaybackSessionMigrateBeginRequest:(id)arg0 forPlayerPath:(id)arg1 completion:(id)arg2 ;
-(void)_handlePlaybackSessionMigrateEndRequest:(id)arg0 error:(id)arg1 forPlayerPath:(id)arg2 completion:(id)arg3 ;
-(void)_handlePlaybackSessionMigrateRequest:(id)arg0 request:(id)arg1 forPlayerPath:(id)arg2 completion:(id)arg3 ;
-(void)_handlePlaybackSessionRequest:(*void)arg0 forPlayerPath:(*void)arg1 completion:(id)arg2 ;
-(void)_handlePresentRouteAuthorizationStatusMessage:(id)arg0 ;
-(void)_handlePromptForRouteAuthorizationMessage:(id)arg0 ;
-(void)_handleRemoteCommand:(unsigned int)arg0 withOptions:(id)arg1 playerPath:(id)arg2 completion:(id)arg3 ;
-(void)_handleRemoveClientMessage:(id)arg0 ;
-(void)_handleRemovePlayerMessage:(id)arg0 ;
-(void)_handleSetArtworkMessage:(id)arg0 ;
-(void)_handleSetConnectionStateMessage:(id)arg0 ;
-(void)_handleSetDefaultSupportedCommandsMessage:(id)arg0 ;
-(void)_handleSetNowPlayingClientMessage:(id)arg0 ;
-(void)_handleSetNowPlayingPlayerMessage:(id)arg0 ;
-(void)_handleSetOriginClientPropertiesMessage:(id)arg0 ;
-(void)_handleSetPlayerClientPropertiesMessage:(id)arg0 ;
-(void)_handleSetStateMessage:(id)arg0 ;
-(void)_handleSetStateMessageModern:(id)arg0 ;
-(void)_handleTransactionMessage:(id)arg0 ;
-(void)_handleUpdateActiveSystemEndpoint:(id)arg0 ;
-(void)_handleUpdateClientMessage:(id)arg0 ;
-(void)_handleUpdateContentItemArtworkMessage:(id)arg0 ;
-(void)_handleUpdateContentItemsMessage:(id)arg0 ;
-(void)_handleUpdatePlayerMessage:(id)arg0 ;
-(void)_handleVolumeControlCapabilitiesDidChangeMessage:(id)arg0 ;
-(void)_handleVolumeDidChangeMessage:(id)arg0 ;
-(void)_localDeviceInfoDidChangeNotification:(id)arg0 ;
-(void)_onSerialQueue_prepareToConnectWithOptions:(unsigned int)arg0 clientBundleIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(void)_onSerialQueue_prepareToDisconnect:(id)arg0 ;
-(void)_onSerialQueue_registerOriginCallbacks;
-(void)_onWorkerQueue_connectWithOptions:(unsigned int)arg0 isRetry:(BOOL)arg1 clientBundleIdentifier:(id)arg2 userInfo:(id)arg3 ;
-(void)_onWorkerQueue_disconnect:(id)arg0 ;
-(void)_sendClientMessage:(id)arg0 completion:(id)arg1 ;
-(void)_transportDeviceInfoDidChangeNotification:(id)arg0 ;
-(void)_updateNowPlayingInfo;
-(void)clientConnection:(id)arg0 didReceiveMessage:(id)arg1 ;
-(void)clientDidDisconnect:(id)arg0 error:(id)arg1 ;
-(void)connectWithOptions:(unsigned int)arg0 clientBundleIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(void)connectWithOptions:(unsigned int)arg0 userInfo:(id)arg1 ;
-(void)dealloc;
-(void)disconnect:(id)arg0 ;
-(void)modifyByAddingDeviceUIDs:(id)arg0 removingDeviceUIDs:(id)arg1 settingDeviceUIDs:(id)arg2 addingClusterAwareDeviceUIDs:(id)arg3 removingClusterAwareDeviceUIDs:(id)arg4 settingClusterAwareDeviceUIDs:(id)arg5 withReplyQueue:(id)arg6 completion:(id)arg7 ;
-(void)outputDeviceVolume:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)outputDeviceVolumeControlCapabilities:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
// -(void)ping:(CGFloat)arg0 callback:(id)arg1 withQueue:(unk)arg2  ;
-(void)removeFromParentGroup:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)sendButtonEvent:(struct _MRHIDButtonEvent )arg0 ;
-(void)sendClientUpdatesConfigMessage;
-(void)sendClientUpdatesConfigMessageWithCompletion:(id)arg0 ;
-(void)sendCustomData:(id)arg0 withName:(id)arg1 ;
-(void)setConnectionRecoveryBehavior:(NSInteger)arg0 ;
-(void)setConnectionState:(unsigned int)arg0 error:(id)arg1 ;
-(void)setDiscoveryMode:(unsigned int)arg0 forConfiguration:(id)arg1 ;
-(void)setDiscoveryOutputDevicesChangedCallback:(id)arg0 ;
-(void)setListeningMode:(id)arg0 outputDeviceUID:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)setName:(id)arg0 ;
-(void)setOutputDeviceVolume:(float)arg0 outputDeviceUID:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)setSubscribedPlayerPaths:(id)arg0 ;
-(void)setUsingSystemPairing:(BOOL)arg0 ;
// -(void)setVolumeChangedCallback:(id)arg0 withQueue:(unk)arg1  ;
-(void)setWantsEndpointChangeNotifications:(BOOL)arg0 ;
-(void)setWantsNowPlayingArtworkNotifications:(BOOL)arg0 ;
-(void)setWantsNowPlayingNotifications:(BOOL)arg0 ;
-(void)setWantsOutputDeviceNotifications:(BOOL)arg0 ;
-(void)setWantsSystemEndpointNotifications:(BOOL)arg0 ;
-(void)setWantsVolumeNotifications:(BOOL)arg0 ;
-(void)unpair;
-(void)veirfyConnectionStatusAndMaybeDisconnect:(id)arg0 ;


@end


#endif
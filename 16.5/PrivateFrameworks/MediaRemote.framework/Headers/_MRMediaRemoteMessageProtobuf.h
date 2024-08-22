// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MRMEDIAREMOTEMESSAGEPROTOBUF_H
#define _MRMEDIAREMOTEMESSAGEPROTOBUF_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "_MRAdjustVolumeMessageProtobuf.h"
#import "_MRAudioFadeMessageProtobuf.h"
#import "_MRAudioFadeResponseMessageProtobuf.h"
#import "_MRClientUpdatesConfigurationProtobuf.h"
#import "_MRConfigureConnectionMessageProtobuf.h"
#import "_MRSetConnectionStateMessageProtobuf.h"
#import "_MRPlaybackQueueProtobuf.h"
#import "_MRCreateHostedEndpointRequestProtobuf.h"
#import "_MRCreateHostedEndpointResponseProtobuf.h"
#import "_MRCryptoPairingMessageProtobuf.h"
#import "_MRDeviceInfoMessageProtobuf.h"
#import "_MRSetDiscoveryModeProtobufMessage.h"
#import "_MRDiscoveryUpdateEndpointsProtobufMessage.h"
#import "_MRDiscoveryUpdateOutputDevicesProtobufMessage.h"
#import "_MRErrorProtobuf.h"
#import "_MRGameControllerMessageProtobuf.h"
#import "_MRGameControllerPropertiesMessageProtobuf.h"
#import "_MRGenericMessageProtobuf.h"
#import "_MRGetIsMutedMessageProtobuf.h"
#import "_MRGetIsMutedResultMessageProtobuf.h"
#import "_MRGetKeyboardSessionProtobuf.h"
#import "_MRGetRemoteTextInputSessionProtobuf.h"
#import "_MRGetStateMessageProtobuf.h"
#import "_MRGetVoiceInputDevicesMessageProtobuf.h"
#import "_MRGetVoiceInputDevicesResponseMessageProtobuf.h"
#import "_MRGetVolumeControlCapabilitiesMessageProtobuf.h"
#import "_MRGetVolumeControlCapabilitiesResultMessageProtobuf.h"
#import "_MRGetVolumeMessageProtobuf.h"
#import "_MRGetVolumeResultMessageProtobuf.h"
#import "_MRIsMutedDidChangeMessageProtobuf.h"
#import "_MRKeyboardMessageProtobuf.h"
#import "_MRVolumeControlAvailabilityProtobuf.h"
#import "_MRAVModifyOutputContextRequestProtobuf.h"
#import "_MRNotificationMessageProtobuf.h"
#import "_MROriginClientPropertiesMessageProtobuf.h"
#import "_MRPlaybackQueueRequestProtobuf.h"
#import "_MRPlaybackSessionMigrateBeginMessageProtobuf.h"
#import "_MRPlaybackSessionMigrateEndMessageProtobuf.h"
#import "_MRPlaybackSessionMigrateRequestMessageProtobuf.h"
#import "_MRPlaybackSessionMigrateResponseMessageProtobuf.h"
#import "_MRPlaybackSessionRequestMessageProtobuf.h"
#import "_MRPlaybackSessionResponseMessageProtobuf.h"
#import "_MRPlayerClientPropertiesMessageProtobuf.h"
#import "_MRPresentRouteAuthorizationStatusMessageProtobuf.h"
#import "_MRPromptForRouteAuthorizationMessageProtobuf.h"
#import "_MRPromptForRouteAuthorizationResponseMessageProtobuf.h"
#import "_MRSetReadyStateMessageProtobuf.h"
#import "_MRRegisterForGameControllerEventsMessageProtobuf.h"
#import "_MRRegisterGameControllerMessageProtobuf.h"
#import "_MRRegisterGameControllerResponseMessageProtobuf.h"
#import "_MRRegisterHIDDeviceMessageProtobuf.h"
#import "_MRRegisterHIDDeviceResultMessageProtobuf.h"
#import "_MRRegisterVoiceInputDeviceMessageProtobuf.h"
#import "_MRRegisterVoiceInputDeviceResponseMessageProtobuf.h"
#import "_MRRemoteTextInputMessageProtobuf.h"
#import "_MRRemoveClientMessageProtobuf.h"
#import "_MRRemoveEndpointsMessageProtobuf.h"
#import "_MRRemoveOutputDevicesMessageProtobuf.h"
#import "_MRRemovePlayerMessageProtobuf.h"
#import "_MRSendButtonEventMessageProtobuf.h"
#import "_MRSendCommandMessageProtobuf.h"
#import "_MRSendCommandResultMessageProtobuf.h"
#import "_MRSendHIDEventMessageProtobuf.h"
#import "_MRSendHIDReportMessageProtobuf.h"
#import "_MRSendLyricsEventMessageProtobuf.h"
#import "_MRSendPackedVirtualTouchEventMessageProtobuf.h"
#import "_MRSendVirtualTouchEventMessageProtobuf.h"
#import "_MRSendVoiceInputMessageProtobuf.h"
#import "_MRSetArtworkMessageProtobuf.h"
#import "_MRSetStateMessageProtobuf.h"
#import "_MRSetHiliteModeMessageProtobuf.h"
#import "_MRSetIsMutedMessageProtobuf.h"
#import "_MRSetListeningModeMessageProtobuf.h"
#import "_MRSetNowPlayingClientMessageProtobuf.h"
#import "_MRSetNowPlayingPlayerMessageProtobuf.h"
#import "_MRSetRecordingStateMessageProtobuf.h"
#import "_MRSetVolumeMessageProtobuf.h"
#import "_MRTextInputMessageProtobuf.h"
#import "_MRTransactionMessageProtobuf.h"
#import "_MRUnregisterGameControllerMessageProtobuf.h"
#import "_MRUpdateActiveSystemEndpointMessageProtobuf.h"
#import "_MRUpdateClientMessageProtobuf.h"
#import "_MRUpdateContentItemArtworkMessageProtobuf.h"
#import "_MRUpdateContentItemMessageProtobuf.h"
#import "_MRUpdateEndpointsMessageProtobuf.h"
#import "_MRUpdateOutputDevicesMessageProtobuf.h"
#import "_MRUpdatePlayerMessageProtobuf.h"
#import "_MRVolumeControlCapabilitiesDidChangeMessageProtobuf.h"
#import "_MRVolumeDidChangeMessageProtobuf.h"
#import "_MRWakeDeviceMessageProtobuf.h"

@interface _MRMediaRemoteMessageProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _MRAdjustVolumeMessageProtobuf *adjustVolumeMessage; // ivar: _adjustVolumeMessage
@property (retain, nonatomic) _MRAudioFadeMessageProtobuf *audioFadeMessage; // ivar: _audioFadeMessage
@property (retain, nonatomic) _MRAudioFadeResponseMessageProtobuf *audioFadeResponseMessage; // ivar: _audioFadeResponseMessage
@property (retain, nonatomic) NSString *authenticationToken; // ivar: _authenticationToken
@property (retain, nonatomic) _MRClientUpdatesConfigurationProtobuf *clientUpdatesConfigMessage; // ivar: _clientUpdatesConfigMessage
@property (retain, nonatomic) _MRConfigureConnectionMessageProtobuf *configureConnectionMessage; // ivar: _configureConnectionMessage
@property (retain, nonatomic) _MRSetConnectionStateMessageProtobuf *connectionState; // ivar: _connectionState
@property (retain, nonatomic) _MRPlaybackQueueProtobuf *contentItemsChangedNotificationMessage; // ivar: _contentItemsChangedNotificationMessage
@property (retain, nonatomic) _MRCreateHostedEndpointRequestProtobuf *createHostedEndpointRequest; // ivar: _createHostedEndpointRequest
@property (retain, nonatomic) _MRCreateHostedEndpointResponseProtobuf *createHostedEndpointResponse; // ivar: _createHostedEndpointResponse
@property (retain, nonatomic) _MRCryptoPairingMessageProtobuf *cryptoPairingMessage; // ivar: _cryptoPairingMessage
@property (retain, nonatomic) _MRDeviceInfoMessageProtobuf *deviceInfoMessage; // ivar: _deviceInfoMessage
@property (retain, nonatomic) _MRSetDiscoveryModeProtobufMessage *discoveryModeMessage; // ivar: _discoveryModeMessage
@property (retain, nonatomic) _MRDiscoveryUpdateEndpointsProtobufMessage *discoveryUpdateEndpointsMessage; // ivar: _discoveryUpdateEndpointsMessage
@property (retain, nonatomic) _MRDiscoveryUpdateOutputDevicesProtobufMessage *discoveryUpdateOutputDevicesMessage; // ivar: _discoveryUpdateOutputDevicesMessage
@property (retain, nonatomic) _MRErrorProtobuf *error; // ivar: _error
@property (nonatomic) unsigned int errorCode; // ivar: _errorCode
@property (retain, nonatomic) NSString *errorDescription; // ivar: _errorDescription
@property (retain, nonatomic) _MRGameControllerMessageProtobuf *gameController; // ivar: _gameController
@property (retain, nonatomic) _MRGameControllerPropertiesMessageProtobuf *gameControllerProperties; // ivar: _gameControllerProperties
@property (retain, nonatomic) _MRGenericMessageProtobuf *genericMessage; // ivar: _genericMessage
@property (retain, nonatomic) _MRGetIsMutedMessageProtobuf *getIsMutedMessage; // ivar: _getIsMutedMessage
@property (retain, nonatomic) _MRGetIsMutedResultMessageProtobuf *getIsMutedResultMessage; // ivar: _getIsMutedResultMessage
@property (retain, nonatomic) _MRGetKeyboardSessionProtobuf *getKeyboardMessage; // ivar: _getKeyboardMessage
@property (retain, nonatomic) _MRGetRemoteTextInputSessionProtobuf *getRemoteTextInputSessionMessage; // ivar: _getRemoteTextInputSessionMessage
@property (retain, nonatomic) _MRGetStateMessageProtobuf *getStateMessage; // ivar: _getStateMessage
@property (retain, nonatomic) _MRGetVoiceInputDevicesMessageProtobuf *getVoiceInputDevicesMessage; // ivar: _getVoiceInputDevicesMessage
@property (retain, nonatomic) _MRGetVoiceInputDevicesResponseMessageProtobuf *getVoiceInputDevicesResponseMessage; // ivar: _getVoiceInputDevicesResponseMessage
@property (retain, nonatomic) _MRGetVolumeControlCapabilitiesMessageProtobuf *getVolumeControlCapabilitiesMessage; // ivar: _getVolumeControlCapabilitiesMessage
@property (retain, nonatomic) _MRGetVolumeControlCapabilitiesResultMessageProtobuf *getVolumeControlCapabilitiesResultMessage; // ivar: _getVolumeControlCapabilitiesResultMessage
@property (retain, nonatomic) _MRGetVolumeMessageProtobuf *getVolumeMessage; // ivar: _getVolumeMessage
@property (retain, nonatomic) _MRGetVolumeResultMessageProtobuf *getVolumeResultMessage; // ivar: _getVolumeResultMessage
@property (readonly, nonatomic) BOOL hasAdjustVolumeMessage;
@property (readonly, nonatomic) BOOL hasAudioFadeMessage;
@property (readonly, nonatomic) BOOL hasAudioFadeResponseMessage;
@property (readonly, nonatomic) BOOL hasAuthenticationToken;
@property (readonly, nonatomic) BOOL hasClientUpdatesConfigMessage;
@property (readonly, nonatomic) BOOL hasConfigureConnectionMessage;
@property (readonly, nonatomic) BOOL hasConnectionState;
@property (readonly, nonatomic) BOOL hasContentItemsChangedNotificationMessage;
@property (readonly, nonatomic) BOOL hasCreateHostedEndpointRequest;
@property (readonly, nonatomic) BOOL hasCreateHostedEndpointResponse;
@property (readonly, nonatomic) BOOL hasCryptoPairingMessage;
@property (readonly, nonatomic) BOOL hasDeviceInfoMessage;
@property (readonly, nonatomic) BOOL hasDiscoveryModeMessage;
@property (readonly, nonatomic) BOOL hasDiscoveryUpdateEndpointsMessage;
@property (readonly, nonatomic) BOOL hasDiscoveryUpdateOutputDevicesMessage;
@property (readonly, nonatomic) BOOL hasError;
@property (nonatomic) BOOL hasErrorCode;
@property (readonly, nonatomic) BOOL hasErrorDescription;
@property (readonly, nonatomic) BOOL hasGameController;
@property (readonly, nonatomic) BOOL hasGameControllerProperties;
@property (readonly, nonatomic) BOOL hasGenericMessage;
@property (readonly, nonatomic) BOOL hasGetIsMutedMessage;
@property (readonly, nonatomic) BOOL hasGetIsMutedResultMessage;
@property (readonly, nonatomic) BOOL hasGetKeyboardMessage;
@property (readonly, nonatomic) BOOL hasGetRemoteTextInputSessionMessage;
@property (readonly, nonatomic) BOOL hasGetStateMessage;
@property (readonly, nonatomic) BOOL hasGetVoiceInputDevicesMessage;
@property (readonly, nonatomic) BOOL hasGetVoiceInputDevicesResponseMessage;
@property (readonly, nonatomic) BOOL hasGetVolumeControlCapabilitiesMessage;
@property (readonly, nonatomic) BOOL hasGetVolumeControlCapabilitiesResultMessage;
@property (readonly, nonatomic) BOOL hasGetVolumeMessage;
@property (readonly, nonatomic) BOOL hasGetVolumeResultMessage;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasIsMutedDidChangeMessage;
@property (readonly, nonatomic) BOOL hasKeyboardMessage;
@property (readonly, nonatomic) BOOL hasMasterVolumeControlCapabilitiesDidChangeMessage;
@property (readonly, nonatomic) BOOL hasModifyOutputContextRequestMessage;
@property (readonly, nonatomic) BOOL hasNotificationMessage;
@property (readonly, nonatomic) BOOL hasOriginClientPropertiesMessage;
@property (readonly, nonatomic) BOOL hasPlaybackQueueRequest;
@property (readonly, nonatomic) BOOL hasPlaybackSessionMigrateBeginMessage;
@property (readonly, nonatomic) BOOL hasPlaybackSessionMigrateEndMessage;
@property (readonly, nonatomic) BOOL hasPlaybackSessionMigrateRequestMessage;
@property (readonly, nonatomic) BOOL hasPlaybackSessionMigrateResponseMessage;
@property (readonly, nonatomic) BOOL hasPlaybackSessionRequestMessage;
@property (readonly, nonatomic) BOOL hasPlaybackSessionResponseMessage;
@property (readonly, nonatomic) BOOL hasPlayerClientPropertiesMessage;
@property (readonly, nonatomic) BOOL hasPresentRouteAuthorizationStatusMessage;
@property (readonly, nonatomic) BOOL hasPromptForRouteAuthorizationMessage;
@property (readonly, nonatomic) BOOL hasPromptForRouteAuthorizationResponseMessage;
@property (readonly, nonatomic) BOOL hasReadyStateMessage;
@property (readonly, nonatomic) BOOL hasRegisterForGameControllerEvents;
@property (readonly, nonatomic) BOOL hasRegisterGameController;
@property (readonly, nonatomic) BOOL hasRegisterGameControllerResponse;
@property (readonly, nonatomic) BOOL hasRegisterHIDDeviceMessage;
@property (readonly, nonatomic) BOOL hasRegisterHIDDeviceResultMessage;
@property (readonly, nonatomic) BOOL hasRegisterVoiceInputDeviceMessage;
@property (readonly, nonatomic) BOOL hasRegisterVoiceInputDeviceResponseMessage;
@property (readonly, nonatomic) BOOL hasRemoteTextInputMessage;
@property (readonly, nonatomic) BOOL hasRemoveClientMessage;
@property (readonly, nonatomic) BOOL hasRemoveEndpointsMessage;
@property (readonly, nonatomic) BOOL hasRemoveOutputDevicesMessage;
@property (readonly, nonatomic) BOOL hasRemovePlayerMessage;
@property (readonly, nonatomic) BOOL hasSendButtonEventMessage;
@property (readonly, nonatomic) BOOL hasSendCommandMessage;
@property (readonly, nonatomic) BOOL hasSendCommandResultMessage;
@property (readonly, nonatomic) BOOL hasSendHIDEventMessage;
@property (readonly, nonatomic) BOOL hasSendHIDReportMessage;
@property (readonly, nonatomic) BOOL hasSendLyricsEventMessage;
@property (readonly, nonatomic) BOOL hasSendPackedVirtualTouchEventMessage;
@property (readonly, nonatomic) BOOL hasSendVirtualTouchEventMessage;
@property (readonly, nonatomic) BOOL hasSendVoiceInputMessage;
@property (readonly, nonatomic) BOOL hasSetArtworkMessage;
@property (readonly, nonatomic) BOOL hasSetDefaultSupportedCommandsMessage;
@property (readonly, nonatomic) BOOL hasSetHiliteModeMessage;
@property (readonly, nonatomic) BOOL hasSetIsMutedMessage;
@property (readonly, nonatomic) BOOL hasSetListeningModeMessage;
@property (readonly, nonatomic) BOOL hasSetNowPlayingClientMessage;
@property (readonly, nonatomic) BOOL hasSetNowPlayingPlayerMessage;
@property (readonly, nonatomic) BOOL hasSetRecordingStateMessage;
@property (readonly, nonatomic) BOOL hasSetStateMessage;
@property (readonly, nonatomic) BOOL hasSetVolumeMessage;
@property (readonly, nonatomic) BOOL hasTextInputMessage;
@property (nonatomic) BOOL hasTimestamp;
@property (readonly, nonatomic) BOOL hasTransactionPackets;
@property (nonatomic) BOOL hasType;
@property (readonly, nonatomic) BOOL hasUniqueIdentifier;
@property (readonly, nonatomic) BOOL hasUnregisterGameController;
@property (readonly, nonatomic) BOOL hasUpdateActiveSystemEndpointMessage;
@property (readonly, nonatomic) BOOL hasUpdateClientMessage;
@property (readonly, nonatomic) BOOL hasUpdateContentItemArtworkMessage;
@property (readonly, nonatomic) BOOL hasUpdateContentItemMessage;
@property (readonly, nonatomic) BOOL hasUpdateEndpointsMessage;
@property (readonly, nonatomic) BOOL hasUpdateOutputDevicesMessage;
@property (readonly, nonatomic) BOOL hasUpdatePlayerMessage;
@property (readonly, nonatomic) BOOL hasVolumeControlCapabilitiesDidChangeMessage;
@property (readonly, nonatomic) BOOL hasVolumeDidChangeMessage;
@property (readonly, nonatomic) BOOL hasWakeDeviceMessage;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) _MRIsMutedDidChangeMessageProtobuf *isMutedDidChangeMessage; // ivar: _isMutedDidChangeMessage
@property (retain, nonatomic) _MRKeyboardMessageProtobuf *keyboardMessage; // ivar: _keyboardMessage
@property (retain, nonatomic) _MRVolumeControlAvailabilityProtobuf *masterVolumeControlCapabilitiesDidChangeMessage; // ivar: _masterVolumeControlCapabilitiesDidChangeMessage
@property (retain, nonatomic) _MRAVModifyOutputContextRequestProtobuf *modifyOutputContextRequestMessage; // ivar: _modifyOutputContextRequestMessage
@property (retain, nonatomic) _MRNotificationMessageProtobuf *notificationMessage; // ivar: _notificationMessage
@property (retain, nonatomic) _MROriginClientPropertiesMessageProtobuf *originClientPropertiesMessage; // ivar: _originClientPropertiesMessage
@property (retain, nonatomic) _MRPlaybackQueueRequestProtobuf *playbackQueueRequest; // ivar: _playbackQueueRequest
@property (retain, nonatomic) _MRPlaybackSessionMigrateBeginMessageProtobuf *playbackSessionMigrateBeginMessage; // ivar: _playbackSessionMigrateBeginMessage
@property (retain, nonatomic) _MRPlaybackSessionMigrateEndMessageProtobuf *playbackSessionMigrateEndMessage; // ivar: _playbackSessionMigrateEndMessage
@property (retain, nonatomic) _MRPlaybackSessionMigrateRequestMessageProtobuf *playbackSessionMigrateRequestMessage; // ivar: _playbackSessionMigrateRequestMessage
@property (retain, nonatomic) _MRPlaybackSessionMigrateResponseMessageProtobuf *playbackSessionMigrateResponseMessage; // ivar: _playbackSessionMigrateResponseMessage
@property (retain, nonatomic) _MRPlaybackSessionRequestMessageProtobuf *playbackSessionRequestMessage; // ivar: _playbackSessionRequestMessage
@property (retain, nonatomic) _MRPlaybackSessionResponseMessageProtobuf *playbackSessionResponseMessage; // ivar: _playbackSessionResponseMessage
@property (retain, nonatomic) _MRPlayerClientPropertiesMessageProtobuf *playerClientPropertiesMessage; // ivar: _playerClientPropertiesMessage
@property (retain, nonatomic) _MRPresentRouteAuthorizationStatusMessageProtobuf *presentRouteAuthorizationStatusMessage; // ivar: _presentRouteAuthorizationStatusMessage
@property (retain, nonatomic) _MRPromptForRouteAuthorizationMessageProtobuf *promptForRouteAuthorizationMessage; // ivar: _promptForRouteAuthorizationMessage
@property (retain, nonatomic) _MRPromptForRouteAuthorizationResponseMessageProtobuf *promptForRouteAuthorizationResponseMessage; // ivar: _promptForRouteAuthorizationResponseMessage
@property (retain, nonatomic) _MRSetReadyStateMessageProtobuf *readyStateMessage; // ivar: _readyStateMessage
@property (retain, nonatomic) _MRRegisterForGameControllerEventsMessageProtobuf *registerForGameControllerEvents; // ivar: _registerForGameControllerEvents
@property (retain, nonatomic) _MRRegisterGameControllerMessageProtobuf *registerGameController; // ivar: _registerGameController
@property (retain, nonatomic) _MRRegisterGameControllerResponseMessageProtobuf *registerGameControllerResponse; // ivar: _registerGameControllerResponse
@property (retain, nonatomic) _MRRegisterHIDDeviceMessageProtobuf *registerHIDDeviceMessage; // ivar: _registerHIDDeviceMessage
@property (retain, nonatomic) _MRRegisterHIDDeviceResultMessageProtobuf *registerHIDDeviceResultMessage; // ivar: _registerHIDDeviceResultMessage
@property (retain, nonatomic) _MRRegisterVoiceInputDeviceMessageProtobuf *registerVoiceInputDeviceMessage; // ivar: _registerVoiceInputDeviceMessage
@property (retain, nonatomic) _MRRegisterVoiceInputDeviceResponseMessageProtobuf *registerVoiceInputDeviceResponseMessage; // ivar: _registerVoiceInputDeviceResponseMessage
@property (retain, nonatomic) _MRRemoteTextInputMessageProtobuf *remoteTextInputMessage; // ivar: _remoteTextInputMessage
@property (retain, nonatomic) _MRRemoveClientMessageProtobuf *removeClientMessage; // ivar: _removeClientMessage
@property (retain, nonatomic) _MRRemoveEndpointsMessageProtobuf *removeEndpointsMessage; // ivar: _removeEndpointsMessage
@property (retain, nonatomic) _MRRemoveOutputDevicesMessageProtobuf *removeOutputDevicesMessage; // ivar: _removeOutputDevicesMessage
@property (retain, nonatomic) _MRRemovePlayerMessageProtobuf *removePlayerMessage; // ivar: _removePlayerMessage
@property (retain, nonatomic) _MRSendButtonEventMessageProtobuf *sendButtonEventMessage; // ivar: _sendButtonEventMessage
@property (retain, nonatomic) _MRSendCommandMessageProtobuf *sendCommandMessage; // ivar: _sendCommandMessage
@property (retain, nonatomic) _MRSendCommandResultMessageProtobuf *sendCommandResultMessage; // ivar: _sendCommandResultMessage
@property (retain, nonatomic) _MRSendHIDEventMessageProtobuf *sendHIDEventMessage; // ivar: _sendHIDEventMessage
@property (retain, nonatomic) _MRSendHIDReportMessageProtobuf *sendHIDReportMessage; // ivar: _sendHIDReportMessage
@property (retain, nonatomic) _MRSendLyricsEventMessageProtobuf *sendLyricsEventMessage; // ivar: _sendLyricsEventMessage
@property (retain, nonatomic) _MRSendPackedVirtualTouchEventMessageProtobuf *sendPackedVirtualTouchEventMessage; // ivar: _sendPackedVirtualTouchEventMessage
@property (retain, nonatomic) _MRSendVirtualTouchEventMessageProtobuf *sendVirtualTouchEventMessage; // ivar: _sendVirtualTouchEventMessage
@property (retain, nonatomic) _MRSendVoiceInputMessageProtobuf *sendVoiceInputMessage; // ivar: _sendVoiceInputMessage
@property (retain, nonatomic) _MRSetArtworkMessageProtobuf *setArtworkMessage; // ivar: _setArtworkMessage
@property (retain, nonatomic) _MRSetStateMessageProtobuf *setDefaultSupportedCommandsMessage; // ivar: _setDefaultSupportedCommandsMessage
@property (retain, nonatomic) _MRSetHiliteModeMessageProtobuf *setHiliteModeMessage; // ivar: _setHiliteModeMessage
@property (retain, nonatomic) _MRSetIsMutedMessageProtobuf *setIsMutedMessage; // ivar: _setIsMutedMessage
@property (retain, nonatomic) _MRSetListeningModeMessageProtobuf *setListeningModeMessage; // ivar: _setListeningModeMessage
@property (retain, nonatomic) _MRSetNowPlayingClientMessageProtobuf *setNowPlayingClientMessage; // ivar: _setNowPlayingClientMessage
@property (retain, nonatomic) _MRSetNowPlayingPlayerMessageProtobuf *setNowPlayingPlayerMessage; // ivar: _setNowPlayingPlayerMessage
@property (retain, nonatomic) _MRSetRecordingStateMessageProtobuf *setRecordingStateMessage; // ivar: _setRecordingStateMessage
@property (retain, nonatomic) _MRSetStateMessageProtobuf *setStateMessage; // ivar: _setStateMessage
@property (retain, nonatomic) _MRSetVolumeMessageProtobuf *setVolumeMessage; // ivar: _setVolumeMessage
@property (retain, nonatomic) _MRTextInputMessageProtobuf *textInputMessage; // ivar: _textInputMessage
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (retain, nonatomic) _MRTransactionMessageProtobuf *transactionPackets; // ivar: _transactionPackets
@property (nonatomic) int type; // ivar: _type
@property (retain, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (retain, nonatomic) _MRUnregisterGameControllerMessageProtobuf *unregisterGameController; // ivar: _unregisterGameController
@property (retain, nonatomic) _MRUpdateActiveSystemEndpointMessageProtobuf *updateActiveSystemEndpointMessage; // ivar: _updateActiveSystemEndpointMessage
@property (retain, nonatomic) _MRUpdateClientMessageProtobuf *updateClientMessage; // ivar: _updateClientMessage
@property (retain, nonatomic) _MRUpdateContentItemArtworkMessageProtobuf *updateContentItemArtworkMessage; // ivar: _updateContentItemArtworkMessage
@property (retain, nonatomic) _MRUpdateContentItemMessageProtobuf *updateContentItemMessage; // ivar: _updateContentItemMessage
@property (retain, nonatomic) _MRUpdateEndpointsMessageProtobuf *updateEndpointsMessage; // ivar: _updateEndpointsMessage
@property (retain, nonatomic) _MRUpdateOutputDevicesMessageProtobuf *updateOutputDevicesMessage; // ivar: _updateOutputDevicesMessage
@property (retain, nonatomic) _MRUpdatePlayerMessageProtobuf *updatePlayerMessage; // ivar: _updatePlayerMessage
@property (retain, nonatomic) _MRVolumeControlCapabilitiesDidChangeMessageProtobuf *volumeControlCapabilitiesDidChangeMessage; // ivar: _volumeControlCapabilitiesDidChangeMessage
@property (retain, nonatomic) _MRVolumeDidChangeMessageProtobuf *volumeDidChangeMessage; // ivar: _volumeDidChangeMessage
@property (retain, nonatomic) _MRWakeDeviceMessageProtobuf *wakeDeviceMessage; // ivar: _wakeDeviceMessage


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
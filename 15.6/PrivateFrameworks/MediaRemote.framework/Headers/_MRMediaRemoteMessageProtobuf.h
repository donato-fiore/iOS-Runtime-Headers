// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MRMEDIAREMOTEMESSAGEPROTOBUF_H
#define _MRMEDIAREMOTEMESSAGEPROTOBUF_H

@class PBCodable, NSString;
@protocol NSCopying;


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
#import "_MRGetKeyboardSessionProtobuf.h"
#import "_MRGetRemoteTextInputSessionProtobuf.h"
#import "_MRGetStateMessageProtobuf.h"
#import "_MRGetVoiceInputDevicesMessageProtobuf.h"
#import "_MRGetVoiceInputDevicesResponseMessageProtobuf.h"
#import "_MRGetVolumeControlCapabilitiesMessageProtobuf.h"
#import "_MRGetVolumeControlCapabilitiesResultMessageProtobuf.h"
#import "_MRGetVolumeMessageProtobuf.h"
#import "_MRGetVolumeResultMessageProtobuf.h"
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
    NSUInteger _timestamp;
    _MRAudioFadeMessageProtobuf *_audioFadeMessage;
    _MRAudioFadeResponseMessageProtobuf *_audioFadeResponseMessage;
    NSString *_authenticationToken;
    _MRClientUpdatesConfigurationProtobuf *_clientUpdatesConfigMessage;
    _MRConfigureConnectionMessageProtobuf *_configureConnectionMessage;
    _MRSetConnectionStateMessageProtobuf *_connectionState;
    _MRPlaybackQueueProtobuf *_contentItemsChangedNotificationMessage;
    _MRCreateHostedEndpointRequestProtobuf *_createHostedEndpointRequest;
    _MRCreateHostedEndpointResponseProtobuf *_createHostedEndpointResponse;
    _MRCryptoPairingMessageProtobuf *_cryptoPairingMessage;
    _MRDeviceInfoMessageProtobuf *_deviceInfoMessage;
    _MRSetDiscoveryModeProtobufMessage *_discoveryModeMessage;
    _MRDiscoveryUpdateEndpointsProtobufMessage *_discoveryUpdateEndpointsMessage;
    _MRDiscoveryUpdateOutputDevicesProtobufMessage *_discoveryUpdateOutputDevicesMessage;
    _MRErrorProtobuf *_error;
    unsigned int _errorCode;
    NSString *_errorDescription;
    _MRGameControllerMessageProtobuf *_gameController;
    _MRGameControllerPropertiesMessageProtobuf *_gameControllerProperties;
    _MRGenericMessageProtobuf *_genericMessage;
    _MRGetKeyboardSessionProtobuf *_getKeyboardMessage;
    _MRGetRemoteTextInputSessionProtobuf *_getRemoteTextInputSessionMessage;
    _MRGetStateMessageProtobuf *_getStateMessage;
    _MRGetVoiceInputDevicesMessageProtobuf *_getVoiceInputDevicesMessage;
    _MRGetVoiceInputDevicesResponseMessageProtobuf *_getVoiceInputDevicesResponseMessage;
    _MRGetVolumeControlCapabilitiesMessageProtobuf *_getVolumeControlCapabilitiesMessage;
    _MRGetVolumeControlCapabilitiesResultMessageProtobuf *_getVolumeControlCapabilitiesResultMessage;
    _MRGetVolumeMessageProtobuf *_getVolumeMessage;
    _MRGetVolumeResultMessageProtobuf *_getVolumeResultMessage;
    NSString *_identifier;
    _MRKeyboardMessageProtobuf *_keyboardMessage;
    _MRVolumeControlAvailabilityProtobuf *_masterVolumeControlCapabilitiesDidChangeMessage;
    _MRAVModifyOutputContextRequestProtobuf *_modifyOutputContextRequestMessage;
    _MRNotificationMessageProtobuf *_notificationMessage;
    _MROriginClientPropertiesMessageProtobuf *_originClientPropertiesMessage;
    _MRPlaybackQueueRequestProtobuf *_playbackQueueRequest;
    _MRPlaybackSessionMigrateBeginMessageProtobuf *_playbackSessionMigrateBeginMessage;
    _MRPlaybackSessionMigrateEndMessageProtobuf *_playbackSessionMigrateEndMessage;
    _MRPlaybackSessionMigrateRequestMessageProtobuf *_playbackSessionMigrateRequestMessage;
    _MRPlaybackSessionMigrateResponseMessageProtobuf *_playbackSessionMigrateResponseMessage;
    _MRPlaybackSessionRequestMessageProtobuf *_playbackSessionRequestMessage;
    _MRPlaybackSessionResponseMessageProtobuf *_playbackSessionResponseMessage;
    _MRPlayerClientPropertiesMessageProtobuf *_playerClientPropertiesMessage;
    _MRPresentRouteAuthorizationStatusMessageProtobuf *_presentRouteAuthorizationStatusMessage;
    _MRPromptForRouteAuthorizationMessageProtobuf *_promptForRouteAuthorizationMessage;
    _MRPromptForRouteAuthorizationResponseMessageProtobuf *_promptForRouteAuthorizationResponseMessage;
    _MRSetReadyStateMessageProtobuf *_readyStateMessage;
    _MRRegisterForGameControllerEventsMessageProtobuf *_registerForGameControllerEvents;
    _MRRegisterGameControllerMessageProtobuf *_registerGameController;
    _MRRegisterGameControllerResponseMessageProtobuf *_registerGameControllerResponse;
    _MRRegisterHIDDeviceMessageProtobuf *_registerHIDDeviceMessage;
    _MRRegisterHIDDeviceResultMessageProtobuf *_registerHIDDeviceResultMessage;
    _MRRegisterVoiceInputDeviceMessageProtobuf *_registerVoiceInputDeviceMessage;
    _MRRegisterVoiceInputDeviceResponseMessageProtobuf *_registerVoiceInputDeviceResponseMessage;
    _MRRemoteTextInputMessageProtobuf *_remoteTextInputMessage;
    _MRRemoveClientMessageProtobuf *_removeClientMessage;
    _MRRemoveEndpointsMessageProtobuf *_removeEndpointsMessage;
    _MRRemoveOutputDevicesMessageProtobuf *_removeOutputDevicesMessage;
    _MRRemovePlayerMessageProtobuf *_removePlayerMessage;
    _MRSendButtonEventMessageProtobuf *_sendButtonEventMessage;
    _MRSendCommandMessageProtobuf *_sendCommandMessage;
    _MRSendCommandResultMessageProtobuf *_sendCommandResultMessage;
    _MRSendHIDEventMessageProtobuf *_sendHIDEventMessage;
    _MRSendHIDReportMessageProtobuf *_sendHIDReportMessage;
    _MRSendLyricsEventMessageProtobuf *_sendLyricsEventMessage;
    _MRSendPackedVirtualTouchEventMessageProtobuf *_sendPackedVirtualTouchEventMessage;
    _MRSendVirtualTouchEventMessageProtobuf *_sendVirtualTouchEventMessage;
    _MRSendVoiceInputMessageProtobuf *_sendVoiceInputMessage;
    _MRSetArtworkMessageProtobuf *_setArtworkMessage;
    _MRSetStateMessageProtobuf *_setDefaultSupportedCommandsMessage;
    _MRSetHiliteModeMessageProtobuf *_setHiliteModeMessage;
    _MRSetListeningModeMessageProtobuf *_setListeningModeMessage;
    _MRSetNowPlayingClientMessageProtobuf *_setNowPlayingClientMessage;
    _MRSetNowPlayingPlayerMessageProtobuf *_setNowPlayingPlayerMessage;
    _MRSetRecordingStateMessageProtobuf *_setRecordingStateMessage;
    _MRSetStateMessageProtobuf *_setStateMessage;
    _MRSetVolumeMessageProtobuf *_setVolumeMessage;
    _MRTextInputMessageProtobuf *_textInputMessage;
    _MRTransactionMessageProtobuf *_transactionPackets;
    int _type;
    NSString *_uniqueIdentifier;
    _MRUnregisterGameControllerMessageProtobuf *_unregisterGameController;
    _MRUpdateActiveSystemEndpointMessageProtobuf *_updateActiveSystemEndpointMessage;
    _MRUpdateClientMessageProtobuf *_updateClientMessage;
    _MRUpdateContentItemArtworkMessageProtobuf *_updateContentItemArtworkMessage;
    _MRUpdateContentItemMessageProtobuf *_updateContentItemMessage;
    _MRUpdateEndpointsMessageProtobuf *_updateEndpointsMessage;
    _MRUpdateOutputDevicesMessageProtobuf *_updateOutputDevicesMessage;
    _MRUpdatePlayerMessageProtobuf *_updatePlayerMessage;
    _MRVolumeControlCapabilitiesDidChangeMessageProtobuf *_volumeControlCapabilitiesDidChangeMessage;
    _MRVolumeDidChangeMessageProtobuf *_volumeDidChangeMessage;
    _MRWakeDeviceMessageProtobuf *_wakeDeviceMessage;
    ? _has;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif
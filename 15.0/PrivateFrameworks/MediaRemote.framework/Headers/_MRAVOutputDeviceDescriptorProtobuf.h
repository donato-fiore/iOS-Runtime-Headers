// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MRAVOUTPUTDEVICEDESCRIPTORPROTOBUF_H
#define _MRAVOUTPUTDEVICEDESCRIPTORPROTOBUF_H

@class PBCodable, NSString, NSMutableArray, NSData;
@protocol NSCopying;


#import "_MRAVOutputDeviceSourceInfoProtobuf.h"

@interface _MRAVOutputDeviceDescriptorProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *airPlayGroupID; // ivar: _airPlayGroupID
@property (retain, nonatomic) NSMutableArray *availableBluetoothListeningModes; // ivar: _availableBluetoothListeningModes
@property (nonatomic) float batteryLevel; // ivar: _batteryLevel
@property (retain, nonatomic) NSString *bluetoothID; // ivar: _bluetoothID
@property (nonatomic) BOOL canAccessAppleMusic; // ivar: _canAccessAppleMusic
@property (nonatomic) BOOL canAccessRemoteAssets; // ivar: _canAccessRemoteAssets
@property (nonatomic) BOOL canAccessiCloudMusicLibrary; // ivar: _canAccessiCloudMusicLibrary
@property (nonatomic) BOOL canFetchMediaDataFromSender; // ivar: _canFetchMediaDataFromSender
@property (nonatomic) BOOL canPlayEncryptedProgressiveDownloadAssets; // ivar: _canPlayEncryptedProgressiveDownloadAssets
@property (nonatomic) BOOL canRelayCommunicationChannel; // ivar: _canRelayCommunicationChannel
@property (retain, nonatomic) NSMutableArray *clusterCompositions; // ivar: _clusterCompositions
@property (nonatomic) unsigned int clusterType; // ivar: _clusterType
@property (nonatomic) unsigned int configuredClusterSize; // ivar: _configuredClusterSize
@property (retain, nonatomic) NSString *currentBluetoothListeningMode; // ivar: _currentBluetoothListeningMode
@property (nonatomic) int deviceSubType; // ivar: _deviceSubType
@property (nonatomic) int deviceType; // ivar: _deviceType
@property (retain, nonatomic) NSString *firmwareVersion; // ivar: _firmwareVersion
@property (nonatomic) BOOL groupContainsGroupLeader; // ivar: _groupContainsGroupLeader
@property (retain, nonatomic) NSString *groupID; // ivar: _groupID
@property (readonly, nonatomic) BOOL hasAirPlayGroupID;
@property (nonatomic) BOOL hasBatteryLevel;
@property (readonly, nonatomic) BOOL hasBluetoothID;
@property (nonatomic) BOOL hasCanAccessAppleMusic;
@property (nonatomic) BOOL hasCanAccessRemoteAssets;
@property (nonatomic) BOOL hasCanAccessiCloudMusicLibrary;
@property (nonatomic) BOOL hasCanFetchMediaDataFromSender;
@property (nonatomic) BOOL hasCanPlayEncryptedProgressiveDownloadAssets;
@property (nonatomic) BOOL hasCanRelayCommunicationChannel;
@property (nonatomic) BOOL hasClusterType;
@property (nonatomic) BOOL hasConfiguredClusterSize;
@property (readonly, nonatomic) BOOL hasCurrentBluetoothListeningMode;
@property (nonatomic) BOOL hasDeviceSubType;
@property (nonatomic) BOOL hasDeviceType;
@property (readonly, nonatomic) BOOL hasFirmwareVersion;
@property (nonatomic) BOOL hasGroupContainsGroupLeader;
@property (readonly, nonatomic) BOOL hasGroupID;
@property (nonatomic) BOOL hasHostDeviceClass;
@property (nonatomic) BOOL hasIsAddedToHomeKit;
@property (nonatomic) BOOL hasIsAirPlayReceiverSessionActive;
@property (nonatomic) BOOL hasIsDeviceGroupable;
@property (nonatomic) BOOL hasIsGroupLeader;
@property (nonatomic) BOOL hasIsGroupable;
@property (nonatomic) BOOL hasIsLocalDevice;
@property (nonatomic) BOOL hasIsProxyGroupPlayer;
@property (nonatomic) BOOL hasIsRemoteControllable;
@property (nonatomic) BOOL hasIsVolumeControlAvailable;
@property (readonly, nonatomic) BOOL hasLogicalDeviceID;
@property (readonly, nonatomic) BOOL hasMacAddress;
@property (readonly, nonatomic) BOOL hasModelID;
@property (readonly, nonatomic) BOOL hasModelSpecificInfoData;
@property (readonly, nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasParentGroupContainsDiscoverableLeader;
@property (readonly, nonatomic) BOOL hasParentGroupIdentifier;
@property (nonatomic) BOOL hasPresentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
@property (readonly, nonatomic) BOOL hasPrimaryUID;
@property (nonatomic) BOOL hasProducesLowFidelityAudio;
@property (nonatomic) BOOL hasRequiresAuthorization;
@property (nonatomic) BOOL hasShouldForceRemoteControlabillity;
@property (readonly, nonatomic) BOOL hasSourceInfo;
@property (nonatomic) BOOL hasSupportsBufferedAirPlay;
@property (nonatomic) BOOL hasSupportsExternalScreen;
@property (nonatomic) BOOL hasSupportsHAP;
@property (nonatomic) BOOL hasSupportsMultiplayer;
@property (nonatomic) BOOL hasSupportsRapportRemoteControlTransport;
@property (nonatomic) BOOL hasSupportsSharePlayHandoff;
@property (readonly, nonatomic) BOOL hasUniqueIdentifier;
@property (nonatomic) BOOL hasUsingJSONProtocol;
@property (nonatomic) BOOL hasVolume;
@property (nonatomic) BOOL hasVolumeCapabilities;
@property (nonatomic) int hostDeviceClass; // ivar: _hostDeviceClass
@property (nonatomic) BOOL isAddedToHomeKit; // ivar: _isAddedToHomeKit
@property (nonatomic) BOOL isAirPlayReceiverSessionActive; // ivar: _isAirPlayReceiverSessionActive
@property (nonatomic) BOOL isDeviceGroupable; // ivar: _isDeviceGroupable
@property (nonatomic) BOOL isGroupLeader; // ivar: _isGroupLeader
@property (nonatomic) BOOL isGroupable; // ivar: _isGroupable
@property (nonatomic) BOOL isLocalDevice; // ivar: _isLocalDevice
@property (nonatomic) BOOL isProxyGroupPlayer; // ivar: _isProxyGroupPlayer
@property (nonatomic) BOOL isRemoteControllable; // ivar: _isRemoteControllable
@property (nonatomic) BOOL isVolumeControlAvailable; // ivar: _isVolumeControlAvailable
@property (retain, nonatomic) NSString *logicalDeviceID; // ivar: _logicalDeviceID
@property (retain, nonatomic) NSData *macAddress; // ivar: _macAddress
@property (retain, nonatomic) NSString *modelID; // ivar: _modelID
@property (retain, nonatomic) NSData *modelSpecificInfoData; // ivar: _modelSpecificInfoData
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) BOOL parentGroupContainsDiscoverableLeader; // ivar: _parentGroupContainsDiscoverableLeader
@property (retain, nonatomic) NSString *parentGroupIdentifier; // ivar: _parentGroupIdentifier
@property (nonatomic) BOOL presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets; // ivar: _presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets
@property (retain, nonatomic) NSString *primaryUID; // ivar: _primaryUID
@property (nonatomic) BOOL producesLowFidelityAudio; // ivar: _producesLowFidelityAudio
@property (nonatomic) BOOL requiresAuthorization; // ivar: _requiresAuthorization
@property (nonatomic) BOOL shouldForceRemoteControlabillity; // ivar: _shouldForceRemoteControlabillity
@property (retain, nonatomic) _MRAVOutputDeviceSourceInfoProtobuf *sourceInfo; // ivar: _sourceInfo
@property (nonatomic) BOOL supportsBufferedAirPlay; // ivar: _supportsBufferedAirPlay
@property (nonatomic) BOOL supportsExternalScreen; // ivar: _supportsExternalScreen
@property (nonatomic) BOOL supportsHAP; // ivar: _supportsHAP
@property (nonatomic) BOOL supportsMultiplayer; // ivar: _supportsMultiplayer
@property (nonatomic) BOOL supportsRapportRemoteControlTransport; // ivar: _supportsRapportRemoteControlTransport
@property (nonatomic) BOOL supportsSharePlayHandoff; // ivar: _supportsSharePlayHandoff
@property (retain, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (nonatomic) BOOL usingJSONProtocol; // ivar: _usingJSONProtocol
@property (nonatomic) float volume; // ivar: _volume
@property (nonatomic) int volumeCapabilities; // ivar: _volumeCapabilities


+(Class)clusterCompositionType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)availableBluetoothListeningModesAtIndex:(NSUInteger)arg0 ;
-(id)clusterCompositionAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)deviceSubTypeAsString:(int)arg0 ;
-(id)deviceTypeAsString:(int)arg0 ;
-(id)dictionaryRepresentation;
-(id)hostDeviceClassAsString:(int)arg0 ;
-(int)StringAsDeviceSubType:(id)arg0 ;
-(int)StringAsDeviceType:(id)arg0 ;
-(int)StringAsHostDeviceClass:(id)arg0 ;
-(void)addAvailableBluetoothListeningModes:(id)arg0 ;
-(void)addClusterComposition:(id)arg0 ;
-(void)clearAvailableBluetoothListeningModes;
-(void)clearClusterCompositions;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
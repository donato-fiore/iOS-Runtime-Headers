// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRAVOUTPUTDEVICE_H
#define MRAVOUTPUTDEVICE_H

@class NSData, NSArray, NSString, NSDictionary;

#import <Foundation/Foundation.h>

#import "_MRAVOutputDeviceDescriptorProtobuf.h"
#import "MRAVEndpoint.h"
#import "MRAVOutputDeviceSourceInfo.h"

@interface MRAVOutputDevice : NSObject

@property (readonly, nonatomic) NSData *MACAddress; // ivar: _MACAddress
@property (readonly, nonatomic) NSArray *activatedClusterMembers; // ivar: _activatedClusterMembers
@property (copy, nonatomic) NSString *airPlayGroupID; // ivar: _airPlayGroupID
@property (readonly, nonatomic, getter=isAirPlayReceiverSessionActive) BOOL airPlayReceiverSessionActive; // ivar: _airPlayReceiverSessionActive
@property (readonly, nonatomic) NSArray *allClusterMembers; // ivar: _allClusterMembers
@property (readonly, nonatomic) NSArray *allClusterMembersOutputDevices;
@property (readonly, nonatomic) BOOL allowsHeadTrackedSpatialAudio; // ivar: _allowsHeadTrackedSpatialAudio
@property (readonly, nonatomic, getter=isAppleAccessory) BOOL appleAccessory; // ivar: _appleAccessory
@property (readonly, nonatomic, getter=isAuxiliary) BOOL auxiliary;
@property (readonly, nonatomic) NSArray *availableBluetoothListeningModes; // ivar: _availableBluetoothListeningModes
@property (readonly, nonatomic) NSString *baseGroupID;
@property (readonly, nonatomic) NSString *baseParentGroupID;
@property (readonly, nonatomic) float batteryLevel; // ivar: _batteryLevel
@property (readonly, nonatomic) NSString *bluetoothID; // ivar: _bluetoothID
@property (readonly, nonatomic) BOOL canAccessAppleMusic; // ivar: _canAccessAppleMusic
@property (readonly, nonatomic) BOOL canAccessRemoteAssets; // ivar: _canAccessRemoteAssets
@property (readonly, nonatomic) BOOL canAccessiCloudMusicLibrary; // ivar: _canAccessiCloudMusicLibrary
@property (readonly, nonatomic) BOOL canFetchMediaDataFromSender; // ivar: _canFetchMediaDataFromSender
@property (readonly, nonatomic) BOOL canPlayEncryptedProgressiveDownloadAssets; // ivar: _canPlayEncryptedProgressiveDownloadAssets
@property (readonly, nonatomic) BOOL canProxyEndpoint;
@property (readonly, nonatomic) BOOL canRelayCommunicationChannel; // ivar: _canRelayCommunicationChannel
@property (readonly, nonatomic) NSString *capabilitiesDescription;
@property (readonly, nonatomic) NSArray *clusterComposition; // ivar: _clusterComposition
@property (readonly, nonatomic) NSArray *clusterCompositionOutputDevices;
@property (readonly, nonatomic) NSString *clusterID; // ivar: _clusterID
@property (readonly, nonatomic, getter=isClusterLeader) BOOL clusterLeader; // ivar: _clusterLeader
@property (readonly, nonatomic) unsigned int clusterType;
@property (readonly, nonatomic) NSString *composedTypeDescription;
@property (readonly, nonatomic) NSUInteger configuredClusterSize; // ivar: _configuredClusterSize
@property (readonly, nonatomic) NSString *currentBluetoothListeningMode; // ivar: _currentBluetoothListeningMode
@property (readonly, nonatomic) NSString *debugName;
@property (copy, nonatomic) _MRAVOutputDeviceDescriptorProtobuf *descriptor; // ivar: _descriptor
@property (readonly, nonatomic, getter=isDeviceGroupable) BOOL deviceGroupable; // ivar: _deviceGroupable
@property (readonly, nonatomic) unsigned int deviceSubtype; // ivar: _deviceSubtype
@property (readonly, nonatomic) unsigned int deviceType; // ivar: _deviceType
@property (readonly, nonatomic) BOOL discoveredOnSameInfra; // ivar: _discoveredOnSameInfra
@property (readonly, nonatomic) float distance; // ivar: _distance
@property (readonly, nonatomic) NSArray *dnsNames; // ivar: _dnsNames
@property (readonly, nonatomic, getter=isEligibleForWHAPlayback) BOOL eligibleForWHAPlayback;
@property (weak, nonatomic) MRAVEndpoint *endpoint; // ivar: _endpoint
@property (readonly, nonatomic) NSString *firmwareVersion; // ivar: _firmwareVersion
@property (readonly, nonatomic) BOOL groupContainsGroupLeader; // ivar: _groupContainsGroupLeader
@property (readonly, nonatomic) NSString *groupContextID;
@property (readonly, nonatomic) NSString *groupID;
@property (readonly, nonatomic, getter=isGroupLeader) BOOL groupLeader; // ivar: _groupLeader
@property (readonly, nonatomic, getter=isGroupable) BOOL groupable; // ivar: _groupable
@property (readonly, nonatomic) BOOL hasBatteryLevel; // ivar: _hasBatteryLevel
@property (readonly, nonatomic, getter=isHeadTrackedSpatialAudioActive) BOOL headTrackedSpatialAudioActive; // ivar: _headTrackedSpatialAudioActive
@property (readonly, nonatomic) NSString *headTrackedSpatialAudioMode; // ivar: _headTrackedSpatialAudioMode
@property (readonly, nonatomic) NSInteger hostDeviceClass; // ivar: _hostDeviceClass
@property (readonly, nonatomic) BOOL isAddedToHomeKit; // ivar: _isAddedToHomeKit
@property (readonly, nonatomic) BOOL isPersonalRoute;
@property (readonly, nonatomic) NSDictionary *jsonEncodableDictionaryRepresentation;
@property (readonly, nonatomic, getter=isKnown) BOOL known;
@property (readonly, nonatomic, getter=isLocalDevice) BOOL localDevice; // ivar: _localDevice
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *logicalDeviceID; // ivar: _logicalDeviceID
@property (readonly, nonatomic) NSString *modelID; // ivar: _modelID
@property (readonly, nonatomic) NSDictionary *modelSpecificInfo; // ivar: _modelSpecificInfo
@property (readonly, nonatomic, getter=isMultiRoom) BOOL multiRoom;
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic, getter=isNearby) BOOL nearby;
@property (readonly, nonatomic) BOOL parentGroupContainsDiscoverableLeader; // ivar: _parentGroupContainsDiscoverableLeader
@property (copy, nonatomic) NSString *parentGroupIdentifier; // ivar: _parentGroupIdentifier
@property (readonly, nonatomic) NSString *parentUID;
@property (readonly, nonatomic, getter=isPickable) BOOL pickable;
@property (readonly, nonatomic, getter=isPickedOnPairedDevice) BOOL pickedOnPairedDevice; // ivar: _pickedOnPairedDevice
@property (readonly, nonatomic) NSString *playingPairedDeviceName; // ivar: _playingPairedDeviceName
@property (readonly, nonatomic) BOOL presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets; // ivar: _presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets
@property (copy, nonatomic) NSString *primaryID; // ivar: _primaryID
@property (readonly, nonatomic, getter=isPrimaryLocalDevice) BOOL primaryLocalDevice;
@property (readonly, nonatomic) BOOL producesLowFidelityAudio; // ivar: _producesLowFidelityAudio
@property (readonly, nonatomic, getter=isProxyGroupPlayer) BOOL proxyGroupPlayer; // ivar: _proxyGroupPlayer
@property (readonly, nonatomic, getter=isRemoteControllable) BOOL remoteControllable; // ivar: _remoteControllable
@property (readonly, nonatomic) BOOL requiresAuthorization; // ivar: _requiresAuthorization
@property (readonly, nonatomic) NSString *roleDescription;
@property (readonly, nonatomic) NSString *roomID;
@property (readonly, nonatomic) NSString *roomName;
@property (readonly, nonatomic) BOOL shouldBeLocallyHosted;
@property (readonly, nonatomic) MRAVOutputDeviceSourceInfo *sourceInfo; // ivar: _sourceInfo
@property (readonly, nonatomic) BOOL supportsBluetoothSharing; // ivar: _supportsBluetoothSharing
@property (readonly, nonatomic) BOOL supportsBufferedAirPlay; // ivar: _supportsBufferedAirPlay
@property (readonly, nonatomic) BOOL supportsEngageOnClusterActivation; // ivar: _supportsEngageOnClusterActivation
@property (readonly, nonatomic) BOOL supportsExternalScreen; // ivar: _supportsExternalScreen
@property (readonly, nonatomic) BOOL supportsHAP; // ivar: _supportsHAP
@property (readonly, nonatomic) BOOL supportsHeadTrackedSpatialAudio; // ivar: _supportsHeadTrackedSpatialAudio
@property (readonly, nonatomic) BOOL supportsMigration;
@property (readonly, nonatomic) BOOL supportsMultiplayer; // ivar: _supportsMultiplayer
@property (readonly, nonatomic) BOOL supportsRapport; // ivar: _supportsRapport
@property (readonly, nonatomic) BOOL supportsRapportRemoteControlTransport; // ivar: _supportsRapportRemoteControlTransport
@property (readonly, nonatomic) BOOL supportsSharePlayHandoff; // ivar: _supportsSharePlayHandoff
@property (readonly, nonatomic) NSString *tightSyncID; // ivar: _tightSyncID
@property (readonly, nonatomic) NSInteger transportType; // ivar: _transportType
@property (readonly, nonatomic) NSString *uid; // ivar: _uid
@property (readonly, nonatomic, getter=isUsingJSONProtocol) BOOL usingJSONProtocol;
@property (nonatomic) float volume; // ivar: _volume
@property (readonly, nonatomic) unsigned int volumeCapabilities;
@property (readonly, nonatomic, getter=isVolumeControlAvailable) BOOL volumeControlAvailable; // ivar: _volumeControlAvailable


+(id)localDeviceLocalizedName;
+(id)localDeviceUID;
-(BOOL)containsUID:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualFuzzy:(id)arg0 ;
-(BOOL)isEqualToOutputDevice:(id)arg0 ;
-(BOOL)isEqualToOutputDevice:(id)arg0 denyList:(id)arg1 ;
-(BOOL)isEqualToOutputDevice:(id)arg0 denyList:(id)arg1 addedProperties:(*id)arg2 removedProperties:(*id)arg3 changedProperties:(*id)arg4 ;
-(NSUInteger)hash;
-(id)clusterMembers;
-(id)description;
-(id)effectiveOutputDeviceForUID:(id)arg0 ;
-(id)mergeVolumeFrom:(id)arg0 ;
-(void)adjustVolume:(NSInteger)arg0 ;


@end


#endif
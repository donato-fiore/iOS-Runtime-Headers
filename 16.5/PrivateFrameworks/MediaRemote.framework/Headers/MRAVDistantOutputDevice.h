// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRAVDISTANTOUTPUTDEVICE_H
#define MRAVDISTANTOUTPUTDEVICE_H

@class NSDictionary, NSArray;
@protocol NSSecureCoding;


#import "MRAVOutputDevice.h"
#import "_MRAVOutputDeviceDescriptorProtobuf.h"
#import "MRAVOutputDeviceSourceInfo.h"

@interface MRAVDistantOutputDevice : MRAVOutputDevice <NSSecureCoding>

 {
    _MRAVOutputDeviceDescriptorProtobuf *_protobuf;
    MRAVOutputDeviceSourceInfo *_sourceInfo;
    NSDictionary *_modelSpecificInfo;
    NSArray *_clusterComposition;
    NSArray *_activatedClusterMemebers;
    NSArray *_allClusterMembers;
}


@property (readonly, nonatomic) _MRAVOutputDeviceDescriptorProtobuf *generateDescriptor;
@property (readonly, nonatomic) _MRAVOutputDeviceDescriptorProtobuf *protobuf;


+(BOOL)supportsSecureCoding;
-(BOOL)canAccessAppleMusic;
-(BOOL)canAccessRemoteAssets;
-(BOOL)canAccessiCloudMusicLibrary;
-(BOOL)canFetchMediaDataFromSender;
-(BOOL)canPlayEncryptedProgressiveDownloadAssets;
-(BOOL)canRelayCommunicationChannel;
-(BOOL)discoveredOnSameInfra;
-(BOOL)groupContainsGroupLeader;
-(BOOL)hasBatteryLevel;
-(BOOL)isAddedToHomeKit;
-(BOOL)isAirPlayReceiverSessionActive;
-(BOOL)isAppleAccessory;
-(BOOL)isClusterLeader;
-(BOOL)isDeviceGroupable;
-(BOOL)isGroupLeader;
-(BOOL)isGroupable;
-(BOOL)isLocalDevice;
-(BOOL)isPickable;
-(BOOL)isProxyGroupPlayer;
-(BOOL)isRemoteControllable;
-(BOOL)isUsingJSONProtocol;
-(BOOL)isVolumeControlAvailable;
-(BOOL)parentGroupContainsDiscoverableLeader;
-(BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
-(BOOL)producesLowFidelityAudio;
-(BOOL)requiresAuthorization;
-(BOOL)supportsBufferedAirPlay;
-(BOOL)supportsEngageOnClusterActivation;
-(BOOL)supportsExternalScreen;
-(BOOL)supportsHAP;
-(BOOL)supportsMultiplayer;
-(BOOL)supportsRapportRemoteControlTransport;
-(BOOL)supportsSharePlayHandoff;
-(NSInteger)hostDeviceClass;
-(NSInteger)transportType;
-(NSUInteger)configuredClusterSize;
-(float)batteryLevel;
-(float)distance;
-(float)volume;
-(id)MACAddress;
-(id)activatedClusterMembers;
-(id)airPlayGroupID;
-(id)allClusterMembers;
-(id)availableBluetoothListeningModes;
-(id)bluetoothID;
-(id)clusterComposition;
-(id)clusterID;
-(id)currentBluetoothListeningMode;
-(id)description;
-(id)descriptor;
-(id)firmwareVersion;
-(id)groupID;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDescriptor:(id)arg0 ;
-(id)initWithSkeleton:(id)arg0 ;
-(id)logicalDeviceID;
-(id)modelID;
-(id)modelSpecificInfo;
-(id)name;
-(id)parentGroupIdentifier;
-(id)parentUID;
-(id)primaryID;
-(id)roomID;
-(id)roomName;
-(id)sourceInfo;
-(id)tightSyncID;
-(id)uid;
-(unsigned int)clusterType;
-(unsigned int)deviceSubtype;
-(unsigned int)deviceType;
-(unsigned int)volumeCapabilities;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
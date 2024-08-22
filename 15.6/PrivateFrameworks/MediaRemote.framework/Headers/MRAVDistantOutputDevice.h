// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
}


@property (readonly, nonatomic) _MRAVOutputDeviceDescriptorProtobuf *protobuf;


+(BOOL)supportsSecureCoding;
-(BOOL)canAccessAppleMusic;
-(BOOL)canAccessRemoteAssets;
-(BOOL)canAccessiCloudMusicLibrary;
-(BOOL)canFetchMediaDataFromSender;
-(BOOL)canPlayEncryptedProgressiveDownloadAssets;
-(BOOL)canRelayCommunicationChannel;
-(BOOL)groupContainsGroupLeader;
-(BOOL)hasBatteryLevel;
-(BOOL)isAddedToHomeKit;
-(BOOL)isAirPlayReceiverSessionActive;
-(BOOL)isDeviceGroupable;
-(BOOL)isGroupLeader;
-(BOOL)isGroupable;
-(BOOL)isLocalDevice;
-(BOOL)isProxyGroupPlayer;
-(BOOL)isRemoteControllable;
-(BOOL)isUsingJSONProtocol;
-(BOOL)isVolumeControlAvailable;
-(BOOL)parentGroupContainsDiscoverableLeader;
-(BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
-(BOOL)producesLowFidelityAudio;
-(BOOL)requiresAuthorization;
-(BOOL)supportsBufferedAirPlay;
-(BOOL)supportsExternalScreen;
-(BOOL)supportsHAP;
-(BOOL)supportsMultiplayer;
-(BOOL)supportsRapportRemoteControlTransport;
-(BOOL)supportsSharePlayHandoff;
-(NSInteger)hostDeviceClass;
-(NSUInteger)configuredClusterSize;
-(float)batteryLevel;
-(float)volume;
-(id)MACAddress;
-(id)airPlayGroupID;
-(id)availableBluetoothListeningModes;
-(id)bluetoothID;
-(id)clusterComposition;
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
-(id)primaryID;
-(id)sourceInfo;
-(id)uid;
-(unsigned int)clusterType;
-(unsigned int)deviceSubtype;
-(unsigned int)deviceType;
-(unsigned int)volumeCapabilities;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
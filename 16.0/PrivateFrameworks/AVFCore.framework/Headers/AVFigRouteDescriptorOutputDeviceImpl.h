// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVFIGROUTEDESCRIPTOROUTPUTDEVICEIMPL_H
#define AVFIGROUTEDESCRIPTOROUTPUTDEVICEIMPL_H

@class NSString, NSArray, NSDictionary, NSNumber, NSData;
@protocol AVOutputDeviceImpl, FigRoutingContextFactory, AVOutputDeviceImplSupport;

#import <Foundation/Foundation.h>

#import "AVWeakReference.h"

@interface AVFigRouteDescriptorOutputDeviceImpl : NSObject <AVOutputDeviceImpl>

 {
    AVWeakReference *_weakObserver;
    *OpaqueFigRouteDiscoverer _routeDiscoverer;
    *OpaqueFigVolumeControllerState _volumeController;
    id<FigRoutingContextFactory> *_routingContextFactory;
    BOOL _useRouteConfigUpdatedNotification;
}


@property (readonly, nonatomic) NSInteger HAPConformance;
@property (readonly, copy, nonatomic) NSString *ID;
@property (readonly, nonatomic) NSArray *activatedDeviceClusterMembers;
@property (readonly, nonatomic) NSDictionary *airPlayProperties;
@property (readonly, nonatomic) NSArray *allClusterMembers;
@property (readonly, nonatomic) BOOL allowsHeadTrackedSpatialAudio;
@property (readonly, nonatomic, getter=isAppleAccessory) BOOL appleAccessory;
@property (readonly, nonatomic) BOOL automaticallyAllowsConnectionsFromPeersInHomeGroup;
@property (readonly, nonatomic) NSArray *availableBluetoothListeningModes;
@property (readonly, nonatomic) NSNumber *batteryLevel;
@property (readonly, nonatomic) BOOL canAccessAppleMusic;
@property (readonly, nonatomic) BOOL canAccessRemoteAssets;
@property (readonly, nonatomic) BOOL canAccessiCloudMusicLibrary;
@property (readonly, nonatomic) BOOL canBeGroupLeader;
@property (readonly, nonatomic) BOOL canBeGrouped;
@property (readonly, nonatomic) BOOL canCommunicateWithAllLogicalDeviceMembers;
@property (readonly, nonatomic) BOOL canFetchMediaDataFromSender;
@property (readonly, nonatomic) BOOL canPlayEncryptedProgressiveDownloadAssets;
@property (readonly, nonatomic) BOOL canRelayCommunicationChannel;
@property (readonly) BOOL canSetVolume;
@property (readonly, nonatomic) NSNumber *caseBatteryLevel;
@property (readonly, nonatomic) NSString *clusterID;
@property (readonly, nonatomic) NSInteger clusterType;
@property (readonly, nonatomic) NSArray *clusteredDeviceDescriptions;
@property (readonly, nonatomic) NSInteger configuredClusterSize;
@property (readonly, copy, nonatomic) NSArray *connectedPairedDevices;
@property (readonly, nonatomic) NSString *currentBluetoothListeningMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger deviceFeatures;
@property (readonly, nonatomic) NSInteger deviceSubType;
@property (readonly, nonatomic) NSInteger deviceType;
@property (readonly, nonatomic, getter=isEligibleToBePredictedOutputDevice) BOOL eligibleToBePredictedOutputDevice;
@property (readonly, nonatomic) NSString *firmwareVersion;
@property (readonly, nonatomic) BOOL groupContainsGroupLeader;
@property (readonly, copy, nonatomic) NSString *groupID;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isHeadTrackedSpatialAudioActive) BOOL headTrackedSpatialAudioActive;
@property (readonly, nonatomic) NSString *headTrackedSpatialAudioMode;
@property (readonly, copy, nonatomic) NSData *identifyingMACAddress;
@property (weak) NSObject<AVOutputDeviceImplSupport> *implEventListener; // ivar: _implSupportEventListener
@property (readonly, nonatomic, getter=isInUseByPairedDevice) BOOL inUseByPairedDevice;
@property (readonly, nonatomic) BOOL isClusterLeader;
@property (readonly, nonatomic) BOOL isGroupLeader;
@property (readonly, nonatomic) NSNumber *isInEar;
@property (readonly, nonatomic) BOOL isLogicalDeviceLeader;
@property (readonly, nonatomic) NSNumber *leftBatteryLevel;
@property (readonly, nonatomic) NSString *logicalDeviceID;
@property (readonly, nonatomic) NSString *manufacturer;
@property (readonly, copy, nonatomic) NSString *modelID;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL onlyAllowsConnectionsFromPeersInHomeGroup;
@property (readonly, nonatomic) BOOL participatesInGroupPlayback;
@property (readonly, nonatomic) BOOL presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
@property (readonly, nonatomic) BOOL producesLowFidelityAudio;
@property (readonly, copy, nonatomic) NSString *proposedGroupID;
@property (readonly, nonatomic) BOOL requiresAuthorization;
@property (readonly, nonatomic) NSNumber *rightBatteryLevel;
@property (readonly, nonatomic) *__CFDictionary routeDescriptor; // ivar: _routeDescriptor
@property (readonly, nonatomic) NSString *serialNumber;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsBluetoothSharing;
@property (readonly, nonatomic) BOOL supportsBufferedAirPlay;
@property (readonly, nonatomic) NSNumber *supportsDataOverACLProtocol;
@property (readonly, nonatomic) BOOL supportsHeadTrackedSpatialAudio;
@property (readonly) float volume;
@property (readonly) NSInteger volumeControlType;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)supportsFitnessDataDestination;
-(id)init;
-(id)initWithRouteDescriptor:(struct __CFDictionary *)arg0 routeDiscoverer:(struct OpaqueFigRouteDiscoverer *)arg1 volumeController:(struct OpaqueFigVolumeControllerState *)arg2 routingContextFactory:(id)arg3 useRouteConfigUpdatedNotification:(BOOL)arg4 ;
-(int)_withEndpoint:(id)arg0 ;
-(void)_canSetEndpointVolumeDidChangeForEndpointWithID:(struct __CFString *)arg0 ;
-(void)_endpointVolumeControlTypeDidChangeForEndpointWithID:(struct __CFString *)arg0 ;
-(void)_volumeDidChangeForEndpointWithID:(struct __CFString *)arg0 ;
// -(void)configureUsingBlock:(id)arg0 options:(unk)arg1 completionHandler:(id)arg2  ;
-(void)dealloc;
-(void)decreaseVolumeByCount:(NSInteger)arg0 ;
-(void)increaseVolumeByCount:(NSInteger)arg0 ;
-(void)setSecondDisplayEnabled:(BOOL)arg0 ;
-(void)setSecondDisplayMode:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPAVOUTPUTDEVICEROUTE_H
#define MPAVOUTPUTDEVICEROUTE_H

@class NSArray, MRAVOutputDevice;


#import "MPAVRoute.h"

@interface MPAVOutputDeviceRoute : MPAVRoute {
    NSArray *_clusterMembers;
    NSArray *_clusterCompositionMembers;
}


@property (readonly, nonatomic) NSArray *clusterMembers;
@property (readonly, nonatomic) NSArray *dnsNames;
@property (readonly, nonatomic, getter=isGroupLeader) BOOL groupLeader;
@property (readonly, nonatomic) *void logicalLeaderOutputDevice; // ivar: _logicalLeaderOutputDevice
@property (readonly, nonatomic) MRAVOutputDevice *outputDevice;
@property (readonly, nonatomic) NSArray *outputDevices; // ivar: _outputDevices
@property (readonly, nonatomic, getter=isPhoneLocalRoute) BOOL phoneLocalRoute;


+(*void)logicalLeaderFromOutputDevices:(id)arg0 ;
+(NSInteger)pickableRouteTypeForOutputDevice:(*void)arg0 ;
+(id)localDeviceUID;
-(BOOL)_anyOutputDevicePassesMRFunction:(*unk)arg0 ;
-(BOOL)_anyOutputDevicePassesTest:(id)arg0 ;
-(BOOL)canAccessRemoteAssets;
-(BOOL)canFetchMediaDataFromSender;
-(BOOL)canPlayEncryptedProgressiveDownloadAssets;
-(BOOL)headTrackedSpatialAudioEnabled;
-(BOOL)isAirPlayRoute;
-(BOOL)isAppleAccessory;
-(BOOL)isAppleTVRoute;
-(BOOL)isB520Route;
-(BOOL)isCarplayRoute;
-(BOOL)isClusterRoute;
-(BOOL)isDeviceRoute;
-(BOOL)isDeviceSpeakerRoute;
-(BOOL)isHomePodRoute;
-(BOOL)isHomeTheaterRoute;
-(BOOL)isKnown;
-(BOOL)isLowFidelityRoute;
-(BOOL)isLowLatencyRoute;
-(BOOL)isMacRoute;
-(BOOL)isNearby;
-(BOOL)isPhoneRoute;
-(BOOL)isPickable;
-(BOOL)isPicked;
-(BOOL)isPickedOnPairedDevice;
-(BOOL)isProxyGroupPlayer;
-(BOOL)isSplitterCapable;
-(BOOL)isStereoPair;
-(BOOL)isVolumeControlAvailable;
-(BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
-(BOOL)requiresPassword;
-(BOOL)supportsAirPlayGrouping;
-(BOOL)supportsGrouping;
-(BOOL)supportsHeadTrackedSpatialAudio;
-(BOOL)supportsWirelessDisplay;
-(NSInteger)clusterType;
-(NSInteger)originalRouteSubtype;
-(NSInteger)pickableRouteType;
-(NSInteger)routeSubtype;
-(NSInteger)routeType;
-(id)clusterComposition;
-(id)clusterCompositionRoutes;
-(id)description;
-(id)designatedGroupLeaderRouteUID;
-(id)groupUID;
-(id)initWithOutputDevices:(id)arg0 ;
-(id)initWithOutputDevices:(id)arg0 parentRoute:(id)arg1 ;
-(id)playingPairedDeviceName;
-(id)productIdentifier;
-(id)routeName;
-(id)routeUID;
-(id)subRoutes;


@end


#endif
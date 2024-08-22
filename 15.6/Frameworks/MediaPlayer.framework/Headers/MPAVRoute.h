// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPAVROUTE_H
#define MPAVROUTE_H

@class NSString, NSDictionary, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MPAVRoute.h"
#import "MPAVBatteryLevel.h"
#import "MPAVRouteConnection.h"

@interface MPAVRoute : NSObject <NSSecureCoding>

 {
    NSString *_routeName;
    BOOL _picked;
    NSDictionary *_avRouteDescription;
    MPAVRoute *_wirelessDisplayRoute;
    NSInteger _displayRouteType;
}


@property (readonly, nonatomic, getter=isAirPlayRoute) BOOL airPlayRoute;
@property (readonly, nonatomic, getter=isAirPlayingToDevice) BOOL airPlayingToDevice;
@property (readonly, nonatomic, getter=isAirpodsRoute) BOOL airpodsRoute;
@property (readonly, nonatomic, getter=isAppleTVRoute) BOOL appleTVRoute;
@property (readonly, nonatomic) NSArray *auxiliaryDevices; // ivar: _auxiliaryDevices
@property (readonly, nonatomic) NSDictionary *avRouteDescription;
@property (readonly, nonatomic, getter=isB298Route) BOOL b298Route;
@property (readonly, nonatomic, getter=isB364Route) BOOL b364Route;
@property (readonly, nonatomic, getter=isB372Route) BOOL b372Route;
@property (readonly, nonatomic, getter=isB419Route) BOOL b419Route;
@property (readonly, nonatomic, getter=isB444Route) BOOL b444Route;
@property (readonly, nonatomic, getter=isB494Route) BOOL b494Route;
@property (readonly, nonatomic, getter=isB507Route) BOOL b507Route;
@property (readonly, nonatomic, getter=isB515Route) BOOL b515Route;
@property (readonly, nonatomic, getter=isB520Route) BOOL b520Route; // ivar: _b520Route
@property (readonly, nonatomic, getter=isB688Route) BOOL bB688Route;
@property (readonly, nonatomic) MPAVBatteryLevel *batteryLevel; // ivar: _batteryLevel
@property (readonly, nonatomic, getter=isBeatsLegacyRoute) BOOL beatsLegacyRoute;
@property (readonly, nonatomic, getter=isBeatsSoloRoute) BOOL beatsSoloRoute;
@property (readonly, nonatomic, getter=isBeatsStudioRoute) BOOL beatsStudioRoute;
@property (readonly, nonatomic, getter=isBeatsXRoute) BOOL beatsXRoute;
@property (readonly, nonatomic) BOOL canAccessRemoteAssets; // ivar: _canAccessRemoteAssets
@property (readonly, nonatomic) BOOL canFetchMediaDataFromSender; // ivar: _canFetchMediaDataFromSender
@property (readonly, nonatomic) BOOL canPlayEncryptedProgressiveDownloadAssets; // ivar: _canPlayEncryptedProgressiveDownloadAssets
@property (readonly, nonatomic, getter=isCarplayRoute) BOOL carplayRoute; // ivar: _carplayRoute
@property (readonly, nonatomic) NSArray *clusterComposition; // ivar: _clusterComposition
@property (readonly, nonatomic, getter=isClusterRoute) BOOL clusterRoute; // ivar: _clusterRoute
@property (readonly, nonatomic) NSInteger clusterType; // ivar: _clusterType
@property (readonly, nonatomic) MPAVRouteConnection *connection; // ivar: _connection
@property (readonly, nonatomic) NSString *designatedGroupLeaderName;
@property (readonly, nonatomic) NSString *designatedGroupLeaderRouteUID; // ivar: _designatedGroupLeaderRouteUID
@property (readonly, nonatomic, getter=isDeviceSpeakerRoute) BOOL deviceSpeakerRoute;
@property (readonly, nonatomic, getter=isDisplayedAsPicked) BOOL displayAsPicked;
@property (nonatomic) NSInteger displayRouteType;
@property (readonly, nonatomic, getter=_externalDevice) *void externalDevice; // ivar: _externalDevice
@property (readonly, nonatomic) NSString *groupLeaderAirplayIdentifier;
@property (readonly, nonatomic) NSString *groupUID; // ivar: _groupUID
@property (readonly, nonatomic, getter=isH1Route) BOOL h1Route;
@property (readonly, nonatomic) BOOL headTrackedSpatialAudioEnabled;
@property (readonly, nonatomic, getter=isHeadphonesRoute) BOOL headphonesRoute;
@property (readonly, nonatomic, getter=isHearingDeviceRoute) BOOL hearingDeviceRoute;
@property (readonly, nonatomic, getter=isHomePodRoute) BOOL homePodRoute; // ivar: _homePodRoute
@property (readonly, nonatomic, getter=isHomeTheaterB520Route) BOOL homeTheaterB520Route;
@property (readonly, nonatomic, getter=isHomeTheaterRoute) BOOL homeTheaterRoute; // ivar: _homeTheaterRoute
@property (readonly, nonatomic) BOOL isDeviceRoute;
@property (readonly, nonatomic) BOOL isSplitRoute;
@property (readonly, nonatomic, getter=isJ327Route) BOOL j327Route;
@property (readonly, nonatomic, getter=isLowFidelityRoute) BOOL lowFidelityRoute; // ivar: _lowFidelityRoute
@property (readonly, nonatomic, getter=isLowLatencyRoute) BOOL lowLatencyRoute;
@property (readonly, nonatomic, getter=isMacRoute) BOOL macRoute;
@property (readonly, nonatomic) NSInteger numberOfOutputDevices;
@property (readonly, nonatomic) NSInteger originalRouteSubtype; // ivar: _originalRouteSubtype
@property (readonly, nonatomic) NSInteger passwordType;
@property (readonly, nonatomic, getter=isPhoneRoute) BOOL phoneRoute;
@property (readonly, nonatomic) NSInteger pickableRouteType; // ivar: _pickableRouteType
@property (nonatomic, getter=isPicked) BOOL picked;
@property (readonly, nonatomic, getter=isPickedOnPairedDevice) BOOL pickedOnPairedDevice; // ivar: _pickedOnPairedDevice
@property (readonly, nonatomic, getter=isPlayingOnPairedDevice) BOOL playingOnPairedDevice; // ivar: _playingOnPairedDevice
@property (readonly, nonatomic) NSString *playingPairedDeviceName; // ivar: _playingPairedDeviceName
@property (readonly, nonatomic, getter=isPowerbeatsRoute) BOOL powerbeatsRoute;
@property (readonly, nonatomic) BOOL presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets; // ivar: _presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets
@property (readonly, nonatomic) NSString *productIdentifier; // ivar: _productIdentifier
@property (readonly, nonatomic, getter=isProxyGroupPlayer) BOOL proxyGroupPlayer;
@property (readonly, nonatomic) BOOL requiresPassword; // ivar: _requiresPassword
@property (copy, nonatomic) NSString *routeName;
@property (readonly, nonatomic) NSArray *routeNames;
@property (readonly, nonatomic) NSInteger routeSubtype; // ivar: _routeSubtype
@property (readonly, nonatomic) NSInteger routeType; // ivar: _routeType
@property (readonly, nonatomic) NSString *routeUID; // ivar: _routeUID
@property (readonly, nonatomic, getter=isRoutingToWirelessDevice) BOOL routingToWirelessDevice;
@property (readonly, nonatomic, getter=isSetTopBoxRoute) BOOL setTopBoxRoute;
@property (readonly, nonatomic, getter=isShareableRoute) BOOL shareableRoute;
@property (readonly, nonatomic, getter=isSmartAudio) BOOL smartAudio;
@property (readonly, nonatomic, getter=isSplitRoute) BOOL splitRoute;
@property (readonly, nonatomic, getter=isSplitterCapable) BOOL splitterCapable;
@property (readonly, nonatomic, getter=isStereoPair) BOOL stereoPair;
@property (readonly, nonatomic) BOOL supportsAirPlayGrouping;
@property (readonly, nonatomic) BOOL supportsGrouping;
@property (readonly, nonatomic) BOOL supportsHeadTrackedSpatialAudio;
@property (readonly, nonatomic) BOOL supportsRemoteControl;
@property (readonly, nonatomic) BOOL supportsWirelessDisplay;
@property (readonly, nonatomic, getter=isTVRoute) BOOL tvRoute;
@property (readonly, nonatomic, getter=isTVStickRoute) BOOL tvStickRoute;
@property (readonly, nonatomic, getter=isVolumeControlAvailable) BOOL volumeControlAvailable;
@property (readonly, nonatomic, getter=isW1Route) BOOL w1Route;
@property (readonly, nonatomic, getter=isW2Route) BOOL w2Route;
@property (retain, nonatomic) MPAVRoute *wirelessDisplayRoute;


+(BOOL)supportsSecureCoding;
+(NSInteger)clusterTypeForMRClusterType:(unsigned int)arg0 ;
+(NSInteger)routeSubtypeForMRSubtype:(unsigned int)arg0 mrType:(unsigned int)arg1 ;
+(NSInteger)routeSubtypeForMRSubtype:(unsigned int)arg0 withOverridesFromMRType:(unsigned int)arg1 ;
+(id)clusterCompositionForOutputDevice:(id)arg0 ;
-(BOOL)containsDeviceWithSubtype:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)debugDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setAVRouteDescription:(id)arg0 ;


@end


#endif
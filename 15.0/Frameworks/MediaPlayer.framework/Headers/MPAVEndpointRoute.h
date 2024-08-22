// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPAVENDPOINTROUTE_H
#define MPAVENDPOINTROUTE_H

@class NSString;
@protocol OS_dispatch_queue;


#import "MPAVRoute.h"
#import "MPAVRouteConnection.h"
#import "MPMRAVEndpointWrapper.h"

@interface MPAVEndpointRoute : MPAVRoute {
    MPAVRouteConnection *_connection;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSString *_sortName;
}


@property (readonly, nonatomic) BOOL canModifyGroupMembership;
@property (retain, nonatomic) MPAVRouteConnection *connection;
@property (readonly, nonatomic) *void endpoint;
@property (retain, nonatomic) MPMRAVEndpointWrapper *endpointWrapper; // ivar: _endpointWrapper
@property (readonly, nonatomic) NSString *sortName;


+(BOOL)supportsSecureCoding;
+(void)getActiveEndpointRouteWithCompletion:(id)arg0 ;
-(BOOL)_groupLeaderIsOfDeviceSubtype:(unsigned int)arg0 ;
-(BOOL)canAccessRemoteAssets;
-(BOOL)canFetchMediaDataFromSender;
-(BOOL)canPlayEncryptedProgressiveDownloadAssets;
-(BOOL)isAirPlayingToDevice;
-(BOOL)isAppleTVRoute;
-(BOOL)isB520Route;
-(BOOL)isClusterRoute;
-(BOOL)isDeviceRoute;
-(BOOL)isDeviceSpeakerRoute;
-(BOOL)isHomePodRoute;
-(BOOL)isHomeTheaterRoute;
-(BOOL)isLowFidelityRoute;
-(BOOL)isLowLatencyRoute;
-(BOOL)isMacRoute;
-(BOOL)isPhoneRoute;
-(BOOL)isProxyGroupPlayer;
-(BOOL)isRoutingToWirelessDevice;
-(BOOL)isSplitRoute;
-(BOOL)isSplitterCapable;
-(BOOL)isStereoPair;
-(BOOL)isTVRoute;
-(BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
-(BOOL)supportsAirPlayGrouping;
-(BOOL)supportsGrouping;
-(BOOL)supportsRemoteControl;
-(NSInteger)clusterType;
-(NSInteger)numberOfOutputDevices;
-(NSInteger)originalRouteSubtype;
-(NSInteger)routeSubtype;
-(NSInteger)routeType;
-(NSUInteger)_outputDevicesComposition;
-(id)clusterComposition;
-(id)description;
-(id)designatedGroupLeaderName;
-(id)designatedGroupLeaderRouteUID;
-(id)groupLeaderAirplayIdentifier;
-(id)groupUID;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEndpoint:(*void)arg0 ;
-(id)routeName;
-(id)routeNames;
-(id)routeUID;
-(void)_endpointDidChange:(id)arg0 ;
-(void)_endpointOutputDevicesDidChange:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)establishGroup;


@end


#endif
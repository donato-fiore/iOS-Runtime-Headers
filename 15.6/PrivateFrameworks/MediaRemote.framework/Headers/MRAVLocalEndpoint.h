// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRAVLOCALENDPOINT_H
#define MRAVLOCALENDPOINT_H



#import "MRAVOutputContextEndpoint.h"
#import "MRAVRoutingDiscoverySession.h"

@interface MRAVLocalEndpoint : MRAVOutputContextEndpoint

@property (readonly, nonatomic) MRAVRoutingDiscoverySession *audioDiscoverySession;


+(id)sharedLocalEndpoint;
+(id)sharedLocalEndpointForRoutingContextWithUID:(id)arg0 ;
-(id)groupLeader;
-(void)setAllowsHeadTrackedSpatialAudio:(BOOL)arg0 outputDeviceUID:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)setHeadTrackedSpatialAudioMode:(id)arg0 outputDeviceUID:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)setListeningMode:(id)arg0 outputDeviceUID:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;


@end


#endif
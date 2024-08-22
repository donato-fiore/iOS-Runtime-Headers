// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCASSISTANTENDPOINTCONTEXT_H
#define MPCASSISTANTENDPOINTCONTEXT_H

@protocol OS_dispatch_queue;


#import "MPCAssistantContext.h"
#import "MPCAssistantDiscovery.h"

@interface MPCAssistantEndpointContext : MPCAssistantContext {
    MPCAssistantDiscovery *_discoveryLogical;
    MPCAssistantDiscovery *_discoveryAudio;
    MPCAssistantDiscovery *_discoveryEndpoint;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}




-(BOOL)shouldSearchForLogicalDevices;
-(id)init;
-(void)_discoverLocalEndpointFromClusterUsingDeviceInfo:(id)arg0 completion:(id)arg1 ;
-(void)_discoverLocalEndpointFromDeviceInfo:(id)arg0 completion:(id)arg1 ;
-(void)_discoverLocalEndpointFromHomeTheaterUsingDeviceInfo:(id)arg0 completion:(id)arg1 ;
-(void)_discoverLocalEndpointFromMultiplayerUsingDeviceInfo:(id)arg0 completion:(id)arg1 ;
-(void)_modifyOutputDevices:(id)arg0 onEndpoint:(id)arg1 completion:(id)arg2 ;
-(void)_updateDiscoverableDeviceList:(id)arg0 deviceInfo:(id)arg1 completion:(id)arg2 ;
-(void)modifySystemMusicContextForDestination:(id)arg0 completion:(id)arg1 ;
-(void)modifySystemMusicContextForEndpointDestination:(id)arg0 completion:(id)arg1 ;
// -(void)modifySystemMusicContextForEndpointDestination:(id)arg0 discoveryHandler:(id)arg1 completion:(unk)arg2  ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLOUDMEDIASERVICESINTERFACEXPCLISTENER_H
#define CLOUDMEDIASERVICESINTERFACEXPCLISTENER_H

@class NSXPCListener, NSMutableArray, NSString;
@protocol NSXPCListenerDelegate, CloudMediaServicesInterfaceProtocol;

#import <Foundation/Foundation.h>


@interface CloudMediaServicesInterfaceXPCListener : NSObject <NSXPCListenerDelegate, CloudMediaServicesInterfaceProtocol>

 {
    NSXPCListener *_xpcListener;
}


@property (retain, nonatomic) NSMutableArray *clients; // ivar: _clients
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<CloudMediaServicesInterfaceProtocol> *playbackCommandDelegate; // ivar: _playbackCommandDelegate
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)getCloudExtensionConfigurationFor:(id)arg0 homeUserID:(id)arg1 endpointID:(id)arg2 withCompletion:(id)arg3 ;
-(void)handleClientDisconnection:(id)arg0 ;
-(void)pauseSample;
-(void)playSample:(id)arg0 ;
-(void)sendPlaybackQueueToRemoteDestination:(id)arg0 withCompletion:(id)arg1 ;
-(void)sendPlaybackQueueWithUserActivityDictionary:(id)arg0 forIntentID:(id)arg1 toDestination:(id)arg2 withIntentData:(id)arg3 prepareQueue:(BOOL)arg4 withCompletion:(id)arg5 ;
-(void)setOverrideURL:(id)arg0 ;
-(void)setServerEnvironment:(id)arg0 ;
-(void)stopAnalyticsWithIdentifier:(id)arg0 ;
-(void)submitAnalyticsForType:(id)arg0 andIdentifier:(id)arg1 eventType:(id)arg2 atTime:(id)arg3 withMetadata:(id)arg4 ;


@end


#endif
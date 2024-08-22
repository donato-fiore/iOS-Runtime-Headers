// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLOUDMEDIASERVICESPLAYERINTERFACE_H
#define CLOUDMEDIASERVICESPLAYERINTERFACE_H

@class NSXPCConnection;
@protocol CloudMediaServicesInterfaceProtocol;

#import <Foundation/Foundation.h>


@interface CloudMediaServicesPlayerInterface : NSObject {
    NSXPCConnection *_connection;
    id<CloudMediaServicesInterfaceProtocol> *_AgoraInterfaceProxy;
}




-(id)init;
-(void)getCloudExtensionConfigurationFor:(id)arg0 homeUserID:(id)arg1 endpointID:(id)arg2 withCompletion:(id)arg3 ;
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
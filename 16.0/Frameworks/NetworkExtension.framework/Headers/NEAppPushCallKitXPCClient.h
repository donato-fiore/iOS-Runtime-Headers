// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEAPPPUSHCALLKITXPCCLIENT_H
#define NEAPPPUSHCALLKITXPCCLIENT_H

@class NSXPCConnection;
@protocol CXNetworkExtensionVoIPXPCClient;

#import <Foundation/Foundation.h>


@interface NEAppPushCallKitXPCClient : NSObject <CXNetworkExtensionVoIPXPCClient>

 {
    os_unfair_lock_s _lock;
    NSXPCConnection *_connection;
}




-(id)init;
-(void)dealloc;
-(void)voipNetworkExtensionPayloadReceived:(id)arg0 mustPostCall:(BOOL)arg1 withCompletionHandler:(id)arg2 ;
-(void)voipNetworkExtensionRegistrationFailed;


@end


#endif
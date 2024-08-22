// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEAPPPUSHCALLKITXPCCLIENT_H
#define NEAPPPUSHCALLKITXPCCLIENT_H

@class NSXPCConnection;
@protocol CXNetworkExtensionVoIPXPCClient;

#import <Foundation/Foundation.h>


@interface NEAppPushCallKitXPCClient : NSObject <CXNetworkExtensionVoIPXPCClient>



@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, nonatomic) os_unfair_lock_s lock; // ivar: _lock


-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)registerVoIPMessagePayload;
-(void)unregisterVoIPMessagePayload;
-(void)voipNetworkExtensionPayloadReceived:(id)arg0 mustPostCall:(BOOL)arg1 withCompletionHandler:(id)arg2 ;
-(void)voipNetworkExtensionRegistrationFailed;


@end


#endif
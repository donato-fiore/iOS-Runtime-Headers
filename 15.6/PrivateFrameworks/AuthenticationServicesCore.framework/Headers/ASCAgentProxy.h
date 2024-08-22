// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASCAGENTPROXY_H
#define ASCAGENTPROXY_H

@class NSXPCConnection, NSString;
@protocol ASCAgentProtocol;

#import <Foundation/Foundation.h>


@interface ASCAgentProxy : NSObject <ASCAgentProtocol>

 {
    NSXPCConnection *_connection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_proxy;
-(id)_remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)init;
-(void)_setUpConnection:(id)arg0 ;
-(void)cancelCurrentRequest;
-(void)clearAllPlatformPublicKeyCredentialsWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)getShouldUseAlternateCredentialStoreWithCompletionHandler:(id)arg0 ;
-(void)invalidate;
-(void)openCABLEURL:(id)arg0 fromSourceApplication:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)performAuthorizationRequestsForContext:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)reconnectIfNecessary;


@end


#endif
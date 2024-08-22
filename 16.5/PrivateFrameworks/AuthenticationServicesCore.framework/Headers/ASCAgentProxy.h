// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCAGENTPROXY_H
#define ASCAGENTPROXY_H

@class NSXPCConnection, NSString;
@protocol ASCAgentProtocol, OS_os_activity;

#import <Foundation/Foundation.h>


@interface ASCAgentProxy : NSObject <ASCAgentProtocol>

 {
    NSXPCConnection *_connection;
    os_unfair_lock_s _connectionLock;
    NSObject<OS_os_activity> *_activity;
    id *_failureHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_reconnectIfNecessary;
-(id)_remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)init;
-(id)initWithFailureHandler:(id)arg0 ;
-(void)_setUpConnection:(id)arg0 ;
-(void)cancelCurrentRequest;
-(void)clearAllPlatformPublicKeyCredentialsWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)getArePasskeysDisallowedForRelyingParty:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)getCanCurrentProcessAccessPasskeysForRelyingParty:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)getShouldUseAlternateCredentialStoreWithCompletionHandler:(id)arg0 ;
-(void)openCABLEURL:(id)arg0 fromSourceApplication:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)performAuthorizationRequestsForContext:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)performSilentAuthorizationRequestsForContext:(id)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif
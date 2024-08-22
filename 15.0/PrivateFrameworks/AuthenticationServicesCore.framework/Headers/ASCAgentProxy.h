// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
-(void)clearAllPlatformPublicKeyCredentialsWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)getShouldUseAlternateCredentialStoreWithCompletionHandler:(id)arg0 ;
-(void)invalidate;
-(void)performAuthorizationRequestsForContext:(id)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif
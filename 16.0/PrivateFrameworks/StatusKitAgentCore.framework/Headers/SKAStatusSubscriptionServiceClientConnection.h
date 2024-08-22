// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKASTATUSSUBSCRIPTIONSERVICECLIENTCONNECTION_H
#define SKASTATUSSUBSCRIPTIONSERVICECLIENTCONNECTION_H

@class NSXPCConnection;
@protocol SKAStatusSubscriptionServiceClientConnectionLifecycleDelegate;

#import <Foundation/Foundation.h>


@interface SKAStatusSubscriptionServiceClientConnection : NSObject

@property (weak, nonatomic) NSObject<SKAStatusSubscriptionServiceClientConnectionLifecycleDelegate> *connectionLifecycleDelegate; // ivar: _connectionLifecycleDelegate
@property (readonly) int processIdentifier;
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(BOOL)_connection:(id)arg0 isEntitledForSubscriptionWithStatusTypeIdentifier:(id)arg1 ;
+(BOOL)clientIsEntitledForAtLeastOneSubscriptionServiceType:(id)arg0 ;
+(id)logger;
-(BOOL)clientIsEntitledForAtLeastOneSubscriptionServiceType;
-(BOOL)clientIsEntitledForSubscriptionWithStatusTypeIdentifier:(id)arg0 ;
-(id)asynchronousRemoteDaemonDelegateWithErrorHandler:(id)arg0 ;
-(id)description;
-(id)initWithXPCConnection:(id)arg0 queue:(id)arg1 daemonProtocolDelegate:(id)arg2 connectionLifecycleDelegate:(id)arg3 ;
-(id)synchronousRemoteDaemonDelegateWithErrorHandler:(id)arg0 ;
-(void)dealloc;


@end


#endif
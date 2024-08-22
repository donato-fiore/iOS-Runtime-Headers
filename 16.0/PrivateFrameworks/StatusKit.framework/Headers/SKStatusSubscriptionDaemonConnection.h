// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKSTATUSSUBSCRIPTIONDAEMONCONNECTION_H
#define SKSTATUSSUBSCRIPTIONDAEMONCONNECTION_H

@class NSXPCConnection;
@protocol SKStatusSubscriptionConnectionDelegateProtocol, SKStatusSubscriptionDaemonDelegateProtocol;

#import <Foundation/Foundation.h>


@interface SKStatusSubscriptionDaemonConnection : NSObject

@property (weak, nonatomic) NSObject<SKStatusSubscriptionConnectionDelegateProtocol> *connectionDelegate; // ivar: _connectionDelegate
@property (weak, nonatomic) NSObject<SKStatusSubscriptionDaemonDelegateProtocol> *subscriptionDaemonDelegate; // ivar: _subscriptionDaemonDelegate
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(id)daemonDelegateXPCInterface;
+(id)daemonXPCInterface;
+(id)logger;
-(id)asynchronousRemoteDaemonWithErrorHandler:(id)arg0 ;
-(id)initWithSubscriptionDaemonDelegate:(id)arg0 connectionDelegate:(id)arg1 ;
-(id)synchronousRemoteDaemonWithErrorHandler:(id)arg0 ;
-(void)setXPCConnection:(id)arg0 ;


@end


#endif
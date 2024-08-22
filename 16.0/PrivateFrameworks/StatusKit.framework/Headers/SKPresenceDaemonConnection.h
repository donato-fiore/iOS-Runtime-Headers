// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKPRESENCEDAEMONCONNECTION_H
#define SKPRESENCEDAEMONCONNECTION_H

@class NSXPCConnection;
@protocol SKPresenceConnectionDelegateProtocol, SKPresenceDaemonDelegateProtocol;

#import <Foundation/Foundation.h>


@interface SKPresenceDaemonConnection : NSObject

@property (weak, nonatomic) NSObject<SKPresenceConnectionDelegateProtocol> *connectionDelegate; // ivar: _connectionDelegate
@property (nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (weak, nonatomic) NSObject<SKPresenceDaemonDelegateProtocol> *presenceDaemonDelegate; // ivar: _presenceDaemonDelegate
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(id)daemonDelegateXPCInterface;
+(id)daemonXPCInterface;
+(id)logger;
-(id)asynchronousRemoteDaemonWithErrorHandler:(id)arg0 ;
-(id)initWithPresenceDaemonDelegate:(id)arg0 connectionDelegate:(id)arg1 ;
-(id)synchronousRemoteDaemonWithErrorHandler:(id)arg0 ;
-(void)setXPCConnection:(id)arg0 ;


@end


#endif
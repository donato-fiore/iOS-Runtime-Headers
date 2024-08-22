// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKSTATUSPUBLISHINGDAEMONCONNECTION_H
#define SKSTATUSPUBLISHINGDAEMONCONNECTION_H

@class NSXPCConnection;
@protocol SKStatusPublishingConnectionDelegateProtocol, SKStatusPublishingDaemonDelegateProtocol;

#import <Foundation/Foundation.h>


@interface SKStatusPublishingDaemonConnection : NSObject

@property (weak, nonatomic) NSObject<SKStatusPublishingConnectionDelegateProtocol> *connectionDelegate; // ivar: _connectionDelegate
@property (weak, nonatomic) NSObject<SKStatusPublishingDaemonDelegateProtocol> *publishingDaemonDelegate; // ivar: _publishingDaemonDelegate
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(id)daemonDelegateXPCInterface;
+(id)daemonXPCInterface;
+(id)logger;
-(id)asynchronousRemoteDaemonWithErrorHandler:(id)arg0 ;
-(id)initWithPublishingDaemonDelegate:(id)arg0 connectionDelegate:(id)arg1 ;
-(id)synchronousRemoteDaemonWithErrorHandler:(id)arg0 ;
-(void)setXPCConnection:(id)arg0 ;


@end


#endif
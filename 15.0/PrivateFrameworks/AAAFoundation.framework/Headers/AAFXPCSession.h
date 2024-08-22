// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAFXPCSESSION_H
#define AAFXPCSESSION_H

@class NSXPCConnection, NSUUID;
@protocol AAFXPCSessionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AAFXPCSessionConfig.h"

@interface AAFXPCSession : NSObject

@property (retain, nonatomic) id *_proxy; // ivar: __proxy
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (weak, nonatomic) NSObject<AAFXPCSessionDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (retain, nonatomic) AAFXPCSessionConfig *remoteServiceConfig; // ivar: _remoteServiceConfig
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue


-(id)initWithRemoteServiceConfig:(id)arg0 delegate:(id)arg1 ;
-(id)remoteServiceProxy;
-(id)remoteServiceProxyWithErrorHandler:(id)arg0 ;
-(id)syncRemoteServiceProxy;
-(id)syncRemoteServiceProxyWithErrorHandler:(id)arg0 ;
-(void)destroyXPCConnection;
-(void)invalidate;
-(void)resume;
-(void)suspend;


@end


#endif
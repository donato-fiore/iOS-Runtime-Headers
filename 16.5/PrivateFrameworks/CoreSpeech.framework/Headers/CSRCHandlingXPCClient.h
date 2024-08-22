// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSRCHANDLINGXPCCLIENT_H
#define CSRCHANDLINGXPCCLIENT_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSRCHandlingXPCClient : NSObject

@property (retain, nonatomic) NSXPCConnection *rcXPCConnection; // ivar: _rcXPCConnection
@property (retain, nonatomic) id *remoteObjectProxy; // ivar: _remoteObjectProxy
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *xpcConnectionQueue; // ivar: _xpcConnectionQueue


-(id)_getRemoteServiceProxyObject;
-(id)init;
-(void)_createClientConnection;
-(void)dealloc;
-(void)getMitigationDecisionForRCIdWithCompletion:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)invalidate;
-(void)processRCWithId:(NSUInteger)arg0 duration:(CGFloat)arg1 lrnnScore:(CGFloat)arg2 lrnnThreshold:(CGFloat)arg3 taskId:(id)arg4 forceAccept:(BOOL)arg5 completionHandler:(id)arg6 ;


@end


#endif
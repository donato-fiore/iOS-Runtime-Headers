// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IOSURFACEREMOTEREMOTECLIENT_H
#define IOSURFACEREMOTEREMOTECLIENT_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface IOSurfaceRemoteRemoteClient : NSObject

@property (copy, nonatomic) id *disconnectedHandler; // ivar: _disconnectedHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *disconnectedQueue; // ivar: _disconnectedQueue
@property (nonatomic) int pid; // ivar: _pid
@property (retain, nonatomic) NSObject<OS_xpc_object> *remoteConnection; // ivar: _remoteConnection
@property (retain, nonatomic) NSMutableDictionary *surfaceStates; // ivar: _surfaceStates


-(BOOL)_removeSurface:(unsigned int)arg0 ;
-(id)description;
-(id)initWithRemoteConnection:(id)arg0 disconnectedQueue:(id)arg1 disconnectedHandler:(id)arg2 ;
-(struct __IOSurfaceClient *)_getClient:(unsigned int)arg0 inboundExtradata:(id)arg1 outboundExtraData:(*id)arg2 ;
-(void)_addSurface:(struct __IOSurfaceClient *)arg0 mappedAddress:(*void)arg1 mappedSize:(NSUInteger)arg2 extraData:(id)arg3 ;
-(void)_handleError:(id)arg0 ;
-(void)_handleMessage:(id)arg0 ;
-(void)dealloc;


@end


#endif
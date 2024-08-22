// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ENXPCSERVICECLIENT_H
#define ENXPCSERVICECLIENT_H

@protocol OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ENXPCServiceClient : NSObject {
    os_unfair_lock_s _lock;
    NSObject<OS_xpc_object> *_xpcConnection;
    BOOL _invalidated;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (retain, nonatomic) NSObject<OS_xpc_object> *testListenerEndpoint; // ivar: _testListenerEndpoint


-(id)_ensureXPCStartedAndReturnError:(*id)arg0 ;
-(id)getXPCConnectionAndReturnError:(*id)arg0 ;
-(id)init;
-(void)_invalidateForced:(BOOL)arg0 ;
-(void)_xpcReceivedEvent:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif
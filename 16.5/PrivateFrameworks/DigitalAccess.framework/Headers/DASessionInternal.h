// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DASESSIONINTERNAL_H
#define DASESSIONINTERNAL_H

@protocol NSXPCProxyCreating, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DASessionInternal : NSObject {
    BOOL _isCallbackQueueSuspended;
    NSObject<NSXPCProxyCreating> *_proxy;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}


@property (readonly, weak) id *delegate; // ivar: _delegate
@property BOOL isFirstInQueue; // ivar: _isFirstInQueue
@property (retain, setter=setProxy:) id *proxy;


-(id)initWithDelegate:(id)arg0 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)closeProxy;
-(void)dealloc;
-(void)dispatchBlockOnCallback:(id)arg0 ;
-(void)resume;


@end


#endif
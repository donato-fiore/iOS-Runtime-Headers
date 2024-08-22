// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AELIFECYCLEEVENTHANDLINGPROXY_H
#define AELIFECYCLEEVENTHANDLINGPROXY_H

@class NSXPCConnection;
@protocol AELifecycleEventHandling, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AEXPCProxy.h"

@interface AELifecycleEventHandlingProxy : NSObject <AELifecycleEventHandling>

 {
    AEXPCProxy *_xpcProxy;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, nonatomic) NSXPCConnection *connection; // ivar: _connection


+(id)proxyWithEndpoint:(id)arg0 queue:(id)arg1 ;
-(void)handleEventDidBeginWithCompletion:(id)arg0 ;
-(void)handleEventDidInvalidateWithError:(id)arg0 completion:(id)arg1 ;


@end


#endif
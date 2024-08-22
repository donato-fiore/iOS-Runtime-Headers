// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSEVENTMONITOR_H
#define SSEVENTMONITOR_H

@protocol SSEventMonitorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SSXPCConnection.h"

@interface SSEventMonitor : NSObject {
    id<SSEventMonitorDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSXPCConnection *_eventConnection;
}


@property NSObject<SSEventMonitorDelegate> *delegate;


-(id)init;
-(void)_connectEventConnection;
-(void)_handleMessage:(id)arg0 fromServerConnection:(id)arg1 ;
-(void)dealloc;


@end


#endif
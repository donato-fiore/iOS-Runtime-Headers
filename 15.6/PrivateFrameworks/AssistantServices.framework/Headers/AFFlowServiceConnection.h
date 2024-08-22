// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFFLOWSERVICECONNECTION_H
#define AFFLOWSERVICECONNECTION_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AFFlowServiceConnection : NSObject {
    NSXPCConnection *_connection;
    NSUInteger _pendingTransactionCount;
    NSObject<OS_dispatch_queue> *_queue;
}




+(id)sharedConnection;
-(id)_connection;
-(id)_init;
-(void)_clearConnection;
// -(void)invokeMethodOnRemoteWithBlock:(id)arg0 onError:(unk)arg1  ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUMESSAGESESSIONXPCCONNECTION_H
#define CUMESSAGESESSIONXPCCONNECTION_H

@class NSMutableSet, NSXPCConnection;
@protocol CUMessageSessionXPCServerInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CUMessageSessionServer.h"

@interface CUMessageSessionXPCConnection : NSObject <CUMessageSessionXPCServerInterface>

 {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _invalidated;
    NSMutableSet *_registeredRequestIDs;
    CUMessageSessionServer *_server;
    NSXPCConnection *_xpcCnx;
}




-(void)connectionInvalidated;
-(void)remoteRegisterRequestID:(id)arg0 options:(id)arg1 ;
-(void)remoteSendRequestID:(id)arg0 options:(id)arg1 request:(id)arg2 responseHandler:(id)arg3 ;


@end


#endif
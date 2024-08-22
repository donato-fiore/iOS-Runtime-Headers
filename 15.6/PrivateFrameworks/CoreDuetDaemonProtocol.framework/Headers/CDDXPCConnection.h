// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDDXPCCONNECTION_H
#define CDDXPCCONNECTION_H

@class CDDebug, NSString;
@protocol OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CDDXPCConnection : NSObject {
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
    BOOL _hasValidConnection;
    uint8_t _sequenceNumber;
}


@property (readonly) CDDebug *debug; // ivar: _debug
@property (readonly) NSString *serviceName; // ivar: _serviceName


-(BOOL)establishConnection;
-(BOOL)sendMessageAsync:(id)arg0 withReplyHandler:(id)arg1 ;
-(NSUInteger)sequenceNumber;
-(id)connection;
-(id)initWithMachServiceName:(id)arg0 dispatchQueue:(id)arg1 ;
-(id)makeStashWithId:(NSUInteger)arg0 ;
-(void)cancelConnection;
-(void)dealloc;
-(void)invalidateConnection;
-(void)sendBarrier:(id)arg0 ;


@end


#endif
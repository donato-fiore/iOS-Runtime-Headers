// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DVTSECURESOCKETPROXY_H
#define DVTSECURESOCKETPROXY_H

@protocol OS_dispatch_source, OS_dispatch_queue, OS_dispatch_group, OS_dispatch_io;

#import <Foundation/Foundation.h>

#import "DVTSecureSocketProxyBufferPool.h"

@interface DVTSecureSocketProxy : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *canReceiveFromConnection; // ivar: _canReceiveFromConnection
@property (retain, nonatomic) NSObject<OS_dispatch_source> *canSendToConnection; // ivar: _canSendToConnection
@property (nonatomic) BOOL cancelled; // ivar: _cancelled
@property (copy, nonatomic) id *cleanupConnection; // ivar: _cleanupConnection
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue; // ivar: _ioQueue
@property (nonatomic) NSUInteger pendingWrites; // ivar: _pendingWrites
@property (copy, nonatomic) id *receiveDataFromConnection; // ivar: _receiveDataFromConnection
@property (retain, nonatomic) DVTSecureSocketProxyBufferPool *receiveFromConnectionBufferPool; // ivar: _receiveFromConnectionBufferPool
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *receiveFromConnectionQueue; // ivar: _receiveFromConnectionQueue
@property (copy, nonatomic) id *sendDataToConnection; // ivar: _sendDataToConnection
@property (retain, nonatomic) NSObject<OS_dispatch_group> *sendToConnectionCompleted; // ivar: _sendToConnectionCompleted
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sendToConnectionQueue; // ivar: _sendToConnectionQueue
@property (retain, nonatomic) NSObject<OS_dispatch_io> *socketIOChannel; // ivar: _socketIOChannel


-(void)_onIOQueue_cancelProxy;
-(void)_onIOQueue_finishCleanup;
-(void)_onIOQueue_sendDataToConnection:(id)arg0 ;
-(void)readDataFromSocketAndSendToConnection;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKASYNCSOCKET_H
#define GKASYNCSOCKET_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface GKAsyncSocket : NSObject

@property (copy, nonatomic) id *connectedHandler;
@property (copy, nonatomic) id *receiveDataHandler;
@property (retain, nonatomic) id *socketName;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(id)syncQueue;
-(void)invalidate;
-(void)sendData:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)setSyncQueue:(id)arg0 ;
-(void)tcpAttachSocketDescriptor:(int)arg0 ;
-(void)tcpConnectSockAddr:(struct sockaddr *)arg0 port:(unsigned short)arg1 ;


@end


#endif
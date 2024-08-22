// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _RWITCPSERVER_H
#define _RWITCPSERVER_H

@class NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source, _RWITCPServerDelegate;

#import <Foundation/Foundation.h>


@interface _RWITCPServer : NSObject {
    int _listenSocket;
    NSObject<OS_dispatch_queue> *_serverQueue;
    NSObject<OS_dispatch_source> *_serverSource;
    NSMutableArray *_connections;
}


@property (readonly, weak, nonatomic) NSObject<_RWITCPServerDelegate> *delegate; // ivar: _delegate


-(BOOL)_createListenDispatchSource;
-(BOOL)_listenOnPort:(unsigned short)arg0 ;
-(id)_initWithDelegate:(id)arg0 ;
-(id)initWithLaunchdSocketName:(char *)arg0 delegate:(id)arg1 ;
-(id)initWithPort:(unsigned short)arg0 delegate:(id)arg1 ;
-(void)connectionClosed:(id)arg0 ;
-(void)dealloc;


@end


#endif
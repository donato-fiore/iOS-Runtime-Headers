// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _RWITCPCONNECTION_H
#define _RWITCPCONNECTION_H

@class NSMutableArray, NSMutableData;
@protocol OS_dispatch_queue, OS_dispatch_source, _RWITCPConnectionDelegate;

#import <Foundation/Foundation.h>

#import "_RWITCPServer.h"

@interface _RWITCPConnection : NSObject {
    int _socket;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_source> *_inputSource;
    NSObject<OS_dispatch_source> *_outputSource;
    BOOL _shutdown;
    BOOL _outputSourceSuspended;
    BOOL _inputSourceCancelled;
    BOOL _outputSourceCancelled;
    NSMutableArray *_outputMessageQueue;
    NSMutableData *_incomingData;
    _RWITCPServer *_server;
    NSInteger _type;
    *_lockdown_connection _connection;
}


@property (weak, nonatomic) NSObject<_RWITCPConnectionDelegate> *delegate; // ivar: _delegate


+(id)TCPConnectionWithLockdownConnection:(struct _lockdown_connection *)arg0 ;
+(id)TCPConnectionWithPort:(unsigned short)arg0 ;
+(id)TCPConnectionWithResolvedNetService:(id)arg0 ;
+(id)TCPConnectionWithSocketPath:(id)arg0 ;
-(id)initWithServer:(id)arg0 lockdownConnection:(struct _lockdown_connection *)arg1 ;
-(id)initWithServer:(id)arg0 socket:(int)arg1 ;
-(void)_closeInputStream;
-(void)_closeOutputStream;
-(void)_commonInitializationWithServer:(id)arg0 socket:(int)arg1 type:(NSInteger)arg2 ;
-(void)_createInputSource;
-(void)_createOutputSource;
-(void)_dispatchSourceCancelled;
-(void)_handleInput;
-(void)_handleOutput;
-(void)_processIncomingBytes:(char *)arg0 length:(NSInteger)arg1 ;
-(void)_setOutputSourceSuspended:(BOOL)arg0 ;
-(void)_shutdown;
-(void)dealloc;
-(void)sendMessage:(id)arg0 ;
-(void)startReceiving;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MLNETWORKING_H
#define _MLNETWORKING_H

@protocol OS_nw_connection, OS_nw_listener, OS_os_log, OS_nw_parameters, OS_nw_protocol_stack, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_MLNetworkOptions.h"

@interface _MLNetworking : NSObject

@property (retain, nonatomic) NSObject<OS_nw_connection> *connection; // ivar: _connection
@property (readonly, nonatomic) BOOL isClient; // ivar: _isClient
@property (readonly, nonatomic) NSObject<OS_nw_listener> *listener; // ivar: _listener
@property (readonly, nonatomic) NSObject<OS_os_log> *logType; // ivar: _logType
@property (readonly, nonatomic) _MLNetworkOptions *nwOptions; // ivar: _nwOptions
@property (readonly, nonatomic) NSObject<OS_nw_parameters> *parameters; // ivar: _parameters
@property (readonly, nonatomic) NSObject<OS_nw_protocol_stack> *protocol_stack; // ivar: _protocol_stack
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *q; // ivar: _q


-(id)initConnection:(id)arg0 ;
-(id)initListener:(id)arg0 ;
-(void)receiveLoop:(id)arg0 ;
-(void)restartConnection;
-(void)sendData:(id)arg0 ;
-(void)setReceiveDataCallBack:(id)arg0 ;
-(void)startConnection;
-(void)stop;


@end


#endif
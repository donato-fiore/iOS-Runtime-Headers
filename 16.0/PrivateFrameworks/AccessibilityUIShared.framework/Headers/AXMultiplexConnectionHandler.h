// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXMULTIPLEXCONNECTIONHANDLER_H
#define AXMULTIPLEXCONNECTIONHANDLER_H

@class BSProcessHandle, BSServiceConnection;
@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface AXMultiplexConnectionHandler : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *connection; // ivar: _connection
@property (retain, nonatomic) BSProcessHandle *processHandle; // ivar: _processHandle
@property (retain, nonatomic) BSServiceConnection *serviceConnection; // ivar: _serviceConnection
@property (copy, nonatomic) id *xpc_handler; // ivar: _xpc_handler


-(BOOL)isEqual:(id)arg0 ;
-(int)pid;
-(struct ? )auditToken;


@end


#endif
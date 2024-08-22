// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IOSURFACEREMOTESERVER_H
#define IOSURFACEREMOTESERVER_H

@class NSMutableArray;
@protocol OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IOSurfaceRemoteServer : NSObject

@property (retain, nonatomic) NSMutableArray *clients; // ivar: _clients
@property (retain, nonatomic) NSObject<OS_xpc_object> *listener; // ivar: _listener
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)initWithListener:(id)arg0 options:(id)arg1 ;
-(void)_handleClientConnection:(id)arg0 ;
-(void)_handleClientDisconnected:(id)arg0 ;
-(void)dealloc;
-(void)shutdown;


@end


#endif
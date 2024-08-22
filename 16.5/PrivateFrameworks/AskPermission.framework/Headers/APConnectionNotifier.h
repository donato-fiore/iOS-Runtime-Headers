// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APCONNECTIONNOTIFIER_H
#define APCONNECTIONNOTIFIER_H

@class NSXPCConnection;
@protocol OS_dispatch_queue, ConnectionProtocol;

#import <Foundation/Foundation.h>


@interface APConnectionNotifier : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // ivar: _connectionQueue
@property (readonly, nonatomic) NSObject<ConnectionProtocol> *remoteObjectProxy;
@property (retain, nonatomic) NSXPCConnection *underlyingRemoteConnection; // ivar: _underlyingRemoteConnection


+(id)sharedNotifier;
-(id)_newRemoteConnection;
-(id)_remoteConnection;
-(id)init;


@end


#endif
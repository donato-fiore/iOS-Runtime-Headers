// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMOTEXPCPAIR_H
#define REMOTEXPCPAIR_H

@class OS_xpc_remote_connection;

#import <Foundation/Foundation.h>


@interface RemoteXPCPair : NSObject

@property (retain, nonatomic) OS_xpc_remote_connection *client; // ivar: _client
@property (retain, nonatomic) OS_xpc_remote_connection *server; // ivar: _server


-(id)initWithClient:(id)arg0 server:(id)arg1 ;


@end


#endif
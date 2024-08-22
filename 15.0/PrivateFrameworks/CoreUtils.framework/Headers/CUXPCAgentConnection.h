// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUXPCAGENTCONNECTION_H
#define CUXPCAGENTCONNECTION_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CUXPCAgent.h"

@interface CUXPCAgentConnection : NSObject {
    CUXPCAgent *_agent;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSXPCConnection *_xpcCnx;
}




-(id)remoteObjectProxy;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)connectionInvalidated;


@end


#endif
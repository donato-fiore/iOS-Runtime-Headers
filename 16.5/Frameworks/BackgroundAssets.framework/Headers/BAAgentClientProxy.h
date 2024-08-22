// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BAAGENTCLIENTPROXY_H
#define BAAGENTCLIENTPROXY_H

@class NSXPCConnection, NSString, NSLock;
@protocol BADownloadManagerSyncProtocol;

#import <Foundation/Foundation.h>


@interface BAAgentClientProxy : NSObject {
    NSXPCConnection *_connection;
    NSString *_identifier;
    NSLock *_connectionGuard;
    id<BADownloadManagerSyncProtocol> *_delegate;
}




-(void)dealloc;


@end


#endif
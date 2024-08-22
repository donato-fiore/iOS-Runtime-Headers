// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSSAFARIBOOKMARKSSYNCAGENTCONNECTION_H
#define WBSSAFARIBOOKMARKSSYNCAGENTCONNECTION_H

@class NSXPCConnection;
@protocol WBSSafariBookmarksSyncAgentProtocol;

#import <Foundation/Foundation.h>


@interface WBSSafariBookmarksSyncAgentConnection : NSObject {
    NSXPCConnection *_connection;
    os_unfair_lock_s _connectionLock;
}


@property (readonly, nonatomic) NSObject<WBSSafariBookmarksSyncAgentProtocol> *remoteObjectProxy;


-(id)init;
-(void)_connectionDidInvalidate;
-(void)_setUpConnectionIfNeeded;


@end


#endif
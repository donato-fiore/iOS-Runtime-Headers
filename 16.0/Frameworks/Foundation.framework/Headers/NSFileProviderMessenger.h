// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSFILEPROVIDERMESSENGER_H
#define NSFILEPROVIDERMESSENGER_H

@class Protocol;

#import <Foundation/Foundation.h>

#import "NSXPCConnection.h"
#import "NSFileProviderMessageInterface.h"
#import "NSLock.h"

@interface NSFileProviderMessenger : NSObject {
    NSXPCConnection *_conn;
    Protocol *_protocol;
    NSFileProviderMessageInterface *_interface;
    NSLock *_lock;
    BOOL _triedConnection;
}




-(id)initWithInterface:(id)arg0 protocol:(id)arg1 ;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif
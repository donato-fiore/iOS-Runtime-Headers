// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BSXPCCONNECTIONLISTENER_H
#define BSXPCCONNECTIONLISTENER_H

@class NSString;
@protocol OS_xpc_object, BSXPCConnectionListenerHandler, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BSXPCConnectionListener : NSObject {
    NSObject<OS_xpc_object> *_connection;
    id<BSXPCConnectionListenerHandler> *_handler;
    NSString *_service;
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)description;
-(void)dealloc;


@end


#endif
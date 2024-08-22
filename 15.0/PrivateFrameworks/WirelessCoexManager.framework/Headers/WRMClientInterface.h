// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WRMCLIENTINTERFACE_H
#define WRMCLIENTINTERFACE_H

@protocol OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WRMClientInterface : NSObject {
    NSObject<OS_xpc_object> *mConnection;
    int mProcessId;
    NSObject<OS_dispatch_queue> *mQueue;
    id *mNotificationBlock;
}




-(id)init;
-(void)dealloc;
-(void)registerClient:(int)arg0 queue:(id)arg1 notificationHandler:(id)arg2 ;
-(void)unregisterClient;
-(void)unregisterClientWithNotificationBlockRelease;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WCMCLIENTPROXY_H
#define WCMCLIENTPROXY_H

@protocol WCMClientCallback, OS_dispatch_queue, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface WCMClientProxy : NSObject {
    int mProcessId;
    id<WCMClientCallback> *mDelegate;
    NSObject<OS_dispatch_queue> *mQueue;
    BOOL mIsRegistered;
    NSObject<OS_xpc_object> *mConnection;
}




-(BOOL)connectToServer;
-(id)init;
-(id)initWithClientProcessId:(int)arg0 delegate:(id)arg1 dispatch:(id)arg2 ;
-(void)dealloc;
-(void)reConnect;
-(void)registerToServer;
-(void)sendMessage:(int)arg0 argument:(id)arg1 ;


@end


#endif
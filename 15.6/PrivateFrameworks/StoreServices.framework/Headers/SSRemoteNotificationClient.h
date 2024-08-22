// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSREMOTENOTIFICATIONCLIENT_H
#define SSREMOTENOTIFICATIONCLIENT_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SSRemoteNotificationClient : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    int _notifyToken;
}




+(id)sharedClient;
-(id)init;
-(id)popQueuedNotifications;
-(void)dealloc;
-(void)registerForRemoteNotifications;
-(void)unregisterForRemoteNotifications;


@end


#endif
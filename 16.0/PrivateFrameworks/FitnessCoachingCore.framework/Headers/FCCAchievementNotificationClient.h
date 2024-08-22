// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCCACHIEVEMENTNOTIFICATIONCLIENT_H
#define FCCACHIEVEMENTNOTIFICATIONCLIENT_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FCCXPCClient.h"

@interface FCCAchievementNotificationClient : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    FCCXPCClient *_xpcClient;
}




-(id)init;
-(id)initWithQueue:(id)arg0 xpcClient:(id)arg1 ;
-(void)_postAchievementNotification:(id)arg0 completion:(id)arg1 ;
-(void)postAchievementNotification:(id)arg0 completion:(id)arg1 ;


@end


#endif
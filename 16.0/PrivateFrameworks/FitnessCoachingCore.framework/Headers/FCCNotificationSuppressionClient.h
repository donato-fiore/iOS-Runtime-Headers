// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCCNOTIFICATIONSUPPRESSIONCLIENT_H
#define FCCNOTIFICATIONSUPPRESSIONCLIENT_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FCCNotificationSuppressionStore.h"
#import "FCCXPCClient.h"

@interface FCCNotificationSuppressionClient : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    FCCNotificationSuppressionStore *_store;
    FCCXPCClient *_xpcClient;
}




-(BOOL)notificationsSuppressed;
-(id)init;
-(id)initWithQueue:(id)arg0 store:(id)arg1 xpcClient:(id)arg2 ;
-(void)_addNotificationSuppressionRequest:(id)arg0 completion:(id)arg1 ;
-(void)_removeNotificationSuppressionRequest:(id)arg0 completion:(id)arg1 ;
-(void)addNotificationSuppressionRequest:(id)arg0 completion:(id)arg1 ;
-(void)removeNotificationSuppressionRequest:(id)arg0 completion:(id)arg1 ;


@end


#endif
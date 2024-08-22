// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CBCONTAINER_H
#define CBCONTAINER_H

@protocol OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CBContainer : NSObject {
    NSObject<OS_os_log> *_logHandle;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    id *_notificationBlock;
}




-(void)dealloc;
-(void)registerNotificationBlock:(id)arg0 ;
-(void)scheduleWithDispatchQueue:(id)arg0 ;
-(void)unregisterNotificationBlock;
-(void)unscheduleWithDispatchQueue:(id)arg0 ;


@end


#endif
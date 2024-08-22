// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CBFILTER_H
#define CBFILTER_H

@protocol OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CBFilter : NSObject {
    NSObject<OS_os_log> *_logHandle;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    id *_notificationBlock;
}




-(BOOL)setProperty:(id)arg0 forKey:(id)arg1 ;
-(id)copyPropertyForKey:(id)arg0 ;
-(id)filterEvent:(id)arg0 ;
-(id)filterEvents:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)forgetDataForService:(struct __IOHIDServiceClient *)arg0 ;
-(void)registerNotificationBlock:(id)arg0 ;
-(void)scheduleWithDispatchQueue:(id)arg0 ;
-(void)sendNotificationForKey:(id)arg0 andValue:(id)arg1 ;
-(void)unregisterNotificationBlock;
-(void)unscheduleWithDispatchQueue:(id)arg0 ;


@end


#endif
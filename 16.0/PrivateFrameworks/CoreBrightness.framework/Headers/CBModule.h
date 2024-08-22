// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CBMODULE_H
#define CBMODULE_H

@protocol OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CBModule : NSObject {
    id *_notificationBlock;
    NSObject<OS_os_log> *_logHandle;
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)initWithQueue:(id)arg0 ;
-(void)dealloc;
-(void)registerNotificationBlock:(id)arg0 ;
-(void)unregisterNotificationBlock;


@end


#endif
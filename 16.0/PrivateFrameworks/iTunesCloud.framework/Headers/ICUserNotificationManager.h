// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICUSERNOTIFICATIONMANAGER_H
#define ICUSERNOTIFICATIONMANAGER_H

@class NSMapTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICUserNotificationManager : NSObject {
    NSMapTable *_contextForUserNotification;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}




+(id)sharedManager;
-(id)init;
-(void)_handleCallbackForUserNotification:(struct __CFUserNotification *)arg0 responseFlags:(NSUInteger)arg1 ;
-(void)displayUserNotification:(struct __CFUserNotification *)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif
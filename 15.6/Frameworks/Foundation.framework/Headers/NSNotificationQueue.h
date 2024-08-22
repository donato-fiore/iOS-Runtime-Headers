// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSNOTIFICATIONQUEUE_H
#define NSNOTIFICATIONQUEUE_H


#import <Foundation/Foundation.h>


@interface NSNotificationQueue : NSObject {
    id *_notificationCenter;
    id *_asapQueue;
    id *_asapObs;
    id *_idleQueue;
    id *_idleObs;
}




+(id)defaultQueue;
-(id)init;
-(id)initWithNotificationCenter:(id)arg0 ;
-(void)_flushNotificationQueue;
-(void)dealloc;
-(void)dequeueNotificationsMatching:(id)arg0 coalesceMask:(NSUInteger)arg1 ;
-(void)enqueueNotification:(id)arg0 postingStyle:(NSUInteger)arg1 ;
-(void)enqueueNotification:(id)arg0 postingStyle:(NSUInteger)arg1 coalesceMask:(NSUInteger)arg2 forModes:(id)arg3 ;


@end


#endif
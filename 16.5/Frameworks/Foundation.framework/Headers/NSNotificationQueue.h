// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSNOTIFICATIONQUEUE_H
#define NSNOTIFICATIONQUEUE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "NSNotificationCenter.h"

@interface NSNotificationQueue : NSObject {
    NSNotificationCenter *_notificationCenter;
    NSMutableArray *_asapQueue;
    NSMutableArray *_idleQueue;
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
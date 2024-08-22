// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGDNOTIFICATIONBROADCASTER_H
#define SGDNOTIFICATIONBROADCASTER_H


#import <Foundation/Foundation.h>


@interface SGDNotificationBroadcaster : NSObject



+(NSUInteger)notificationCount;
+(void)emitContactDeleted:(id)arg0 ;
+(void)emitContactUpdated:(id)arg0 ;
+(void)emitEventDeleted:(id)arg0 ;
+(void)emitEventUpdated:(id)arg0 ;
+(void)emitReminderDeleted:(id)arg0 ;
+(void)emitReminderUpdated:(id)arg0 ;
+(void)emitURLChanged;


@end


#endif
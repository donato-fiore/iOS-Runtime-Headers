// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBUSERNOTIFICATIONCENTER_H
#define SBUSERNOTIFICATIONCENTER_H


#import <Foundation/Foundation.h>


@interface SBUserNotificationCenter : NSObject



+(void)_userNotificationDone:(id)arg0 ;
+(void)dispatchUserNotification:(id)arg0 flags:(int)arg1 replyPort:(unsigned int)arg2 auditToken:(id)arg3 ;
+(void)startUserNotificationCenter;


@end


#endif
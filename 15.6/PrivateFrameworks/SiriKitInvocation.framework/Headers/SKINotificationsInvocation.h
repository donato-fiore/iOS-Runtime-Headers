// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKINOTIFICATIONSINVOCATION_H
#define SKINOTIFICATIONSINVOCATION_H


#import <Foundation/Foundation.h>


@interface SKINotificationsInvocation : NSObject



+(id)announceNotificationsRequestFromAnnounceDirectInvocationPayload:(id)arg0 ;
+(id)announceNotificationsRequestFromNotification:(id)arg0 fromApp:(id)arg1 synchronousBurstIndex:(id)arg2 isSameTypeAsLastAnnouncement:(BOOL)arg3 ;


@end


#endif
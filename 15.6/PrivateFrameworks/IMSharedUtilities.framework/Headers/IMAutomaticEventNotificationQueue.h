// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMAUTOMATICEVENTNOTIFICATIONQUEUE_H
#define IMAUTOMATICEVENTNOTIFICATIONQUEUE_H



#import "IMEventNotificationQueue.h"

@interface IMAutomaticEventNotificationQueue : IMEventNotificationQueue



-(void)_didAddNotification:(id)arg0 ;
-(void)_didCancelNotifications;
-(void)_didProcessQueue;
-(void)_invokeEvent:(id)arg0 ;


@end


#endif
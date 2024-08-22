// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC22ACTIVITYAWARDSSERVICES18NOTIFICATIONSYSTEM_H
#define _TTC22ACTIVITYAWARDSSERVICES18NOTIFICATIONSYSTEM_H


#import <Foundation/Foundation.h>


@interface _TtC22ActivityAwardsServices18NotificationSystem : NSObject {
    ? achievementStore;
    ? bridgeSettings;
    ? earnedKeyValueStore;
    ? healthStore;
    ? notificationPostingProvider;
    ? notificationSuppresionProvider;
    ? pendingAchievementsToNotify;
    ? platform;
    ? unearnedKeyValueStore;
    ? lock;
}




-(id)init;
-(void)dealloc;
-(void)notificationSuppressionChanged;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUSERNOTIFICATIONCENTER_H
#define AMSUSERNOTIFICATIONCENTER_H

@protocol AMSUserNotificationStrategy;

#import <Foundation/Foundation.h>


@interface AMSUserNotificationCenter : NSObject

@property (readonly, nonatomic) NSObject<AMSUserNotificationStrategy> *strategy; // ivar: _strategy


+(BOOL)badgeBundleId:(id)arg0 badgeId:(id)arg1 enabled:(BOOL)arg2 error:(*id)arg3 ;
+(Class)_determineStrategyForBundleId:(id)arg0 ;
+(id)activeNotificationsWithCenterBundleId:(id)arg0 ;
+(id)postNotification:(id)arg0 bag:(id)arg1 centerBundleId:(id)arg2 ;
+(id)removeNotification:(id)arg0 centerBundleId:(id)arg1 ;
+(id)removeNotificationWithIdentifier:(id)arg0 centerBundleId:(id)arg1 logKey:(id)arg2 scheduledOnly:(BOOL)arg3 ;


@end


#endif
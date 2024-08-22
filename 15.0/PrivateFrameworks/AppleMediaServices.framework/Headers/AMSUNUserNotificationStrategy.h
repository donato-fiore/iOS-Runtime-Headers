// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSUNUSERNOTIFICATIONSTRATEGY_H
#define AMSUNUSERNOTIFICATIONSTRATEGY_H

@protocol AMSUserNotificationStrategy;

#import <Foundation/Foundation.h>


@interface AMSUNUserNotificationStrategy : NSObject <AMSUserNotificationStrategy>





+(BOOL)_badgeBundleId:(id)arg0 increment:(BOOL)arg1 error:(*id)arg2 ;
+(id)_activeNotificationsWithCenterBundleId:(id)arg0 ;
+(id)_centerForBundleId:(id)arg0 ;
+(id)_postNotification:(id)arg0 bag:(id)arg1 centerBundleId:(id)arg2 ;
+(id)_removeNotification:(id)arg0 centerBundleId:(id)arg1 ;
+(id)_removeNotificationWithIdentifier:(id)arg0 centerBundleId:(id)arg1 logKey:(id)arg2 scheduledOnly:(BOOL)arg3 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDNOTIFICATIONMANAGER_H
#define WDNOTIFICATIONMANAGER_H

@class NSMutableDictionary, HKNotificationStore, NSString, HKHealthStore;
@protocol UNUserNotificationCenterDelegate;

#import <Foundation/Foundation.h>


@interface WDNotificationManager : NSObject <UNUserNotificationCenterDelegate>

 {
    os_unfair_lock_s _lock;
    NSMutableDictionary *_domainsToPolicies;
    HKNotificationStore *_notificationStore;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (readonly) Class superclass;


+(BOOL)suppressBadgeNotifications;
+(void)initialize;
+(void)setSuppressBadgeNotifications:(BOOL)arg0 ;
-(id)_lock_policyForNotification:(id)arg0 ;
-(id)initWithHealthStore:(id)arg0 ;
-(void)resetEmergencySOSBadge;
-(void)resetHealthRecordsDataBadge;
-(void)setBadge:(id)arg0 forDomain:(NSInteger)arg1 completion:(id)arg2 ;
-(void)setPolicy:(id)arg0 forDomain:(NSInteger)arg1 ;
-(void)userNotificationCenter:(id)arg0 didReceiveNotificationResponse:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)userNotificationCenter:(id)arg0 openSettingsForNotification:(id)arg1 ;
-(void)userNotificationCenter:(id)arg0 willPresentNotification:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif
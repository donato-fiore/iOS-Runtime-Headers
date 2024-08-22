// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBICONBADGECONTROLLER_H
#define DBICONBADGECONTROLLER_H

@class NSString, NSDictionary, UNNotificationSettingsCenter, CARObserverHashTable;
@protocol UNNotificationSettingsCenterDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DBIconBadgeController : NSObject <UNNotificationSettingsCenterDelegate>

 {
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *badgeSettingsUpdateQueue; // ivar: _badgeSettingsUpdateQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *lock_badgesAllowedByIdentifier; // ivar: _lock_badgesAllowedByIdentifier
@property (retain, nonatomic) UNNotificationSettingsCenter *notificationsSettingsCenter; // ivar: _notificationsSettingsCenter
@property (retain, nonatomic) CARObserverHashTable *observers; // ivar: _observers
@property (readonly) Class superclass;


-(BOOL)notificationsEnabledForIdentifier:(id)arg0 ;
-(id)init;
-(void)_badge_queue_updateNotificationSources;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)userNotificationSettingsCenter:(id)arg0 didUpdateNotificationSourceIdentifiers:(id)arg1 ;


@end


#endif
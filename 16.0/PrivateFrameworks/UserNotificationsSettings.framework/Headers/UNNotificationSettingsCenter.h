// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UNNOTIFICATIONSETTINGSCENTER_H
#define UNNOTIFICATIONSETTINGSCENTER_H

@class NSString;
@protocol UNUserNotificationSettingsServiceConnectionObserver, UNNotificationSettingsCenterDelegate;

#import <Foundation/Foundation.h>


@interface UNNotificationSettingsCenter : NSObject <UNUserNotificationSettingsServiceConnectionObserver>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UNNotificationSettingsCenterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)currentNotificationSettingsCenter;
-(id)_init;
-(id)allNotificationSources;
-(id)init;
-(id)notificationSourceWithIdentifier:(id)arg0 ;
-(id)notificationSourcesWithIdentifiers:(id)arg0 ;
-(id)notificationSystemSettings;
-(void)authorizationWithOptions:(NSUInteger)arg0 forNotificationSourceIdentifier:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)dealloc;
-(void)replaceNotificationSettings:(id)arg0 forNotificationSourceIdentifier:(id)arg1 ;
-(void)replaceNotificationTopicSettings:(id)arg0 forNotificationSourceIdentifier:(id)arg1 topicIdentifier:(id)arg2 ;
-(void)resetScheduledDeliverySetting;
-(void)setNotificationSystemSettings:(id)arg0 ;
-(void)settingsServiceConnection:(id)arg0 didUpdateNotificationSourcesWithIdentifiers:(id)arg1 ;
-(void)settingsServiceConnection:(id)arg0 didUpdateNotificationSystemSettings:(id)arg1 ;


@end


#endif
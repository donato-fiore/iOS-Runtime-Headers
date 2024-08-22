// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLKNOTIFICATIONSIMPL_IOS_H
#define WLKNOTIFICATIONSIMPL_IOS_H

@class NSString;
@protocol UNUserNotificationCenterDelegate, UNUserNotificationCenterDelegatePrivate, WLKNotificationsImpl, WLKNotificationCenterDelegate;

#import <Foundation/Foundation.h>


@interface WLKNotificationsImpl_iOS : NSObject <UNUserNotificationCenterDelegate, UNUserNotificationCenterDelegatePrivate, WLKNotificationsImpl>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WLKNotificationCenterDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL topicsAreInitialized; // ivar: _topicsAreInitialized


+(NSUInteger)_interruptionLevelForNumber:(id)arg0 ;
+(id)_JSONDictForResponse:(id)arg0 ;
-(BOOL)isCategoryBadgeSettingEnabledByUser:(NSInteger)arg0 ;
-(BOOL)isCategoryEnabledByUser:(NSInteger)arg0 ;
-(NSUInteger)_authOptions;
-(id)_displayNameForSubsectionID:(id)arg0 ;
-(id)_notificationCenter;
-(id)_topicIdentifierForCategory:(NSInteger)arg0 ;
-(id)init;
-(void)_fetchTopics:(id)arg0 ;
-(void)_initializeTopics;
-(void)_networkReachabilityDidChangeNotification:(id)arg0 ;
-(void)_storeFrontChangedNotification:(id)arg0 ;
-(void)dealloc;
-(void)post:(id)arg0 title:(id)arg1 body:(id)arg2 options:(id)arg3 ;
-(void)setBadgeNumber:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)setBadgeString:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)userNotificationCenter:(id)arg0 didChangeSettings:(id)arg1 ;
-(void)userNotificationCenter:(id)arg0 didOpenApplicationForResponse:(id)arg1 ;
-(void)userNotificationCenter:(id)arg0 didReceiveNotificationResponse:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)userNotificationCenter:(id)arg0 willPresentNotification:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif
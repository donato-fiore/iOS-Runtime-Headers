// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDUSERNOTIFICATIONCENTER_H
#define HMDUSERNOTIFICATIONCENTER_H

@class HMFObject, NSString, UNUserNotificationCenter;
@protocol UNUserNotificationCenterDelegate, HMDUserNotificationCenterDelegate, HMMLogEventSubmitting;



@interface HMDUserNotificationCenter : HMFObject <UNUserNotificationCenterDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDUserNotificationCenterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<HMMLogEventSubmitting> *logEventSubmitter; // ivar: _logEventSubmitter
@property (readonly) Class superclass;
@property (readonly) UNUserNotificationCenter *userNotificationCenter; // ivar: _userNotificationCenter


+(id)logCategory;
-(id)configureWithNotificationCategories:(id)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 logEventSubmitter:(id)arg1 ;
-(id)showNotificationWithTitle:(id)arg0 body:(id)arg1 threadIdentifier:(id)arg2 categoryIdentifier:(id)arg3 requestIdentifier:(id)arg4 date:(id)arg5 attachments:(id)arg6 userInfo:(id)arg7 shouldIgnoreDoNotDisturb:(BOOL)arg8 interruptionLevel:(NSUInteger)arg9 logEventTopic:(NSInteger)arg10 ;
-(void)_showNotification:(id)arg0 ;
-(void)fetchAreUserNotificationsEnabledWithCompletion:(id)arg0 ;
-(void)removeNotificationRequestsWithIdentifiers:(id)arg0 ;
-(void)setBadgeNumber:(id)arg0 ;
-(void)updateContent:(id)arg0 forNotificationWithRequestIdentifier:(id)arg1 ;
-(void)userNotificationCenter:(id)arg0 didReceiveNotificationResponse:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif
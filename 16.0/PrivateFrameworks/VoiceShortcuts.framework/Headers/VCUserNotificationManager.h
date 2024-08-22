// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCUSERNOTIFICATIONMANAGER_H
#define VCUSERNOTIFICATIONMANAGER_H

@class NSString;
@protocol UNUserNotificationCenterDelegate, VCTriggerNotificationDebouncerDelegate, VCUserNotificationManagerDelegate;

#import <Foundation/Foundation.h>

#import "VCTriggerNotificationDebouncer.h"
#import "WFUserNotificationManager.h"

@interface VCUserNotificationManager : NSObject <UNUserNotificationCenterDelegate, VCTriggerNotificationDebouncerDelegate>



@property (readonly, nonatomic) VCTriggerNotificationDebouncer *debouncer; // ivar: _debouncer
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VCUserNotificationManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) WFUserNotificationManager *userNotificationManager; // ivar: _userNotificationManager


+(id)alertCategory;
+(id)backgroundRunningCategory;
+(id)categoryIdentifiers;
+(id)promptCategory;
-(BOOL)_postNotificationOfType:(NSUInteger)arg0 forTrigger:(id)arg1 workflowReference:(id)arg2 removeDeliveredNotifications:(BOOL)arg3 pendingTriggerEventIDs:(id)arg4 actionIcons:(id)arg5 error:(*id)arg6 ;
-(BOOL)postBackgroundRunningNotificationWithConfiguredTriggers:(id)arg0 userInfo:(id)arg1 error:(*id)arg2 ;
-(BOOL)postNotificationOfType:(NSUInteger)arg0 forTrigger:(id)arg1 workflowReference:(id)arg2 removeDeliveredNotifications:(BOOL)arg3 pendingTriggerEventIDs:(id)arg4 actionIcons:(id)arg5 error:(*id)arg6 ;
-(id)initWithUserNotificationManager:(id)arg0 ;
-(void)postNotificationForTrigger:(id)arg0 workflowReference:(id)arg1 pendingTriggerEventIDs:(id)arg2 ;
-(void)postNotificationThatTrigger:(id)arg0 failedWithError:(id)arg1 ;
-(void)removeNotificationsWithTriggerIdentifier:(id)arg0 ;
-(void)removeStaleNotificationsWithCompletion:(id)arg0 ;
-(void)userNotificationCenter:(id)arg0 didReceiveNotificationResponse:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif
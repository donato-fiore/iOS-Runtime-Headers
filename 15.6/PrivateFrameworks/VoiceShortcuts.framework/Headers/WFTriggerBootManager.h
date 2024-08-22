// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFTRIGGERBOOTMANAGER_H
#define WFTRIGGERBOOTMANAGER_H

@class NSString, UNUserNotificationCenter, WFTriggerManager;
@protocol UNUserNotificationCenterDelegate, WFDatabaseProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WFTriggerBootManager : NSObject <UNUserNotificationCenterDelegate>



@property (readonly, nonatomic) NSObject<WFDatabaseProvider> *databaseProvider; // ivar: _databaseProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UNUserNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (retain, nonatomic) WFTriggerManager *triggerManager; // ivar: _triggerManager


+(BOOL)createMarkerFileIfNeeded;
+(BOOL)deleteMarkerFile;
+(BOOL)markerFileExists;
+(id)automationsEnabledFileURL;
+(id)category;
+(void)clearNotificationsWithUserNotificationCenter:(id)arg0 ;
+(void)registerForNotificationRemovalWithUserNotificationCenter:(id)arg0 scheduleIfNeeded:(BOOL)arg1 ;
-(BOOL)canRunAutomations;
-(BOOL)createFirstUnlockTimeFile;
-(BOOL)shouldCreateMarkerFileWithConfiguredTriggers:(id)arg0 ;
-(BOOL)triggerRunningTimeoutHasPassed;
-(id)firstUnlockDate;
-(id)firstUnlockTimeURL;
-(id)initWithDatabaseProvider:(id)arg0 ;
-(id)runningThresholdDate;
-(void)configuredTriggersDidChange:(id)arg0 ;
-(void)deviceWasUnlockedForTheFirstTime;
-(void)postNotificationWithUserNotificationCenterIfNecessary:(id)arg0 completionHandler:(id)arg1 ;
-(void)registerForInitialBootXPCActivityWithUserNotificationCenterIfNeeded:(id)arg0 ;
-(void)start;
-(void)userNotificationCenter:(id)arg0 didReceiveNotificationResponse:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)willRunAutomations;


@end


#endif
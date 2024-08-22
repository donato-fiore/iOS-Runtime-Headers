// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFTRIGGERNOTIFICATIONSCHEDULER_H
#define WFTRIGGERNOTIFICATIONSCHEDULER_H

@protocol WFDatabaseProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VCUserNotificationManager.h"

@interface WFTriggerNotificationScheduler : NSObject

@property (readonly, nonatomic) NSObject<WFDatabaseProvider> *databaseProvider; // ivar: _databaseProvider
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) VCUserNotificationManager *userNotificationManager; // ivar: _userNotificationManager


+(BOOL)shortenTimeIntervalsForTesting;
-(id)initWithUserNotificationManager:(id)arg0 databaseProvider:(id)arg1 ;
-(id)initialRunDateForConfiguredTrigger:(id)arg0 ;
-(int)updateTriggerNotificationLevels:(id)arg0 database:(id)arg1 ;
-(void)cancelActivitiesFromTrigger:(id)arg0 ;
-(void)cancelActivitiesFromTriggerIdentifier:(id)arg0 ;
-(void)cancelAllActivitiesFromTriggers:(id)arg0 ;
-(void)migrateAllTriggersCreatedBeforeBackgroundRunningWithDatabase:(id)arg0 ;
-(void)postBackgroundRunningNotificationForTrigger:(id)arg0 ;
-(void)registerConfiguredTrigger:(id)arg0 delay:(id)arg1 ;
-(void)registerWithDatabaseProvider:(id)arg0 ;
-(void)scheduleTriggerForNotifications:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCTRIGGEREVENTQUEUE_H
#define VCTRIGGEREVENTQUEUE_H

@class NSString;
@protocol VCUserNotificationManagerDelegate, VCTriggerEventRunnerDelegate, WFDatabaseProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VCUserNotificationManager.h"
#import "VCTriggerEventRunner.h"

@interface VCTriggerEventQueue : NSObject <VCUserNotificationManagerDelegate, VCTriggerEventRunnerDelegate>



@property (readonly, nonatomic) NSObject<WFDatabaseProvider> *databaseProvider; // ivar: _databaseProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) VCUserNotificationManager *notificationManager; // ivar: _notificationManager
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (readonly, nonatomic) VCTriggerEventRunner *triggerEventRunner; // ivar: _triggerEventRunner


+(BOOL)shouldRunTrigger:(id)arg0 forEvent:(id)arg1 runEvents:(id)arg2 error:(*id)arg3 ;
+(CGFloat)rateLimitingTimeoutForTrigger:(id)arg0 runEvents:(id)arg1 ;
-(BOOL)deleteTriggerEvent:(id)arg0 error:(*id)arg1 ;
-(BOOL)isTriggerEventStale:(id)arg0 ;
-(BOOL)shouldRunEmailOrMessageTrigger:(id)arg0 forEvent:(id)arg1 runEvents:(id)arg2 error:(*id)arg3 ;
-(NSUInteger)numberOfEventsInQueueWithConfirmationOnly:(BOOL)arg0 ;
-(id)configuredTriggerForIdentifier:(id)arg0 workflowReference:(*id)arg1 error:(*id)arg2 ;
-(id)databaseWithError:(*id)arg0 ;
-(id)initWithDatabaseProvider:(id)arg0 runCoordinator:(id)arg1 ;
-(id)nextTriggerEventWithError:(*id)arg0 ;
-(id)triggerEventsForConfiguredTrigger:(id)arg0 eventInfo:(id)arg1 confirmed:(BOOL)arg2 error:(*id)arg3 ;
-(void)didFinishRunningWithError:(id)arg0 cancelled:(BOOL)arg1 trigger:(id)arg2 runEvent:(id)arg3 ;
-(void)enqueueTriggerWithIdentifier:(id)arg0 eventInfo:(id)arg1 force:(BOOL)arg2 completion:(id)arg3 ;
-(void)logMetricForTrigger:(id)arg0 ;
-(void)notificationManager:(id)arg0 didDismissTriggerWithIdentifier:(id)arg1 pendingTriggerEventIDs:(id)arg2 ;
-(void)notificationManager:(id)arg0 didFailToPostNotificationPromptWithTriggerIdentifier:(id)arg1 pendingTriggerEventIDs:(id)arg2 ;
-(void)notificationManager:(id)arg0 receivedConfirmationToRunTriggerWithIdentifier:(id)arg1 pendingTriggerEventIDs:(id)arg2 ;
-(void)removeAllStaleTriggerEventsIgnoringValidIDs:(id)arg0 ;
-(void)removePendingTriggerEventsWithEventIDs:(id)arg0 ;
-(void)removeStalePendingNotificationsAndTriggerEvents;
-(void)resume;
-(void)resumeWithConfiguredTrigger:(id)arg0 workflowReference:(id)arg1 eventInfo:(id)arg2 ;
-(void)runWithConfiguredTrigger:(id)arg0 workflowReference:(id)arg1 eventInfo:(id)arg2 ;
-(void)setConfirmedForTriggerEventIDs:(id)arg0 error:(*id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXACTIONNOTIFICATIONSERVER_H
#define ATXACTIONNOTIFICATIONSERVER_H

@class UNUserNotificationCenter, WFSuggestionsWorkflowRunnerClient, PETScalarEventTracker, ATXEngagementRecordManager, NSString;
@protocol WFWorkflowRunnerClientDelegate, UNUserNotificationCenterDelegate;

#import <Foundation/Foundation.h>


@interface ATXActionNotificationServer : NSObject <WFWorkflowRunnerClientDelegate, UNUserNotificationCenterDelegate>

 {
    UNUserNotificationCenter *_notificationCenter;
    WFSuggestionsWorkflowRunnerClient *_currentWorkflowRunnerClient;
    PETScalarEventTracker *_removeTracker;
    PETScalarEventTracker *_notifyInitTracker;
    PETScalarEventTracker *_notifyErrorTracker;
    PETScalarEventTracker *_notifySuccessTracker;
    ATXEngagementRecordManager *_engagementRecordManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_requestIdentifierForBundleId:(id)arg0 ;
+(id)bundleIdFromRequestIdentifier:(id)arg0 ;
+(id)localizedContentBodyStringWithString:(id)arg0 forAction:(id)arg1 ;
+(id)sharedInstance;
-(BOOL)_isRTL;
-(BOOL)hasLockscreenPrediction;
-(NSUInteger)deliveredNotificationCount;
-(id)_actionKeyFromNotification:(id)arg0 ;
-(id)_blendingCacheUpdateUUIDFromNotification:(id)arg0 ;
-(id)_localizedStringForKey:(id)arg0 defaultValue:(id)arg1 languageCode:(id)arg2 ;
-(id)_unarchiveProactiveSuggestionFromNotification:(id)arg0 ;
-(id)init;
-(id)proactiveSuggestionsCurrentlyOnLockscreen;
-(void)_postNotificationForProactiveSuggestion:(id)arg0 blendingCacheUpdateUUID:(id)arg1 ;
-(void)_postTestNotification;
-(void)_postTestNotificationWithPredictionCount:(NSInteger)arg0 ;
-(void)_removeNotificationWithIdentifier:(id)arg0 trackEvent:(BOOL)arg1 ;
-(void)_sendLockscreenEventToBiomeWithDate:(id)arg0 eventType:(int)arg1 blendingCacheId:(id)arg2 suggestionIds:(id)arg3 ;
-(void)_setupNotifications;
-(void)postDemoOrDebugNotificationForATXAction:(id)arg0 ;
-(void)postNotificationForATXAction:(id)arg0 ;
-(void)postNotificationForProactiveSuggestion:(id)arg0 blendingCacheUpdateUUID:(id)arg1 ;
-(void)removeActionPredictionNotificationsMatchingAction:(id)arg0 ;
-(void)removeAllActionPredictionNotificationsAndTrackEvent:(BOOL)arg0 recordFeedback:(BOOL)arg1 ;
-(void)userNotificationCenter:(id)arg0 didReceiveNotificationResponse:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)workflowRunnerClient:(id)arg0 didFinishRunningWorkflowWithOutput:(id)arg1 error:(id)arg2 cancelled:(BOOL)arg3 ;
-(void)workflowRunnerClient:(id)arg0 didStartRunningWorkflowWithProgress:(id)arg1 ;


@end


#endif
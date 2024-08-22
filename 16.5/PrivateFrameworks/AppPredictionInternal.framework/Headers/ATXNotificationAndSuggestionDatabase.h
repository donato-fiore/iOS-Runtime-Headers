// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXNOTIFICATIONANDSUGGESTIONDATABASE_H
#define ATXNOTIFICATIONANDSUGGESTIONDATABASE_H

@class ATXNotificationManagementMAConstants;


#import "ATXAbstractVersionedDatabase.h"

@interface ATXNotificationAndSuggestionDatabase : ATXAbstractVersionedDatabase {
    ATXNotificationManagementMAConstants *_mobileAssetConstants;
}




-(BOOL)_runMigrationSteps:(id)arg0 ;
-(BOOL)hasSuggestionBeenShownForEntityId:(id)arg0 suggestionType:(NSInteger)arg1 scope:(NSInteger)arg2 sinceTimestamp:(CGFloat)arg3 ;
-(BOOL)migrate;
-(CGFloat)receiveTimeStampOfFirstNotification;
-(NSInteger)latestVersion;
-(id)_countNotificationsPerAppWithFilters:(id)arg0 stmtBinder:(id)arg1 ;
-(id)allNotificationsBetweenStartTimestamp:(id)arg0 endTimestamp:(id)arg1 limit:(NSUInteger)arg2 ;
-(id)allNotificationsFromBundleId:(id)arg0 sinceTimestamp:(CGFloat)arg1 ;
-(id)appSortedByNumOfNotificationsSinceTimestamp:(CGFloat)arg0 ;
-(id)currentActiveSuggestions;
-(id)deleteAllData;
-(id)engagementStatusOfActiveAndProminentAndMessageNotificationsSinceTimestamp:(CGFloat)arg0 ;
-(id)engagementStatusOfActiveAndProminentNotificationsSinceTimestamp:(CGFloat)arg0 ;
-(id)engagementStatusOfActiveAndProminentNotificationsWithUrgency:(NSInteger)arg0 sinceTimestamp:(CGFloat)arg1 ;
-(id)feedbackHistoriesForKeys:(id)arg0 ;
-(id)getBookmarkDataFromName:(id)arg0 ;
-(id)getSmartPauseFeaturesForBundleIds:(id)arg0 sinceTimestamp:(CGFloat)arg1 positiveEngagementEnums:(id)arg2 ;
-(id)getTopOfNonProminentStackNotificationsWithLimit:(NSUInteger)arg0 ;
-(id)getTopOfProminentStackNotificationsWithLimit:(NSUInteger)arg0 ;
-(id)init;
-(id)messageNotificationsPerAppFromStartTime:(CGFloat)arg0 toEndTime:(CGFloat)arg1 ;
-(id)metricsForSuggestionsSinceCompletionTimestamp:(CGFloat)arg0 ;
-(id)mostRecentActiveNotifications;
-(id)notificationsReceivedPerBundleIdSinceDate:(id)arg0 ;
-(id)numProminentActiveNotificationsByGroupingColumn:(id)arg0 ;
-(id)pruneNotificationsBeforeTimestamp:(CGFloat)arg0 ;
-(id)pruneSuggestionsBeforeTimestamp:(CGFloat)arg0 ;
-(id)resolutionsForNotifications:(id)arg0 ;
-(id)suggestionEventTypeShownForEntityId:(id)arg0 suggestionType:(NSInteger)arg1 scope:(NSInteger)arg2 sinceTimestamp:(CGFloat)arg3 ;
-(id)telemetryDataForNotificationsFromTimestamp:(CGFloat)arg0 endTimestamp:(CGFloat)arg1 ;
-(id)timeSensitiveNonmessageNotificationsPerAppFromStartTime:(CGFloat)arg0 toEndTime:(CGFloat)arg1 ;
-(id)totalNotificationsPerAppFromStartTime:(CGFloat)arg0 toEndTime:(CGFloat)arg1 ;
-(id)vacuumDatabase;
-(struct ATXNotificationAndSuggestionDatastorePerfMetrics )notificationAndSuggestionDatastorePerfMetrics;
-(void)_pruneNotificationsBasedOnHardLimitsForBundleId:(id)arg0 XPCActivity:(id)arg1 ;
-(void)analyze;
-(void)insertNotificationFromEvent:(id)arg0 deliveryMethod:(NSInteger)arg1 modeIdentifier:(id)arg2 deliveryReason:(id)arg3 ;
-(void)insertSuggestion:(id)arg0 ;
-(void)numberOfActiveNotificationsWithCompletionHandler:(id)arg0 ;
// -(void)prepAndRunQuery:(id)arg0 batchSize:(NSInteger)arg1 XPCActivity:(id)arg2 onPrep:(id)arg3 onRow:(unk)arg4 onError:(id)arg5  ;
-(void)pruneNotificationsBasedOnHardLimitsWithXPCActivity:(id)arg0 ;
-(void)pruneSuggestionsBasedOnHardLimitsWithXPCActivity:(id)arg0 ;
-(void)setAllNotificationsToClearedExceptProminent;
-(void)setAllNotificationsToModified;
-(void)setBookmarkData:(id)arg0 forName:(id)arg1 ;
-(void)updateNotificationFromEvent:(id)arg0 ;
-(void)updateNotificationUIForNotifications:(id)arg0 nextUI:(NSUInteger)arg1 ;
-(void)updateSuggestionFromEvent:(id)arg0 ;


@end


#endif
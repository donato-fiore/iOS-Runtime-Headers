// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXNOTIFICATIONANDSUGGESTIONDATASTORE_H
#define ATXNOTIFICATIONANDSUGGESTIONDATASTORE_H

@class BPSPublisher, NSString;
@protocol ATXNotificationResolutionSourceProtocol, ATXNotificationQuantityProviderProtocol, BMBookmark;

#import <Foundation/Foundation.h>

#import "ATXNotificationAndSuggestionDatabase.h"

@interface ATXNotificationAndSuggestionDatastore : NSObject <ATXNotificationResolutionSourceProtocol, ATXNotificationQuantityProviderProtocol>

 {
    ATXNotificationAndSuggestionDatabase *_db;
    id<BMBookmark> *_bookmark;
    BPSPublisher *_notificationEventPublisher;
    BPSPublisher *_suggestionPublisher;
    BPSPublisher *_suggestionInteractionEventPublisher;
    BPSPublisher *_notificationGroupEventPublisher;
    BPSPublisher *_notificationDeliveryEventPublisher;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasSuggestionBeenShownForEntityId:(id)arg0 suggestionType:(NSInteger)arg1 scope:(NSInteger)arg2 sinceTimestamp:(CGFloat)arg3 ;
-(BOOL)hasUrgencyTuningSuggestionBeenShownForBundleId:(id)arg0 sinceTimestamp:(CGFloat)arg1 ;
-(CGFloat)receiveTimeStampOfFirstNotification;
-(id)_fetchBookmarkFromDb;
-(id)_notificationDeliveryEventPublisher;
-(id)_notificationEventPublisher;
-(id)_notificationGroupEventPublisher;
-(id)_serializeBookmark:(id)arg0 ;
-(id)_suggestionInteractionEventPublisher;
-(id)_suggestionPublisher;
-(id)_timeBasedMergePublisher:(id)arg0 withOtherPublishers:(id)arg1 ;
-(id)allNotificationsBetweenStartTimestamp:(id)arg0 endTimestamp:(id)arg1 limit:(NSUInteger)arg2 ;
-(id)appSortedByNumOfNotificationsSinceTimestamp:(CGFloat)arg0 ;
-(id)currentActiveSuggestions;
-(id)deleteAllData;
-(id)engagementStatusOfActiveAndProminentAndMessageNotificationsSinceTimestamp:(CGFloat)arg0 ;
-(id)engagementStatusOfActiveAndProminentNotificationsSinceTimestamp:(CGFloat)arg0 ;
-(id)engagementStatusOfActiveAndProminentNotificationsWithUrgency:(NSInteger)arg0 sinceTimestamp:(CGFloat)arg1 ;
-(id)feedbackHistoriesForKeys:(id)arg0 ;
-(id)getSmartPauseFeaturesForBundleIds:(id)arg0 sinceTimestamp:(CGFloat)arg1 ;
-(id)getTopOfNonProminentStackNotificationsWithLimit:(NSUInteger)arg0 ;
-(id)getTopOfProminentStackNotificationsWithLimit:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithNotificationAndSuggestionDatabase:(id)arg0 ;
-(id)initWithNotificationAndSuggestionDatabase:(id)arg0 bookmark:(id)arg1 ;
-(id)initWithNotificationAndSuggestionDatabase:(id)arg0 bookmark:(id)arg1 notificationEventPublisher:(id)arg2 suggestionPublisher:(id)arg3 suggestionInteractionEventPublisher:(id)arg4 ;
-(id)initWithNotificationAndSuggestionDatabase:(id)arg0 bookmark:(id)arg1 notificationEventPublisher:(id)arg2 suggestionPublisher:(id)arg3 suggestionInteractionEventPublisher:(id)arg4 notificationGroupEventPublisher:(id)arg5 ;
-(id)mergedInputEventStream;
-(id)messageNotificationsPerAppFromStartTime:(CGFloat)arg0 toEndTime:(CGFloat)arg1 ;
-(id)metricsForSuggestionsSinceCompletionTimestamp:(CGFloat)arg0 ;
-(id)mostRecentActiveNotifications;
-(id)numProminentActiveNotificationsPerBundleId;
-(id)numProminentActiveNotificationsPerThreadId;
-(id)pruneNotificationsBeforeTimestamp:(CGFloat)arg0 ;
-(id)pruneSuggestionsBeforeTimestamp:(CGFloat)arg0 ;
-(id)resolutionsForNotifications:(id)arg0 ;
-(id)suggestionEventTypeShownForEntityId:(id)arg0 suggestionType:(NSInteger)arg1 scope:(NSInteger)arg2 sinceTimestamp:(CGFloat)arg3 ;
-(id)telemetryDataForNotificationsFromTimestamp:(CGFloat)arg0 endTimestamp:(CGFloat)arg1 ;
-(id)timeSensitiveNonmessageNotificationsPerAppFromStartTime:(CGFloat)arg0 toEndTime:(CGFloat)arg1 ;
-(id)totalNotificationsPerAppFromStartTime:(CGFloat)arg0 toEndTime:(CGFloat)arg1 ;
-(id)vacuumDatabase;
-(void)numberOfActiveNotificationsWithCompletionHandler:(id)arg0 ;
-(void)pruneDatabaseWithXPCActivity:(id)arg0 ;
-(void)updateDatabase;
-(void)updateDatabaseForEvent:(id)arg0 ;
-(void)updateDatabaseForNotificationEvent:(id)arg0 ;


@end


#endif
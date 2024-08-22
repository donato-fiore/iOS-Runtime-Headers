// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXAPPDIRECTORYCLIENT_H
#define ATXAPPDIRECTORYCLIENT_H

@class NSXPCConnection, _DKEventStream, ATXUniversalBiomeUIStream, NSArray;
@protocol ATXAppDirectoryInterface, _DKKnowledgeSaving, OS_dispatch_queue, ATXPETEventTracker2Protocol;

#import <Foundation/Foundation.h>

#import "ATXProactiveSuggestionClient.h"
#import "ATXEngagementRecordManager.h"

@interface ATXAppDirectoryClient : NSObject <ATXAppDirectoryInterface>

 {
    NSXPCConnection *_xpcConnection;
    id<_DKKnowledgeSaving> *_knowledgeStore;
    _DKEventStream *_knowledgeStream;
    NSObject<OS_dispatch_queue> *_loggingQueue;
    ATXProactiveSuggestionClient *_blendingClient;
    id<ATXPETEventTracker2Protocol> *_tracker;
    ATXUniversalBiomeUIStream *_uiStream;
    ATXEngagementRecordManager *_engagementRecordManager;
}


@property (nonatomic) BOOL didSendFeedbackDuringSession; // ivar: _didSendFeedbackDuringSession
@property (retain) NSArray *recentAppsVisible; // ivar: _recentAppsVisible
@property (retain) NSArray *topAppsVisible; // ivar: _topAppsVisible


+(id)_allPlaceholderBundleIdsFromHomeScreenService:(id)arg0 ;
+(id)_readRecentAppsWithError:(*id)arg0 ;
+(id)_sortedAllOtherBundleIDsFromAllBundleIDs:(id)arg0 allPlaceholderBundleIDs:(id)arg1 hardcodedAppCategoryMappings:(id)arg2 ;
+(id)_sortedBundleIDsByCategoryWithHardcodedAppCategoryMappings:(id)arg0 ;
+(id)_sortedDefaultCategories;
+(id)hardcodedAppCategoryMappings;
+(id)sharedInstance;
-(id)_init;
-(id)_suggestionsPodDedupableBundleIds;
-(void)_addEngagedSuggestionToERM:(id)arg0 ;
-(void)_logCaptureRateCapture;
-(void)_logCaptureRateDiversionWithType:(int)arg0 ;
-(void)_logToBiome:(NSUInteger)arg0 metadata:(id)arg1 ;
-(void)_logToBiomeWithEventType:(NSUInteger)arg0 date:(id)arg1 blendingCacheUUID:(id)arg2 shownSuggestionIds:(id)arg3 engagedSuggestionIds:(id)arg4 categoryID:(id)arg5 categoryIndex:(id)arg6 bundleId:(id)arg7 bundleIndex:(id)arg8 searchQueryLength:(id)arg9 searchTab:(id)arg10 bundleIdInTopAppsVisible:(id)arg11 userLaunchedAppBeforeLeaving:(id)arg12 ;
-(void)_logToDuet:(NSUInteger)arg0 metadata:(id)arg1 ;
-(void)_resetSessionState;
-(void)_updateTopAppsVisibilityWithCategories:(id)arg0 ;
-(void)appLaunchDatesWithReply:(id)arg0 ;
-(void)categoriesWithReply:(id)arg0 ;
-(void)categoriesWithShouldUseDefault:(BOOL)arg0 reply:(id)arg1 ;
-(void)dealloc;
-(void)logCategoryExitWithDate:(id)arg0 categoryID:(NSUInteger)arg1 categoryIndex:(NSUInteger)arg2 ;
-(void)logCategoryExpansionWithDate:(id)arg0 categoryID:(NSUInteger)arg1 categoryIndex:(NSUInteger)arg2 ;
-(void)logCloseSearchWithDate:(id)arg0 ;
-(void)logDidEnterAppDirectoryWithDate:(id)arg0 ;
-(void)logDidLeaveAppDirectoryWithDate:(id)arg0 appDirectoryResponse:(id)arg1 ;
-(void)logLaunchFromCategoryPreviewWithDate:(id)arg0 categoryID:(NSUInteger)arg1 categoryIndex:(NSUInteger)arg2 bundleID:(id)arg3 bundleIndex:(NSUInteger)arg4 appDirectoryResponse:(id)arg5 ;
-(void)logLaunchFromExpandedCategoryWithDate:(id)arg0 categoryID:(NSUInteger)arg1 categoryIndex:(NSUInteger)arg2 bundleID:(id)arg3 bundleIndex:(NSUInteger)arg4 appDirectoryResponse:(id)arg5 ;
-(void)logLaunchFromSearchWithDate:(id)arg0 bundleID:(id)arg1 bundleIndex:(NSUInteger)arg2 searchQueryLength:(NSUInteger)arg3 searchTab:(NSUInteger)arg4 appDirectoryResponse:(id)arg5 ;
-(void)logOpenSearchWithDate:(id)arg0 ;
-(void)notifyBookmarksDidChange;
-(void)predictedAppsAndRecentAppsWithMaxNumberOfPredictedApps:(NSUInteger)arg0 shouldUseDefaultCategories:(BOOL)arg1 reply:(id)arg2 ;
-(void)predictedAppsAndRecentAppsWithShouldUseDefaultCategories:(BOOL)arg0 reply:(id)arg1 ;
-(void)requestNotificationWhenCategoriesAreReady;


@end


#endif
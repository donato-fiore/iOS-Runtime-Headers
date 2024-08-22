// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXINFORMATIONSTORE_H
#define ATXINFORMATIONSTORE_H

@class NSString, _PASSqliteDatabase;
@protocol _PASDatabaseMigrationProtocol;

#import <Foundation/Foundation.h>


@interface ATXInformationStore : NSObject <_PASDatabaseMigrationProtocol>

 {
    NSString *_databasePath;
    NSString *_cachedSuggestionsPath;
    _PASSqliteDatabase *_db;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_configureDatabase;
-(BOOL)_handleCorruptionIfNeeded;
-(BOOL)_insertTimelineEntries:(id)arg0 forWidget:(id)arg1 storageLimit:(NSUInteger)arg2 ;
-(BOOL)_migrateDatabaseIfNeeded;
-(BOOL)_openDatabase;
-(BOOL)addAbuseControlOutcomeForSuggestion:(id)arg0 forTimestamp:(NSInteger)arg1 outcome:(NSInteger)arg2 ;
-(BOOL)addAbuseControlOutcomes:(id)arg0 ;
-(BOOL)addEngagementRecordForWidget:(id)arg0 date:(id)arg1 engagementType:(NSInteger)arg2 ;
-(BOOL)addStackConfigStatistics:(id)arg0 ;
-(BOOL)appendDismissRecord:(id)arg0 ;
-(BOOL)atomicallyDeleteInfoSuggestions:(id)arg0 insertInfoSuggestions:(id)arg1 ;
-(BOOL)clearOldAbuseControlOutcomeData;
-(BOOL)clearOutdatedSuggestedWidgetEntries;
-(BOOL)clearOutdatedWidgetEngagements;
-(BOOL)clearOutdatedWidgetReloadEntries;
-(BOOL)clearWidgetRemovalHistoryOlderThan:(id)arg0 ;
-(BOOL)deleteAllInfoSuggestionsWithSourceIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)deleteAllSuggestionsForSourceId:(id)arg0 excludingSuggestionId:(id)arg1 ;
-(BOOL)deleteExpiredProactiveStackRotations;
-(BOOL)deleteInfoSuggestion:(id)arg0 ;
-(BOOL)didMostRecentReloadFailForExtension:(id)arg0 kind:(id)arg1 intent:(id)arg2 cutoffDate:(id)arg3 ;
-(BOOL)didSuggestionReachDurationLimit:(id)arg0 ;
-(BOOL)insertOrIgnoreProactiveStackRotationRecord:(id)arg0 ;
-(BOOL)insertTimelineEntries:(id)arg0 forWidget:(id)arg1 ;
-(BOOL)recordSuggestedWidgetUniqueIdIfNotExist:(id)arg0 ;
-(BOOL)recordSuggestionPassedTimelineFiltersForTheFirstTime:(id)arg0 ;
-(BOOL)recordUserRemovalOfSuggestedWidget:(id)arg0 kind:(id)arg1 intent:(id)arg2 atDate:(id)arg3 duration:(CGFloat)arg4 ;
-(BOOL)recordWidgetReloadForSuggestion:(id)arg0 date:(id)arg1 readyForDisplay:(BOOL)arg2 ;
-(BOOL)rotationExistsForSuggestionWithId:(id)arg0 considerStalenessRotation:(BOOL)arg1 ;
-(BOOL)updateEndDateForInfoSuggestions:(id)arg0 ;
-(BOOL)updateMostRecentSignificantDwellOfWidget:(id)arg0 date:(id)arg1 ;
-(BOOL)updateMostRecentTapOfWidget:(id)arg0 date:(id)arg1 ;
-(BOOL)writeCacheWithNewSuggestions:(id)arg0 ;
-(BOOL)writeInfoSuggestions:(id)arg0 ;
-(NSInteger)mostRecentAbuseControlOutcomeForSuggestionId:(id)arg0 ;
-(NSUInteger)numberOfInfoSuggestionsForAppBundleIdentifier:(id)arg0 ;
-(NSUInteger)numberOfInfoSuggestionsForSourceId:(id)arg0 ;
-(NSUInteger)numberOfSuggestedWidgetsInPastDay;
-(NSUInteger)numberOfWidgetReloadForSuggestionInPastDay;
-(id)_dateIntervalFromDismissStatement:(id)arg0 ;
-(id)_openSqliteDatabaseAtPath:(id)arg0 ;
-(id)criterionOfInfoSuggestionWithIdentifier:(id)arg0 ;
-(id)databaseHandle;
-(id)dateIntervalsOfUserRemovalOfSuggestedWidget:(id)arg0 kind:(id)arg1 intent:(id)arg2 ;
-(id)dateIntervalsOfUserRemovalOfSuggestedWidgetWithExtensionBundleId:(id)arg0 ;
-(id)dateIntervalsOfUserRemovalOfSuggestedWidgetWithIntent:(id)arg0 ;
-(id)deleteExpiredSuggestions;
-(id)distinctScoresForWidget:(id)arg0 kind:(id)arg1 ;
-(id)earliestFutureSuggestionChangeDate;
-(id)engagementTimestampsForExtensionBundleId:(id)arg0 kind:(id)arg1 intent:(id)arg2 engagementType:(NSInteger)arg3 ;
-(id)fetchAbuseControlOutcomesForSuggestion:(id)arg0 sinceDate:(id)arg1 ;
-(id)fetchDistinctScoreCountForWidgets;
-(id)fetchDistinctWidgetsIgnoringIntentSinceDate:(id)arg0 ;
-(id)fetchStackConfigStatisticsForWidgetBundleId:(id)arg0 widgetKind:(id)arg1 containerBundleIdentifier:(id)arg2 widgetFamily:(NSInteger)arg3 ;
-(id)fetchTimelineEntriesForWidget:(id)arg0 sinceDate:(id)arg1 ;
-(id)fetchWidgetEngagementRecords;
-(id)fetchWidgetTapEngagementCountSinceStartDate:(id)arg0 ;
-(id)fetchWidgetTapEngagementsBetweenStartDate:(id)arg0 endDate:(id)arg1 ;
-(id)firstAppearDateOfSuggestedWidgetWithUniqueId:(id)arg0 ;
-(id)firstEngagementOfWidget:(id)arg0 kind:(id)arg1 intent:(id)arg2 sinceTimestamp:(id)arg3 ;
-(id)firstTimeAtWhichSuggestionPassedTimelineFilters:(id)arg0 ;
-(id)init;
-(id)initWithDatabasePath:(id)arg0 cachedSuggestionsPath:(id)arg1 ;
-(id)latestInfoSuggestionRelevantNowForSourceId:(id)arg0 ;
-(id)latestUpdateDateForSourceId:(id)arg0 ;
-(id)migrations;
-(id)mostRecentEngagementOfWidget:(id)arg0 ;
-(id)mostRecentEngagementOfWidget:(id)arg0 kind:(id)arg1 ofType:(NSInteger)arg2 ;
-(id)mostRecentEngagementOfWidget:(id)arg0 ofType:(NSInteger)arg1 ;
-(id)mostRecentRotationRecordForSuggestionIdentifier:(id)arg0 ;
-(id)mostRecentRotationRecordForWidget:(id)arg0 kind:(id)arg1 intent:(id)arg2 considerStalenessRotation:(BOOL)arg3 filterByClientModelId:(id)arg4 ;
-(id)mostRecentTimelineEntryWithScoreForWidget:(id)arg0 kind:(id)arg1 family:(NSInteger)arg2 intent:(id)arg3 ;
-(id)mostRecentTimelineUpdateDateOfWidget:(id)arg0 kind:(id)arg1 ;
-(id)nextImportantDateAmongTimelineInducedProactiveStackRotationRecords;
-(id)proactiveRotationsForWidgetInThePastDay:(id)arg0 kind:(id)arg1 intent:(id)arg2 filterByClientModelId:(id)arg3 ;
-(id)queriesToSkipFromEmptyToVersion:(*unsigned int)arg0 ;
-(id)readAllDismissRecords;
-(id)readAllInfoSuggestions;
-(id)readAllInfoSuggestionsWithSourceIdentifier:(id)arg0 ;
-(id)readCachedSuggestions;
-(id)readCurrentlyRelevantSuggestions;
-(id)recentRelevantTimelineEntriesOrderedByDescendingScoreForWidget:(id)arg0 kind:(id)arg1 family:(NSInteger)arg2 intent:(id)arg3 ;
-(id)upcomingDateThatTimelineScoreChangesToOrFromZeroForWidget:(id)arg0 kind:(id)arg1 familyMask:(NSUInteger)arg2 intent:(id)arg3 ;
-(id)widgetSuggestionRemovalRecordsForDiagnostics;
-(void)close;
-(void)dealloc;


@end


#endif
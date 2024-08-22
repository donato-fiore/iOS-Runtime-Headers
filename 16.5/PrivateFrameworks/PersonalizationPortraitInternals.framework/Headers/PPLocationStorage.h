// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPLOCATIONSTORAGE_H
#define PPLOCATIONSTORAGE_H


#import <Foundation/Foundation.h>

#import "PPSQLDatabase.h"
#import "PPDKStorage.h"
#import "PPRecordStorageHelper.h"
#import "PPSourceStorage.h"
#import "PPTrialWrapper.h"

@interface PPLocationStorage : NSObject {
    PPSQLDatabase *_db;
    PPDKStorage *_dkStorage;
    id *_deletionObserver;
    PPRecordStorageHelper *_storageHelper;
    PPSourceStorage *_sourceStorage;
    PPTrialWrapper *_trialWrapper;
}




-(BOOL)clearWithError:(*id)arg0 deletedCount:(*NSUInteger)arg1 ;
-(BOOL)decayFeedbackCountsWithDecayRate:(CGFloat)arg0 shouldContinueBlock:(id)arg1 ;
-(BOOL)deleteAllLocationFeedbackCountRecordsOlderThanDate:(id)arg0 ;
-(BOOL)deleteAllLocationsFromSourcesWithBundleId:(id)arg0 atLeastOneLocationRemoved:(*BOOL)arg1 deletedCount:(*NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)deleteAllLocationsFromSourcesWithBundleId:(id)arg0 documentIds:(id)arg1 atLeastOneLocationRemoved:(*BOOL)arg2 deletedCount:(*NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)deleteAllLocationsFromSourcesWithBundleId:(id)arg0 groupId:(id)arg1 olderThanDate:(id)arg2 atLeastOneLocationRemoved:(*BOOL)arg3 deletedCount:(*NSUInteger)arg4 error:(*id)arg5 ;
-(BOOL)deleteAllLocationsFromSourcesWithBundleId:(id)arg0 groupIds:(id)arg1 atLeastOneLocationRemoved:(*BOOL)arg2 deletedCount:(*NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)deleteAllLocationsOlderThanDate:(id)arg0 atLeastOneLocationRemoved:(*BOOL)arg1 deletedCount:(*NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)donateLocationFeedback:(id)arg0 ;
-(BOOL)donateLocations:(id)arg0 source:(id)arg1 contextualNamedEntities:(id)arg2 algorithm:(unsigned short)arg3 cloudSync:(BOOL)arg4 error:(*id)arg5 ;
-(BOOL)iterLocationRecordsWithQuery:(id)arg0 error:(*id)arg1 block:(id)arg2 ;
-(BOOL)pruneOrphanedLocationFeedbackCountRecordsWithLimit:(NSUInteger)arg0 rowOffset:(NSUInteger)arg1 deletedCount:(*NSUInteger)arg2 isComplete:(*BOOL)arg3 ;
-(id)decayedFeedbackCountsForClusterIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithDatabase:(id)arg0 ;
-(id)initWithDatabase:(id)arg0 maxRecords:(unsigned int)arg1 dkStorage:(id)arg2 loadEmptyDatabaseFromDK:(BOOL)arg3 trialWrapper:(id)arg4 ;
-(id)lastDonationTimeForSourcesBeforeDate:(id)arg0 ;
-(id)sourceStats:(NSUInteger)arg0 withExcludedAlgorithms:(id)arg1 ;
-(id)tempViewForSourceIdsExcludedAlgorithms:(id)arg0 txnWitness:(id)arg1 ;
-(id)thirdPartyBundleIdsFromToday;
-(void)dealloc;


@end


#endif
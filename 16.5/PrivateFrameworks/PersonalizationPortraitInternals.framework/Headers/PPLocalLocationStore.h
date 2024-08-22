// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPLOCALLOCATIONSTORE_H
#define PPLOCALLOCATIONSTORE_H

@class _PASLock, NSCache;
@protocol PPFeedbackAccepting, PPFeedbackProcessing;

#import <Foundation/Foundation.h>

#import "PPTrialWrapper.h"
#import "PPLocationStorage.h"

@interface PPLocalLocationStore : NSObject <PPFeedbackAccepting, PPFeedbackProcessing>

 {
    _PASLock *_cache;
    NSCache *_modelCache;
    PPTrialWrapper *_trialWrapper;
}


@property (readonly, nonatomic) PPLocationStorage *storage; // ivar: _storage
@property (readonly, nonatomic) BOOL useScoreInterpreter; // ivar: _useScoreInterpreter


+(BOOL)isLocationRelevantNamedEntityCategory:(NSUInteger)arg0 ;
+(id)defaultStore;
+(id)locationFromMapItem:(id)arg0 ;
+(id)locationFromMapItemDictionary:(id)arg0 ;
+(id)locationNamedEntityToPPScoredLocation:(id)arg0 ;
+(id)scoredLocationFromName:(id)arg0 category:(unsigned short)arg1 score:(CGFloat)arg2 sentimentScore:(CGFloat)arg3 ;
+(unsigned short)namedEntityCategoryToLocationCategory:(NSUInteger)arg0 ;
+(unsigned short)routineLOITypeToLocationCategory:(NSInteger)arg0 ;
-(BOOL)clearWithError:(*id)arg0 deletedCount:(*NSUInteger)arg1 ;
-(BOOL)deleteAllLocationFeedbackCountsOlderThanDate:(id)arg0 ;
-(BOOL)deleteAllLocationsFromSourcesWithBundleId:(id)arg0 deletedCount:(*NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)deleteAllLocationsFromSourcesWithBundleId:(id)arg0 documentIds:(id)arg1 deletedCount:(*NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)deleteAllLocationsFromSourcesWithBundleId:(id)arg0 groupId:(id)arg1 olderThan:(id)arg2 deletedCount:(*NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)deleteAllLocationsFromSourcesWithBundleId:(id)arg0 groupIds:(id)arg1 deletedCount:(*NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)deleteAllLocationsOlderThanDate:(id)arg0 deletedCount:(*NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)donateLocations:(id)arg0 source:(id)arg1 contextualNamedEntities:(id)arg2 algorithm:(unsigned short)arg3 cloudSync:(BOOL)arg4 error:(*id)arg5 ;
-(BOOL)iterLocationRecordsWithQuery:(id)arg0 error:(*id)arg1 block:(id)arg2 ;
-(BOOL)iterRankedLocationsWithQuery:(id)arg0 error:(*id)arg1 block:(id)arg2 ;
-(BOOL)pruneOrphanedLocationFeedbackCountsWithLimit:(NSInteger)arg0 rowOffset:(NSUInteger)arg1 deletedCount:(*NSUInteger)arg2 isComplete:(*BOOL)arg3 ;
-(CGFloat)finalScoreFromRecordsUsingHybrid:(id)arg0 streamingScorer:(id)arg1 mlModel:(id)arg2 ;
-(id)_init;
-(id)homeOrWorkAddresses;
-(id)init;
-(id)initWithStorage:(id)arg0 trialWrapper:(id)arg1 ;
-(id)locationForHome;
-(id)locationForWork;
-(id)locationRecordOfCategory:(unsigned short)arg0 ;
-(id)locationRecordsWithQuery:(id)arg0 error:(*id)arg1 ;
-(id)rankedLocationsWithQuery:(id)arg0 clientProcessName:(id)arg1 error:(*id)arg2 ;
-(void)processFeedback:(id)arg0 ;
-(void)registerFeedback:(id)arg0 completion:(id)arg1 ;


@end


#endif
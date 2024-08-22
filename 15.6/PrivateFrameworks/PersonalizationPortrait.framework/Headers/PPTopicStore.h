// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPTOPICSTORE_H
#define PPTOPICSTORE_H

@class NSString;
@protocol PPFeedbackAccepting, PPUniversalSearchSpotlightFeedbackAccepting, PPClientStore;

#import <Foundation/Foundation.h>


@interface PPTopicStore : NSObject <PPFeedbackAccepting, PPUniversalSearchSpotlightFeedbackAccepting, PPClientStore>



@property (retain, nonatomic) NSString *clientIdentifier;


+(CGFloat)decayValue:(CGFloat)arg0 withDecayRate:(CGFloat)arg1 forTimeElapsed:(CGFloat)arg2 ;
+(id)defaultStore;
-(BOOL)clearTopicScoresCache:(*id)arg0 ;
-(BOOL)clearWithError:(*id)arg0 ;
-(BOOL)clearWithError:(*id)arg0 deletedCount:(*NSUInteger)arg1 ;
-(BOOL)cloudSyncWithError:(*id)arg0 ;
-(BOOL)computeAndCacheTopicScores:(*id)arg0 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg0 deletedCount:(*NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg0 documentIds:(id)arg1 deletedCount:(*NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg0 groupId:(id)arg1 olderThan:(id)arg2 deletedCount:(*NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg0 groupIds:(id)arg1 deletedCount:(*NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)deleteAllTopicsWithTopicId:(id)arg0 deletedCount:(*NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)donateTopics:(id)arg0 source:(id)arg1 algorithm:(NSUInteger)arg2 cloudSync:(BOOL)arg3 sentimentScore:(CGFloat)arg4 exactMatchesInSourceText:(id)arg5 error:(*id)arg6 ;
-(BOOL)iterRankedTopicsWithQuery:(id)arg0 error:(*id)arg1 block:(id)arg2 ;
-(BOOL)iterScoresForTopicMapping:(id)arg0 query:(id)arg1 error:(*id)arg2 block:(id)arg3 ;
-(BOOL)iterTopicRecordsWithQuery:(id)arg0 error:(*id)arg1 block:(id)arg2 ;
-(id)_initFromSubclass;
-(id)cachePath:(*id)arg0 ;
-(id)cachedTopicScores;
-(id)init;
-(id)rankedTopicsWithQuery:(id)arg0 error:(*id)arg1 ;
-(id)scoresForTopicMapping:(id)arg0 query:(id)arg1 error:(*id)arg2 ;
-(id)topicCacheSandboxExtensionToken:(*id)arg0 ;
-(id)topicExtractionsFromText:(id)arg0 error:(*id)arg1 ;
-(id)topicRecordsWithQuery:(id)arg0 error:(*id)arg1 ;
-(id)unmapMappedTopicIdentifier:(id)arg0 mappingIdentifier:(id)arg1 error:(*id)arg2 ;
-(void)registerFeedback:(id)arg0 completion:(id)arg1 ;
-(void)registerUniversalSearchSpotlightFeedback:(id)arg0 completion:(id)arg1 ;


@end


#endif
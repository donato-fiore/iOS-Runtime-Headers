// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PRSANONYMOUSPIPELINEMANAGER_H
#define PRSANONYMOUSPIPELINEMANAGER_H

@class NSArray, NSString, NSUserDefaults;
@protocol SPCustomFeedbackSender, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface PRSAnonymousPipelineManager : NSObject

@property (retain, nonatomic) NSObject<SPCustomFeedbackSender> *delegate; // ivar: _delegate
@property BOOL isInternalDevice; // ivar: _isInternalDevice
@property (retain, nonatomic) NSArray *lastTopHitQueryItems; // ivar: _lastTopHitQueryItems
@property (retain, nonatomic) NSString *lastTopHitQueryString; // ivar: _lastTopHitQueryString
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) BOOL submissionEnabled; // ivar: _submissionEnabled
@property (retain, nonatomic) NSObject<OS_dispatch_source> *topHitDataCollectionTimer; // ivar: _topHitDataCollectionTimer
@property (retain) NSUserDefaults *userDefaults; // ivar: _userDefaults


+(BOOL)_dataCollectionAllowedForBundle:(id)arg0 ;
+(id)allowedBundles;
+(id)candidateLogsBasePath;
+(id)candidateLogsURLForBundle:(id)arg0 ;
+(id)dateFormatter;
+(id)dateFromFileURL:(id)arg0 ;
+(id)engagementCountKeyForBundle:(id)arg0 ;
+(id)logURLForCurrentTimeAndBundle:(id)arg0 ;
+(id)relativePositionKey;
+(id)sharedManager;
+(id)submittedLogsURL;
+(id)submittedLogsURLForUser:(id)arg0 ;
+(id)submitttedSpotlightReportsError:(*id)arg0 ;
-(BOOL)_shouldDataCollectWithEngagedBundle:(id)arg0 withQueryId:(id)arg1 forClientBundle:(id)arg2 ;
-(BOOL)dateIsExpired:(id)arg0 ;
-(id)_abandonedItemsFromItems:(id)arg0 withIndexOfEngagedItem:(NSUInteger)arg1 ;
-(id)_relativePositionForItem:(id)arg0 inItems:(id)arg1 withIndexOfEngagedItem:(NSInteger)arg2 forClientBundle:(id)arg3 ;
-(id)init;
-(id)retrieveFeedbackURLToSendInDirectory:(id)arg0 ;
-(void)_addQueryInfoToJSONWriter:(struct json_writer *)arg0 withQuery:(id)arg1 cepData:(id)arg2 forClient:(id)arg3 debugInfoAllowed:(BOOL)arg4 keyboardPrimaryLanguage:(id)arg5 ;
-(void)_addRelativePositionToFeatureDict:(id)arg0 relativePosition:(id)arg1 forItem:(id)arg2 debugInfoEnabled:(BOOL)arg3 ;
-(void)_extractTrainingSamplesForQuery:(id)arg0 withIndexOfEngagedItem:(NSUInteger)arg1 withItems:(id)arg2 withCEPData:(id)arg3 forClientBundle:(id)arg4 debugInfoEnabled:(BOOL)arg5 keyboardPrimaryLanguage:(id)arg6 ;
-(void)_increaseUserDefaultsEngagementCountForBundle:(id)arg0 ;
-(void)_updateUserDefaultsWithEngagedBundle:(id)arg0 andQueryID:(id)arg1 forClientBundle:(id)arg2 ;
-(void)_writeResult:(struct json_writer *)arg0 item:(id)arg1 ;
-(void)cleanUp;
-(void)deleteCandidateLogs;
-(void)deleteExpiredSubmittedLogs;
-(void)extractTrainingDataWithItemAtIndex:(NSUInteger)arg0 withItems:(id)arg1 forQuery:(id)arg2 dataCollectAllowed:(BOOL)arg3 forClientBundle:(id)arg4 keyboardPrimaryLanguage:(id)arg5 clientID:(id)arg6 ;
-(void)extractTrainingDataWithItemAtIndex:(NSUInteger)arg0 withItems:(id)arg1 forQuery:(id)arg2 dataCollectAllowed:(BOOL)arg3 queryID:(id)arg4 withCEPData:(id)arg5 forClientBundle:(id)arg6 debugInfoEnabled:(BOOL)arg7 keyboardPrimaryLanguage:(id)arg8 clientID:(id)arg9 ;
-(void)queryWillFinishWithItems:(id)arg0 forClient:(id)arg1 forQuery:(id)arg2 anonymousDataCollectionAllowed:(BOOL)arg3 ;
-(void)registerXPCActivity;
-(void)sendMLFeedbackActivity:(id)arg0 clientID:(id)arg1 ;
-(void)setFeedbackDelegate:(id)arg0 ;
-(void)userEngagedItemWithIdentifier:(id)arg0 forBundle:(id)arg1 forQuery:(id)arg2 ;


@end


#endif
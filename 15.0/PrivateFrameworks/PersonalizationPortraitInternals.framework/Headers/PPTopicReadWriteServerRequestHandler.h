// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPTOPICREADWRITESERVERREQUESTHANDLER_H
#define PPTOPICREADWRITESERVERREQUESTHANDLER_H

@protocol PPTopicReadWriteServerProtocol;

#import <Foundation/Foundation.h>


@interface PPTopicReadWriteServerRequestHandler : NSObject <PPTopicReadWriteServerProtocol>





-(void)clearWithCompletion:(id)arg0 ;
-(void)cloudSyncWithCompletion:(id)arg0 ;
-(void)computeAndCacheTopicScores:(id)arg0 ;
-(void)deleteAllTopicsFromSourcesWithBundleId:(id)arg0 completion:(id)arg1 ;
-(void)deleteAllTopicsFromSourcesWithBundleId:(id)arg0 documentIds:(id)arg1 completion:(id)arg2 ;
-(void)deleteAllTopicsFromSourcesWithBundleId:(id)arg0 groupId:(id)arg1 olderThanDate:(id)arg2 completion:(id)arg3 ;
-(void)deleteAllTopicsFromSourcesWithBundleId:(id)arg0 groupIds:(id)arg1 completion:(id)arg2 ;
-(void)deleteAllTopicsWithTopicId:(id)arg0 completion:(id)arg1 ;
-(void)donateTopics:(id)arg0 source:(id)arg1 algorithm:(NSUInteger)arg2 cloudSync:(BOOL)arg3 sentimentScore:(CGFloat)arg4 exactMatchesInSourceText:(id)arg5 completion:(id)arg6 ;


@end


#endif
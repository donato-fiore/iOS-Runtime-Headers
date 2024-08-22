// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPTOPICREADWRITECLIENT_H
#define PPTOPICREADWRITECLIENT_H


#import <Foundation/Foundation.h>

#import "PPXPCClientHelper.h"

@interface PPTopicReadWriteClient : NSObject {
    PPXPCClientHelper *_clientHelper;
}




+(id)sharedInstance;
-(BOOL)_doDeletionSyncCallWithError:(*id)arg0 deletedCount:(*NSUInteger)arg1 syncCall:(id)arg2 ;
-(BOOL)_doSyncCallWithError:(*id)arg0 syncCall:(id)arg1 ;
-(BOOL)clearWithError:(*id)arg0 deletedCount:(*NSUInteger)arg1 ;
-(BOOL)cloudSyncWithError:(*id)arg0 ;
-(BOOL)computeAndCacheTopicScores:(*id)arg0 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg0 deletedCount:(*NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg0 documentIds:(id)arg1 deletedCount:(*NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg0 groupId:(id)arg1 olderThanDate:(id)arg2 deletedCount:(*NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg0 groupIds:(id)arg1 deletedCount:(*NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)deleteAllTopicsWithTopicId:(id)arg0 deletedCount:(*NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)donateTopics:(id)arg0 source:(id)arg1 algorithm:(NSUInteger)arg2 cloudSync:(BOOL)arg3 sentimentScore:(CGFloat)arg4 exactMatchesInSourceText:(id)arg5 error:(*id)arg6 ;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)init;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPDKSTORAGE_H
#define PPDKSTORAGE_H

@class _PASLock;
@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface PPDKStorage : NSObject {
    _PASLock *_entityLock;
    _PASLock *_topicLock;
    NSObject<OS_dispatch_semaphore> *_entityWriteSem;
    NSObject<OS_dispatch_semaphore> *_topicWriteSem;
}


@property (readonly, nonatomic) CGFloat entityStreamCooldownTimeRemaining;
@property (readonly, nonatomic) CGFloat topicStreamCooldownTimeRemaining;


+(id)sharedInstance;
-(BOOL)deleteAllEventsInEventStream:(id)arg0 error:(*id)arg1 ;
-(BOOL)deleteAllEventsInEventStream:(id)arg0 matchingPredicate:(id)arg1 error:(*id)arg2 ;
-(BOOL)deleteEvents:(id)arg0 error:(*id)arg1 ;
-(BOOL)iterEventBatchesMatchingPredicate:(id)arg0 streams:(id)arg1 sortDescriptors:(id)arg2 batchSize:(NSUInteger)arg3 error:(*id)arg4 block:(id)arg5 ;
-(BOOL)iterEventBatchesMatchingPredicate:(id)arg0 streams:(id)arg1 sortDescriptors:(id)arg2 batchSize:(NSUInteger)arg3 readMetaData:(BOOL)arg4 remoteOnly:(BOOL)arg5 error:(*id)arg6 block:(id)arg7 ;
-(BOOL)saveEvents:(id)arg0 stream:(id)arg1 maxRetries:(NSInteger)arg2 retryInterval:(CGFloat)arg3 shouldContinueBlock:(id)arg4 ;
-(CGFloat)namedEntityWriteBatchInterval;
-(CGFloat)topicWriteBatchInterval;
-(id)entityStream;
-(id)eventForNamedEntityRecord:(id)arg0 sourceDeviceID:(id)arg1 ;
-(id)eventForTopicRecord:(id)arg0 sourceDeviceID:(id)arg1 ;
-(id)namedEntityRecordFromEvent:(id)arg0 ;
-(id)registerForNamedEntitiesRemoteAdditionWithBlock:(id)arg0 ;
-(id)registerForNamedEntitiesRemoteDeletionWithBlock:(id)arg0 ;
-(id)registerForTopicsRemoteAdditionWithBlock:(id)arg0 ;
-(id)registerForTopicsRemoteDeletionWithBlock:(id)arg0 ;
-(id)tombstoneStream;
-(id)topicRecordFromEvent:(id)arg0 ;
-(id)topicStream;
-(unsigned int)namedEntityWriteBatchSize;
-(unsigned int)readBatchSize;
-(unsigned int)topicWriteBatchSize;
-(void)removeObserver:(id)arg0 ;


@end


#endif
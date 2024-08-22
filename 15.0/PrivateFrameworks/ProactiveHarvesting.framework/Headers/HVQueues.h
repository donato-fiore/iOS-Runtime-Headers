// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HVQUEUES_H
#define HVQUEUES_H

@class _PASLock;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HVQueues : NSObject {
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_notificationSerialQueue;
}




+(id)defaultQueues;
-(BOOL)cleanupWithError:(*id)arg0 shouldContinueBlock:(id)arg1 ;
-(BOOL)deleteContentWithRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)dequeueContent:(*id)arg0 contentProtection:(*id)arg1 dataSource:(unsigned int)arg2 dataSourceContentState:(id)arg3 minimumLevelOfService:(unsigned char)arg4 inMemoryItemsOnly:(BOOL)arg5 error:(*id)arg6 ;
-(BOOL)dequeuedContentConsumedWithError:(*id)arg0 ;
-(BOOL)dequeuedContentNotConsumed:(id)arg0 dataSource:(unsigned int)arg1 error:(*id)arg2 ;
-(BOOL)enqueueContent:(id)arg0 contentProtection:(id)arg1 error:(*id)arg2 ;
-(BOOL)registerQueueObserver:(id)arg0 dispatchQueue:(id)arg1 ;
-(id)init;
-(id)statsWithError:(*id)arg0 ;
-(void)setQueue:(id)arg0 forDataSource:(unsigned int)arg1 ;


@end


#endif
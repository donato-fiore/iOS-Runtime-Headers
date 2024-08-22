// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSMETRICSFIGAROFLUSHTASK_H
#define AMSMETRICSFIGAROFLUSHTASK_H

@class NSString;
@protocol AMSMetricsFlushTask, AMSBagProtocol, AMSMetricsDataSource;


#import "AMSTask.h"
#import "AMSPromise.h"
#import "AMSURLSession.h"

@interface AMSMetricsFigaroFlushTask : AMSTask <AMSMetricsFlushTask>

 {
    AMSPromise *_currentCancellableDataTaskPromise;
    os_unfair_lock_s _currentCancellableDataTaskPromiseLock;
}


@property (readonly, nonatomic) AMSURLSession *URLSession; // ivar: _URLSession
@property (readonly, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic) NSObject<AMSMetricsDataSource> *dataSource; // ivar: _dataSource
@property (nonatomic) NSInteger maxBatchSize; // ivar: _maxBatchSize
@property (nonatomic) NSInteger maxRequestCount; // ivar: _maxRequestCount
@property (copy, nonatomic) NSString *topic; // ivar: _topic


-(BOOL)_shouldClearEventsDespiteError:(id)arg0 result:(id)arg1 ;
-(BOOL)cancel;
-(id)_flushNextBatchWithMaxRequestCount:(NSUInteger)arg0 topic:(id)arg1 maxBatchSize:(NSInteger)arg2 requestCount:(NSUInteger)arg3 flushedEventCount:(NSUInteger)arg4 config:(id)arg5 ;
-(id)_mescalSignatureWithBodyData:(id)arg0 error:(*id)arg1 ;
-(id)_nextBatchWithConfig:(id)arg0 topic:(id)arg1 maxBatchSize:(NSInteger)arg2 ;
-(id)_postBatch:(id)arg0 ;
-(id)initWithDataSource:(id)arg0 bag:(id)arg1 ;
-(id)performFlush;


@end


#endif
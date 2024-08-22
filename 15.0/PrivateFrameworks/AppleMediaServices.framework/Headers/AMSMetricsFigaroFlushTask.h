// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSMETRICSFIGAROFLUSHTASK_H
#define AMSMETRICSFIGAROFLUSHTASK_H

@class NSString;
@protocol AMSMetricsFlushStrategy, AMSBagProtocol, AMSMetricsDataSource;


#import "AMSTask.h"
#import "AMSURLSession.h"
#import "AMSPromise.h"

@interface AMSMetricsFigaroFlushTask : AMSTask <AMSMetricsFlushStrategy>



@property (readonly, nonatomic) AMSURLSession *URLSession; // ivar: _URLSession
@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (readonly, nonatomic) BOOL cancelled; // ivar: _cancelled
@property (retain, nonatomic) AMSPromise *currentCancellablePromise; // ivar: _currentCancellablePromise
@property (retain, nonatomic) NSObject<AMSMetricsDataSource> *dataSource; // ivar: _dataSource
@property (nonatomic) NSInteger maxBatchSize; // ivar: _maxBatchSize
@property (nonatomic) NSInteger maxRequestCount; // ivar: _maxRequestCount
@property (nonatomic) int requestCount; // ivar: _requestCount
@property (retain, nonatomic) NSString *topic; // ivar: _topic


-(BOOL)_shouldClearEventsDespiteError:(id)arg0 result:(id)arg1 ;
-(id)_mescalSignatureWithBodyData:(id)arg0 error:(*id)arg1 ;
-(id)_nextBatchWithConfig:(id)arg0 error:(*id)arg1 ;
-(id)_postBatch:(id)arg0 error:(*id)arg1 ;
-(id)initWithDataSource:(id)arg0 bag:(id)arg1 ;
-(id)performFlush;
-(void)cancel;


@end


#endif
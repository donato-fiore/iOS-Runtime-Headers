// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSMETRICSFLUSHOPERATION_H
#define AMSMETRICSFLUSHOPERATION_H

@protocol AMSMetricsFlushStrategy;


#import "AMSMetricsOperation.h"
#import "AMSMutablePromise.h"

@interface AMSMetricsFlushOperation : AMSMetricsOperation

@property (readonly, nonatomic) AMSMutablePromise *promise; // ivar: _promise
@property (readonly, nonatomic) NSObject<AMSMetricsFlushStrategy> *strategy; // ivar: _strategy


-(id)initWithStrategy:(id)arg0 promise:(id)arg1 ;


@end


#endif
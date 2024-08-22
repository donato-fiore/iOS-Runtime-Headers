// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSMETRICSOPERATION_H
#define AMSMETRICSOPERATION_H


#import <Foundation/Foundation.h>


@interface AMSMetricsOperation : NSObject



+(id)dropEventsOperation;
+(id)flushOperationWithStrategy:(id)arg0 promise:(id)arg1 ;
-(id)_init;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFCONCURRENTQUEUE_H
#define PFCONCURRENTQUEUE_H



#import "PFDispatchQueue.h"

@interface PFConcurrentQueue : PFDispatchQueue



+(Class)concreteQueueClass;
+(id)_newQueueWithLabel:(id)arg0 qos:(unsigned int)arg1 targetQueue:(id)arg2 ;


@end


#endif
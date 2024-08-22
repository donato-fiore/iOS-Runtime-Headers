// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWURLSESSIONDELEGATEQUEUE_H
#define NWURLSESSIONDELEGATEQUEUE_H

@class NSOperationQueue;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NWURLSessionDelegateQueue : NSObject {
    os_unfair_lock_s lock;
    NSOperationQueue *__operationQueue;
    NSObject<OS_dispatch_queue> *__dispatchQueue;
}






@end


#endif
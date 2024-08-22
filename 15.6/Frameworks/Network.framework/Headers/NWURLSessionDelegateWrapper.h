// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NWURLSESSIONDELEGATEWRAPPER_H
#define NWURLSESSIONDELEGATEWRAPPER_H

@class NSURLSession, NSOperationQueue;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NWURLSessionDelegateWrapper : NSObject {
    os_unfair_lock_s lock;
    NSURLSession *_session;
    NSObject<OS_dispatch_queue> *_workQueue;
    id *_delegate;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}






@end


#endif
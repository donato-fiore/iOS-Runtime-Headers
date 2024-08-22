// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef __CFN_GLOBALMETRICS_H
#define __CFN_GLOBALMETRICS_H

@class NSMutableDictionary;
@protocol _NSURLSessionEventDelegate, OS_dispatch_queue, _NSURLSessionHTTPRewriter;

#import <Foundation/Foundation.h>


@interface __CFN_GlobalMetrics : NSObject {
    os_unfair_lock_s lock;
    id<_NSURLSessionEventDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id<_NSURLSessionEventDelegate> *_forwardingDelegate;
    NSMutableDictionary *_defaultSessionMetrics;
    NSMutableDictionary *_ephemeralSessionMetrics;
    NSMutableDictionary *_backgroundSessionMetrics;
    id<_NSURLSessionHTTPRewriter> *_HTTPRewriter;
}




-(id)init;


@end


#endif
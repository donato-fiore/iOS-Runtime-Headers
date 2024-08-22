// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEIKEV2MOBIKECONTEXT_H
#define NEIKEV2MOBIKECONTEXT_H

@class NSString, NWEndpoint;
@protocol OS_dispatch_queue;


#import "NEIKEv2RequestContext.h"

@interface NEIKEv2MOBIKEContext : NEIKEv2RequestContext {
    BOOL _invalidateTransport;
    unsigned int _maxRetries;
    NSString *_mobikeInterface;
    NWEndpoint *_mobikeEndpoint;
    NSUInteger _retryIntervalInMilliseconds;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id *_callback;
}




-(id)description;


@end


#endif
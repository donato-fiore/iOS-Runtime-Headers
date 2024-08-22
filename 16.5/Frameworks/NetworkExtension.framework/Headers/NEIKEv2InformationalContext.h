// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEIKEV2INFORMATIONALCONTEXT_H
#define NEIKEV2INFORMATIONALCONTEXT_H

@class NSArray;
@protocol OS_dispatch_queue;


#import "NEIKEv2RequestContext.h"

@interface NEIKEv2InformationalContext : NEIKEv2RequestContext {
    unsigned int _maxRetries;
    NSArray *_privateNotifies;
    NSUInteger _retryIntervalInMilliseconds;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id *_callback;
}




-(id)description;
-(void)sendCallbackSuccess:(BOOL)arg0 session:(id)arg1 ;


@end


#endif
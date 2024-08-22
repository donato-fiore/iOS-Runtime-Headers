// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEIKEV2DELETEIKECONTEXT_H
#define NEIKEV2DELETEIKECONTEXT_H

@protocol OS_dispatch_queue;


#import "NEIKEv2RequestContext.h"

@interface NEIKEv2DeleteIKEContext : NEIKEv2RequestContext {
    BOOL _responseNeeded;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id *_callback;
}




-(id)description;
-(void)sendCallbackSuccess:(BOOL)arg0 session:(id)arg1 ;


@end


#endif
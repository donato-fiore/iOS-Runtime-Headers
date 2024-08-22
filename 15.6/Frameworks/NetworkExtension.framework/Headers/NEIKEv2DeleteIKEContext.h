// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEIKEV2DELETEIKECONTEXT_H
#define NEIKEV2DELETEIKECONTEXT_H

@protocol OS_dispatch_queue;


#import "NEIKEv2RequestContext.h"

@interface NEIKEv2DeleteIKEContext : NEIKEv2RequestContext

@property (copy, nonatomic) id *callback; // ivar: _callback
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (nonatomic) BOOL responseNeeded; // ivar: _responseNeeded


-(id)description;
-(id)initDeleteIKEWithResponse:(BOOL)arg0 callbackQueue:(id)arg1 callback:(id)arg2 ;
-(void)sendCallbackSuccess:(BOOL)arg0 session:(id)arg1 ;


@end


#endif
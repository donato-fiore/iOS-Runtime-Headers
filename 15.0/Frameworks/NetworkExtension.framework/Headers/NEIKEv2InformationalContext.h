// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEIKEV2INFORMATIONALCONTEXT_H
#define NEIKEV2INFORMATIONALCONTEXT_H

@class NSArray;
@protocol OS_dispatch_queue;


#import "NEIKEv2RequestContext.h"

@interface NEIKEv2InformationalContext : NEIKEv2RequestContext

@property (copy, nonatomic) id *callback; // ivar: _callback
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (nonatomic) unsigned int maxRetries; // ivar: _maxRetries
@property (retain, nonatomic) NSArray *privateNotifies; // ivar: _privateNotifies
@property (nonatomic) NSUInteger retryIntervalInMilliseconds; // ivar: _retryIntervalInMilliseconds


-(id)description;
-(id)initWithPrivateNotifies:(id)arg0 maxRetries:(unsigned int)arg1 retryIntervalMilliseconds:(NSUInteger)arg2 callbackQueue:(id)arg3 callback:(id)arg4 ;
-(void)sendCallbackSuccess:(BOOL)arg0 session:(id)arg1 ;


@end


#endif
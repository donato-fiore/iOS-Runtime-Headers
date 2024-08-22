// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEIKEV2MOBIKECONTEXT_H
#define NEIKEV2MOBIKECONTEXT_H

@class NWEndpoint, NSString;
@protocol OS_dispatch_queue;


#import "NEIKEv2RequestContext.h"

@interface NEIKEv2MOBIKEContext : NEIKEv2RequestContext

@property (copy, nonatomic) id *callback; // ivar: _callback
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (nonatomic) BOOL invalidateTransport; // ivar: _invalidateTransport
@property (nonatomic) unsigned int maxRetries; // ivar: _maxRetries
@property (copy, nonatomic) NWEndpoint *mobikeEndpoint; // ivar: _mobikeEndpoint
@property (copy, nonatomic) NSString *mobikeInterface; // ivar: _mobikeInterface
@property (nonatomic) NSUInteger retryIntervalInMilliseconds; // ivar: _retryIntervalInMilliseconds


-(id)description;
-(id)initWithMOBIKEInterface:(id)arg0 mobikeEndpoint:(id)arg1 invalidateTransport:(BOOL)arg2 maxRetries:(unsigned int)arg3 retryIntervalMilliseconds:(NSUInteger)arg4 callbackQueue:(id)arg5 callback:(id)arg6 ;
-(void)sendCallbackSuccess:(BOOL)arg0 session:(id)arg1 error:(id)arg2 ;


@end


#endif
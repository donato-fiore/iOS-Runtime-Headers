// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPXPCAUTOMATICERRORPROXY_H
#define FPXPCAUTOMATICERRORPROXY_H

@class Protocol, NSError, NSString;
@protocol FPXPCAutomaticErrorProxy, NSCopying, NSXPCProxyCreating;

#import <Foundation/Foundation.h>


@interface FPXPCAutomaticErrorProxy : NSObject <FPXPCAutomaticErrorProxy, NSCopying>

 {
    NSObject<NSXPCProxyCreating> *_target;
    Protocol *_protocol;
    NSError *_error;
    id *_requestWillBeginBlock;
    id *_requestDidBeginBlock;
    NSString *_name;
    id *_retainSelfWhileMessageIsPending;
    BOOL _isSynchronous;
    uint8_t _retainCounter;
}


@property (nonatomic) int requestEffectivePid; // ivar: _pid
@property (nonatomic) BOOL sanitizeErrors; // ivar: _sanitizeErrors
@property NSUInteger timeoutState; // ivar: _timeoutState


-(BOOL)conformsToProtocol:(id)arg0 ;
-(id)_requestWillBegin:(SEL)arg0 requestID:(SEL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithConnection:(id)arg0 protocol:(id)arg1 orError:(id)arg2 name:(id)arg3 requestPid:(int)arg4 ;
-(id)initWithConnection:(id)arg0 protocol:(id)arg1 orError:(id)arg2 name:(id)arg3 requestPid:(int)arg4 requestWillBegin:(id)arg5 ;
// -(id)initWithConnection:(id)arg0 protocol:(id)arg1 orError:(id)arg2 name:(id)arg3 requestPid:(int)arg4 requestWillBegin:(id)arg5 requestDidBegin:(unk)arg6  ;
// -(id)initWithRemoteObjectProxy:(id)arg0 protocol:(id)arg1 orError:(id)arg2 name:(id)arg3 requestPid:(int)arg4 requestWillBegin:(id)arg5 requestDidBegin:(unk)arg6  ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)remoteObjectProxy;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)synchronousRemoteObjectProxy;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)_requestDidBegin:(SEL)arg0 progress:(id)arg1 requestID:(id)arg2 ;
-(void)_requestDidFinish:(id)arg0 requestDidFinishBlock:(id)arg1 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif
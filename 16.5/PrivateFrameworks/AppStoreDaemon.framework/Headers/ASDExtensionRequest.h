// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDEXTENSIONREQUEST_H
#define ASDEXTENSIONREQUEST_H

@class NSUUID, NSExtension;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface ASDExtensionRequest : NSObject {
    NSObject<OS_dispatch_queue> *_runQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CGFloat _serviceTime;
    NSObject<OS_dispatch_source> *_serviceTimer;
    CGFloat _graceTime;
    NSObject<OS_dispatch_source> *_graceTimer;
    NSUUID *_requestUUID;
    id *_remoteContextInterface;
    BOOL _errorBlockCalled;
}


@property (copy, nonatomic) id *errorBlock; // ivar: _errorBlock
@property (readonly, nonatomic) NSExtension *extension; // ivar: _extension


-(id)initWithExtension:(id)arg0 queue:(id)arg1 ;
-(id)initWithExtension:(id)arg0 queue:(id)arg1 serviceTime:(CGFloat)arg2 graceTime:(CGFloat)arg3 ;
-(struct ? )beginRequestForHostContext:(Class)arg0 XPCInterface:(id)arg1 ;
-(void)beginRequestForHostContext:(Class)arg0 XPCInterface:(id)arg1 executionBlock:(id)arg2 ;
-(void)dealloc;
-(void)endRequest;
-(void)requestEnded;


@end


#endif
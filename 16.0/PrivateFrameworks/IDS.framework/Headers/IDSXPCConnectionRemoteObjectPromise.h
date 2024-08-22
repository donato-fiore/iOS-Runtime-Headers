// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSXPCCONNECTIONREMOTEOBJECTPROMISE_H
#define IDSXPCCONNECTIONREMOTEOBJECTPROMISE_H

@class NSXPCInterface, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IDSXPCConnectionRemoteObjectPromise : NSObject

@property (retain, nonatomic) NSXPCInterface *interface; // ivar: _interface
@property (retain, nonatomic) NSMutableArray *pendingInvocations; // ivar: _pendingInvocations
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) id *target; // ivar: _target


-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)initWithInterface:(id)arg0 queue:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)remoteObjectProxy;
-(void)_assertVoidReturnValueInInvocation:(id)arg0 ;
-(void)dealloc;
-(void)failWithError:(id)arg0 ;
-(void)forwardInvocation:(id)arg0 ;
-(void)fulfillWithRemoteObject:(id)arg0 ;


@end


#endif
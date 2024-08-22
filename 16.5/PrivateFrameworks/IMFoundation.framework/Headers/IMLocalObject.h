// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMLOCALOBJECT_H
#define IMLOCALOBJECT_H

@class NSArray, NSString, NSProtocolChecker;
@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface IMLocalObject : NSObject {
    id *_internal;
}


@property (retain, nonatomic) NSArray *allowlistedClasses;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) NSString *portName;
@property (retain, nonatomic) NSString *processName;
@property (readonly, nonatomic) NSProtocolChecker *protocolChecker;
@property (nonatomic) id *target;
@property (readonly, nonatomic) BOOL wasInterrupted;
@property (retain, nonatomic) NSArray *whitelistedClasses;


+(id)_imLocalObjectQueue;
+(id)_imLocalObjectQueueTargetingWorkloop;
+(id)_registeredIMLocalObjectForPort:(unsigned int)arg0 ;
+(void)_registerIMLocalObject:(id)arg0 ;
+(void)_setExceptionHandlingDisabled:(BOOL)arg0 ;
+(void)_unregisterIMLocalObject:(id)arg0 ;
+(void)initialize;
-(BOOL)_handleInvocation:(id)arg0 ;
-(BOOL)_handleInvocation:(id)arg0 processingComponentQueue:(BOOL)arg1 ;
-(BOOL)handleInvocation:(id)arg0 ;
-(BOOL)isSameConnection:(id)arg0 ;
-(BOOL)isValidSelector:(SEL)arg0 ;
-(id)_currentMessageContext;
-(id)_peekInvocation;
-(id)description;
-(id)initWithTarget:(id)arg0 connection:(id)arg1 protocol:(id)arg2 ;
-(id)initWithTarget:(id)arg0 connection:(id)arg1 protocol:(id)arg2 forceSecureCoding:(BOOL)arg3 ;
-(id)initWithTarget:(id)arg0 connection:(id)arg1 protocol:(id)arg2 forceSecureCoding:(BOOL)arg3 offMainThread:(BOOL)arg4 ;
-(id)initWithTarget:(id)arg0 portName:(id)arg1 protocol:(id)arg2 ;
-(id)initWithTarget:(id)arg0 protocol:(id)arg1 ;
-(void)_clearPort:(BOOL)arg0 ;
-(void)_clearPort:(BOOL)arg0 signalRunLoopIfNeeded:(BOOL)arg1 ;
-(void)_enqueueInvocation:(id)arg0 ;
-(void)_enqueueInvocation:(id)arg0 xpcMessage:(id)arg1 ;
-(void)_enqueueInvocation:(id)arg0 xpcMessage:(id)arg1 submitToComponentQueue:(BOOL)arg2 isSync:(BOOL)arg3 isReply:(BOOL)arg4 ;
-(void)_enqueueInvocationWithPriority:(id)arg0 priority:(int)arg1 ;
-(void)_enqueueInvocationWithPriority:(id)arg0 xpcMessage:(id)arg1 priority:(int)arg2 ;
-(void)_enqueueInvocationWithSync:(id)arg0 ;
-(void)_enqueueInvocationWithSync:(id)arg0 xpcMessage:(id)arg1 ;
-(void)_enqueueInvocationWithSync:(id)arg0 xpcMessage:(id)arg1 submitToComponentQueue:(BOOL)arg2 ;
-(void)_enqueueInvocationWithSync:(id)arg0 xpcMessage:(id)arg1 submitToComponentQueue:(BOOL)arg2 isReply:(BOOL)arg3 ;
-(void)_handleNewInvocations;
-(void)_noteNewInvocation:(BOOL)arg0 ;
-(void)_popInvocation;
-(void)_portDidBecomeInvalid;
-(void)_portInterrupted;
-(void)_systemShutdown:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)terminated;


@end


#endif
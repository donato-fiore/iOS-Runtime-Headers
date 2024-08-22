// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMREMOTEOBJECT_H
#define IMREMOTEOBJECT_H

@class NSString;
@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface IMRemoteObject : NSObject {
    id *_internal;
}


@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection;
@property (readonly, nonatomic) BOOL isValid;
@property (nonatomic) int pid;
@property (readonly, nonatomic) NSString *portName;
@property (retain, nonatomic) NSString *processName;


+(id)_remoteObjects;
+(void)_registerIMRemoteObject:(id)arg0 ;
+(void)_unregisterIMRemoteObject:(id)arg0 ;
+(void)initialize;
-(NSUInteger)forwardXPCObject:(id)arg0 messageContext:(id)arg1 locked:(BOOL)arg2 ;
-(id)_initWithConnection:(id)arg0 portName:(id)arg1 protocol:(id)arg2 alreadyConfigured:(BOOL)arg3 forceSecureCoding:(BOOL)arg4 ;
-(id)_queue;
-(id)description;
-(id)initWithConnection:(id)arg0 protocol:(id)arg1 ;
-(id)initWithConnection:(id)arg0 protocol:(id)arg1 alreadyConfigured:(BOOL)arg2 ;
-(id)initWithConnection:(id)arg0 protocol:(id)arg1 alreadyConfigured:(BOOL)arg2 forceSecureCoding:(BOOL)arg3 ;
-(id)initWithPortName:(id)arg0 protocol:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)_cleanupMachBitsCanPost:(BOOL)arg0 locked:(BOOL)arg1 ;
-(void)_portDidBecomeInvalid;
-(void)_systemShutdown:(id)arg0 ;
-(void)blockUntilSendQueueIsEmpty;
-(void)dealloc;
-(void)forwardInvocation:(id)arg0 ;
-(void)invalidate;


@end


#endif
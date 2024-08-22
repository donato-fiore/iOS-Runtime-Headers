// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCXPCCONNECTION_H
#define VCXPCCONNECTION_H

@class NSString, NSData;
@protocol OS_xpc_object, OS_os_transaction, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VCXPCConnection : NSObject {
    NSObject<OS_xpc_object> *_connection;
    int _pid;
    NSObject<OS_os_transaction> *_transaction;
    BOOL _isPersistent;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSObject<OS_dispatch_queue> *_timeoutTimerQueue;
    *OpaqueFigCFWeakReferenceHolder _timeoutTimerContext;
    BOOL _timeoutTimerStarted;
}


@property (retain, nonatomic) NSObject<OS_xpc_object> *connection;
@property (retain, nonatomic) id *context; // ivar: context
@property (retain, nonatomic) NSString *lastCalledApiName; // ivar: _lastCalledApiName
@property (getter=isPersistent) BOOL persistent;
@property int pid;
@property (retain, nonatomic) NSData *tokenData; // ivar: tokenData


+(void)selfTerminateDueToTimeout:(id)arg0 ;
-(id)description;
-(id)init;
-(void)createTimeoutTimer;
-(void)dealloc;
-(void)destroyTimeoutTimer;
-(void)startTimeoutTimer;
-(void)stopTimeoutTimer;


@end


#endif
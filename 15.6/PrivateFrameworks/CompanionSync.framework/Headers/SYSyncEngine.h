// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SYSYNCENGINE_H
#define SYSYNCENGINE_H

@class NSString, PBCodable;
@protocol SYStateLoggable, SYSyncEngineResponder, OS_os_transaction, OS_dispatch_queue, OS_os_activity;

#import <Foundation/Foundation.h>

#import "SYService.h"

@interface SYSyncEngine : NSObject <SYStateLoggable>

 {
    id<SYSyncEngineResponder> *_responder;
    NSObject<OS_os_transaction> *_transaction;
}


@property (readonly, nonatomic) BOOL buffersHandshake;
@property (readonly, nonatomic) BOOL buffersSessions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isInSession;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (weak, nonatomic) NSObject<SYSyncEngineResponder> *responder;
@property (readonly, weak, nonatomic) SYService *service; // ivar: _service
@property (readonly, nonatomic) PBCodable *stateForLogging;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL targetConnected;
@property (readonly, nonatomic) BOOL targetIsNearby;
@property (readonly, nonatomic) NSObject<OS_os_activity> *transportActivity; // ivar: _transportActivity


-(BOOL)resume:(*id)arg0 ;
-(id)cancelMessagesReturningFailures:(id)arg0 ;
-(id)initWithService:(id)arg0 queue:(id)arg1 ;
-(id)outputStreamWithMetadata:(id)arg0 priority:(NSInteger)arg1 options:(id)arg2 context:(id)arg3 error:(*id)arg4 ;
-(void)beginSession;
-(void)dealloc;
-(void)endSession;
-(void)enqueueSyncRequest:(id)arg0 withMessageID:(unsigned short)arg1 priority:(NSInteger)arg2 options:(id)arg3 userContext:(id)arg4 callback:(id)arg5 ;
-(void)suspend;


@end


#endif
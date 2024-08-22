// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFKENDPOINTINTERFACE_H
#define AFKENDPOINTINTERFACE_H

@class NSMutableDictionary, NSSet;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_mach;

#import <Foundation/Foundation.h>


@interface AFKEndpointInterface : NSObject {
    unsigned int _service;
    unsigned int _connect;
    NSObject<OS_dispatch_queue> *_queue;
    *IONotificationPort _asyncPort;
    NSObject<OS_dispatch_source> *_source;
    unsigned int _state;
    NSMutableDictionary *_properties;
    id *_responseHandler;
    id *_reportHandler;
    id *_commandHandlerWithReturn;
    id *_commandHandler;
    id *_descriptorHandler;
    id *_eventHandler;
    *_IODataQueueMemory _dataQueue;
    NSUInteger _dataQueueSize;
    unsigned int _dataQueuePort;
    NSObject<OS_dispatch_mach> *_dataQueueMachChannel;
    NSSet *_descriptorManagers;
}


@property (readonly, nonatomic) NSUInteger regID; // ivar: _regID


+(id)withService:(unsigned int)arg0 ;
+(id)withService:(unsigned int)arg0 properties:(id)arg1 ;
-(id)initWithService:(unsigned int)arg0 ;
-(int)enqueueCommand:(unsigned int)arg0 inputBuffer:(*void)arg1 inputBufferSize:(NSUInteger)arg2 outputPayloadSize:(NSUInteger)arg3 context:(*void)arg4 options:(unsigned int)arg5 ;
-(int)enqueueCommand:(unsigned int)arg0 timestamp:(NSUInteger)arg1 inputBuffer:(*void)arg2 inputBufferSize:(NSUInteger)arg3 outputPayloadSize:(NSUInteger)arg4 context:(*void)arg5 options:(unsigned int)arg6 ;
-(int)enqueueCommandSync:(unsigned int)arg0 timestamp:(NSUInteger)arg1 inputBuffer:(*void)arg2 inputBufferSize:(NSUInteger)arg3 responseTimestamp:(*NSUInteger)arg4 outputBuffer:(*void)arg5 inOutBufferSize:(*NSUInteger)arg6 options:(unsigned int)arg7 ;
-(int)enqueueDescriptor:(id)arg0 packetType:(unsigned int)arg1 timestamp:(NSUInteger)arg2 options:(unsigned int)arg3 ;
-(int)enqueueReport:(unsigned int)arg0 inputBuffer:(*void)arg1 inputBufferSize:(NSUInteger)arg2 options:(unsigned int)arg3 ;
-(int)enqueueReport:(unsigned int)arg0 timestamp:(NSUInteger)arg1 inputBuffer:(*void)arg2 inputBufferSize:(NSUInteger)arg3 options:(unsigned int)arg4 ;
-(int)enqueueResponseForContext:(*void)arg0 status:(int)arg1 outputBuffer:(*void)arg2 outputBufferSize:(NSUInteger)arg3 options:(unsigned int)arg4 ;
-(int)enqueueResponseForContext:(*void)arg0 status:(int)arg1 timestamp:(NSUInteger)arg2 outputBuffer:(*void)arg3 outputBufferSize:(NSUInteger)arg4 options:(unsigned int)arg5 ;
-(int)startSession:(BOOL)arg0 ;
-(void)_cancel;
-(void)activate;
-(void)activate:(unsigned int)arg0 ;
-(void)asyncCallback:(struct AsyncContext *)arg0 result:(int)arg1 timestamp:(NSUInteger)arg2 bufferSize:(NSUInteger)arg3 ;
-(void)cancel;
-(void)dealloc;
-(void)dequeueDataMessage;
-(void)setCommandHandler:(id)arg0 ;
-(void)setCommandHandlerWithReturn:(id)arg0 ;
-(void)setDescriptorHandler:(id)arg0 ;
-(void)setDescriptorManagers:(id)arg0 ;
-(void)setDispatchQueue:(id)arg0 ;
-(void)setEventHandler:(id)arg0 ;
-(void)setReportHandler:(id)arg0 ;
-(void)setResponseHandler:(id)arg0 ;


@end


#endif
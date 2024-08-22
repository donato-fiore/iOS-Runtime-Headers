// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSPROXYCONNECTIONSTREAMTASK_H
#define NSPROXYCONNECTIONSTREAMTASK_H

@class NSString, NSInputStream, NSOutputStream;
@protocol NSStreamDelegate, NSURLSessionStreamDelegate, OS_dispatch_queue;


#import "NSProxyConnection.h"
#import "NSURLSessionStreamTask.h"

@interface NSProxyConnectionStreamTask : NSProxyConnection <NSStreamDelegate, NSURLSessionStreamDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isConnected;
    NSString *_host;
    int _port;
    BOOL _dataAvailableForReading;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    NSURLSessionStreamTask *_streamTask;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithHost:(id)arg0 port:(unsigned short)arg1 queue:(id)arg2 configuration:(id)arg3 ;
-(void)URLSession:(id)arg0 streamTask:(id)arg1 didBecomeInputStream:(id)arg2 outputStream:(id)arg3 ;
-(void)cancel;
-(void)dealloc;
-(void)read:(NSUInteger)arg0 handler:(id)arg1 ;
-(void)stream:(id)arg0 handleEvent:(NSUInteger)arg1 ;
-(void)write:(id)arg0 handler:(id)arg1 ;


@end


#endif
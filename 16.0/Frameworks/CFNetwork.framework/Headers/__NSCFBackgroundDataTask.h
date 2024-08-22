// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef __NSCFBACKGROUNDDATATASK_H
#define __NSCFBACKGROUNDDATATASK_H

@class NSCFBackgroundSessionTask, NSInputStream, NSFileHandle, NSString;
@protocol NSStreamDelegate, OS_dispatch_queue, OS_dispatch_io, OS_dispatch_semaphore;



@interface __NSCFBackgroundDataTask : NSCFBackgroundSessionTask <NSStreamDelegate>

 {
    NSInputStream *_requestBodyStream;
    NSInputStream *_initialStream;
    NSObject<OS_dispatch_queue> *_writeQueue;
    NSFileHandle *_readHandle;
    NSObject<OS_dispatch_io> *_pipeIO;
    NSUInteger _bytesRead;
    NSObject<OS_dispatch_semaphore> *_streamOpenedSema;
    BOOL _finishedOpen;
    BOOL _openedStreamDuringNeedNewBodyStream;
    BOOL _streamBased;
    id *_streamWriteCompletion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isKindOfClass:(Class)arg0 ;
-(id)initWithOriginalRequest:(id)arg0 ident:(NSUInteger)arg1 taskGroup:(id)arg2 ;
-(void)_onqueue_didFinishWithError:(id)arg0 ;
-(void)_onqueue_willSendRequestForEstablishedConnection:(id)arg0 withCompletion:(id)arg1 ;
-(void)dealloc;
-(void)stream:(id)arg0 handleEvent:(NSUInteger)arg1 ;


@end


#endif
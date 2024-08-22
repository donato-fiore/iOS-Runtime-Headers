// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef __NSCFBACKGROUNDDATATASK_H
#define __NSCFBACKGROUNDDATATASK_H

@class NSCFBackgroundSessionTask, NSInputStream, NSFileHandle;
@protocol OS_dispatch_io;



@interface __NSCFBackgroundDataTask : NSCFBackgroundSessionTask {
    shared_ptr<RequestBody> _requestBody;
    NSInputStream *_requestBodyStream;
    NSInputStream *_initialStream;
    NSFileHandle *_readHandle;
    NSObject<OS_dispatch_io> *_pipeIO;
    NSUInteger _numberOfOngoingWrites;
    BOOL _openedStreamDuringNeedNewBodyStream;
    BOOL _readingRequestBody;
}




-(BOOL)isKindOfClass:(Class)arg0 ;
-(id)initWithOriginalRequest:(id)arg0 ident:(NSUInteger)arg1 taskGroup:(id)arg2 ;
-(void)_onqueue_didFinishWithError:(id)arg0 ;
-(void)_onqueue_willSendRequestForEstablishedConnection:(id)arg0 withCompletion:(id)arg1 ;
-(void)dealloc;


@end


#endif
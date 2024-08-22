// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAP2COAPIOTHREAD_H
#define HAP2COAPIOTHREAD_H

@class NSThread, NSMutableArray;
@protocol HAP2CoAPIOThreadDelegate;


#import "HAP2Lock.h"

@interface HAP2CoAPIOThread : NSThread {
    int _wakeupPipeRead;
    int _wakeupPipeWrite;
    NSMutableArray *_queue;
    NSMutableArray *_consumerInfo;
    HAP2Lock *_lock;
    id<HAP2CoAPIOThreadDelegate> *_delegate;
}




-(?)_cleanupWithContext;
-(?)_createContext;
-(?)_processQueueEntrycontext;
-(?)_processQueueWithContext;
-(?)_processSessionBlock:(?)arg0 consumercontext;
-(?)_registerConsumercontext;
-(id)init;
-(id)initWithQualityOfService:(NSInteger)arg0 delegate:(id)arg1 ;
-(void)_assertIsCurrentThread;
-(void)_enqueue:(id)arg0 ;
-(void)_unregisterConsumer:(id)arg0 ;
-(void)_wakeUpThread;
-(void)cancel;
-(void)dealloc;
-(void)main;
-(void)queueSessionBlockForConsumer:(id)arg0 sessionBlock:(id)arg1 ;
-(void)registerConsumer:(id)arg0 ;
-(void)unregisterConsumer:(id)arg0 ;


@end


#endif
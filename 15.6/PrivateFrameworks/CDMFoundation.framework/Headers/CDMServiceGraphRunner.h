// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDMSERVICEGRAPHRUNNER_H
#define CDMSERVICEGRAPHRUNNER_H

@class NSOperationQueue, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CDMServiceGraphRunner : NSObject {
    NSOperationQueue *_queue;
    NSMutableDictionary *_callbackMap;
    NSMutableDictionary *_operationMap;
    NSMutableDictionary *_handlerMap;
}




-(id)getOperationState:(id)arg0 ;
-(id)getServiceGraphNodeQueue;
-(id)init;
-(id)initWithMaxConcurrentCount:(int)arg0 ;
-(void)cancelAllHandlers;
-(void)cancelHandler:(id)arg0 ;
-(void)cancelHandlerById:(id)arg0 ;
-(void)cancelHandlerById:(id)arg0 causeByError:(BOOL)arg1 ;
-(void)dealloc;
-(void)dumpServiceGraphNodeQueue;
-(void)finishHandlerById:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)resume;
-(void)runHandlerAsync:(id)arg0 withCompletion:(id)arg1 ;
-(void)runHandlerSync:(id)arg0 ;
-(void)suspend;
-(void)waitAll;


@end


#endif
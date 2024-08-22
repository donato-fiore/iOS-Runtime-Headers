// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVSTREAMMANAGER_H
#define CKVSTREAMMANAGER_H

@protocol OS_dispatch_semaphore, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CKVConcurrentQueue.h"

@interface CKVStreamManager : NSObject {
    CKVConcurrentQueue *_streamQueue;
    NSObject<OS_dispatch_semaphore> *_resourceSema;
    NSObject<OS_dispatch_semaphore> *_producerSignalSema;
    NSObject<OS_dispatch_semaphore> *_bufferLimitSema;
    CGFloat _openTimeout;
    CGFloat _initialConsumeTimeout;
    CGFloat _subsequentConsumeTimeout;
    CGFloat _produceTimeout;
    NSObject<OS_dispatch_queue> *_queue;
}


@property BOOL abort; // ivar: _abort
@property BOOL isOpen; // ivar: _isOpen


+(id)sharedInstance;
-(BOOL)produceStream:(id)arg0 ;
-(NSInteger)consumeStreamWithBlock:(id)arg0 ;
-(id)init;
-(id)initWithOpenTimeout:(CGFloat)arg0 initialConsumeTimeout:(CGFloat)arg1 subsequentConsumeTimeout:(CGFloat)arg2 produceTimeout:(CGFloat)arg3 bufferLimit:(NSInteger)arg4 ;
-(void)closeStream;
-(void)openStream:(id)arg0 ;


@end


#endif
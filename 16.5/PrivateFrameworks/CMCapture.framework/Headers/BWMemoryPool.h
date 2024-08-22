// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWMEMORYPOOL_H
#define BWMEMORYPOOL_H

@class IOSurfaceMemoryPool;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BWMemoryPool : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    IOSurfaceMemoryPool *_pool;
    unsigned int _flushAssertionCount;
    os_unfair_lock_s _flushAssertionLock;
}


@property (readonly, nonatomic) NSUInteger poolIdentifier;


+(id)sharedMemoryPool;
+(void)initialize;
-(BOOL)getInUseFootprint:(*NSUInteger)arg0 andOutOfUseFootprint:(*NSUInteger)arg1 ;
-(id)init;
-(id)newFlushAssertion:(id)arg0 ;
-(id)newMTLBufferWithLength:(NSUInteger)arg0 forDevice:(id)arg1 ;
-(int)disableForCaptureDevice:(id)arg0 ;
-(int)disableForCaptureStream:(id)arg0 ;
-(int)enableForCaptureDevice:(id)arg0 ;
-(int)enableForCaptureStream:(id)arg0 ;
-(void)_addFlushAssertion;
-(void)_removeFlushAssertion;
-(void)dealloc;
-(void)disable;
-(void)disableWithCompletionHandler:(id)arg0 ;
-(void)enableForPixelBufferAttributes:(id)arg0 ;
-(void)ensureMemoryAsyncWithSize:(NSUInteger)arg0 ;
-(void)flush;


@end


#endif
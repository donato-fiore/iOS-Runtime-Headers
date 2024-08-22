// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWDEFERREDCONTAINERPIXELBUFFERPOOLWRAPPER_H
#define BWDEFERREDCONTAINERPIXELBUFFERPOOLWRAPPER_H

@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "BWPixelBufferPool.h"

@interface BWDeferredContainerPixelBufferPoolWrapper : NSObject {
    BWPixelBufferPool *_pool;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}




-(id)initWithVideoFormat:(id)arg0 capacity:(NSUInteger)arg1 name:(id)arg2 ;
-(void)dealloc;
-(void)flushToMinimumCapacity:(NSUInteger)arg0 ;
-(void)signal;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MTLIOSCRATCHBUFFERALLOCATOR_H
#define _MTLIOSCRATCHBUFFERALLOCATOR_H

@class NSString;
@protocol MTLIOScratchBufferAllocator, MTLDevice;

#import <Foundation/Foundation.h>


@interface _MTLIOScratchBufferAllocator : NSObject <MTLIOScratchBufferAllocator>

 {
    NSUInteger _currentSize;
    _opaque_pthread_mutex_t _pool_lock;
    id<MTLDevice> *_device;
    ? activeq;
    ? poolq;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDevice:(id)arg0 ;
-(id)newScratchBufferWithMinimumSize:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)returnActiveScratchBuffersToPool;
-(void)returnPriv:(struct MTLIOScratchBufferPrivate *)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCNMTLBUFFERALLOCATOR_H
#define SCNMTLBUFFERALLOCATOR_H

@class NSString, NSMutableArray;
@protocol MTLDevice;

#import <Foundation/Foundation.h>

#import "SCNFixedSizePage.h"

@interface SCNMTLBufferAllocator : NSObject {
    id<MTLDevice> *_device;
    NSString *_name;
    NSMutableArray *_pages;
    SCNFixedSizePage *_currentAllocatorPage;
    os_unfair_lock_s _allocatorLock;
}


@property (readonly, nonatomic) NSUInteger bufferSize; // ivar: _bufferSize
@property (readonly, nonatomic) NSUInteger elementSize; // ivar: _elementSize


-(id)_newSubBuffer;
-(id)initWithDevice:(id)arg0 fixedSizeElement:(NSUInteger)arg1 buffersize:(NSUInteger)arg2 name:(id)arg3 ;
-(id)newSubBufferWithBytes:(*void)arg0 length:(NSUInteger)arg1 renderContext:(id)arg2 ;
-(void)dealloc;


@end


#endif
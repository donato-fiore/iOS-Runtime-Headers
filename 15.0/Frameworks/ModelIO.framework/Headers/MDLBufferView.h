// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MDLBUFFERVIEW_H
#define MDLBUFFERVIEW_H


#import <Foundation/Foundation.h>

#import "MDLBufferViewAllocator.h"

@interface MDLBufferView : NSObject {
    *void _data;
    NSUInteger _length;
    NSUInteger _offset;
    NSInteger _regionIndex;
    MDLBufferViewAllocator *_allocator;
    BOOL _writable;
}


@property (readonly, nonatomic) *void data;
@property (readonly, nonatomic) NSUInteger length;


-(id)initWithBytesNoCopy:(*void)arg0 length:(NSUInteger)arg1 offset:(NSUInteger)arg2 regionIndex:(NSInteger)arg3 allocator:(id)arg4 ;


@end


#endif
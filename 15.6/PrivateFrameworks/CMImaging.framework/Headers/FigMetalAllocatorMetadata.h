// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGMETALALLOCATORMETADATA_H
#define FIGMETALALLOCATORMETADATA_H


#import <Foundation/Foundation.h>

#import "FigMetalAllocator.h"

@interface FigMetalAllocatorMetadata : NSObject {
    int _refCount;
    NSUInteger _size;
    FigMetalAllocator *_allocator;
}




-(id)initWithFigMetalAllocator:(id)arg0 ;


@end


#endif
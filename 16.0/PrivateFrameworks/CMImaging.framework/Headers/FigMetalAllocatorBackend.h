// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGMETALALLOCATORBACKEND_H
#define FIGMETALALLOCATORBACKEND_H

@class NSString;
@protocol FigMetalAllocatorImpl;

#import <Foundation/Foundation.h>

#import "FigMetalUtils.h"

@interface FigMetalAllocatorBackend : NSObject {
    id<FigMetalAllocatorImpl> *_storage;
    MTLRangeAllocator _rangeAllocator;
    FigMetalUtils *_utils;
    BOOL _isExternalMemory;
    NSString *_label;
}


@property (readonly, nonatomic) int allocatorType; // ivar: _allocatorType
@property (readonly, nonatomic) NSUInteger largestOccupiedOffset; // ivar: _largestOccupiedOffset
@property (readonly, nonatomic) NSUInteger maxContiguousFreeSize;
@property (readonly, nonatomic) NSUInteger memSize; // ivar: _memSize
@property (readonly, nonatomic) NSUInteger resourceOptions; // ivar: _resourceOptions
@property (readonly, nonatomic) NSUInteger usedSize; // ivar: usedSize


-(BOOL)hasCreatedResource:(id)arg0 ;
-(id)description;
-(id)initWithDevice:(id)arg0 allocatorType:(int)arg1 ;
-(id)newBufferWithDescriptor:(id)arg0 sizeAlign:(struct ? *)arg1 ;
-(id)newTextureWithDescriptor:(id)arg0 sizeAlign:(struct ? *)arg1 ;
-(int)setupWithDescriptor:(id)arg0 ;
-(int)setupWithDescriptor:(id)arg0 allocatorBackend:(id)arg1 ;
-(struct ? )getSizeAndAlignForBufferDescriptor:(id)arg0 ;
-(struct ? )getSizeAndAlignForDescriptor:(id)arg0 ;
-(void)dealloc;
-(void)makeBufferAliasable:(*id)arg0 ;
-(void)makeTextureAliasable:(*id)arg0 ;
-(void)purgeResources;
-(void)reset;


@end


#endif
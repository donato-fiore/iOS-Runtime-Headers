// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGMETALALLOCATOR_H
#define FIGMETALALLOCATOR_H

@class NSString;
@protocol FigMetalAllocatorImpl;

#import <Foundation/Foundation.h>

#import "FigMetalUtils.h"
#import "FigMetalTextureDescriptor.h"
#import "FigMetalBufferDescriptor.h"

@interface FigMetalAllocator : NSObject {
    id<FigMetalAllocatorImpl> *_storage;
    MTLRangeAllocator _rangeAllocator;
    FigMetalUtils *_utils;
    FigMetalTextureDescriptor *_texDesc;
    FigMetalBufferDescriptor *_bufDesc;
    BOOL _isExternalMemory;
    FigMetalAllocator" subAllocator;
    BOOL _allowFallBack;
    NSString *_label;
}


@property (readonly, nonatomic) int allocatorType; // ivar: _allocatorType
@property (readonly, nonatomic) int compressionLevel; // ivar: _compressionLevel
@property (readonly, nonatomic) NSUInteger largestOccupiedOffset; // ivar: _largestOccupiedOffset
@property (readonly, nonatomic) NSUInteger maxContiguousFreeSize;
@property (readonly, nonatomic) NSUInteger memSize; // ivar: _memSize
@property (readonly, nonatomic) NSUInteger resourceOptions; // ivar: _resourceOptions
@property (readonly, nonatomic) NSUInteger usedSize; // ivar: usedSize


-(NSUInteger)largestOccupiedOffset:(unsigned int)arg0 ;
-(NSUInteger)memSize:(unsigned int)arg0 ;
-(NSUInteger)usedSize:(unsigned int)arg0 ;
-(id)description;
-(id)initWithDevice:(id)arg0 allocatorType:(int)arg1 ;
-(id)newBufferDescriptor;
-(id)newBufferDescriptor:(unsigned int)arg0 ;
-(id)newBufferWithDescriptor:(id)arg0 ;
-(id)newBufferWithDescriptor:(id)arg0 subAllocatorID:(unsigned int)arg1 ;
-(id)newTextureDescriptor;
-(id)newTextureDescriptor:(unsigned int)arg0 ;
-(id)newTextureWithDescriptor:(id)arg0 ;
-(id)newTextureWithDescriptor:(id)arg0 subAllocatorID:(unsigned int)arg1 ;
-(int)addExternalMetalBuffer:(id)arg0 atSubAllocatorID:(unsigned int)arg1 ;
-(int)setupWithDescriptor:(id)arg0 ;
-(struct ? )getSizeAndAlignForBufferDescriptor:(id)arg0 ;
-(struct ? )getSizeAndAlignForDescriptor:(id)arg0 ;
-(void)dealloc;
-(void)makeBufferAliasable:(*id)arg0 ;
-(void)makeTextureAliasable:(*id)arg0 ;
-(void)purgeResources;
-(void)purgeResources:(unsigned int)arg0 ;
-(void)reset;
-(void)reset:(unsigned int)arg0 ;


@end


#endif
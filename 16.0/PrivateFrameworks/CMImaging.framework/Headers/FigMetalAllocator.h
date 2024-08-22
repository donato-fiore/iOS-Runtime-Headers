// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGMETALALLOCATOR_H
#define FIGMETALALLOCATOR_H

@class NSMutableSet, NSString;

#import <Foundation/Foundation.h>

#import "FigMetalUtils.h"
#import "FigMetalTextureDescriptor.h"
#import "FigMetalBufferDescriptor.h"
#import "FigMetalAllocatorBackend.h"

@interface FigMetalAllocator : NSObject {
    FigMetalUtils *_utils;
    FigMetalTextureDescriptor *_texDesc;
    FigMetalBufferDescriptor *_bufDesc;
    BOOL _isExternalMemory;
    NSMutableSet *_currentResources;
    FigMetalAllocator" subAllocator;
    BOOL _forceDisableCompression;
    BOOL _allowFallBack;
    NSString *_label;
    BOOL _autoUseSubAllocators;
    float _texSizeRatioThreshold;
}


@property (readonly, nonatomic) int allocatorType; // ivar: _allocatorType
@property (readonly, nonatomic) FigMetalAllocatorBackend *backendAllocator; // ivar: _backendAllocator
@property (readonly, nonatomic) int compressionLevel; // ivar: _compressionLevel
@property (nonatomic) BOOL forceDisableCompression;
@property (readonly, nonatomic) NSUInteger largestOccupiedOffset;
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
-(int)setupWithDescriptor:(id)arg0 allocatorBackend:(id)arg1 ;
-(struct ? )getSizeAndAlignForBufferDescriptor:(id)arg0 ;
-(struct ? )getSizeAndAlignForDescriptor:(id)arg0 ;
-(void)dealloc;
-(void)makeBufferAliasable:(*id)arg0 ;
-(void)makeTextureAliasable:(*id)arg0 ;
-(void)purgeAllSubAllocatorsResources;
-(void)purgeResources;
-(void)purgeResources:(unsigned int)arg0 ;
-(void)reset;
-(void)reset:(unsigned int)arg0 ;


@end


#endif
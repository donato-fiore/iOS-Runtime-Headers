// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGMETALHEAPALLOCATOR_H
#define FIGMETALHEAPALLOCATOR_H

@protocol FigMetalAllocatorImpl, MTLHeap;

#import <Foundation/Foundation.h>

#import "FigMetalUtils.h"

@interface FigMetalHeapAllocator : NSObject <FigMetalAllocatorImpl>

 {
    id<MTLHeap> *_heap;
}


@property (readonly, nonatomic) NSUInteger alignment; // ivar: _alignment
@property (readonly, nonatomic) NSUInteger memSize; // ivar: _memSize
@property (readonly, nonatomic) FigMetalUtils *utils; // ivar: _utils


-(BOOL)hasCreatedBuffer:(id)arg0 ;
-(BOOL)hasCreatedTexture:(id)arg0 ;
-(NSUInteger)bufferOffset:(id)arg0 ;
-(NSUInteger)textureOffset:(id)arg0 ;
-(id)description;
-(id)initWithMetalUtils:(id)arg0 ;
-(id)newBufferWithDescriptor:(id)arg0 offset:(NSUInteger)arg1 ;
-(id)newTextureWithDescriptor:(id)arg0 offset:(NSUInteger)arg1 ;
-(int)setupWithDescriptor:(id)arg0 ;
-(struct ? )getSizeAndAlignForBufferDescriptor:(id)arg0 ;
-(struct ? )getSizeAndAlignForDescriptor:(id)arg0 ;
-(void)purgeResources;


@end


#endif
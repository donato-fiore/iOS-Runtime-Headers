// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSTEMPORARYNDARRAY_H
#define MPSTEMPORARYNDARRAY_H

@protocol MTLCommandBuffer;


#import "MPSNDArray.h"

@interface MPSTemporaryNDArray : MPSNDArray {
    id<MTLCommandBuffer> *_commandBuffer;
    NSUInteger _childRefCount;
}


@property (nonatomic) NSUInteger readCount; // ivar: _readCount


+(id)defaultAllocator;
+(id)temporaryNDArrayWithCommandBuffer:(id)arg0 descriptor:(id)arg1 ;
-(id)debugDescription;
-(id)initWithCommandBuffer:(id)arg0 descriptor:(id)arg1 ;
-(id)initWithCommandBuffer:(id)arg0 descriptor:(id)arg1 buffer:(id)arg2 ;
-(id)temporaryArrayViewWithCommandBuffer:(id)arg0 computeEncoder:(id)arg1 descriptor:(id)arg2 aliasing:(NSUInteger)arg3 ;
-(id)temporaryArrayViewWithCommandBuffer:(id)arg0 descriptor:(id)arg1 aliasing:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)synchronizeOnCommandBuffer:(id)arg0 ;


@end


#endif
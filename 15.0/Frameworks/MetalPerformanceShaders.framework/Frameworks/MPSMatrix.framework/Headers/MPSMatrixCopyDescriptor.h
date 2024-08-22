// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSMATRIXCOPYDESCRIPTOR_H
#define MPSMATRIXCOPYDESCRIPTOR_H

@class MPSVector;

#import <Foundation/Foundation.h>


@interface MPSMatrixCopyDescriptor : NSObject {
    *id _sourceMatrices;
    *id _destinationMatrices;
    *? _cpuOffsetsVector;
    MPSVector *_gpuOffsetsVector;
    NSUInteger _gpuBufferOffset;
    NSUInteger _allocCount;
    NSUInteger _filledCount;
}




+(id)descriptorWithSourceMatrix:(id)arg0 destinationMatrix:(id)arg1 offsets:(struct ? )arg2 ;
-(*id)destinationMatrices;
-(*id)sourceMatrices;
-(NSUInteger)allocCount;
-(NSUInteger)filledCount;
-(NSUInteger)gpuBufferOffset;
-(id)gpuOffsetsVector;
-(id)initWithDevice:(id)arg0 count:(NSUInteger)arg1 ;
-(id)initWithSourceMatrices:(id)arg0 destinationMatrices:(id)arg1 offsetVector:(id)arg2 offset:(NSUInteger)arg3 ;
-(struct ? *)cpuOffsetsVector;
-(void)dealloc;
-(void)setCopyOperationAtIndex:(NSUInteger)arg0 sourceMatrix:(id)arg1 destinationMatrix:(id)arg2 offsets:(struct ? )arg3 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSPARALLELRANDOM_H
#define MPSPARALLELRANDOM_H



#import "MPSKernel.h"

@interface MPSParallelRandom : MPSKernel {
    int _generatorType;
}


@property (readonly, nonatomic) unsigned int destinationDataType; // ivar: _destinationDataType
@property (nonatomic) NSUInteger distributionType; // ivar: _distributionType


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 destinationDataType:(unsigned int)arg1 generatorType:(int)arg2 distributionDescriptor:(id)arg3 ;
-(void)encodeToCommandBuffer:(id)arg0 computeEncoder:(id)arg1 destinationBuffer:(id)arg2 destinationOffset:(NSUInteger)arg3 numEntries:(NSUInteger)arg4 ;
-(void)encodeToCommandBuffer:(id)arg0 computeEncoder:(id)arg1 destinationBuffer:(id)arg2 destinationOffset:(NSUInteger)arg3 numEntries:(NSUInteger)arg4 stride:(unsigned int)arg5 ;
-(void)encodeToCommandBuffer:(id)arg0 destinationBuffer:(id)arg1 destinationOffset:(NSUInteger)arg2 numEntries:(NSUInteger)arg3 ;
-(void)encodeToCommandBuffer:(id)arg0 destinationBuffer:(id)arg1 destinationOffset:(NSUInteger)arg2 numEntries:(NSUInteger)arg3 stride:(unsigned int)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
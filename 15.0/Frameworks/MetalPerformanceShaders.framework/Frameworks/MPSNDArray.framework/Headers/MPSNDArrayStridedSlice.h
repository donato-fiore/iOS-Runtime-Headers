// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSNDARRAYSTRIDEDSLICE_H
#define MPSNDARRAYSTRIDEDSLICE_H



#import "MPSNDArrayUnaryKernel.h"

@interface MPSNDArrayStridedSlice : MPSNDArrayUnaryKernel

@property (nonatomic) ? strides; // ivar: _strides


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(NSUInteger)kernelDimensionalityForSourceArrays:(id)arg0 ;
-(id)destinationArrayDescriptorForSourceArrays:(id)arg0 sourceState:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)stridesAtSourceIndex;


@end


#endif
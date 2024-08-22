// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSNDARRAYPADKERNEL_H
#define MPSNDARRAYPADKERNEL_H

@class NSNumber;


#import "MPSNDArrayUnaryKernel.h"

@interface MPSNDArrayPadKernel : MPSNDArrayUnaryKernel

@property (readonly, nonatomic) NSNumber *constantValue; // ivar: _constantValue
@property (readonly, nonatomic) NSUInteger edgeMode; // ivar: _edgeMode
@property (readonly, nonatomic) MPSNDArrayPaddingSize paddingSize; // ivar: _paddingSize


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(NSUInteger)kernelDimensionalityForSourceArrays:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)destinationArrayDescriptorForSourceArrays:(id)arg0 sourceState:(id)arg1 ;
-(id)dimensionsNotToBeBroadcast;
-(id)dimensionsToBeRetained;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 edgeMode:(NSUInteger)arg1 constantValue:(id)arg2 paddingSize:(struct MPSNDArrayPaddingSize )arg3 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
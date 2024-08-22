// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSNDARRAYTOPKMULTIDESTINATION_H
#define MPSNDARRAYTOPKMULTIDESTINATION_H



#import "MPSNDArrayMultiaryMultiDestinationKernel.h"

@interface MPSNDArrayTopKMultiDestination : MPSNDArrayMultiaryMultiDestinationKernel

@property (nonatomic) NSUInteger K; // ivar: _K
@property (readonly, nonatomic) BOOL computeGradient; // ivar: _computeGradient


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(BOOL)supportsGradientForSourceIndex:(NSUInteger)arg0 ;
-(NSUInteger)kernelDimensionalityForSourceArrays:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)destinationArrayDescriptorsForSourceArrays:(id)arg0 sourceState:(id)arg1 ;
-(id)dimensionsNotToBeBroadcast;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 K:(NSUInteger)arg1 ;
-(id)initWithDevice:(id)arg0 K:(NSUInteger)arg1 computeGradient:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
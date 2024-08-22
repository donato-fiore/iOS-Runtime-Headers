// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSNDARRAYTOPK_H
#define MPSNDARRAYTOPK_H



#import "MPSNDArrayUnaryKernel.h"

@interface MPSNDArrayTopK : MPSNDArrayUnaryKernel

@property (nonatomic) NSUInteger K; // ivar: _K
@property (nonatomic) BOOL findIndices; // ivar: _findIndices


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(NSUInteger)kernelDimensionalityForSourceArrays:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)destinationArrayDescriptorForSourceArrays:(id)arg0 sourceState:(id)arg1 ;
-(id)dimensionsNotToBeBroadcast;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 K:(NSUInteger)arg1 ;
-(id)initWithDevice:(id)arg0 K:(NSUInteger)arg1 findIndices:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
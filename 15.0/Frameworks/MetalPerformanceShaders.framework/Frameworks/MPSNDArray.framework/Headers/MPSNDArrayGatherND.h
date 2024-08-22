// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSNDARRAYGATHERND_H
#define MPSNDARRAYGATHERND_H



#import "MPSNDArrayBinaryKernel.h"

@interface MPSNDArrayGatherND : MPSNDArrayBinaryKernel

@property (nonatomic) NSUInteger batchDimensions; // ivar: _batchDimensions


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(NSUInteger)kernelDimensionalityForSourceArrays:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)dimensionsNotToBeBroadcast;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(void)encodeToCommandBuffer:(id)arg0 primarySourceArray:(id)arg1 secondarySourceArray:(id)arg2 destinationArray:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
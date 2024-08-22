// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSIMAGEMEDIAN_H
#define MPSIMAGEMEDIAN_H



#import "MPSUnaryImageKernel.h"

@interface MPSImageMedian : MPSUnaryImageKernel

@property (readonly, nonatomic) NSUInteger kernelDiameter; // ivar: _filterDiameter


+(NSUInteger)maxKernelDiameter;
+(NSUInteger)minKernelDiameter;
+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 kernelDiameter:(NSUInteger)arg1 ;
-(struct MPSRegion )sourceRegionForDestinationSize:(struct ? )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)initEncoder;


@end


#endif
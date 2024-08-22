// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSIMAGEGAUSSIANPYRAMID_H
#define MPSIMAGEGAUSSIANPYRAMID_H



#import "MPSImagePyramid.h"

@interface MPSImageGaussianPyramid : MPSImagePyramid



+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 kernelWidth:(NSUInteger)arg1 kernelHeight:(NSUInteger)arg2 weights:(*float)arg3 ;
-(struct MPSRegion )sourceRegionForDestinationSize:(struct ? )arg0 ;
-(void)setClipRect:(struct ? )arg0 ;
-(void)setOffset:(struct ? )arg0 ;


@end


#endif
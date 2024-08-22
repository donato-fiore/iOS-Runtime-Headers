// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSCNNBINARYIMAGEFILTER_H
#define MPSCNNBINARYIMAGEFILTER_H



#import "MPSCNNBinaryKernel.h"

@interface MPSCNNBinaryImageFilter : MPSCNNBinaryKernel



+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithFilter:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
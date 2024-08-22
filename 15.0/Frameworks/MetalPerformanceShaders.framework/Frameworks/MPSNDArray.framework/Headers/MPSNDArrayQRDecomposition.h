// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSNDARRAYQRDECOMPOSITION_H
#define MPSNDARRAYQRDECOMPOSITION_H



#import "MPSNDArrayMultiaryKernel.h"

@interface MPSNDArrayQRDecomposition : MPSNDArrayMultiaryKernel

@property (nonatomic) BOOL computeQ; // ivar: _computeQ
@property (nonatomic) BOOL computeR; // ivar: _computeR


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)initWithDevice:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSNDARRAYSORT_H
#define MPSNDARRAYSORT_H



#import "MPSNDArrayUnaryKernel.h"
#import "MPSNDArrayScan.h"

@interface MPSNDArraySort : MPSNDArrayUnaryKernel {
    MPSNDArrayScan *_scanKernel;
    NSUInteger _axis;
}


@property (nonatomic) NSUInteger axis;
@property (nonatomic) BOOL descending; // ivar: _descending


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(NSUInteger)kernelDimensionalityForSourceArrays:(id)arg0 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 axis:(NSUInteger)arg1 descending:(BOOL)arg2 ;
-(void)dealloc;


@end


#endif
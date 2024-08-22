// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSNDARRAYPRUNE_H
#define MPSNDARRAYPRUNE_H



#import "MPSNDArrayUnaryKernel.h"

@interface MPSNDArrayPrune : MPSNDArrayUnaryKernel

@property (nonatomic) int pruneMetric; // ivar: _pruneMetric
@property (nonatomic) int pruneStructure; // ivar: _pruneStructure
@property (nonatomic) float sparsity; // ivar: _sparsity


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(BOOL)supportsGradientForSourceIndex:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;


@end


#endif
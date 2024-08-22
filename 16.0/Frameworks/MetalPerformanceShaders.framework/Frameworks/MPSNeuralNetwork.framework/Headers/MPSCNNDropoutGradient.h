// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSCNNDROPOUTGRADIENT_H
#define MPSCNNDROPOUTGRADIENT_H



#import "MPSCNNGradientKernel.h"

@interface MPSCNNDropoutGradient : MPSCNNGradientKernel

@property (readonly, nonatomic) float keepProbability; // ivar: _keepProbability
@property (readonly, nonatomic) ? maskStrideInPixels; // ivar: _maskStrideInPixels
@property (readonly, nonatomic) NSUInteger seed; // ivar: _seed


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(NSUInteger)maxBatchSize;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 keepProbability:(float)arg1 seed:(NSUInteger)arg2 maskStrideInPixels:(struct ? )arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSCNNCROSSCHANNELNORMALIZATIONGRADIENT_H
#define MPSCNNCROSSCHANNELNORMALIZATIONGRADIENT_H



#import "MPSCNNGradientKernel.h"

@interface MPSCNNCrossChannelNormalizationGradient : MPSCNNGradientKernel

@property (nonatomic) float alpha; // ivar: _alpha
@property (nonatomic) float beta; // ivar: _beta
@property (nonatomic) float delta; // ivar: _delta
@property (readonly, nonatomic) NSUInteger kernelSize; // ivar: _kernelSize


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 kernelSize:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
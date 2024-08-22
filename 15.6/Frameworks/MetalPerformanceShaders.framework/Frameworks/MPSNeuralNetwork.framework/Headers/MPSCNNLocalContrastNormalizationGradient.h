// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSCNNLOCALCONTRASTNORMALIZATIONGRADIENT_H
#define MPSCNNLOCALCONTRASTNORMALIZATIONGRADIENT_H



#import "MPSCNNGradientKernel.h"

@interface MPSCNNLocalContrastNormalizationGradient : MPSCNNGradientKernel

@property (nonatomic) float alpha; // ivar: _alpha
@property (nonatomic) float beta; // ivar: _beta
@property (nonatomic) float delta; // ivar: _delta
@property (nonatomic) float p0; // ivar: _p0
@property (nonatomic) float pm; // ivar: _pm
@property (nonatomic) float ps; // ivar: _ps


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 kernelWidth:(NSUInteger)arg1 kernelHeight:(NSUInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
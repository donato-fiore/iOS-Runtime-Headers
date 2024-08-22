// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSNNOPTIMIZER_H
#define MPSNNOPTIMIZER_H

@class MPSKernel;



@interface MPSNNOptimizer : MPSKernel

@property (nonatomic) BOOL applyGradientClipping; // ivar: _applyGradientClipping
@property (readonly, nonatomic) float gradientClipMax; // ivar: _gradientClipMax
@property (readonly, nonatomic) float gradientClipMin; // ivar: _gradientClipMin
@property (readonly, nonatomic) float gradientRescale; // ivar: _gradientRescale
@property (readonly, nonatomic) float learningRate; // ivar: _learningRate
@property (readonly, nonatomic) float regularizationScale; // ivar: _regularizationScale
@property (readonly, nonatomic) NSUInteger regularizationType; // ivar: _regularizationType


-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 optimizerDescriptor:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
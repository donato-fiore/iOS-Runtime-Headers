// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PISPILLSUPPRESSION_H
#define PISPILLSUPPRESSION_H

@class CIFilter, NSNumber, NSString, CIVector, CIImage;



@interface PISpillSuppression : CIFilter

@property (retain, nonatomic) NSNumber *inputAlphaEdge; // ivar: _inputAlphaEdge
@property (retain, nonatomic) NSNumber *inputAlphaThresholdLog10; // ivar: _inputAlphaThresholdLog10
@property (retain, nonatomic) NSNumber *inputConstrainToAlpha; // ivar: _inputConstrainToAlpha
@property (retain, nonatomic) NSString *inputDebugChannels; // ivar: _inputDebugChannels
@property (retain, nonatomic) NSNumber *inputDebugSpillOnly; // ivar: _inputDebugSpillOnly
@property (retain, nonatomic) NSNumber *inputEdgeRadius; // ivar: _inputEdgeRadius
@property (retain, nonatomic) NSNumber *inputEpsilonLog10; // ivar: _inputEpsilonLog10
@property (retain, nonatomic) NSNumber *inputErosionRadius; // ivar: _inputErosionRadius
@property (retain, nonatomic) CIVector *inputExtent; // ivar: _inputExtent
@property (retain, nonatomic) CIImage *inputImage; // ivar: _inputImage
@property (retain, nonatomic) NSNumber *inputIterations; // ivar: _inputIterations
@property (retain, nonatomic) CIImage *inputMatteImage; // ivar: _inputMatteImage
@property (retain, nonatomic) NSNumber *inputRadius; // ivar: _inputRadius
@property (retain, nonatomic) CIImage *inputTargetBackgroundImage; // ivar: _inputTargetBackgroundImage


+(id)applySpillMatteKernel;
+(id)customAttributes;
+(id)prepareSpillMatteKernel;
+(id)spillSuppressionKernels;
-(id)outputImage;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLCOPTIMIZER_H
#define MLCOPTIMIZER_H

@class NSArray, NSMutableArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MLCDevice.h"

@interface MLCOptimizer : NSObject <NSCopying>



@property (nonatomic) BOOL appliesGradientClipping; // ivar: _appliesGradientClipping
@property (readonly, nonatomic) float customGlobalNorm; // ivar: _customGlobalNorm
@property (retain, nonatomic) MLCDevice *device; // ivar: _device
@property (retain, nonatomic) NSArray *deviceOps; // ivar: _deviceOps
@property (readonly, nonatomic) float gradientClipMax; // ivar: _gradientClipMax
@property (readonly, nonatomic) float gradientClipMin; // ivar: _gradientClipMin
@property (readonly, nonatomic) int gradientClippingType; // ivar: _gradientClippingType
@property (readonly, nonatomic) float gradientRescale; // ivar: _gradientRescale
@property (nonatomic) float learningRate; // ivar: _learningRate
@property (readonly, nonatomic) float maximumClippingNorm; // ivar: _maximumClippingNorm
@property (nonatomic) NSUInteger numOptimizerDataBuffers; // ivar: _numOptimizerDataBuffers
@property (retain, nonatomic) NSMutableArray *oneStepOptimizerBuffers; // ivar: _oneStepOptimizerBuffers
@property (readonly, nonatomic) float regularizationScale; // ivar: _regularizationScale
@property (readonly, nonatomic) int regularizationType; // ivar: _regularizationType


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithDescriptor:(id)arg0 ;
-(id)initWithLearningRate:(float)arg0 gradientRescale:(float)arg1 applyGradientClipping:(BOOL)arg2 gradientClipMax:(float)arg3 gradientClipMin:(float)arg4 regularizationScale:(float)arg5 regularizationType:(int)arg6 ;
-(id)initWithLearningRate:(float)arg0 gradientRescale:(float)arg1 applyGradientClipping:(BOOL)arg2 gradientClipMax:(float)arg3 gradientClipMin:(float)arg4 regularizationScale:(float)arg5 regularizationType:(int)arg6 gradientClippingType:(int)arg7 maximumClippingNorm:(float)arg8 customGlobalNorm:(float)arg9 ;
-(void)bindDevice:(id)arg0 deviceOps:(id)arg1 ;


@end


#endif
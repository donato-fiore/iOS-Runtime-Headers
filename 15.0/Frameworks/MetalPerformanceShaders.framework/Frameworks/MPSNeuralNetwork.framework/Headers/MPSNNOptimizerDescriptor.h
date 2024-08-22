// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSNNOPTIMIZERDESCRIPTOR_H
#define MPSNNOPTIMIZERDESCRIPTOR_H


#import <Foundation/Foundation.h>


@interface MPSNNOptimizerDescriptor : NSObject

@property (nonatomic) BOOL applyGradientClipping; // ivar: _applyGradientClipping
@property (nonatomic) float gradientClipMax; // ivar: _gradientClipMax
@property (nonatomic) float gradientClipMin; // ivar: _gradientClipMin
@property (nonatomic) float gradientRescale; // ivar: _gradientRescale
@property (nonatomic) float learningRate; // ivar: _learningRate
@property (nonatomic) float regularizationScale; // ivar: _regularizationScale
@property (nonatomic) NSUInteger regularizationType; // ivar: _regularizationType


+(id)optimizerDescriptorWithLearningRate:(float)arg0 gradientRescale:(float)arg1 applyGradientClipping:(BOOL)arg2 gradientClipMax:(float)arg3 gradientClipMin:(float)arg4 regularizationType:(NSUInteger)arg5 regularizationScale:(float)arg6 ;
+(id)optimizerDescriptorWithLearningRate:(float)arg0 gradientRescale:(float)arg1 regularizationType:(NSUInteger)arg2 regularizationScale:(float)arg3 ;
-(id)initWithLearningRate:(float)arg0 gradientRescale:(float)arg1 applyGradientClipping:(BOOL)arg2 gradientClipMax:(float)arg3 gradientClipMin:(float)arg4 regularizationType:(NSUInteger)arg5 regularizationScale:(float)arg6 ;
-(id)initWithLearningRate:(float)arg0 gradientRescale:(float)arg1 regularizationType:(NSUInteger)arg2 regularizationScale:(float)arg3 ;


@end


#endif
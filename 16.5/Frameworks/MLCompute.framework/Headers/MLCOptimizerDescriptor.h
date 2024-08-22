// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLCOPTIMIZERDESCRIPTOR_H
#define MLCOPTIMIZERDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MLCOptimizerDescriptor : NSObject <NSCopying>



@property (readonly, nonatomic) BOOL appliesGradientClipping; // ivar: _appliesGradientClipping
@property (readonly, nonatomic) float customGlobalNorm; // ivar: _customGlobalNorm
@property (readonly, nonatomic) float gradientClipMax; // ivar: _gradientClipMax
@property (readonly, nonatomic) float gradientClipMin; // ivar: _gradientClipMin
@property (readonly, nonatomic) int gradientClippingType; // ivar: _gradientClippingType
@property (readonly, nonatomic) float gradientRescale; // ivar: _gradientRescale
@property (readonly, nonatomic) float learningRate; // ivar: _learningRate
@property (readonly, nonatomic) float maximumClippingNorm; // ivar: _maximumClippingNorm
@property (readonly, nonatomic) float regularizationScale; // ivar: _regularizationScale
@property (readonly, nonatomic) int regularizationType; // ivar: _regularizationType


+(id)descriptorWithLearningRate:(float)arg0 gradientRescale:(float)arg1 appliesGradientClipping:(BOOL)arg2 gradientClipMax:(float)arg3 gradientClipMin:(float)arg4 regularizationType:(int)arg5 regularizationScale:(float)arg6 ;
+(id)descriptorWithLearningRate:(float)arg0 gradientRescale:(float)arg1 appliesGradientClipping:(BOOL)arg2 gradientClippingType:(int)arg3 gradientClipMax:(float)arg4 gradientClipMin:(float)arg5 maximumClippingNorm:(float)arg6 customGlobalNorm:(float)arg7 regularizationType:(int)arg8 regularizationScale:(float)arg9 ;
+(id)descriptorWithLearningRate:(float)arg0 gradientRescale:(float)arg1 regularizationType:(int)arg2 regularizationScale:(float)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithLearningRate:(float)arg0 gradientRescale:(float)arg1 applyGradientClipping:(BOOL)arg2 gradientClipMax:(float)arg3 gradientClipMin:(float)arg4 regularizationType:(int)arg5 regularizationScale:(float)arg6 ;
-(id)initWithLearningRate:(float)arg0 gradientRescale:(float)arg1 applyGradientClipping:(BOOL)arg2 gradientClipMax:(float)arg3 gradientClipMin:(float)arg4 regularizationType:(int)arg5 regularizationScale:(float)arg6 gradientClippingType:(int)arg7 maximumClippingNorm:(float)arg8 customGlobalNorm:(float)arg9 ;


@end


#endif
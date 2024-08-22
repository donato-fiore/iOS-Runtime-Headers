// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NURENDERPIPELINEFUNCTION_H
#define NURENDERPIPELINEFUNCTION_H


#import <Foundation/Foundation.h>


@interface NURenderPipelineFunction : NSObject



+(id)functionWithEvaluationBlock:(id)arg0 ;
+(id)grainInputSeedFromFrameTime;
+(id)redEyeSpotsWithCorrectionInfo:(id)arg0 ;
+(id)scaleMultiplyOfScalar:(CGFloat)arg0 ;
+(id)scaledVector:(id)arg0 ;
+(id)sharpnessWithIntensity:(CGFloat)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)evaluate:(id)arg0 error:(*id)arg1 ;
-(id)nu_evaluateWithPipelineState:(id)arg0 error:(*id)arg1 ;


@end


#endif
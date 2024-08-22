// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLCPATTERNMATCHER_H
#define MLCPATTERNMATCHER_H


#import <Foundation/Foundation.h>


@interface MLCPatternMatcher : NSObject



+(BOOL)canTransformToGELUFromLayer:(id)arg0 stopGradientTensorList:(id)arg1 fusedLayers:(id)arg2 inputTensor:(*id)arg3 ;
+(BOOL)canTransformToGELUType1FromLayer:(id)arg0 fusedLayers:(id)arg1 inputTensor:(id)arg2 withAccuracy:(float)arg3 ;
+(BOOL)canTransformToGELUType2FromLayer:(id)arg0 fusedLayers:(id)arg1 inputTensor:(id)arg2 withAccuracy:(float)arg3 ;
+(BOOL)canTransformToHardSwishFromLayer:(id)arg0 stopGradientTensorList:(id)arg1 fusedLayers:(id)arg2 inputTensor:(*id)arg3 ;
+(BOOL)canTransformToReLUNFromLayer:(id)arg0 stopGradientTensorList:(id)arg1 fusedLayers:(id)arg2 alpha:(*float)arg3 beta:(*float)arg4 ;
+(BOOL)checkIntermediateTensorsOfFusedLayers:(id)arg0 stopGradientTensorList:(id)arg1 forPattern:(id)arg2 ;
+(BOOL)isActivationLayer:(id)arg0 withActivationType:(int)arg1 ;
+(BOOL)isArithmeticLayer:(id)arg0 withOperation:(int)arg1 ;
+(BOOL)isConstTensor:(id)arg0 withValue:(float)arg1 withAccuracy:(float)arg2 ;
+(float)getAccuracyForLayer:(id)arg0 ;


@end


#endif
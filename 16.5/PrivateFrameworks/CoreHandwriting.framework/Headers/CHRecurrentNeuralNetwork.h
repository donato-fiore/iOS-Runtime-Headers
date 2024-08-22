// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHRECURRENTNEURALNETWORK_H
#define CHRECURRENTNEURALNETWORK_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CHRecurrentNeuralNetwork : NSObject

@property (readonly, nonatomic) NSString *modelName; // ivar: _modelName


+(id)normalizedDrawing:(id)arg0 scaleFactor:(CGFloat)arg1 interpolationDistance:(CGFloat)arg2 outputPointMap:(*void)arg3 ;
-(id)initWithModelName:(id)arg0 ;
-(id)normalizedDrawing:(id)arg0 targetHeight:(CGFloat)arg1 minimumDrawingSize:(struct CGSize )arg2 interpolationDistance:(CGFloat)arg3 outScaleFactor:(*CGFloat)arg4 outputPointMap:(*void)arg5 ;


@end


#endif
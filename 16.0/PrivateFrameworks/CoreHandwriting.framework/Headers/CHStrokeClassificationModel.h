// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHSTROKECLASSIFICATIONMODEL_H
#define CHSTROKECLASSIFICATIONMODEL_H

@class NSArray, NSString;
@protocol OS_dispatch_queue;


#import "CHRecurrentNeuralNetwork.h"

@interface CHStrokeClassificationModel : CHRecurrentNeuralNetwork {
    NSObject<OS_dispatch_queue> *_queue;
    NSInteger _inferenceCount;
}


@property (readonly, nonatomic) NSInteger contextMaxStrokes; // ivar: _contextMaxStrokes
@property (readonly, nonatomic) NSInteger cosAngleFeatureIndex; // ivar: _cosAngleFeatureIndex
@property (readonly, nonatomic) NSInteger distanceFeatureIndex; // ivar: _distanceFeatureIndex
@property (readonly, nonatomic) CGFloat interpointDistance; // ivar: _interpointDistance
@property (readonly, nonatomic) NSInteger maxInputWidth; // ivar: _maxInputWidth
@property (readonly, nonatomic) NSInteger maxNumberOfInputStrokes; // ivar: _maxNumberOfInputStrokes
@property (readonly, nonatomic) NSInteger maxPointsPerStroke; // ivar: _maxPointsPerStroke
@property (readonly, nonatomic) NSInteger minPointsPerStroke; // ivar: _minPointsPerStroke
@property (readonly, nonatomic) *void model; // ivar: _model
@property (readonly, nonatomic) NSArray *modelConfigurationsNumPoints; // ivar: _modelConfigurationsNumPoints
@property (readonly, nonatomic) NSArray *modelConfigurationsNumStrokes; // ivar: _modelConfigurationsNumStrokes
@property (readonly, nonatomic) NSInteger modelDecoderSize; // ivar: _modelDecoderSize
@property (readonly, nonatomic) NSString *modelSmallestConfig; // ivar: _modelSmallestConfig
@property (readonly, nonatomic) NSInteger numInputFeatures; // ivar: _numInputFeatures
@property (readonly, nonatomic) NSInteger numOutputClasses; // ivar: _numOutputClasses
@property (readonly, nonatomic) NSInteger recognitionMaxStrokes; // ivar: _recognitionMaxStrokes
@property (readonly, nonatomic) NSInteger sinAngleFeatureIndex; // ivar: _sinAngleFeatureIndex
@property (readonly, nonatomic) NSInteger textClassIndex; // ivar: _textClassIndex


-(BOOL)_classifyStrokesInDrawing:(id)arg0 outTextStrokeProbabilities:(*void)arg1 cancellationBlock:(id)arg2 ;
-(BOOL)classifyStrokes:(id)arg0 outTextStrokeProbabilities:(*void)arg1 cancellationBlock:(id)arg2 ;
-(id)_extractFeaturesFromDrawing:(id)arg0 numStrokes:(id)arg1 numPoints:(id)arg2 error:(*id)arg3 ;
-(id)_extractInputMaskFromDrawing:(id)arg0 numStrokes:(id)arg1 numPoints:(id)arg2 error:(*id)arg3 ;
-(id)_getPositionalEncodings:(id)arg0 error:(*id)arg1 ;
-(id)_getStringForConfigurationValues:(id)arg0 numPoints:(id)arg1 ;
-(id)getModelConfigurationForDrawing:(id)arg0 outNumStrokes:(*id)arg1 outNumPoints:(*id)arg2 ;
-(id)initWithModelName:(id)arg0 ;
-(id)normalizedDrawing:(id)arg0 interpolationDistance:(CGFloat)arg1 ;
-(void)dealloc;
-(void)reduceMemoryByResizing;


@end


#endif
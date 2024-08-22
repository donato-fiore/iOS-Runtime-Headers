// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHSTROKECLASSIFICATIONMODEL_H
#define CHSTROKECLASSIFICATIONMODEL_H

@class NSString;


#import "CHRecurrentNeuralNetworkMontreal.h"

@interface CHStrokeClassificationModel : CHRecurrentNeuralNetworkMontreal

@property (readonly, nonatomic) NSInteger cosAngleFeatureIndex; // ivar: _cosAngleFeatureIndex
@property (readonly, retain, nonatomic) NSString *directionalFeaturesInputName; // ivar: _directionalFeaturesInputName
@property (readonly, nonatomic) NSInteger distanceFeatureIndex; // ivar: _distanceFeatureIndex
@property (readonly, nonatomic) NSInteger endpointFeatureIndex; // ivar: _endpointFeatureIndex
@property (readonly, nonatomic) NSInteger sinAngleFeatureIndex; // ivar: _sinAngleFeatureIndex
@property (readonly, retain, nonatomic) NSString *textStrokeProbabilityOutputName; // ivar: _textStrokeProbabilityOutputName


-(BOOL)classifyStrokesInDrawing:(id)arg0 outTextStrokeProbabilities:(*void)arg1 cancellationBlock:(id)arg2 ;
-(NSInteger)maxSequenceLength;
-(NSInteger)windowOverlap;
-(id)initWithModelName:(id)arg0 ;
-(id)normalizedDrawing:(id)arg0 targetHeight:(CGFloat)arg1 interpolationDistance:(CGFloat)arg2 outputPointMap:(*void)arg3 ;
-(struct vector<float, std::allocator<float>> )_extractFeaturesFromDrawing:(id)arg0 inputName:(id)arg1 interpointDistance:(CGFloat)arg2 error:(*id)arg3 ;
-(void)dealloc;


@end


#endif
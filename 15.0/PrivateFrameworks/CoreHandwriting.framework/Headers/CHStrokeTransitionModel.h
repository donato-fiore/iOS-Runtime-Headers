// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHSTROKETRANSITIONMODEL_H
#define CHSTROKETRANSITIONMODEL_H

@class NSString;


#import "CHRecurrentNeuralNetworkMontreal.h"

@interface CHStrokeTransitionModel : CHRecurrentNeuralNetworkMontreal

@property (readonly, retain, nonatomic) NSString *charBoundaryProbabilityOutputName; // ivar: _charBoundaryProbabilityOutputName
@property (readonly, nonatomic) NSInteger cosAlphaFeatureIndex; // ivar: _cosAlphaFeatureIndex
@property (readonly, retain, nonatomic) NSString *delayedStrokeProbabilityOutputName; // ivar: _delayedStrokeProbabilityOutputName
@property (readonly, retain, nonatomic) NSString *directionalFeaturesInputName; // ivar: _directionalFeaturesInputName
@property (readonly, nonatomic) NSInteger distanceFeatureIndex; // ivar: _distanceFeatureIndex
@property (readonly, nonatomic) NSInteger gapFeatureIndex; // ivar: _gapFeatureIndex
@property (readonly, nonatomic) NSInteger sinAlphaFeatureIndex; // ivar: _sinAlphaFeatureIndex
@property (readonly, retain, nonatomic) NSString *spaceProbabilityOutputName; // ivar: _spaceProbabilityOutputName


-(BOOL)classifyStrokesInDrawing:(id)arg0 minimumDrawingSize:(struct CGSize )arg1 outDelayedStrokeProbabilities:(*void)arg2 outSpaceProbabilities:(*void)arg3 outCharBoundaryProbabilities:(*void)arg4 ;
-(NSInteger)maxSequenceLength;
-(NSInteger)windowOverlap;
-(id)initWithModelName:(id)arg0 ;
-(struct set<long, std::less<long>, std::allocator<long>> )detectedDelayedStrokes:(*void)arg0 ;
-(struct vector<float, std::allocator<float>> )_extractFeaturesFromDrawing:(id)arg0 inputName:(id)arg1 interpointDistance:(CGFloat)arg2 error:(*id)arg3 ;
-(void)dealloc;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHCUTPOINTMODEL_H
#define CHCUTPOINTMODEL_H

@class NSString;


#import "CHRecurrentNeuralNetworkMontreal.h"

@interface CHCutpointModel : CHRecurrentNeuralNetworkMontreal

@property (readonly, nonatomic) NSInteger cosAngleLeftFeatureIndex; // ivar: _cosAngleLeftFeatureIndex
@property (readonly, nonatomic) NSInteger cosAngleRightFeatureIndex; // ivar: _cosAngleRightFeatureIndex
@property (readonly, retain, nonatomic) NSString *cutpointProbabilityOutputName; // ivar: _cutpointProbabilityOutputName
@property (readonly, retain, nonatomic) NSString *directionalFeaturesInputName; // ivar: _directionalFeaturesInputName
@property (readonly, nonatomic) NSInteger distanceLeftFeatureIndex; // ivar: _distanceLeftFeatureIndex
@property (readonly, nonatomic) NSInteger distanceRightFeatureIndex; // ivar: _distanceRightFeatureIndex
@property (readonly, nonatomic) NSInteger endpointFeatureIndex; // ivar: _endpointFeatureIndex
@property (readonly, nonatomic) NSInteger sinAngleLeftFeatureIndex; // ivar: _sinAngleLeftFeatureIndex
@property (readonly, nonatomic) NSInteger sinAngleRightFeatureIndex; // ivar: _sinAngleRightFeatureIndex


-(NSInteger)maxSequenceLength;
-(NSInteger)windowOverlap;
-(id)_remappedCutpoints:(*void)arg0 pointMap:(*void)arg1 originalDrawing:(id)arg2 excludingStrokeIDs:(*void)arg3 ;
-(id)detectCutpointsInDrawing:(id)arg0 minimumDrawingSize:(struct CGSize )arg1 excludingStrokeIDs:(*void)arg2 ;
-(id)initWithModelName:(id)arg0 ;
-(struct vector<CHCutpointCandidate, std::allocator<CHCutpointCandidate>> )_detectedCutpoints:(*void)arg0 resampledDrawing:(id)arg1 ;
-(struct vector<float, std::allocator<float>> )_extractFeaturesFromDrawing:(id)arg0 inputName:(id)arg1 interpointDistance:(CGFloat)arg2 error:(*id)arg3 ;
-(void)dealloc;


@end


#endif
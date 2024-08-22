// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TCMLCOMPUTEOBJECTDETECTORSCENENETDESCRIPTOR_H
#define TCMLCOMPUTEOBJECTDETECTORSCENENETDESCRIPTOR_H

@class MLCTensor, NSDictionary;

#import <Foundation/Foundation.h>


@interface TCMLComputeObjectDetectorSceneNetDescriptor : NSObject

@property (retain, nonatomic) MLCTensor *classificationOutput; // ivar: _classificationOutput
@property (retain, nonatomic) MLCTensor *labelClass; // ivar: _labelClass
@property (retain, nonatomic) MLCTensor *labelConfidence; // ivar: _labelConfidence
@property (retain, nonatomic) MLCTensor *labelCoordinates; // ivar: _labelCoordinates
@property (retain, nonatomic) MLCTensor *localizationOutput; // ivar: _localizationOutput
@property (retain, nonatomic) MLCTensor *lossResultTensor; // ivar: _lossResultTensor
@property (nonatomic) NSUInteger numAnchorBoxes; // ivar: _numAnchorBoxes
@property (nonatomic) NSUInteger numClasses; // ivar: _numClasses
@property (retain, nonatomic) MLCTensor *sceneNetInput1; // ivar: _sceneNetInput1
@property (retain, nonatomic) MLCTensor *sceneNetInput2; // ivar: _sceneNetInput2
@property (retain, nonatomic) MLCTensor *softmaxOutput; // ivar: _softmaxOutput
@property (retain, nonatomic) NSDictionary *weights; // ivar: _weights
@property (retain, nonatomic) MLCTensor *weightsClass; // ivar: _weightsClass
@property (retain, nonatomic) MLCTensor *weightsCoordinates; // ivar: _weightsCoordinates


-(BOOL)isComplete;
-(id)addCommonFPNLayersWithWeight:(id)arg0 bias:(id)arg1 headType:(id)arg2 scale:(NSUInteger)arg3 source:(id)arg4 graph:(id)arg5 ;
-(id)addHeadWithWeight:(id)arg0 bias:(id)arg1 outputChannels:(NSUInteger)arg2 source:(id)arg3 graph:(id)arg4 ;
-(id)addInitialConvLayerForScale:(NSUInteger)arg0 source:(id)arg1 graph:(id)arg2 ;
-(id)addReluBatchNormWithWeightPrefix:(id)arg0 source:(id)arg1 graph:(id)arg2 ;
-(void)defineGraph:(id)arg0 batchSize:(NSUInteger)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHCTCRECOGNITIONMODEL_H
#define CHCTCRECOGNITIONMODEL_H

@class NSOrderedSet, NSString;


#import "CHRecurrentNeuralNetworkCoreML.h"

@interface CHCTCRecognitionModel : CHRecurrentNeuralNetworkCoreML

@property (readonly, retain) NSOrderedSet *_stringCodeMap; // ivar: __stringCodeMap
@property (nonatomic) NSInteger activationsDomain; // ivar: _activationsDomain
@property (readonly, nonatomic) NSInteger blankIndex; // ivar: _blankIndex
@property (readonly, retain, nonatomic) NSString *characterProbabilityOutputName; // ivar: _characterProbabilityOutputName
@property (readonly, nonatomic) *CHCodeMap codeMap; // ivar: _codeMap
@property (readonly, nonatomic) NSInteger cosAlphaFeatureIndex; // ivar: _cosAlphaFeatureIndex
@property (nonatomic) CVNLPTextDecodingPruningPolicy decodingPruningPolicy; // ivar: _decodingPruningPolicy
@property (readonly, retain, nonatomic) NSString *directionalFeaturesInputName; // ivar: _directionalFeaturesInputName
@property (nonatomic) CGFloat distMean; // ivar: _distMean
@property (nonatomic) CGFloat distStd; // ivar: _distStd
@property (readonly, nonatomic) NSInteger distanceFeatureIndex; // ivar: _distanceFeatureIndex
@property (readonly, nonatomic) NSInteger gapFeatureIndex; // ivar: _gapFeatureIndex
@property (nonatomic) BOOL hasBatchFirstFeatureArrayShape; // ivar: _hasBatchFirstFeatureArrayShape
@property (nonatomic) CGFloat interpointDistance; // ivar: _interpointDistance
@property (readonly, nonatomic) NSInteger sequenceCompression; // ivar: _sequenceCompression
@property (readonly, nonatomic) NSInteger sinAlphaFeatureIndex; // ivar: _sinAlphaFeatureIndex
@property (readonly, nonatomic) NSInteger spaceIndex; // ivar: _spaceIndex


-(id)_extractFeaturesFromDrawing:(id)arg0 inputName:(id)arg1 interpointDistance:(CGFloat)arg2 error:(*id)arg3 ;
-(id)_extractFeaturesFromDrawing:(id)arg0 inputName:(id)arg1 interpointDistance:(CGFloat)arg2 initialVectorAnchorPoint:(struct CGPoint )arg3 normalizeFeatures:(BOOL)arg4 padFeatures:(BOOL)arg5 error:(*id)arg6 ;
-(id)featureProviderForDrawing:(id)arg0 initialVectorAnchorPoint:(struct CGPoint )arg1 normalizeFeatures:(BOOL)arg2 padFeatures:(BOOL)arg3 outStrokeEndings:(*void)arg4 outInputSequenceLength:(*NSInteger)arg5 outOutputSequenceLength:(*NSInteger)arg6 ;
-(id)initWithModelName:(id)arg0 decodingPruningPolicy:(struct CVNLPTextDecodingPruningPolicy )arg1 featureIndex:(NSInteger)arg2 ;
-(id)recognizeDrawing:(id)arg0 minimumDrawingSize:(struct CGSize )arg1 initialVectorAnchorPoint:(struct CGPoint )arg2 activeCharacterSet:(id)arg3 outStrokeEndings:(*void)arg4 ;
-(void)dealloc;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIVALUEPREDICTOR_H
#define _UIVALUEPREDICTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _UIValuePredictor : NSObject <NSCopying>

 {
    NSUInteger _capacity;
    NSUInteger _arrayCapacity;
    *CGFloat _values;
    *CGFloat _valueWeights;
    *CGFloat _predictions;
    *CGFloat _confidenceFactorsForVelocity;
    *CGFloat _confidenceFactorsForHistoricalAccuracy;
    *CGFloat _confidenceFactorsForDerivativeStability;
    *CGFloat _confidenceFactors;
    **CGFloat _derivatives;
}


@property (nonatomic) CGFloat derivativeStabilityThreshold; // ivar: _derivativeStabilityThreshold
@property (nonatomic) CGFloat maxConstraint; // ivar: _maxConstraint
@property (nonatomic) CGFloat maxHistoricalAccuracyThreshold; // ivar: _maxHistoricalAccuracyThreshold
@property (nonatomic) CGFloat maxVelocityThreshold; // ivar: _maxVelocityThreshold
@property (nonatomic) CGFloat minConstraint; // ivar: _minConstraint
@property (nonatomic) CGFloat minHistoricalAccuracyThreshold; // ivar: _minHistoricalAccuracyThreshold
@property (nonatomic) CGFloat minVelocityThreshold; // ivar: _minVelocityThreshold
@property (readonly, nonatomic) NSUInteger numDerivatives; // ivar: _numDerivatives
@property (readonly, nonatomic) NSUInteger numPredictions; // ivar: _numPredictions
@property (readonly, nonatomic) NSUInteger numValues; // ivar: _numValues
@property (nonatomic) BOOL wrapConstraint; // ivar: _wrapConstraint


-(**CGFloat)_derivatives;
-(*CGFloat)_confidenceFactorsAtIndex:(NSUInteger)arg0 ;
-(*CGFloat)_confidenceFactorsForDerivativeStabilityAtIndex:(NSUInteger)arg0 ;
-(*CGFloat)_confidenceFactorsForHistoricalAccuracyAtIndex:(NSUInteger)arg0 ;
-(*CGFloat)_confidenceFactorsForVelocityAtIndex:(NSUInteger)arg0 ;
-(*CGFloat)_predictionsAtIndex:(NSUInteger)arg0 ;
-(*CGFloat)_valueWeightsAtIndex:(NSUInteger)arg0 ;
-(*CGFloat)_valuesAtIndex:(NSUInteger)arg0 ;
-(*CGFloat)confidenceFactors;
-(*CGFloat)predictions;
-(CGFloat)_constrainPrediction:(CGFloat)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionFromIndex:(NSUInteger)arg0 toIndex:(NSUInteger)arg1 includeHeader:(BOOL)arg2 includeDetailedConfidence:(BOOL)arg3 ;
-(id)init;
-(id)initFromValuePredictor:(id)arg0 ;
-(id)initWithNumPredictions:(NSUInteger)arg0 numDerivatives:(NSUInteger)arg1 ;
-(void)_ensureCapacity:(NSUInteger)arg0 ;
-(void)_getPriorPredictions:(*CGFloat)arg0 forValueAtIndex:(int)arg1 ;
-(void)_propagateDerivatives:(*CGFloat)arg0 fromHigherDerivatives:(*CGFloat)arg1 atIndex:(NSInteger)arg2 ;
-(void)_setupDefaults;
-(void)_slideDataWindow;
-(void)_updateConfidenceFactorsAtIndex:(int)arg0 ;
-(void)_updateConfidenceFactorsForDerivativeStabilityAtIndex:(int)arg0 ;
-(void)_updateConfidenceFactorsForHistoricalAccuracyAtIndex:(int)arg0 ;
-(void)_updateConfidenceFactorsForVelocityAtIndex:(NSInteger)arg0 ;
-(void)_updateDerivatives:(*CGFloat)arg0 fromArray:(*CGFloat)arg1 weights:(*CGFloat)arg2 atIndex:(NSInteger)arg3 wrap:(BOOL)arg4 ;
-(void)_updatePredictionsAtIndex:(NSInteger)arg0 ;
-(void)addValue:(CGFloat)arg0 weight:(CGFloat)arg1 ;
-(void)dealloc;


@end


#endif
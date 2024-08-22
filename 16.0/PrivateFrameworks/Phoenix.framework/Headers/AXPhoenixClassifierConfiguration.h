// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXPHOENIXCLASSIFIERCONFIGURATION_H
#define AXPHOENIXCLASSIFIERCONFIGURATION_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface AXPhoenixClassifierConfiguration : NSObject

@property (nonatomic) NSUInteger accelerometerSampleRateInHz; // ivar: _accelerometerSampleRateInHz
@property (retain, nonatomic) NSString *accelerometerSampleRateInHzKey; // ivar: _accelerometerSampleRateInHzKey
@property (retain, nonatomic) NSString *dataKey; // ivar: _dataKey
@property (retain, nonatomic) NSString *doubleTapPolicyKey; // ivar: _doubleTapPolicyKey
@property (retain, nonatomic) NSArray *doubleTapPolicyThresholds; // ivar: _doubleTapPolicyThresholds
@property (retain, nonatomic) NSString *generalPolicyKey; // ivar: _generalPolicyKey
@property (retain, nonatomic) NSArray *generalPolicyThresholds; // ivar: _generalPolicyThresholds
@property (nonatomic) NSUInteger maxAccelerationBufferSize; // ivar: _maxAccelerationBufferSize
@property (retain, nonatomic) NSString *maxAccelerationBufferSizeKey; // ivar: _maxAccelerationBufferSizeKey
@property (nonatomic) NSUInteger maxPredictionBufferSize; // ivar: _maxPredictionBufferSize
@property (retain, nonatomic) NSString *maxPredictionBufferSizeKey; // ivar: _maxPredictionBufferSizeKey
@property (nonatomic) NSUInteger minDurationBetweenTriggersInSeconds; // ivar: _minDurationBetweenTriggersInSeconds
@property (retain, nonatomic) NSString *minDurationBetweenTriggersInSecondsKey; // ivar: _minDurationBetweenTriggersInSecondsKey
@property (nonatomic) NSUInteger modelPredictionRateInHz; // ivar: _modelPredictionRateInHz
@property (retain, nonatomic) NSString *modelPredictionRateInHzKey; // ivar: _modelPredictionRateInHzKey
@property (retain, nonatomic) NSString *policyKey; // ivar: _policyKey
@property (retain, nonatomic) NSString *predictionClassDoubleTapKey; // ivar: _predictionClassDoubleTapKey
@property (retain, nonatomic) NSString *predictionClassNoneKey; // ivar: _predictionClassNoneKey
@property (retain, nonatomic) NSString *predictionClassTripleTapKey; // ivar: _predictionClassTripleTapKey
@property (nonatomic) CGFloat predictionConfidenceThreshold; // ivar: _predictionConfidenceThreshold
@property (retain, nonatomic) NSString *predictionConfidenceThresholdKey; // ivar: _predictionConfidenceThresholdKey
@property (retain, nonatomic) NSString *predictionCountThresholdsKey; // ivar: _predictionCountThresholdsKey
@property (retain, nonatomic) NSString *tripleTapPolicyKey; // ivar: _tripleTapPolicyKey
@property (retain, nonatomic) NSArray *tripleTapPolicyThresholds; // ivar: _tripleTapPolicyThresholds


-(id)init;
-(id)initWithDictionary:(id)arg0 missingKeys:(id)arg1 ;
-(id)toDictionary;
-(void)_initializeKeys;
-(void)_parseFromDictionary:(id)arg0 missingKeys:(id)arg1 ;
-(void)_setDefaultConfiguration;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXPHOENIXCLASSIFIER_H
#define AXPHOENIXCLASSIFIER_H

@class MLModel, MLMultiArray, NSArray, NSString;
@protocol AXPhoenixClassifierDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AXPhoenixClassifierConfiguration.h"
#import "AccelerometerBuffer.h"
#import "PredictionsBuffer.h"
#import "AXPhoenixDataLogger.h"

@interface AXPhoenixClassifier : NSObject {
    id<AXPhoenixClassifierDelegate> *_delegate;
    AXPhoenixClassifierConfiguration *_configuration;
    MLModel *_classifier;
    AccelerometerBuffer *_accelBuffer;
    PredictionsBuffer *_predictionsBuffer;
    NSUInteger _sampleCountSinceLastTrigger;
    int _policyOption;
    MLMultiArray *_multiArray;
    NSUInteger _frameLength;
    NSArray *_shape;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_modelVersion;
    NSString *_modelDescription;
    NSString *_modelInputName;
    NSString *_modelOutputName;
    NSUInteger _loopCounter;
    *CGFloat _arrayDataPointer;
    NSUInteger _runFrequency;
    NSUInteger _minSamplesBetweenTriggers;
    BOOL _shouldResetBuffer;
    float _tapSpeed;
    AXPhoenixDataLogger *_logger;
}


@property (nonatomic) BOOL falsePositiveLoggingEnabled; // ivar: _falsePositiveLoggingEnabled


-(BOOL)_clippedDataShowsPrediction:(NSUInteger)arg0 ;
-(NSUInteger)_computeFrameLength;
-(NSUInteger)_countThresholdForGesturePrediction:(struct ? )arg0 ;
-(id)_clippedMultiArrayInputWithError:(*id)arg0 beforeTime:(CGFloat)arg1 ;
-(id)_createMultiArrayWithError:(*id)arg0 ;
-(id)_initializeModelFromURL:(id)arg0 outError:(*id)arg1 ;
-(id)_multiArrayInputForClassifierWithError:(*id)arg0 ;
-(id)_windowData:(BOOL)arg0 ;
-(id)configuration;
-(id)initWithDelegate:(id)arg0 modelURL:(id)arg1 configuration:(id)arg2 ;
-(id)version;
-(void)_handleAccelerometerData:(struct ? )arg0 withTimestamp:(CGFloat)arg1 ;
-(void)_logWindowData:(id)arg0 doubleTap:(BOOL)arg1 tapData:(struct ? )arg2 ;
-(void)dealloc;
-(void)handleAccelerometerData:(struct ? )arg0 withTimestamp:(CGFloat)arg1 ;
-(void)reset;
-(void)setPolicyOption:(int)arg0 ;
-(void)setShouldResetBuffer;
-(void)setTapSpeed:(float)arg0 ;


@end


#endif
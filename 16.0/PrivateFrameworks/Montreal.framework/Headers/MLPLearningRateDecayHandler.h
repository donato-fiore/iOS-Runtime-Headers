// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLPLEARNINGRATEDECAYHANDLER_H
#define MLPLEARNINGRATEDECAYHANDLER_H

@protocol MLPLearningRateDecayHandlerDelegate;

#import <Foundation/Foundation.h>


@interface MLPLearningRateDecayHandler : NSObject

@property (readonly) float decayRate; // ivar: _decayRate
@property (readonly) NSUInteger decaySteps; // ivar: _decaySteps
@property float decayedLearningRate; // ivar: _decayedLearningRate
@property (weak) NSObject<MLPLearningRateDecayHandlerDelegate> *delegate; // ivar: _delegate
@property NSUInteger globalSteps; // ivar: _globalSteps
@property (readonly) float learningRate; // ivar: _learningRate
@property (readonly) BOOL stairCase; // ivar: _stairCase


-(id)initWithLearningRate:(float)arg0 decaySteps:(NSUInteger)arg1 decayRate:(float)arg2 stairCase:(BOOL)arg3 ;
-(void)updateGlobalStep;


@end


#endif
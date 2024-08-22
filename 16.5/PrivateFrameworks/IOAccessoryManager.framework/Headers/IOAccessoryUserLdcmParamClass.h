// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IOACCESSORYUSERLDCMPARAMCLASS_H
#define IOACCESSORYUSERLDCMPARAMCLASS_H


#import <Foundation/Foundation.h>


@interface IOAccessoryUserLdcmParamClass : NSObject

@property NSUInteger dryPollingIntervalSec; // ivar: _dryPollingIntervalSec
@property CGFloat dryTransitionCapacitanceThreshold; // ivar: _dryTransitionCapacitanceThreshold
@property NSUInteger enableHalogenMitigationsAndUI; // ivar: _enableHalogenMitigationsAndUI
@property NSUInteger enableHalogenSnrTtr; // ivar: _enableHalogenSnrTtr
@property int fdpBehaviorMask; // ivar: _fdpBehaviorMask
@property NSUInteger ldcmArbiterRetrySec; // ivar: _ldcmArbiterRetrySec
@property NSUInteger ldcmStartMeasurementsDelayMs; // ivar: _ldcmStartMeasurementsDelayMs
@property NSUInteger ldcmStartMeasurementsRetryMs; // ivar: _ldcmStartMeasurementsRetryMs
@property NSUInteger maxUpFluctuationMv; // ivar: _maxUpFluctuationMv
@property NSUInteger maxVhiDurationSec; // ivar: _maxVhiDurationSec
@property NSUInteger minDryReadings; // ivar: _minDryReadings
@property NSUInteger minVhiDurationSec; // ivar: _minVhiDurationSec
@property NSUInteger numEisHalogenSamples; // ivar: _numEisHalogenSamples
@property int userBehaviorMask; // ivar: _userBehaviorMask
@property NSUInteger wetPollingIntervalSec; // ivar: _wetPollingIntervalSec
@property CGFloat wetTransitionCapacitanceThreshold; // ivar: _wetTransitionCapacitanceThreshold


-(id)init;


@end


#endif
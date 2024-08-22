// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HALOGENMEASUREMENT_H
#define HALOGENMEASUREMENT_H

@class BaseResourceArbiterClient, NSCondition, NSMutableData;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HalogenLdcmCalc.h"

@interface HalogenMeasurement : NSObject

@property (readonly, nonatomic) BaseResourceArbiterClient *arbiterClient; // ivar: _arbiterClient
@property (readonly, nonatomic) BOOL arbiterLocked; // ivar: _arbiterLocked
@property (readonly, nonatomic) BOOL arbitrationRequired; // ivar: _arbitrationRequired
@property *OpaqueAudioComponentInstance audioComponentInst; // ivar: _audioComponentInst
@property NSCondition *audioTimeoutCond; // ivar: _audioTimeoutCond
@property int audioTimeoutInSec; // ivar: _audioTimeoutInSec
@property int bitDepth; // ivar: _bitDepth
@property (readonly) CGFloat calCurrentNoiseLevel; // ivar: _calCurrentNoiseLevel
@property (readonly) CGFloat calCurrentSNR; // ivar: _calCurrentSNR
@property (readonly) CGFloat calCurrentSignalLevel; // ivar: _calCurrentSignalLevel
@property (readonly) CGFloat calVoltageNoiseLevel; // ivar: _calVoltageNoiseLevel
@property (readonly) CGFloat calVoltageSNR; // ivar: _calVoltageSNR
@property (readonly) CGFloat calVoltageSignalLevel; // ivar: _calVoltageSignalLevel
@property (readonly) int calibrationSampleOffsetInFrames; // ivar: _calibrationSampleOffsetInFrames
@property (readonly) CGFloat capacitanceInNanoF; // ivar: _capacitanceInNanoF
@property (readonly) CGFloat clippingScore; // ivar: _clippingScore
@property (readonly) CGFloat compensatedImpedance; // ivar: _compensatedImpedance
@property (readonly) CGFloat compensatedPhase; // ivar: _compensatedPhase
@property unsigned int connect; // ivar: _connect
@property NSMutableData *currentData; // ivar: _currentData
@property (readonly) CGFloat currentGainCorrection; // ivar: _currentGainCorrection
@property (readonly) CGFloat currentPhaseCompensation; // ivar: _currentPhaseCompensation
@property NSUInteger eisPinToken1; // ivar: _eisPinToken1
@property NSUInteger eisPinToken2; // ivar: _eisPinToken2
@property (readonly) CGFloat goertzelImpedance; // ivar: _goertzelImpedance
@property (readonly) CGFloat goertzelPhase; // ivar: _goertzelPhase
@property HalogenLdcmCalc *halogenLdcmCalc; // ivar: _halogenLdcmCalc
@property (readonly) int halogenResult; // ivar: _halogenResult
@property int hydraSettlingTimeInMs; // ivar: _hydraSettlingTimeInMs
@property int initalPhaseInDegrees; // ivar: _initalPhaseInDegrees
@property int inputFrameSizeInBytes; // ivar: _inputFrameSizeInBytes
@property BOOL isCalibrationDone; // ivar: _isCalibrationDone
@property BOOL isMeasurementDone; // ivar: _isMeasurementDone
@property (readonly, nonatomic) unsigned short maxOutputAmplitude; // ivar: _maxOutputAmplitude
@property (readonly) CGFloat measurementCondetSNR; // ivar: _measurementCondetSNR
@property (readonly) CGFloat measurementCurrentNoiseLevel; // ivar: _measurementCurrentNoiseLevel
@property (readonly) CGFloat measurementCurrentSNR; // ivar: _measurementCurrentSNR
@property (readonly) CGFloat measurementCurrentSignalLevel; // ivar: _measurementCurrentSignalLevel
@property int measurementSampleOffsetInFrames; // ivar: _measurementSampleOffsetInFrames
@property (readonly) CGFloat measurementVoltageNoiseLevel; // ivar: _measurementVoltageNoiseLevel
@property (readonly) CGFloat measurementVoltageSNR; // ivar: _measurementVoltageSNR
@property (readonly) CGFloat measurementVoltageSignalLevel; // ivar: _measurementVoltageSignalLevel
@property int nHydraSettlingSamples; // ivar: _nHydraSettlingSamples
@property int nInputChannels; // ivar: _nInputChannels
@property int nMeasurementSamples; // ivar: _nMeasurementSamples
@property int nOutputChannels; // ivar: _nOutputChannels
@property int nPaddingSamples; // ivar: _nPaddingSamples
@property int nTotalSamples; // ivar: _nTotalSamples
@property int nWarmupSamples; // ivar: _nWarmupSamples
@property int outputFrameSizeInBytes; // ivar: _outputFrameSizeInBytes
@property NSMutableData *pcmInputData; // ivar: _pcmInputData
@property int pcmInputDataIndexInBytes; // ivar: _pcmInputDataIndexInBytes
@property int pcmInputDataMaxSzInBytes; // ivar: _pcmInputDataMaxSzInBytes
@property int pcmInputDataSampleCnt; // ivar: _pcmInputDataSampleCnt
@property NSMutableData *pcmOutputData; // ivar: _pcmOutputData
@property int pcmOutputDataIndexInBytes; // ivar: _pcmOutputDataIndexInBytes
@property int pcmOutputDataMaxSzInBytes; // ivar: _pcmOutputDataMaxSzInBytes
@property int pinToMeasure; // ivar: _pinToMeasure
@property (nonatomic) int powerState; // ivar: _powerState
@property NSCondition *powerStateCond; // ivar: _powerStateCond
@property (readonly) CGFloat precalCurrentNoiseLevel; // ivar: _precalCurrentNoiseLevel
@property (readonly) CGFloat precalCurrentSNR; // ivar: _precalCurrentSNR
@property (readonly) CGFloat precalCurrentSignalLevel; // ivar: _precalCurrentSignalLevel
@property (readonly) CGFloat precalVoltageNoiseLevel; // ivar: _precalVoltageNoiseLevel
@property (readonly) CGFloat precalVoltageSNR; // ivar: _precalVoltageSNR
@property (readonly) CGFloat precalVoltageSignalLevel; // ivar: _precalVoltageSignalLevel
@property (readonly) int precalibrationSampleOffsetInFrames; // ivar: _precalibrationSampleOffsetInFrames
@property (readonly) CGFloat resistanceInOhms; // ivar: _resistanceInOhms
@property int sampleRate; // ivar: _sampleRate
@property unsigned int service; // ivar: _service
@property (readonly, nonatomic) BOOL shouldInvertData; // ivar: _shouldInvertData
@property CGFloat signalFreq; // ivar: _signalFreq
@property (readonly, nonatomic) unsigned short signalOffset; // ivar: _signalOffset
@property (nonatomic) unsigned int systemPowerIterator; // ivar: _systemPowerIterator
@property (nonatomic) *IONotificationPort systemPowerNotifyPortRef; // ivar: _systemPowerNotifyPortRef
@property (nonatomic) unsigned int systemPowerPort; // ivar: _systemPowerPort
@property (nonatomic) NSObject<OS_dispatch_queue> *systemPowerQueue; // ivar: _systemPowerQueue
@property NSMutableData *voltageData; // ivar: _voltageData
@property (readonly) CGFloat voltageGainCorrection; // ivar: _voltageGainCorrection
@property int warmupTimeInMs; // ivar: _warmupTimeInMs


-(BOOL)_allocBuffers;
-(BOOL)_connectToAccessoryManager:(int)arg0 ;
-(BOOL)_createSleepWakeNotifier;
-(BOOL)_doHalogenLdcmCalc:(BOOL)arg0 isReceptacleWet:(BOOL)arg1 withWetTransitionThreshold:(CGFloat)arg2 withDryTransitionThreshold:(CGFloat)arg3 ;
-(BOOL)_initArbiter;
-(BOOL)_initAudioPath;
-(id)getResultString;
-(id)initWithSize:(int)arg0 onPort:(int)arg1 ;
-(int)doMeasurement:(BOOL)arg0 onPin:(int)arg1 isReceptacleEmpty:(BOOL)arg2 isReceptacleWet:(BOOL)arg3 withWetTransitionThreshold:(CGFloat)arg4 withDryTransitionThreshold:(CGFloat)arg5 ;
-(int)saveAsWav:(id)arg0 ;
-(void)_deinitArbiter;
-(void)_deinitAudioPath;
-(void)_destroySleepWakeNotifier;
-(void)_freeBuffers;
-(void)_generateSineWave;
-(void)_resetCalcValues;
-(void)dealloc;


@end


#endif
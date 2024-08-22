// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HALOGENTYPEC_H
#define HALOGENTYPEC_H

@class NSCondition, NSMutableData, NSString, NSMutableString;
@protocol HalogenAudioDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HalogenAudio.h"
#import "HalogenCalcTypeC.h"

@interface HalogenTypeC : NSObject <HalogenAudioDelegate>



@property int AceSettlingTimeInMs; // ivar: _AceSettlingTimeInMs
@property *OpaqueAudioComponentInstance audioComponentInst; // ivar: _audioComponentInst
@property NSCondition *audioTimeoutCond; // ivar: _audioTimeoutCond
@property int audioTimeoutInSec; // ivar: _audioTimeoutInSec
@property int bitDepth; // ivar: _bitDepth
@property (readonly) CGFloat calCurrentAmplitude; // ivar: _calCurrentAmplitude
@property (readonly) CGFloat calCurrentNoiseLevel; // ivar: _calCurrentNoiseLevel
@property (readonly) CGFloat calCurrentSNR; // ivar: _calCurrentSNR
@property (readonly) CGFloat calCurrentSignalLevel; // ivar: _calCurrentSignalLevel
@property (readonly) CGFloat calVoltageAmplitude; // ivar: _calVoltageAmplitude
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
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) CGFloat goertzelImpedance; // ivar: _goertzelImpedance
@property (readonly) CGFloat goertzelPhase; // ivar: _goertzelPhase
@property HalogenAudio *halogenAudioUnit; // ivar: _halogenAudioUnit
@property HalogenCalcTypeC *halogenCalcTypeC; // ivar: _halogenCalcTypeC
@property (readonly) int halogenResult; // ivar: _halogenResult
@property (readonly) NSUInteger hash;
@property int initalPhaseInDegrees; // ivar: _initalPhaseInDegrees
@property int inputFrameSizeInBytes; // ivar: _inputFrameSizeInBytes
@property BOOL isCalibrationDone; // ivar: _isCalibrationDone
@property BOOL isInternalBuild; // ivar: _isInternalBuild
@property BOOL isMeasurementDone; // ivar: _isMeasurementDone
@property int ldcmState; // ivar: _ldcmState
@property (readonly, nonatomic) unsigned short maxOutputAmplitude; // ivar: _maxOutputAmplitude
@property BOOL measureSBU; // ivar: _measureSBU
@property (readonly) CGFloat measurementCondetSNR; // ivar: _measurementCondetSNR
@property (readonly) CGFloat measurementCurrentAmplitude; // ivar: _measurementCurrentAmplitude
@property (readonly) CGFloat measurementCurrentNoiseLevel; // ivar: _measurementCurrentNoiseLevel
@property (readonly) CGFloat measurementCurrentPhase; // ivar: _measurementCurrentPhase
@property (readonly) CGFloat measurementCurrentSNR; // ivar: _measurementCurrentSNR
@property (readonly) CGFloat measurementCurrentSignalLevel; // ivar: _measurementCurrentSignalLevel
@property NSMutableString *measurementInfoAcchalogenOutputString; // ivar: _measurementInfoAcchalogenOutputString
@property (nonatomic) ? measurementInfoDefault; // ivar: _measurementInfoDefault
@property NSMutableString *measurementInfoOutputString; // ivar: _measurementInfoOutputString
@property (readonly) CGFloat measurementLoadImpedanceMagnitude; // ivar: _measurementLoadImpedanceMagnitude
@property (readonly) CGFloat measurementLoadImpedancePhase; // ivar: _measurementLoadImpedancePhase
@property int measurementSampleOffsetInFrames; // ivar: _measurementSampleOffsetInFrames
@property (readonly) CGFloat measurementVoltageAmplitude; // ivar: _measurementVoltageAmplitude
@property (readonly) CGFloat measurementVoltageNoiseLevel; // ivar: _measurementVoltageNoiseLevel
@property (readonly) CGFloat measurementVoltagePhase; // ivar: _measurementVoltagePhase
@property (readonly) CGFloat measurementVoltageSNR; // ivar: _measurementVoltageSNR
@property (readonly) CGFloat measurementVoltageSignalLevel; // ivar: _measurementVoltageSignalLevel
@property int nAceSettlingSamples; // ivar: _nAceSettlingSamples
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
@property BOOL selfTestCapable; // ivar: _selfTestCapable
@property unsigned int service; // ivar: _service
@property CGFloat signalFreq; // ivar: _signalFreq
@property (readonly, nonatomic) unsigned short signalOffset; // ivar: _signalOffset
@property (readonly) Class superclass;
@property (nonatomic) unsigned int systemPowerIterator; // ivar: _systemPowerIterator
@property (nonatomic) *IONotificationPort systemPowerNotifyPortRef; // ivar: _systemPowerNotifyPortRef
@property (nonatomic) unsigned int systemPowerPort; // ivar: _systemPowerPort
@property (nonatomic) NSObject<OS_dispatch_queue> *systemPowerQueue; // ivar: _systemPowerQueue
@property NSMutableData *voltageData; // ivar: _voltageData
@property (readonly) CGFloat voltageGainCorrection; // ivar: _voltageGainCorrection
@property int warmupTimeInMs; // ivar: _warmupTimeInMs
@property (readonly) BOOL wetTooLong; // ivar: _wetTooLong


-(BOOL)_allocBuffers;
-(BOOL)_connectToAccessoryManager:(int)arg0 ;
-(BOOL)_createSleepWakeNotifier;
-(BOOL)_doLDCMCalculation:(BOOL)arg0 isReceptacleWet:(BOOL)arg1 withWetTransitionThreshold:(CGFloat)arg2 withDryTransitionThreshold:(CGFloat)arg3 pinParasitics:(CGFloat)arg4 measurementType:(int)arg5 ;
-(BOOL)_readCalibrationParameters:(id)arg0 ;
-(BOOL)_writeCalResults:(id)arg0 ;
-(BOOL)isHWSelfTestCapable;
-(BOOL)setLiquidDetected:(BOOL)arg0 ;
-(BOOL)setMitigations:(BOOL)arg0 ;
-(BOOL)supportsSelfTest;
-(id)_buildMeasurementOutputString:(struct ? *)arg0 ;
-(id)_buildVerboseMeasurementOutputString:(struct ? *)arg0 ;
-(id)_getHalogenMeasurementTypeString:(int)arg0 ;
-(id)_getLDCMPinString:(int)arg0 ;
-(id)getHalogenResultString:(int)arg0 ;
-(id)getMeasurementOutputString;
-(id)getVerboseMeasurementOutputString;
-(id)initWithParams:(int)arg0 onPort:(int)arg1 ;
-(int)_doLDCMMeasurement:(int)arg0 isReceptacleEmpty:(BOOL)arg1 isReceptacleWet:(BOOL)arg2 withWetTransitionThreshold:(CGFloat)arg3 withDryTransitionThreshold:(CGFloat)arg4 measurementType:(int)arg5 ;
-(int)doLDCMMeasurement:(int)arg0 isCalibrationNeeded:(BOOL)arg1 isReceptacleEmpty:(BOOL)arg2 isReceptacleWet:(BOOL)arg3 withWetTransitionThreshold:(CGFloat)arg4 withDryTransitionThreshold:(CGFloat)arg5 ;
-(int)playbackCallBackFunc:(*unsigned int)arg0 AudioTimeStamp:(struct AudioTimeStamp *)arg1 busNum:(unsigned int)arg2 numFrames:(unsigned int)arg3 AudioBufferList:(struct AudioBufferList *)arg4 ;
-(int)recordCallBackFunc:(*unsigned int)arg0 AudioTimeStamp:(struct AudioTimeStamp *)arg1 busNum:(unsigned int)arg2 numFrames:(unsigned int)arg3 AudioBufferList:(struct AudioBufferList *)arg4 ;
-(int)saveAsWav:(id)arg0 ;
-(struct ? )getMeasurementInfo;
-(void)_destroySleepWakeNotifier;
-(void)_freeBuffers;
-(void)_generateSineWave;
-(void)_resetCalcValues;
-(void)_runHPMTool:(BOOL)arg0 ;
-(void)_storeMeasurementData:(int)arg0 measurementType:(int)arg1 measurementInfo:(struct ? *)arg2 halogenResult:(int)arg3 ;
-(void)dealloc;


@end


#endif
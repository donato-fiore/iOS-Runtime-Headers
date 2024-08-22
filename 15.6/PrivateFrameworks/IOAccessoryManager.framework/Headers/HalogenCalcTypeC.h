// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HALOGENCALCTYPEC_H
#define HALOGENCALCTYPEC_H

@class NSMutableData;

#import <Foundation/Foundation.h>


@interface HalogenCalcTypeC : NSObject

@property CGFloat LDCMACCapacitance; // ivar: _LDCMACCapacitance
@property CGFloat adcGain; // ivar: _adcGain
@property (readonly) CGFloat calCurrentAmplitude; // ivar: _calCurrentAmplitude
@property (readonly) CGFloat calCurrentNoiseLevel; // ivar: _calCurrentNoiseLevel
@property (readonly) CGFloat calCurrentSNR; // ivar: _calCurrentSNR
@property (readonly) CGFloat calCurrentSignalLevel; // ivar: _calCurrentSignalLevel
@property (readonly) CGFloat calVoltageAmplitude; // ivar: _calVoltageAmplitude
@property (readonly) CGFloat calVoltageNoiseLevel; // ivar: _calVoltageNoiseLevel
@property (readonly) CGFloat calVoltageSNR; // ivar: _calVoltageSNR
@property (readonly) CGFloat calVoltageSignalLevel; // ivar: _calVoltageSignalLevel
@property (readonly) CGFloat capacitanceInNanoF; // ivar: _capacitanceInNanoF
@property (readonly) CGFloat compensatedImpedance; // ivar: _compensatedImpedance
@property (readonly) CGFloat compensatedPhase; // ivar: _compensatedPhase
@property (readonly) CGFloat currentGainCorrection; // ivar: _currentGainCorrection
@property (readonly) CGFloat currentPhaseCompensation; // ivar: _currentPhaseCompensation
@property *OpaqueFFTSetupD fftContext; // ivar: _fftContext
@property (readonly) CGFloat goertzelImpedance; // ivar: _goertzelImpedance
@property (readonly) CGFloat goertzelPhase; // ivar: _goertzelPhase
@property (readonly) CGFloat loadImpedanceInOhms; // ivar: _loadImpedanceInOhms
@property (readonly) CGFloat loadPhase; // ivar: _loadPhase
@property (readonly) CGFloat measurementCurrentAmplitude; // ivar: _measurementCurrentAmplitude
@property (readonly) CGFloat measurementCurrentNoiseLevel; // ivar: _measurementCurrentNoiseLevel
@property (readonly) CGFloat measurementCurrentPhase; // ivar: _measurementCurrentPhase
@property (readonly) CGFloat measurementCurrentSNR; // ivar: _measurementCurrentSNR
@property (readonly) CGFloat measurementCurrentSignalLevel; // ivar: _measurementCurrentSignalLevel
@property (readonly) CGFloat measurementVoltageAmplitude; // ivar: _measurementVoltageAmplitude
@property (readonly) CGFloat measurementVoltageNoiseLevel; // ivar: _measurementVoltageNoiseLevel
@property (readonly) CGFloat measurementVoltagePhase; // ivar: _measurementVoltagePhase
@property (readonly) CGFloat measurementVoltageSNR; // ivar: _measurementVoltageSNR
@property (readonly) CGFloat measurementVoltageSignalLevel; // ivar: _measurementVoltageSignalLevel
@property int nSamples; // ivar: _nSamples
@property CGFloat parasiticCap; // ivar: _parasiticCap
@property CGFloat pinParasitics; // ivar: _pinParasitics
@property (readonly) CGFloat resistanceInOhms; // ivar: _resistanceInOhms
@property CGFloat sampleRate; // ivar: _sampleRate
@property CGFloat seriesRCResistance; // ivar: _seriesRCResistance
@property CGFloat seriesResistance; // ivar: _seriesResistance
@property CGFloat seriesTotalImpedance; // ivar: _seriesTotalImpedance
@property CGFloat signalFrequency; // ivar: _signalFrequency
@property int sizeofSample; // ivar: _sizeofSample
@property CGFloat tiaGain; // ivar: _tiaGain
@property NSMutableData *tmp1DataBuff; // ivar: _tmp1DataBuff
@property int tmp1DataBuffSize; // ivar: _tmp1DataBuffSize
@property NSMutableData *tmp2DataBuff; // ivar: _tmp2DataBuff
@property int tmp2DataBuffSize; // ivar: _tmp2DataBuffSize
@property NSMutableData *tmp3DataBuff; // ivar: _tmp3DataBuff
@property int tmp3DataBuffSize; // ivar: _tmp3DataBuffSize
@property (readonly) CGFloat voltageGainCorrection; // ivar: _voltageGainCorrection
@property (readonly) BOOL wetTooLong; // ivar: _wetTooLong


-(BOOL)_allocBuffers;
-(BOOL)_isResistiveOnly:(CGFloat)arg0 resistanceInOhms:(CGFloat)arg1 loadPhase:(CGFloat)arg2 ;
-(CGFloat)_snr:(id)arg0 withGain:(CGFloat)arg1 hasSignalLevel:(*CGFloat)arg2 hasNoiseLevel:(*CGFloat)arg3 ;
-(id)initWithParams:(int)arg0 signalFrequency:(CGFloat)arg1 sampleRate:(NSUInteger)arg2 tiaGain:(CGFloat)arg3 adcGain:(CGFloat)arg4 parasiticCap:(CGFloat)arg5 ;
-(int)doCalibration:(id)arg0 withCurrentData:(id)arg1 ;
-(int)doLiquidDetection:(id)arg0 withCurrentData:(id)arg1 isReceptacleEmpty:(BOOL)arg2 isReceptacleWet:(BOOL)arg3 withWetTransitionThreshold:(CGFloat)arg4 withDryTransitionThreshold:(CGFloat)arg5 pinParasitics:(CGFloat)arg6 measurementType:(int)arg7 ;
-(void)_applyFractionalPhaseShift:(id)arg0 withPhaseDelay:(CGFloat)arg1 ;
-(void)_applyGain:(CGFloat)arg0 toData:(id)arg1 ;
-(void)_applyHanningWindow:(id)arg0 withSize:(int)arg1 ;
-(void)_applyTiaGain:(id)arg0 toCurrentData:(id)arg1 ;
-(void)_doMuxComp:(CGFloat)arg0 withPhase:(CGFloat)arg1 ;
-(void)_freeBuffers;
-(void)_goertzelSecondOrder:(id)arg0 hasFftValue:(*CGFloat)arg1 hasPhase:(*CGFloat)arg2 withHanning:(BOOL)arg3 amplitudeCorrectionFactor:(CGFloat)arg4 ;
-(void)_rcSolver;
-(void)dealloc;


@end


#endif
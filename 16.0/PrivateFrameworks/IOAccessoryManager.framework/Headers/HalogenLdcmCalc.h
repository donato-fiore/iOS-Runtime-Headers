// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HALOGENLDCMCALC_H
#define HALOGENLDCMCALC_H

@class NSMutableData;

#import <Foundation/Foundation.h>


@interface HalogenLdcmCalc : NSObject

@property CGFloat adcGain; // ivar: _adcGain
@property (readonly) CGFloat calCurrentNoiseLevel; // ivar: _calCurrentNoiseLevel
@property (readonly) CGFloat calCurrentSNR; // ivar: _calCurrentSNR
@property (readonly) CGFloat calCurrentSignalLevel; // ivar: _calCurrentSignalLevel
@property (readonly) CGFloat calVoltageNoiseLevel; // ivar: _calVoltageNoiseLevel
@property (readonly) CGFloat calVoltageSNR; // ivar: _calVoltageSNR
@property (readonly) CGFloat calVoltageSignalLevel; // ivar: _calVoltageSignalLevel
@property (readonly) CGFloat capacitanceInNanoF; // ivar: _capacitanceInNanoF
@property int clipDetectWindowSize; // ivar: _clipDetectWindowSize
@property (readonly) CGFloat clippingScore; // ivar: _clippingScore
@property (readonly) CGFloat compensatedImpedance; // ivar: _compensatedImpedance
@property (readonly) CGFloat compensatedPhase; // ivar: _compensatedPhase
@property (readonly) CGFloat currentGainCorrection; // ivar: _currentGainCorrection
@property (readonly) CGFloat currentPhaseCompensation; // ivar: _currentPhaseCompensation
@property int diffWindowSize; // ivar: _diffWindowSize
@property *OpaqueFFTSetupD fftContext; // ivar: _fftContext
@property (readonly) CGFloat goertzelImpedance; // ivar: _goertzelImpedance
@property (readonly) CGFloat goertzelPhase; // ivar: _goertzelPhase
@property CGFloat hydraImpedance; // ivar: _hydraImpedance
@property CGFloat hydraR; // ivar: _hydraR
@property BOOL isDigitalFilterTrigger; // ivar: _isDigitalFilterTrigger
@property CGFloat ldcmAcCap; // ivar: _ldcmAcCap
@property (readonly) CGFloat measurementCondetSNR; // ivar: _measurementCondetSNR
@property (readonly) CGFloat measurementCurrentNoiseLevel; // ivar: _measurementCurrentNoiseLevel
@property (readonly) CGFloat measurementCurrentSNR; // ivar: _measurementCurrentSNR
@property (readonly) CGFloat measurementCurrentSignalLevel; // ivar: _measurementCurrentSignalLevel
@property (readonly) CGFloat measurementVoltageNoiseLevel; // ivar: _measurementVoltageNoiseLevel
@property (readonly) CGFloat measurementVoltageSNR; // ivar: _measurementVoltageSNR
@property (readonly) CGFloat measurementVoltageSignalLevel; // ivar: _measurementVoltageSignalLevel
@property CGFloat movesumClipThreshold; // ivar: _movesumClipThreshold
@property int nSamples; // ivar: _nSamples
@property (readonly) CGFloat precalCurrentNoiseLevel; // ivar: _precalCurrentNoiseLevel
@property (readonly) CGFloat precalCurrentSNR; // ivar: _precalCurrentSNR
@property (readonly) CGFloat precalCurrentSignalLevel; // ivar: _precalCurrentSignalLevel
@property (readonly) CGFloat precalVoltageNoiseLevel; // ivar: _precalVoltageNoiseLevel
@property (readonly) CGFloat precalVoltageSNR; // ivar: _precalVoltageSNR
@property (readonly) CGFloat precalVoltageSignalLevel; // ivar: _precalVoltageSignalLevel
@property (readonly) CGFloat resistanceInOhms; // ivar: _resistanceInOhms
@property CGFloat sampleRate; // ivar: _sampleRate
@property CGFloat sanitycheckCurrentGainCorrectionLowerbound; // ivar: _sanitycheckCurrentGainCorrectionLowerbound
@property CGFloat sanitycheckCurrentGainCorrectionUpperbound; // ivar: _sanitycheckCurrentGainCorrectionUpperbound
@property CGFloat sanitycheckCurrentPhaseCompensationLowerbound; // ivar: _sanitycheckCurrentPhaseCompensationLowerbound
@property CGFloat sanitycheckCurrentPhaseCompensationUpperbound; // ivar: _sanitycheckCurrentPhaseCompensationUpperbound
@property CGFloat sanitycheckImpedanceLowerbound; // ivar: _sanitycheckImpedanceLowerbound
@property CGFloat sanitycheckImpedanceUpperbound; // ivar: _sanitycheckImpedanceUpperbound
@property CGFloat sanitycheckPhaseLowerbound; // ivar: _sanitycheckPhaseLowerbound
@property CGFloat sanitycheckPhaseUperbound; // ivar: _sanitycheckPhaseUperbound
@property CGFloat sanitycheckVoltageGainCorrectionLowerbound; // ivar: _sanitycheckVoltageGainCorrectionLowerbound
@property CGFloat sanitycheckVoltageGainCorrectionUpperbound; // ivar: _sanitycheckVoltageGainCorrectionUpperbound
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


-(BOOL)_allocBuffers;
-(BOOL)_isClipped:(id)arg0 ;
-(CGFloat)_condetSnr:(*CGFloat)arg0 ;
-(CGFloat)_mean:(*CGFloat)arg0 ofSize:(NSUInteger)arg1 ;
-(CGFloat)_median:(*CGFloat)arg0 ofSize:(NSUInteger)arg1 ;
-(CGFloat)_sineExtractor:(id)arg0 ;
-(CGFloat)_snr:(id)arg0 withGain:(CGFloat)arg1 hasSignalLevel:(*CGFloat)arg2 hasNoiseLevel:(*CGFloat)arg3 hasCondetSnr:(*CGFloat)arg4 ;
-(CGFloat)_stdev:(*CGFloat)arg0 ofSize:(NSUInteger)arg1 ;
-(CGFloat)_variance:(*CGFloat)arg0 ofSize:(NSUInteger)arg1 ;
-(id)initWithSize:(int)arg0 ;
-(int)doCalibration:(id)arg0 withCurrentData:(id)arg1 ;
-(int)doLiquidDetection:(id)arg0 withCurrentData:(id)arg1 isReceptacleEmpty:(BOOL)arg2 isReceptacleWet:(BOOL)arg3 withWetTransitionThreshold:(CGFloat)arg4 withDryTransitionThreshold:(CGFloat)arg5 ;
-(int)doPreCalibration:(id)arg0 withCurrentData:(id)arg1 ;
-(void)_applyDigitalFilter:(id)arg0 ;
-(void)_applyFractionalPhaseShift:(id)arg0 withPhaseDelay:(CGFloat)arg1 ;
-(void)_applyGain:(CGFloat)arg0 toData:(id)arg1 ;
-(void)_applyHanningWindow:(id)arg0 withSize:(int)arg1 ;
-(void)_applyTiaGain:(id)arg0 toCurrentData:(id)arg1 ;
-(void)_doHydraComp:(CGFloat)arg0 withPhase:(CGFloat)arg1 ;
-(void)_freeBuffers;
-(void)_goertzelSecondOrder:(id)arg0 hasFftValue:(*CGFloat)arg1 hasPhase:(*CGFloat)arg2 withHanning:(BOOL)arg3 ;
-(void)_rcSolver;
-(void)_reconstructSignal:(id)arg0 ;
-(void)dealloc;


@end


#endif
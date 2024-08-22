// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CBAODTRANSITIONCONTROLLER_H
#define CBAODTRANSITIONCONTROLLER_H

@protocol CBBrightnessProxy, OS_dispatch_source;


#import "CBModule.h"
#import "CBAPEndpoint.h"
#import "CBRampManager.h"
#import "CBAODThresholdModule.h"

@interface CBAODTransitionController : CBModule {
    id<CBBrightnessProxy> *_brtCtl;
    CBAPEndpoint *_endpoint;
    id *_currentState;
    id *_currentTarget;
    id *_pendingState;
    NSUInteger _displayID;
    CBRampManager *_rampManager;
    float _edrRampDurationPerStop;
    float _currentSDRBrightness;
    float _targetSDRBrightness;
    float _minNits;
    float _maxNits;
    float _currentEDRHeadroom;
    float _targetEDRHeadroom;
    float _currentAAPFactor;
    float _targetAAPFactor;
    float _currentBrightnessLimit;
    float _targetBrightnessLimit;
    int _currentFrequency;
    float _currentTrustedLux;
    float _currentLowAmbientAdaptationScaler;
    float _targetLowAmbientAdaptationScaler;
    id *_rampDoneCallback;
    id *_rampCanceledCallback;
    vector<CBFlipBookEntry, std::allocator<CBFlipBookEntry>> _flipBookEntries;
    ? _currentFlipBookEntry;
    ? _currentFlipBookHeader;
    CBAODThresholdModule *_thresholdModule;
    NSObject<OS_dispatch_source> *_lastUpdateSwappedTimer;
    *ColorEffects cfx;
    float _currentMatrix;
    float _targetMatrix;
}


@property (nonatomic) float brightnessFactor; // ivar: _brightnessFactor
@property (nonatomic) float currentDisplayNits; // ivar: _currentDisplayNits
@property (nonatomic) BOOL displayON; // ivar: _displayON
@property BOOL liveUpdates;
@property BOOL liveUpdatesOverride; // ivar: _liveUpdatesOverride
@property float nitsCap; // ivar: _nitsCap
@property float nitsOverride; // ivar: _nitsOverride
@property float remainingTransitionLength; // ivar: _remainingTransitionLength


-(BOOL)applyPendingUpdates;
-(BOOL)cancelDCPTransition;
-(BOOL)cancelTransition;
-(BOOL)commitBrightness:(float)arg0 force:(BOOL)arg1 ;
-(BOOL)flipBookEntryForID:(int)arg0 entry:(struct ? *)arg1 ;
-(BOOL)initAPEndpoint;
-(BOOL)requestColorRampTransitionStop;
-(BOOL)requestTransitionStopForIdentifier:(id)arg0 ;
-(BOOL)sendCurrentFlipBook;
-(BOOL)shallUpdateWhitepointFrom:(float)arg0 target:(float)arg1 ;
// -(BOOL)startTransition:(id)arg0 length:(float)arg1 forceUpdate:(BOOL)arg2 rampDoneCallback:(id)arg3 rampCanceledCallback:(unk)arg4  ;
// -(BOOL)startTransition:(id)arg0 transitionParameters:(struct ? )arg1 rampDoneCallback:(id)arg2 rampCanceledCallback:(unk)arg3  ;
-(float)brightnessLimitProgressCallback:(float)arg0 rampContext:(id)arg1 ;
-(float)calculateSigmoidProgressForLinearProgress:(float)arg0 ;
-(float)calculateSpringProgressForLinearProgress:(float)arg0 ;
-(float)getFloatValueFrom:(id)arg0 key:(id)arg1 ;
-(float)getFloatValueFrom:(id)arg0 key:(id)arg1 subkey:(id)arg2 ;
-(float)sdrBrightnessProgressCallback:(float)arg0 rampContext:(id)arg1 ;
-(float)sdrBrightnessProgressCallback:(float)arg0 rampContext:(id)arg1 profile:(NSUInteger)arg2 ;
-(float)sigmoidFunction:(float)arg0 ;
-(float)transitionDurationFromCurrent:(float)arg0 toTarget:(float)arg1 ;
-(id)copyColourRampStatsWithLength:(float)arg0 frequency:(float)arg1 origin:(struct ? )arg2 target:(struct ? )arg3 ;
-(id)copyContext;
-(id)copyRampStatsWithLength:(float)arg0 frequency:(float)arg1 origin:(float)arg2 target:(float)arg3 ;
-(id)initWithCBBrtControl:(id)arg0 andQueue:(id)arg1 ;
-(id)initWithCBBrtControl:(id)arg0 andThresholdModule:(id)arg1 andQueue:(id)arg2 ;
-(int)currentTransitionUpdateID;
-(struct ? )chromaticityForMatrix:(float)arg0 ;
-(void)activateLastUpdateSwappedTimerWithTimeout:(float)arg0 ;
-(void)addFlipBookEntry:(struct ? )arg0 ;
-(void)checkBootArgsConfiguration;
-(void)clockUpdateHandler:(id)arg0 ;
-(void)colorMatrix:(float)arg0 fromState:(id)arg1 ;
-(void)colorRampRoutine:(struct ? *)arg0 ;
-(void)constructFlipBookData:(*char *)arg0 size:(*unsigned int)arg1 ;
-(void)dealloc;
-(void)enableDCPFlipBookUpdates:(BOOL)arg0 ;
-(void)initColorEffects;
-(void)logTransitionParameters:(struct ? )arg0 ;
-(void)processInitialColorMatrixFromState:(id)arg0 ;
-(void)rampsDoneCallback:(id)arg0 ;
-(void)releaseCallbacks;
-(void)releaseLastUpdateSwappedTimer;
-(void)sendNotificationForKey:(id)arg0 andValue:(id)arg1 ;
-(void)setDurationOfEDRRamp:(float)arg0 ;
-(void)setInitialState:(id)arg0 ;
-(void)setUpFlipBookHeaderWithLength:(float)arg0 frequency:(int)arg1 lux:(float)arg2 ;
-(void)updateAAPFactor:(float)arg0 rampDuration:(CGFloat)arg1 ;
-(void)updateAmbient:(float)arg0 ;
-(void)updateBrightnessLimit:(float)arg0 ;
-(void)updateColorRamp:(id)arg0 ;
-(void)updateEDRHeadroom:(float)arg0 ;
-(void)updateFlipBookEntryWithAAPFactor:(float)arg0 ;
-(void)updateFlipBookEntryWithBrightness:(float)arg0 ;
-(void)updateFlipBookEntryWithBrightnessLimit:(float)arg0 ;
-(void)updateLowAmbientAdaptationScaler:(float)arg0 ;
-(void)updateSDRBrightness:(float)arg0 ;


@end


#endif
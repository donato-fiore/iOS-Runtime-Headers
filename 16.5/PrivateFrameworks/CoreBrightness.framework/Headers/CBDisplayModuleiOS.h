// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CBDISPLAYMODULEIOS_H
#define CBDISPLAYMODULEIOS_H

@class NSMutableDictionary, NSMutableArray, NSString;
@protocol CBAODProtocol, CBBrightnessProxy, OS_dispatch_source;


#import "CBDisplayModule.h"
#import "CBAurora.h"
#import "CBEDR.h"
#import "CBSBIM.h"
#import "CBFrameStats.h"

@interface CBDisplayModuleiOS : CBDisplayModule <CBAODProtocol>

 {
    float _trustedLux;
    id<CBBrightnessProxy> *_brtCtl;
    CBAurora *_aurora;
    float _minNits;
    float _midNits;
    float _maxNits;
    float _maxNitsEDR;
    float _maxNitsPanel;
    float _nitsSDR;
    float _dynSliderCap;
    float _currentCapToCA;
    BOOL _capToCAIsRamping;
    BOOL _blrEnabled;
    BOOL _harmonyEnabled;
    CBEDR *_edr;
    CBSBIM *_sbim;
    float _appliedHeadroom;
    float _requestedHeadroom;
    BOOL _useReferenceHeadroom;
    id *_lastEDRHeadroomRequestFromCA;
    NSUInteger _edrState;
    BOOL _brightnessControlEnabled;
    float _appliedComp;
    BOOL _ecoMode;
    BOOL _displayRequiresBDM;
    float _bdmLux1;
    float _bdmLux2;
    NSObject<OS_dispatch_source> *_apceTimer;
    BOOL _rtplcSupported;
    BOOL _rtplcCapApplied;
    float _currentRTPLCTarget;
    float _nitsAtRTPLCRampStart;
    float _rtplcCap;
    NSUInteger _rtplcState;
    recoverycurve_t _hdrRTPLCRecoveryCurve;
    NSUInteger _transactionID;
    NSMutableDictionary *_pendingCommitedTransactions;
    CBFrameStats *_frameStats;
    NSMutableArray *_cachedProperties;
    NSMutableArray *_cachedKeys;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) *__Display displayInternal; // ivar: _displayInternal
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)edrIsEngaged;
-(BOOL)handleAODStateUpdate:(NSUInteger)arg0 transitionTime:(float)arg1 context:(id)arg2 ;
-(BOOL)luxHasCrossedBDMThreshold:(float)arg0 ;
-(BOOL)setProperty:(id)arg0 forKey:(id)arg1 ;
-(BOOL)shouldForceCapRamp;
-(char *)edrStateToString:(NSUInteger)arg0 ;
-(char *)rtplcStateToString:(NSUInteger)arg0 ;
-(float)computeBrightnessCompensation;
-(float)computeTargetHDRBrightnessForAPCE:(float)arg0 andScale:(float)arg1 ;
-(id)className;
-(id)copyIdentifiers;
-(id)copyPropertyForKey:(id)arg0 ;
-(id)copyPropertyForKey:(id)arg0 withParameter:(id)arg1 ;
-(id)copyPropertyInternalForKey:(id)arg0 ;
-(id)initWithBacklight:(unsigned int)arg0 queue:(id)arg1 brtCtl:(id)arg2 ;
-(id)initWithBacklight:(unsigned int)arg0 queue:(id)arg1 display:(id)arg2 ;
-(void)apceTimerCallback:(id)arg0 ;
-(void)createAPCEMonitorWithFrequency:(float)arg0 ;
-(void)dealloc;
-(void)deleteAPCEMonitor;
-(void)handleAttachedNotification;
-(void)handleDisplayBrightnessUpdate:(id)arg0 ;
-(void)handleEDRHeadroomRequest:(id)arg0 ;
-(void)handleFrameInfo:(struct ? )arg0 ;
-(void)handleNotificationForKey:(id)arg0 withProperty:(id)arg1 ;
-(void)initialiseAurora;
-(void)initialiseEDR;
-(void)initialiseSDR;
-(void)sendNotificationForKey:(id)arg0 withValue:(id)arg1 ;
-(void)start;
-(void)stop;
-(void)updateEDRStateForEvent:(NSUInteger)arg0 andHeadroom:(float)arg1 ;
-(void)updatePresetState:(BOOL)arg0 ;
-(void)updateSDRLimits:(id)arg0 ;


@end


#endif
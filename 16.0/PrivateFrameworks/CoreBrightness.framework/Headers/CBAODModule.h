// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CBAODMODULE_H
#define CBAODMODULE_H

@class NSMutableArray, NSDictionary, NSString;
@protocol CBContainerModuleProtocol, CBHIDServiceProtocol, CBDisplayModeProtocol, CBBrightnessProxy, OS_dispatch_source;


#import "CBModule.h"
#import "CBAODTransitionController.h"
#import "CBAODThresholdModule.h"
#import "CBALSEvent.h"
#import "CBSensorOverrideFilter.h"

@interface CBAODModule : CBModule <CBContainerModuleProtocol, CBHIDServiceProtocol, CBDisplayModeProtocol>

 {
    NSMutableArray *_modules;
    id<CBBrightnessProxy> *_brtCtl;
    CBAODTransitionController *_transitionController;
    CBAODThresholdModule *_thresholdModule;
    CBALSEvent *_currentALSEvent;
    NSMutableArray *_alsServiceClients;
    BOOL _ABStateBackup;
    float _displayBrightnessBackup;
    int _ABLuxFilterBackup;
    NSDictionary *_backupState;
    NSObject<OS_dispatch_source> *_displayModeCompletionTimer;
    CBSensorOverrideFilter *_aabSensorOverrideFilter;
    BOOL _flipBookEnabled;
    NSInteger _currentDisplayMode;
    BOOL _suspendFeatureUpdates;
}


@property BOOL aodEnabled; // ivar: _aodEnabled
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)addHIDServiceClient:(struct __IOHIDServiceClient *)arg0 ;
-(BOOL)copyAndHandleEvent;
-(BOOL)copyAndHandleEventWithTransitionLength:(float)arg0 ;
-(BOOL)copyAndHandleEventWithTransitionLength:(float)arg0 forceUpdate:(BOOL)arg1 ;
-(BOOL)copyAndHandleEventWithTransitionParameters:(struct ? )arg0 ;
-(BOOL)handleAABSensorOverridePropertyHandler:(id)arg0 ;
-(BOOL)handleALSEvent:(id)arg0 transitionParameters:(struct ? )arg1 ;
-(BOOL)handleDisplayModeUpdate:(NSInteger)arg0 transitionLength:(float)arg1 ;
-(BOOL)handleDisplayModeUpdate:(id)arg0 ;
-(BOOL)handleDisplayNitsOverridePropertyHandler:(id)arg0 ;
-(BOOL)handleFlipBookStatePropertyHandler:(id)arg0 ;
-(BOOL)handleHIDEvent:(struct __IOHIDEvent *)arg0 from:(struct __IOHIDServiceClient *)arg1 ;
-(BOOL)handleHIDEvent:(struct __IOHIDEvent *)arg0 from:(struct __IOHIDServiceClient *)arg1 transitionLength:(float)arg2 forceUpdate:(BOOL)arg3 ;
-(BOOL)handleHIDEvent:(struct __IOHIDEvent *)arg0 from:(struct __IOHIDServiceClient *)arg1 transitionParameters:(struct ? )arg2 ;
-(BOOL)performUpdate;
-(BOOL)performUpdate:(float)arg0 ;
-(BOOL)performUpdate:(float)arg0 forceUpdate:(BOOL)arg1 ;
// -(BOOL)performUpdate:(float)arg0 forceUpdate:(BOOL)arg1 rampDoneCallback:(id)arg2 rampCanceledCallback:(unk)arg3  ;
-(BOOL)performUpdateWithTransitionParameters:(struct ? )arg0 ;
// -(BOOL)performUpdateWithTransitionParameters:(struct ? )arg0 rampDoneCallback:(id)arg1 rampCanceledCallback:(unk)arg2  ;
-(BOOL)removeHIDServiceClient:(struct __IOHIDServiceClient *)arg0 ;
-(BOOL)setALSServiceProperty:(*void)arg0 forKey:(struct __CFString *)arg1 ;
-(BOOL)setDisplayFactor:(float)arg0 transitionLength:(float)arg1 ;
-(BOOL)setModulesProperty:(id)arg0 forKey:(id)arg1 ;
-(BOOL)setProperty:(id)arg0 forKey:(id)arg1 ;
-(BOOL)updateAODState:(NSUInteger)arg0 transitionParameters:(struct ? )arg1 brightnessFactor:(float)arg2 forDisplayMode:(NSInteger)arg3 ;
-(float)getFloatValueFrom:(id)arg0 key:(id)arg1 ;
-(float)getFloatValueFrom:(id)arg0 key:(id)arg1 subkey:(id)arg2 ;
-(id)copyArrayFromPrefsForKey:(id)arg0 ;
-(id)copyModulesExtendedIdentifiers;
-(id)copyModulesIdentifiers;
-(id)copyModulesInfo:(BOOL)arg0 ;
-(id)copyModulesPropertyForKey:(id)arg0 ;
-(id)copyPropertyForKey:(id)arg0 ;
-(id)copyPropertyForKey:(id)arg0 withParameter:(id)arg1 ;
-(id)initWithCBBrtControl:(id)arg0 andQueue:(id)arg1 ;
-(id)stringForFlipbookMode:(NSInteger)arg0 ;
-(void)addModule:(id)arg0 ;
-(void)checkBootArgsConfiguration;
-(void)dealloc;
-(void)didCompleteTransitionToDisplayMode:(NSInteger)arg0 ;
-(void)enteringAODRoutineForDisplayMode:(NSInteger)arg0 transitionParameters:(struct ? )arg1 ;
-(void)enteringSuppressedAODRoutineWithTransitionParameters:(struct ? )arg0 ;
-(void)exitingAODRoutineForDisplayMode:(NSInteger)arg0 transitionParameters:(struct ? )arg1 ;
-(void)handleNotificationForKey:(id)arg0 withProperty:(id)arg1 ;
-(void)handleSystemDidWakeFromSleepPropertyHandler:(id)arg0 ;
-(void)loadAODCurveFromDefaults;
-(void)offAODRoutineForDisplayMode:(NSInteger)arg0 ;
-(void)onAODRoutineForDisplayMode:(NSInteger)arg0 ;
-(void)onSuppresedAODRoutine;
-(void)prepareForEnterToAODRoutine;
-(void)reevaluatePThresholdsForLux:(float)arg0 ;
-(void)releaseDisplayModeCompletionTimer;
-(void)scheduleDisplayModeCompletionTimerIn:(float)arg0 forDisplayMode:(NSInteger)arg1 ;
-(void)sendNotificationForKey:(id)arg0 andValue:(id)arg1 ;
-(void)start;
-(void)stop;
-(void)updateModulesAODState:(NSUInteger)arg0 ;
-(void)updateModulesAODState:(NSUInteger)arg0 transitionParameters:(struct ? )arg1 ;
-(void)updateModulesAODState:(NSUInteger)arg0 transitionParameters:(struct ? )arg1 context:(id)arg2 ;


@end


#endif
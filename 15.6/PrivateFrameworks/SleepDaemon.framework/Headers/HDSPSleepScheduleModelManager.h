// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSPSLEEPSCHEDULEMODELMANAGER_H
#define HDSPSLEEPSCHEDULEMODELMANAGER_H

@class NSString, HKSPObserverSet, HKSPSleepEventRecord, HKSPSleepSchedule, HKSPSleepScheduleModel, HKSPSleepSettings;
@protocol HDSPDiagnosticsProvider, HDSPSleepEventProvider, HDSPTimeChangeObserver, HDSPSource, HDSPEnvironmentAware, HDSPSleepStorageObserver, HDSPApplicationWorkspaceObserver, HDSPSleepEventDelegate;

#import <Foundation/Foundation.h>

#import "HDSPSleepScheduleModelChangeEvaluator.h"
#import "HDSPEnvironment.h"

@interface HDSPSleepScheduleModelManager : NSObject <HDSPDiagnosticsProvider, HDSPSleepEventProvider, HDSPTimeChangeObserver, HDSPSource, HDSPEnvironmentAware, HDSPSleepStorageObserver, HDSPApplicationWorkspaceObserver>



@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) HDSPSleepScheduleModelChangeEvaluator *changeEvaluator; // ivar: _changeEvaluator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL dontNotify;
@property (readonly, nonatomic) BOOL dontSync;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HKSPObserverSet *observers; // ivar: _observers
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (weak, nonatomic) NSObject<HDSPSleepEventDelegate> *sleepEventDelegate; // ivar: _sleepEventDelegate
@property (readonly, nonatomic) HKSPSleepEventRecord *sleepEventRecord; // ivar: _sleepEventRecord
@property (readonly, nonatomic) HKSPSleepSchedule *sleepSchedule; // ivar: _sleepSchedule
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) HKSPSleepSettings *sleepSettings; // ivar: _sleepSettings
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) os_unfair_lock_s storeLock; // ivar: _storeLock
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HDSPSource> *targetSource;


-(BOOL)_locked_canApplyChangesFrom:(id)arg0 to:(id)arg1 error:(*id)arg2 ;
-(BOOL)_locked_saveSleepEventRecord:(id)arg0 error:(*id)arg1 ;
-(BOOL)_locked_saveSleepEventRecord:(id)arg0 error:(*id)arg1 preNotifyBlock:(id)arg2 ;
-(BOOL)_locked_saveSleepSchedule:(id)arg0 error:(*id)arg1 ;
-(BOOL)_locked_saveSleepSettings:(id)arg0 error:(*id)arg1 ;
// -(BOOL)_locked_updateModelWithBlock:(id)arg0 persistBlock:(unk)arg1 error:(id)arg2  ;
-(BOOL)_shouldNotifyObserver:(id)arg0 ;
-(BOOL)_shouldTurnOffWatchSleepFeatures;
-(BOOL)removeSleepScheduleModelWithError:(*id)arg0 ;
-(BOOL)saveSleepEventRecord:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveSleepEventRecord:(id)arg0 error:(*id)arg1 preNotifyBlock:(id)arg2 ;
-(BOOL)saveSleepSchedule:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveSleepScheduleModel:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveSleepSettings:(id)arg0 error:(*id)arg1 ;
-(id)_earliestDateToScheduleEventsForDate:(id)arg0 ;
-(id)_loadSleepEventRecord:(*id)arg0 ;
-(id)_loadSleepSchedule:(*id)arg0 ;
-(id)_loadSleepScheduleModel:(*id)arg0 ;
-(id)_loadSleepSettings:(*id)arg0 ;
-(id)_locked_applyNecessaryChangesBeforeSaving:(id)arg0 ;
-(id)_locked_applyNecessaryChangesBeforeSavingSleepEventRecord:(id)arg0 ;
-(id)_locked_applyNecessaryChangesBeforeSavingSleepSchedule:(id)arg0 validationResult:(id)arg1 ;
-(id)_locked_loadSleepEventRecord:(*id)arg0 ;
-(id)_locked_loadSleepSchedule:(*id)arg0 ;
-(id)_locked_loadSleepScheduleModel:(*id)arg0 ;
-(id)_locked_loadSleepSettings:(*id)arg0 ;
-(id)_locked_removeSleepSchedule;
-(id)_locked_saveSleepEventRecord:(id)arg0 ;
-(id)_locked_saveSleepSchedule:(id)arg0 ;
-(id)_locked_saveSleepSettings:(id)arg0 ;
-(id)_locked_updateSleepEventRecord:(id)arg0 ;
-(id)_locked_updateSleepSchedule:(id)arg0 ;
-(id)_locked_updateSleepSettings:(id)arg0 ;
-(id)_locked_validateSleepSchedule:(id)arg0 generateValidSchedule:(BOOL)arg1 ;
-(id)diagnosticDescription;
-(id)diagnosticInfo;
-(id)initWithEnvironment:(id)arg0 ;
-(id)upcomingEventsDueAfterDate:(id)arg0 ;
-(void)_locked_applyNecessaryEventRecordChangesBeforeSavingSleepSchedule:(id)arg0 validationResult:(id)arg1 ;
-(void)_locked_applyNecessarySleepSettingsChangesBeforeSavingSleepEventRecord:(id)arg0 ;
-(void)_locked_notifyObserversForSleepEventRecordChange:(id)arg0 ;
-(void)_locked_notifyObserversForSleepScheduleChange:(id)arg0 ;
-(void)_locked_notifyObserversForSleepScheduleModelChange:(id)arg0 ;
-(void)_locked_notifyObserversForSleepSettingsChange:(id)arg0 ;
-(void)_turnOffWatchSleepFeatures;
-(void)_withLock:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)environmentDidBecomeReady:(id)arg0 ;
-(void)environmentWillBecomeReady:(id)arg0 ;
-(void)notifyObserversForSleepEventRecordChange:(id)arg0 ;
-(void)notifyObserversForSleepScheduleChange:(id)arg0 ;
-(void)notifyObserversForSleepSettingsChange:(id)arg0 ;
-(void)observedApplicationDidUninstall;
-(void)removeObserver:(id)arg0 ;
-(void)significantTimeChangeDetected:(id)arg0 ;
-(void)sleepStorageDidChangeExternally:(id)arg0 ;


@end


#endif
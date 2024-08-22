// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSPSLEEPSCHEDULEMODELCHANGEEVALUATOR_H
#define HDSPSLEEPSCHEDULEMODELCHANGEEVALUATOR_H

@class NSString, HKSPSleepEventRecord, HKSPSleepSchedule, HKSPSleepSettings;
@protocol HDSPEnvironmentAware;

#import <Foundation/Foundation.h>

#import "HDSPEnvironment.h"

@interface HDSPSleepScheduleModelChangeEvaluator : NSObject <HDSPEnvironmentAware>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) HKSPSleepEventRecord *lastRecord; // ivar: _lastRecord
@property (copy, nonatomic) HKSPSleepSchedule *lastSchedule; // ivar: _lastSchedule
@property (copy, nonatomic) HKSPSleepSettings *lastSettings; // ivar: _lastSettings
@property (readonly) Class superclass;


+(NSUInteger)_evaluateChangesFromObject:(id)arg0 toObject:(id)arg1 outChangeSet:(*id)arg2 ;
-(id)evaluateSleepRecordAdd:(id)arg0 ;
-(id)evaluateSleepRecordUpdate:(id)arg0 ;
-(id)evaluateSleepScheduleAdd:(id)arg0 ;
-(id)evaluateSleepScheduleModelChange:(id)arg0 ;
-(id)evaluateSleepScheduleRemove;
-(id)evaluateSleepScheduleUpdate:(id)arg0 ;
-(id)evaluateSleepSettingsAdd:(id)arg0 ;
-(id)evaluateSleepSettingsUpdate:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 ;
-(void)_loadPersistedModel;
-(void)_persistModel:(id)arg0 ;
-(void)_persistRecord:(id)arg0 ;
-(void)_persistSchedule:(id)arg0 ;
-(void)_persistSettings:(id)arg0 ;
-(void)_restorePersistedModelWithScheduleData:(id)arg0 settingsData:(id)arg1 recordData:(id)arg2 ;
-(void)environmentDidBecomeReady:(id)arg0 ;


@end


#endif